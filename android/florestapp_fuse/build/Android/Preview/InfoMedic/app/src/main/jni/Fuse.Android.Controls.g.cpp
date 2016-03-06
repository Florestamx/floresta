// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.android.app.Activity.h>
#include <Android.android.content.Context.h>
#include <Android.android.content.ContextWrapper.h>
#include <Android.android.content.res.AssetManager.h>
#include <Android.android.content.res.ColorStateList.h>
#include <Android.android.content.res.Resources.h>
#include <Android.android.graphics.Bitmap.h>
#include <Android.android.graphics.BitmapFactory.h>
#include <Android.android.graphics.drawable.Drawable.h>
#include <Android.android.graphics.drawable.LayerDrawable.h>
#include <Android.android.graphics.drawable.ShapeDrawable.h>
#include <Android.android.graphics.drawable.ShapeDrawableDLRShaderFactory.h>
#include <Android.android.graphics.drawable.shapes.ArcShape.h>
#include <Android.android.graphics.drawable.shapes.RectShape.h>
#include <Android.android.graphics.drawable.shapes.RoundRectShape.h>
#include <Android.android.graphics.drawable.shapes.Shape.h>
#include <Android.android.graphics.LinearGradient.h>
#include <Android.android.graphics.Matrix.h>
#include <Android.android.graphics.Paint.h>
#include <Android.android.graphics.PaintDLRStyle.h>
#include <Android.android.graphics.PorterDuffDLRMode.h>
#include <Android.android.graphics.RectF.h>
#include <Android.android.graphics.Shader.h>
#include <Android.android.graphics.ShaderDLRTileMode.h>
#include <Android.android.graphics.Typeface.h>
#include <Android.android.os.BuildDLRVERSION.h>
#include <Android.android.os.IBinder.h>
#include <Android.android.text.Editable.h>
#include <Android.android.text.Layout.h>
#include <Android.android.text.StaticLayout.h>
#include <Android.android.text.TextUtilsDLRTruncateAt.h>
#include <Android.android.util.TypedValue.h>
#include <Android.android.view.Gravity.h>
#include <Android.android.view.inputmethod.InputMethodManager.h>
#include <Android.android.view.KeyEvent.h>
#include <Android.android.view.MotionEvent.h>
#include <Android.android.view.View.h>
#include <Android.android.view.ViewDLRMeasureSpec.h>
#include <Android.android.view.ViewGroup.h>
#include <Android.android.view.ViewGroupDLRLayoutParams.h>
#include <Android.android.webkit.WebChromeClient.h>
#include <Android.android.webkit.WebSettings.h>
#include <Android.android.webkit.WebView.h>
#include <Android.android.webkit.WebViewClient.h>
#include <Android.android.widget.AbsSeekBar.h>
#include <Android.android.widget.Button.h>
#include <Android.android.widget.CompoundButton.h>
#include <Android.android.widget.EditText.h>
#include <Android.android.widget.FrameLayoutDLRLayoutParams.h>
#include <Android.android.widget.ImageView.h>
#include <Android.android.widget.ImageViewDLRScaleType.h>
#include <Android.android.widget.ProgressBar.h>
#include <Android.android.widget.RelativeLayout.h>
#include <Android.android.widget.RelativeLayoutDLRLayoutParams.h>
#include <Android.android.widget.SeekBar.h>
#include <Android.android.widget.Switch.h>
#include <Android.android.widget.TextView.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujlong.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Primitives.ujvalue.h>
#include <Android.Base.Versions.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Fallbacks.Android_android_text_Editable.h>
#include <Android.Fallbacks.Android_android_widget_CompoundButton.h>
#include <Android.Fallbacks.Android_java_lang_CharSequence.h>
#include <Android.java.io.InputStream.h>
#include <Android.java.lang.CharSequence.h>
#include <Android.java.lang.Class.h>
#include <Android.java.lang.Object.h>
#include <Android.java.lang.reflect.AccessibleObject.h>
#include <Android.java.lang.reflect.Field.h>
#include <Android.java.lang.Runnable.h>
#include <Android.java.lang.String.h>
#include <Android.java.lang.Thread.h>
#include <Android.java.net.URL.h>
#include <Android.java.util.Observable.h>
#include <Android.java.util.Observer.h>
#include <Android.Runtime.FloatArray.h>
#include <Android.Runtime.IntArray.h>
#include <Android.Runtime.ObjectArray-1.h>
#include <Android.Runtime.UnoHelper.h>
#include <Fuse.Android.Controls.AndroidExtensions.h>
#include <Fuse.Android.Controls.AndroidSeekBar.h>
#include <Fuse.Android.Controls.BitmapFactory.h>
#include <Fuse.Android.Controls.Button.h>
#include <Fuse.Android.Controls.CheckBox.h>
#include <Fuse.Android.Controls.Circle.h>
#include <Fuse.Android.Controls.CompoundButton.h>
#include <Fuse.Android.Controls.CompoundButton.Listener.h>
#include <Fuse.Android.Controls.Control-1.h>
#include <Fuse.Android.Controls.EditorActionArgs.h>
#include <Fuse.Android.Controls.EditorActionHandler.h>
#include <Fuse.Android.Controls.EditorActionListener.h>
#include <Fuse.Android.Controls.Element.h>
#include <Fuse.Android.Controls.FocusManager.h>
#include <Fuse.Android.Controls.Image.h>
#include <Fuse.Android.Controls.Image.ImageLoader.BitmapLoader.h>
#include <Fuse.Android.Controls.Image.ImageLoader.h>
#include <Fuse.Android.Controls.JsResultHandler.h>
#include <Fuse.Android.Controls.MapView.h>
#include <Fuse.Android.Controls.PlainTextEdit.h>
#include <Fuse.Android.Controls.ProgressChangedHandler.h>
#include <Fuse.Android.Controls.ProgressChangedListener.h>
#include <Fuse.Android.Controls.RadioButton.h>
#include <Fuse.Android.Controls.Rectangle.h>
#include <Fuse.Android.Controls.SeekBar.h>
#include <Fuse.Android.Controls.ShaderFactory.h>
#include <Fuse.Android.Controls.Shape-1.h>
#include <Fuse.Android.Controls.Switch.h>
#include <Fuse.Android.Controls.TextChangedHandler.h>
#include <Fuse.Android.Controls.TextChangedListener.h>
#include <Fuse.Android.Controls.TextEdit.h>
#include <Fuse.Android.Controls.TextView.h>
#include <Fuse.Android.Controls.TextViewBase-1.h>
#include <Fuse.Android.Controls.ToggleButton.h>
#include <Fuse.Android.Controls.WebChromeClient.h>
#include <Fuse.Android.Controls.WebView.h>
#include <Fuse.Android.Controls.WebViewClient.h>
#include <Fuse.Android.FocusChangedHandler.h>
#include <Fuse.Android.FocusChangedListener.h>
#include <Fuse.Android.Helpers.h>
#include <Fuse.Android.NativeViews.LeafNativeView.h>
#include <Fuse.Android.NativeViews.NativeView.h>
#include <Fuse.Android.TextControlLayout.h>
#include <Fuse.Android.TypefaceCache.h>
#include <Fuse.Behavior.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.RangeControl.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextInputActionStyle.h>
#include <Fuse.Controls.ToggleControl.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.GradientStop.h>
#include <Fuse.Drawing.LinearGradient.h>
#include <Fuse.Drawing.ResampleMode.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.StretchDirection.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.Elements.StretchSizing.h>
#include <Fuse.Elements.TextAlignment.h>
#include <Fuse.Elements.TextWrapping.h>
#include <Fuse.FastMatrix.h>
#include <Fuse.Font.h>
#include <Fuse.HitTestContext.h>
#include <Fuse.Input.Focus.h>
#include <Fuse.Input.FocusGainedArgs.h>
#include <Fuse.Input.FocusGainedHandler.h>
#include <Fuse.Input.FocusLostArgs.h>
#include <Fuse.Input.FocusLostHandler.h>
#include <Fuse.Input.Pointer.h>
#include <Fuse.Internal.SizingContainer.h>
#include <Fuse.InvalidateLayoutReason.h>
#include <Fuse.IViewport.h>
#include <Fuse.LayoutParams.h>
#include <Fuse.Node.h>
#include <Fuse.NodeBounds.h>
#include <Fuse.NodeEvent-2.h>
#include <Fuse.Resources.FileImageSource.h>
#include <Fuse.Resources.HttpImageSource.h>
#include <Fuse.Resources.ImageSource.h>
#include <Fuse.StyleProperty-2.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Uno.Action.h>
#include <Uno.Action-1.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.DebugMessageType.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Func-2.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.IO.Directory.h>
#include <Uno.IO.File.h>
#include <Uno.IO.UserDirectory.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.Platform.TextInputHint.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.ValueChangedArgs-1.h>
#include <Uno.UX.ValueChangedHandler-1.h>
//~
JNFUN(jboolean,Binding_Fuse_Android_Controls_AndroidSeekBar__onTouchEvent24551,jlong ujPtr, jobject arg0, jlong arg1) {
    INITCALLBACK(uPtr,::g::Android::android::widget::AbsSeekBar*);
    JARG_TO_UNO(arg1,::g::Android::android::view::MotionEvent*,((::g::Android::android::view::MotionEvent*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::android::view::MotionEvent_typeof(), false, true, true)));
    JTRY
    return (jboolean)uPtr->onTouchEvent(tmparg1);
    JCATCH
}
JNFUN(jboolean,Binding_Fuse_Android_Controls_EditorActionListener__onEditorAction26520,jlong ujPtr, jobject arg0, jint arg1, jobject arg2, jlong arg3, jlong arg4, jlong arg5) {
    INITCALLBACK(uPtr,uObject*);
    JARG_TO_UNO(arg3,::g::Android::android::widget::TextView*,((::g::Android::android::widget::TextView*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::android::widget::TextView_typeof(), false, true, true)));
    JARG_TO_UNO(arg5,::g::Android::android::view::KeyEvent*,((::g::Android::android::view::KeyEvent*)::g::Android::Base::Wrappers::JWrapper::New2(arg2, (uType*)::g::Android::android::view::KeyEvent_typeof(), false, true, true)));
    JTRY
    return (jboolean)::g::Android::android::widget::TextViewDLROnEditorActionListener::onEditorAction(uInterface(uPtr, ::g::Android::android::widget::TextViewDLROnEditorActionListener_typeof()), tmparg3, ((int)arg1), tmparg5);
    JCATCH
}
JNFUN(jboolean,Binding_Fuse_Android_Controls_WebViewClient__shouldOverrideUrlLoading24355,jlong ujPtr, jobject arg0, jobject arg1, jlong arg2, jlong arg3) {
    INITCALLBACK(uPtr,::g::Android::android::webkit::WebViewClient*);
    JARG_TO_UNO(arg2,::g::Android::android::webkit::WebView*,((::g::Android::android::webkit::WebView*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::android::webkit::WebView_typeof(), false, true, true)));
    JARG_TO_UNO(arg3,::g::Android::java::lang::String*,((::g::Android::java::lang::String*)::g::Android::Base::Wrappers::JWrapper::New2(arg1, (uType*)::g::Android::java::lang::String_typeof(), false, true, true)));
    JTRY
    return (jboolean)uPtr->shouldOverrideUrlLoading(tmparg2, tmparg3);
    JCATCH
}
JNFUN(jobject,Binding_Fuse_Android_Controls_ShaderFactory__resize6361,jlong ujPtr, jint arg0, jint arg1, jlong arg2, jlong arg3) {
    INITCALLBACK(uPtr,::g::Android::android::graphics::drawable::ShapeDrawableDLRShaderFactory*);
    JTRY
    UNOCALLANDRETURN(uPtr->resize(((int)arg0), ((int)arg1)));
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_Controls_CompoundButton_Listener__onCheckedChanged24924,jlong ujPtr, jobject arg0, jboolean arg1, jlong arg2, jlong arg3) {
    INITCALLBACK(uPtr,uObject*);
    JARG_TO_UNO(arg2,::g::Android::android::widget::CompoundButton*,((::g::Android::android::widget::CompoundButton*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::Fallbacks::Android_android_widget_CompoundButton_typeof(), true, true, true)));
    JTRY
    ::g::Android::android::widget::CompoundButtonDLROnCheckedChangeListener::onCheckedChanged(uInterface(uPtr, ::g::Android::android::widget::CompoundButtonDLROnCheckedChangeListener_typeof()), tmparg2, ((bool)arg1));
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_Controls_Image_ImageLoader_BitmapLoader__run31342,jlong ujPtr) {
    INITCALLBACK(uPtr,uObject*);
    JTRY
    ::g::Android::java::lang::Runnable::run(uInterface(uPtr, ::g::Android::java::lang::Runnable_typeof()));
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_Controls_JsResultHandler__update38392,jlong ujPtr, jobject arg0, jobject arg1, jlong arg2, jlong arg3) {
    INITCALLBACK(uPtr,uObject*);
    JARG_TO_UNO(arg2,::g::Android::java::util::Observable*,((::g::Android::java::util::Observable*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::java::util::Observable_typeof(), false, true, true)));
    JARG_TO_UNO(arg3,::g::Android::java::lang::Object*,((::g::Android::java::lang::Object*)::g::Android::Base::Wrappers::JWrapper::New2(arg1, (uType*)::g::Android::java::lang::Object_typeof(), false, true, true)));
    JTRY
    ::g::Android::java::util::Observer::update(uInterface(uPtr, ::g::Android::java::util::Observer_typeof()), tmparg2, tmparg3);
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_Controls_ProgressChangedListener__onProgressChanged26181,jlong ujPtr, jobject arg0, jint arg1, jboolean arg2, jlong arg3, jlong arg4, jlong arg5) {
    INITCALLBACK(uPtr,uObject*);
    JARG_TO_UNO(arg3,::g::Android::android::widget::SeekBar*,((::g::Android::android::widget::SeekBar*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::android::widget::SeekBar_typeof(), false, true, true)));
    JTRY
    ::g::Android::android::widget::SeekBarDLROnSeekBarChangeListener::onProgressChanged(uInterface(uPtr, ::g::Android::android::widget::SeekBarDLROnSeekBarChangeListener_typeof()), tmparg3, ((int)arg1), ((bool)arg2));
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_Controls_ProgressChangedListener__onStartTrackingTouch26182,jlong ujPtr, jobject arg0, jlong arg1) {
    INITCALLBACK(uPtr,uObject*);
    JARG_TO_UNO(arg1,::g::Android::android::widget::SeekBar*,((::g::Android::android::widget::SeekBar*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::android::widget::SeekBar_typeof(), false, true, true)));
    JTRY
    ::g::Android::android::widget::SeekBarDLROnSeekBarChangeListener::onStartTrackingTouch(uInterface(uPtr, ::g::Android::android::widget::SeekBarDLROnSeekBarChangeListener_typeof()), tmparg1);
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_Controls_ProgressChangedListener__onStopTrackingTouch26183,jlong ujPtr, jobject arg0, jlong arg1) {
    INITCALLBACK(uPtr,uObject*);
    JARG_TO_UNO(arg1,::g::Android::android::widget::SeekBar*,((::g::Android::android::widget::SeekBar*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::android::widget::SeekBar_typeof(), false, true, true)));
    JTRY
    ::g::Android::android::widget::SeekBarDLROnSeekBarChangeListener::onStopTrackingTouch(uInterface(uPtr, ::g::Android::android::widget::SeekBarDLROnSeekBarChangeListener_typeof()), tmparg1);
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_Controls_TextChangedListener__afterTextChanged20153,jlong ujPtr, jobject arg0, jlong arg1) {
    INITCALLBACK(uPtr,uObject*);
    JARG_TO_UNO(arg1,uObject*,((uObject*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::Fallbacks::Android_android_text_Editable_typeof(), true, true, true)));
    JTRY
    ::g::Android::android::text::TextWatcher::afterTextChanged(uInterface(uPtr, ::g::Android::android::text::TextWatcher_typeof()), tmparg1);
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_Controls_TextChangedListener__beforeTextChanged20151,jlong ujPtr, jobject arg0, jint arg1, jint arg2, jint arg3, jlong arg4, jlong arg5, jlong arg6, jlong arg7) {
    INITCALLBACK(uPtr,uObject*);
    JARG_TO_UNO(arg4,uObject*,((uObject*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::Fallbacks::Android_java_lang_CharSequence_typeof(), true, true, true)));
    JTRY
    ::g::Android::android::text::TextWatcher::beforeTextChanged(uInterface(uPtr, ::g::Android::android::text::TextWatcher_typeof()), tmparg4, ((int)arg1), ((int)arg2), ((int)arg3));
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_Controls_TextChangedListener__onTextChanged20152,jlong ujPtr, jobject arg0, jint arg1, jint arg2, jint arg3, jlong arg4, jlong arg5, jlong arg6, jlong arg7) {
    INITCALLBACK(uPtr,uObject*);
    JARG_TO_UNO(arg4,uObject*,((uObject*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::Fallbacks::Android_java_lang_CharSequence_typeof(), true, true, true)));
    JTRY
    ::g::Android::android::text::TextWatcher::onTextChanged(uInterface(uPtr, ::g::Android::android::text::TextWatcher_typeof()), tmparg4, ((int)arg1), ((int)arg2), ((int)arg3));
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_Controls_WebChromeClient__onProgressChanged24000,jlong ujPtr, jobject arg0, jint arg1, jlong arg2, jlong arg3) {
    INITCALLBACK(uPtr,::g::Android::android::webkit::WebChromeClient*);
    JARG_TO_UNO(arg2,::g::Android::android::webkit::WebView*,((::g::Android::android::webkit::WebView*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::android::webkit::WebView_typeof(), false, true, true)));
    JTRY
    uPtr->onProgressChanged(tmparg2, ((int)arg1));
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_Controls_WebViewClient__onPageFinished24357,jlong ujPtr, jobject arg0, jobject arg1, jlong arg2, jlong arg3) {
    INITCALLBACK(uPtr,::g::Android::android::webkit::WebViewClient*);
    JARG_TO_UNO(arg2,::g::Android::android::webkit::WebView*,((::g::Android::android::webkit::WebView*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::android::webkit::WebView_typeof(), false, true, true)));
    JARG_TO_UNO(arg3,::g::Android::java::lang::String*,((::g::Android::java::lang::String*)::g::Android::Base::Wrappers::JWrapper::New2(arg1, (uType*)::g::Android::java::lang::String_typeof(), false, true, true)));
    JTRY
    uPtr->onPageFinished(tmparg2, tmparg3);
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_Controls_WebViewClient__onPageStarted24356,jlong ujPtr, jobject arg0, jobject arg1, jobject arg2, jlong arg3, jlong arg4, jlong arg5) {
    INITCALLBACK(uPtr,::g::Android::android::webkit::WebViewClient*);
    JARG_TO_UNO(arg3,::g::Android::android::webkit::WebView*,((::g::Android::android::webkit::WebView*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::android::webkit::WebView_typeof(), false, true, true)));
    JARG_TO_UNO(arg4,::g::Android::java::lang::String*,((::g::Android::java::lang::String*)::g::Android::Base::Wrappers::JWrapper::New2(arg1, (uType*)::g::Android::java::lang::String_typeof(), false, true, true)));
    JARG_TO_UNO(arg5,::g::Android::android::graphics::Bitmap*,((::g::Android::android::graphics::Bitmap*)::g::Android::Base::Wrappers::JWrapper::New2(arg2, (uType*)::g::Android::android::graphics::Bitmap_typeof(), false, true, true)));
    JTRY
    uPtr->onPageStarted(tmparg3, tmparg4, tmparg5);
    JCATCH
}
static uString* STRINGS[33];
static uType* TYPES[122];

namespace g{
namespace Fuse{
namespace Android{
namespace Controls{

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\Controls\$.uno(510)
// ----------------------------------------------------------------------

// internal static extern class AndroidExtensions :510
// {
uClassType* AndroidExtensions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Android.Controls.AndroidExtensions", options);
    ::TYPES[0] = ::g::Android::android::graphics::drawable::shapes::Shape_typeof();
    ::TYPES[1] = ::g::Android::android::graphics::drawable::ShapeDrawableDLRShaderFactory_typeof();
    ::TYPES[2] = ::g::Fuse::Drawing::Brush_typeof();
    ::TYPES[3] = ::g::Android::android::graphics::drawable::Drawable_typeof();
    return type;
}

// public static Android.android.graphics.drawable.Drawable ToDrawable(Fuse.Drawing.LinearGradient linearGradient) :512
void AndroidExtensions__ToDrawable_fn(::g::Fuse::Drawing::LinearGradient* linearGradient, ::g::Android::android::graphics::drawable::Drawable** __retval)
{
    *__retval = AndroidExtensions::ToDrawable(linearGradient);
}

// public static Android.android.graphics.drawable.Drawable ToDrawable(Fuse.Drawing.LinearGradient linearGradient) [static] :512
::g::Android::android::graphics::drawable::Drawable* AndroidExtensions::ToDrawable(::g::Fuse::Drawing::LinearGradient* linearGradient)
{
    uStackFrame __("Fuse.Android.Controls.AndroidExtensions", "ToDrawable(Fuse.Drawing.LinearGradient)");
    ::g::Android::android::graphics::drawable::ShapeDrawable* shapeDrawable = ::g::Android::android::graphics::drawable::ShapeDrawable::New5();
    shapeDrawable->setShape(::g::Android::android::graphics::drawable::shapes::RectShape::New5());
    shapeDrawable->setShaderFactory(::g::Fuse::Android::Controls::ShaderFactory::New5(linearGradient));
    return shapeDrawable;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\Controls\$.uno(1264)
// -----------------------------------------------------------------------

// internal sealed extern class AndroidSeekBar :1264
// {
::g::Android::android::widget::ProgressBar_type* AndroidSeekBar_typeof()
{
    static uSStrong< ::g::Android::android::widget::ProgressBar_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(AndroidSeekBar);
    options.TypeSize = sizeof(::g::Android::android::widget::ProgressBar_type);
    type = (::g::Android::android::widget::ProgressBar_type*)uClassType::New("Fuse.Android.Controls.AndroidSeekBar", options);
    type->SetBase(::g::Android::android::widget::SeekBar_typeof());
    type->fp_onTouchEvent = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::MotionEvent*, bool*))AndroidSeekBar__onTouchEvent_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::STRINGS[0] = uString::Const("com.Bindings.Binding_Fuse_Android_Controls_AndroidSeekBar");
    ::STRINGS[1] = uString::Const("<init>");
    ::STRINGS[2] = uString::Const("(JLandroid/content/Context;)V");
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[5] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[6] = ::g::Android::Base::Primitives::ujclass_typeof();
    ::TYPES[7] = ::g::Uno::Func1_typeof()->MakeType(::g::Android::android::view::MotionEvent_typeof(), ::g::Uno::Bool_typeof());
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::android::widget::ProgressBar_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::android::widget::ProgressBar_type, interface1));
    type->SetFields(5,
        ::g::Uno::Func1_typeof()->MakeType(::g::Android::android::view::MotionEvent_typeof(), ::g::Uno::Bool_typeof()), offsetof(::g::Fuse::Android::Controls::AndroidSeekBar, _touchCallback), 0,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Fuse::Android::Controls::AndroidSeekBar::_javaClass6_, uFieldFlagsStatic);
    return type;
}

// public AndroidSeekBar(Android.android.content.Context arg0, Uno.Func<Android.android.view.MotionEvent, bool> touchCallback) :1268
void AndroidSeekBar__ctor_21_fn(AndroidSeekBar* __this, ::g::Android::android::content::Context* arg0, uDelegate* touchCallback)
{
    __this->ctor_21(arg0, touchCallback);
}

// public AndroidSeekBar New(Android.android.content.Context arg0, Uno.Func<Android.android.view.MotionEvent, bool> touchCallback) :1268
void AndroidSeekBar__New17_fn(::g::Android::android::content::Context* arg0, uDelegate* touchCallback, AndroidSeekBar** __retval)
{
    *__retval = AndroidSeekBar::New17(arg0, touchCallback);
}

// public override sealed bool onTouchEvent(Android.android.view.MotionEvent motionEvent) :1272
void AndroidSeekBar__onTouchEvent_fn(AndroidSeekBar* __this, ::g::Android::android::view::MotionEvent* motionEvent, bool* __retval)
{
    uStackFrame __("Fuse.Android.Controls.AndroidSeekBar", "onTouchEvent(Android.android.view.MotionEvent)");
    bool ret2;
    bool ret3;
    ::g::Android::android::widget::AbsSeekBar__onTouchEvent_fn(__this, motionEvent, &ret2);
    return *__retval = (uPtr(__this->_touchCallback)->Invoke(&ret3, 1, motionEvent), ret3), void();
}

jclass AndroidSeekBar::_javaClass6_;

// public AndroidSeekBar(Android.android.content.Context arg0, Uno.Func<Android.android.view.MotionEvent, bool> touchCallback) [instance] :1268
void AndroidSeekBar::ctor_21(::g::Android::android::content::Context* arg0, uDelegate* touchCallback)
{
    uStackFrame __("Fuse.Android.Controls.AndroidSeekBar", ".ctor(Android.android.content.Context,Uno.Func<Android.android.view.MotionEvent, bool>)");

    if (!_subclassed)
    {
        _subclassed = true;
        _javaClassName = ::STRINGS[0/*"com.Binding...*/];
    }

    ctor_20(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);

    if (::g::Android::Base::Primitives::ujclass::op_Equality(AndroidSeekBar::_javaClass6(), ::g::Android::Base::Primitives::ujclass::Null()))
    {
        AndroidSeekBar::_javaClass6() = ::g::Android::Base::JNI::LocalToGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[0/*"com.Binding...*/], false));
        JniHelper jni;
        BEGIN_REG_MTD(1);
        REG_MTD(0,"__n_onTouchEvent","(JLandroid/view/MotionEvent;J)Z",Binding_Fuse_Android_Controls_AndroidSeekBar__onTouchEvent24551);
        COMMIT_REG_MTD(AndroidSeekBar::_javaClass6());
    }

    jclass tmpCls = ::g::Android::Base::JNI::LoadClass3(_javaClassName, false);
    jmethodID mtd = ::g::Android::Base::JNI::GetMethodID(tmpCls, ::STRINGS[1/*"<init>"*/], ::STRINGS[2/*"(JLandroid/...*/]);
    jobject tmp = ::g::Android::Base::JNI::NewObject2(tmpCls, mtd, ::g::Android::Base::Primitives::ujvalue::op_Implicit7((jlong)this->__obj_weak), ::g::Android::Base::Primitives::ujvalue::op_Implicit8(uPtr(arg0)->_GetJavaObject()));
    ::g::Android::Base::JNI::CheckException();
    _javaObject = ::g::Android::Base::JNI::LocalToGlobalRef1(tmp);
    ::g::Android::Base::JNI::DeleteLocalRef(tmpCls);
    _touchCallback = touchCallback;
}

// public AndroidSeekBar New(Android.android.content.Context arg0, Uno.Func<Android.android.view.MotionEvent, bool> touchCallback) [static] :1268
AndroidSeekBar* AndroidSeekBar::New17(::g::Android::android::content::Context* arg0, uDelegate* touchCallback)
{
    AndroidSeekBar* obj1 = (AndroidSeekBar*)uNew(AndroidSeekBar_typeof());
    obj1->ctor_21(arg0, touchCallback);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\Controls\$.uno(737)
// ----------------------------------------------------------------------

// internal static extern class BitmapFactory :737
// {
// static BitmapFactory() :737
static void BitmapFactory__cctor__fn(uType* __type)
{
    BitmapFactory::_bitmapCache_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[8/*Uno.Collections.Dictionary<string, Android.android.graphics.Bitmap>*/]));
}

uClassType* BitmapFactory_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Android.Controls.BitmapFactory", options);
    type->fp_cctor_ = BitmapFactory__cctor__fn;
    ::STRINGS[3] = uString::Const("/tempImage");
    ::TYPES[8] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Android::android::graphics::Bitmap_typeof());
    ::TYPES[9] = ::g::Uno::UX::BundleFileSource_typeof();
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[10] = ::g::Uno::UX::FileSource_typeof();
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Android::android::graphics::Bitmap_typeof()), (uintptr_t)&::g::Fuse::Android::Controls::BitmapFactory::_bitmapCache_, uFieldFlagsStatic);
    return type;
}

// public static Android.android.graphics.Bitmap GetBitmap(Uno.UX.FileSource file) :746
void BitmapFactory__GetBitmap_fn(::g::Uno::UX::FileSource* file, ::g::Android::android::graphics::Bitmap** __retval)
{
    *__retval = BitmapFactory::GetBitmap(file);
}

// private static Android.android.graphics.Bitmap GetBitmapFromBundleFile(Uno.UX.BundleFileSource bundleFile) :776
void BitmapFactory__GetBitmapFromBundleFile_fn(::g::Uno::UX::BundleFileSource* bundleFile, ::g::Android::android::graphics::Bitmap** __retval)
{
    *__retval = BitmapFactory::GetBitmapFromBundleFile(bundleFile);
}

// private static Android.android.graphics.Bitmap GetBitmapFromFileSource(Uno.UX.FileSource file) :756
void BitmapFactory__GetBitmapFromFileSource_fn(::g::Uno::UX::FileSource* file, ::g::Android::android::graphics::Bitmap** __retval)
{
    *__retval = BitmapFactory::GetBitmapFromFileSource(file);
}

uSStrong< ::g::Uno::Collections::Dictionary*> BitmapFactory::_bitmapCache_;

// public static Android.android.graphics.Bitmap GetBitmap(Uno.UX.FileSource file) [static] :746
::g::Android::android::graphics::Bitmap* BitmapFactory::GetBitmap(::g::Uno::UX::FileSource* file)
{
    uStackFrame __("Fuse.Android.Controls.BitmapFactory", "GetBitmap(Uno.UX.FileSource)");
    BitmapFactory_typeof()->Init();

    if (uIs(file, ::TYPES[9/*Uno.UX.BundleFileSource*/]))
        return BitmapFactory::GetBitmapFromBundleFile(uCast< ::g::Uno::UX::BundleFileSource*>(file, ::TYPES[9/*Uno.UX.BundleFileSource*/]));

    return BitmapFactory::GetBitmapFromFileSource(file);
}

// private static Android.android.graphics.Bitmap GetBitmapFromBundleFile(Uno.UX.BundleFileSource bundleFile) [static] :776
::g::Android::android::graphics::Bitmap* BitmapFactory::GetBitmapFromBundleFile(::g::Uno::UX::BundleFileSource* bundleFile)
{
    uStackFrame __("Fuse.Android.Controls.BitmapFactory", "GetBitmapFromBundleFile(Uno.UX.BundleFileSource)");
    BitmapFactory_typeof()->Init();
    bool ret1;
    ::g::Android::android::graphics::Bitmap* ret2;

    if (!(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(BitmapFactory::_bitmapCache()), uPtr(bundleFile)->Name, &ret1), ret1))
    {
        ::g::Android::android::content::res::AssetManager* assetManager = uPtr(::g::Android::android::app::Activity::GetAppActivity())->getAssets();
        ::g::Android::java::io::InputStream* stream = uPtr(assetManager)->open(::g::Android::java::lang::String::op_Implicit1(uPtr(bundleFile)->Name));
        ::g::Android::android::graphics::Bitmap* bitmap = ::g::Android::android::graphics::BitmapFactory::decodeStream(stream);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(BitmapFactory::_bitmapCache()), bundleFile->Name, bitmap);
        uPtr(stream)->close();
        return bitmap;
    }

    return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(BitmapFactory::_bitmapCache()), uPtr(bundleFile)->Name, &ret2), ret2);
}

// private static Android.android.graphics.Bitmap GetBitmapFromFileSource(Uno.UX.FileSource file) [static] :756
::g::Android::android::graphics::Bitmap* BitmapFactory::GetBitmapFromFileSource(::g::Uno::UX::FileSource* file)
{
    uStackFrame __("Fuse.Android.Controls.BitmapFactory", "GetBitmapFromFileSource(Uno.UX.FileSource)");
    BitmapFactory_typeof()->Init();
    bool ret3;
    ::g::Android::android::graphics::Bitmap* ret4;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(BitmapFactory::_bitmapCache()), uPtr(file)->Name, &ret3), ret3))
        return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(BitmapFactory::_bitmapCache()), uPtr(file)->Name, &ret4), ret4);

    uArray* data = uPtr(file)->ReadAllBytes();
    uString* path = ::g::Uno::String::op_Addition2(::g::Uno::IO::Directory::GetUserDirectory(1), ::STRINGS[3/*"/tempImage"*/]);
    ::g::Uno::IO::File::WriteAllBytes(path, data);
    ::g::Android::android::graphics::Bitmap* bitmap = ::g::Android::android::graphics::BitmapFactory::decodeFile(::g::Android::java::lang::String::op_Implicit1(path));
    ::g::Uno::IO::File::Delete(path);
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(BitmapFactory::_bitmapCache()), file->Name, bitmap);
    return bitmap;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\Controls\$.uno(800)
// ----------------------------------------------------------------------

// private sealed class Image.ImageLoader.BitmapLoader :800
// {
Image__ImageLoader__BitmapLoader_type* Image__ImageLoader__BitmapLoader_typeof()
{
    static uSStrong<Image__ImageLoader__BitmapLoader_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(Image__ImageLoader__BitmapLoader);
    options.TypeSize = sizeof(Image__ImageLoader__BitmapLoader_type);
    type = (Image__ImageLoader__BitmapLoader_type*)uClassType::New("Fuse.Android.Controls.Image.ImageLoader.BitmapLoader", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_run = (void(*)(uObject*))Image__ImageLoader__BitmapLoader__AndroidjavalangRunnablerun_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::STRINGS[4] = uString::Const("com.Bindings.Binding_Fuse_Android_Controls_Image_ImageLoader_BitmapLoader");
    ::STRINGS[1] = uString::Const("<init>");
    ::STRINGS[5] = uString::Const("(J)V");
    ::STRINGS[6] = uString::Const("Loading image from url failed:");
    ::STRINGS[7] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Android\\0.24.7\\Controls\\$.uno");
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[5] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[6] = ::g::Android::Base::Primitives::ujclass_typeof();
    ::TYPES[11] = ::g::Android::java::io::InputStream_typeof();
    ::TYPES[12] = ::g::Uno::Exception_typeof();
    ::TYPES[13] = ::g::Uno::Action_typeof();
    ::TYPES[14] = ::g::Uno::Delegate_typeof();
    ::TYPES[15] = ::g::Uno::Action1_typeof()->MakeType(::g::Android::android::graphics::Bitmap_typeof());
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(Image__ImageLoader__BitmapLoader_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(Image__ImageLoader__BitmapLoader_type, interface1),
        ::g::Android::java::lang::Runnable_typeof(), offsetof(Image__ImageLoader__BitmapLoader_type, interface2));
    type->SetFields(5,
        ::g::Android::android::graphics::Bitmap_typeof(), offsetof(::g::Fuse::Android::Controls::Image__ImageLoader__BitmapLoader, _bitmap), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Android::android::graphics::Bitmap_typeof()), offsetof(::g::Fuse::Android::Controls::Image__ImageLoader__BitmapLoader, _doneCallback), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Android::Controls::Image__ImageLoader__BitmapLoader, _url), 0,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Fuse::Android::Controls::Image__ImageLoader__BitmapLoader::_javaClass2_, uFieldFlagsStatic);
    return type;
}

// public BitmapLoader(string url, Uno.Action<Android.android.graphics.Bitmap> doneCallback) :807
void Image__ImageLoader__BitmapLoader__ctor_5_fn(Image__ImageLoader__BitmapLoader* __this, uString* url, uDelegate* doneCallback)
{
    __this->ctor_5(url, doneCallback);
}

// private void Android.java.lang.Runnable.run() :814
void Image__ImageLoader__BitmapLoader__AndroidjavalangRunnablerun_fn(Image__ImageLoader__BitmapLoader* __this)
{
    uStackFrame __("Fuse.Android.Controls.Image.ImageLoader.BitmapLoader", "Android.java.lang.Runnable.run()");

    try
    {
        ::g::Android::java::io::InputStream* stream = uCast< ::g::Android::java::io::InputStream*>(::g::Android::java::net::URL::New6(::g::Android::java::lang::String::op_Implicit1(__this->_url))->getContent(), ::TYPES[11/*Android.java.io.InputStream*/]);
        __this->_bitmap = ::g::Android::android::graphics::BitmapFactory::decodeStream(stream);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Uno::Diagnostics::Debug::Log5(::g::Uno::String::op_Addition2(::STRINGS[6/*"Loading ima...*/], uPtr(e)->Message()), 1, ::STRINGS[7/*"C:\\Program...*/], 823);
    }

    uPtr(::g::Android::android::app::Activity::GetAppActivity())->runOnUiThread(::g::Android::Runtime::UnoHelper::RunnableFromAction(uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)Image__ImageLoader__BitmapLoader__Done_fn, __this)));
}

// private void Done() :828
void Image__ImageLoader__BitmapLoader__Done_fn(Image__ImageLoader__BitmapLoader* __this)
{
    __this->Done();
}

// public BitmapLoader New(string url, Uno.Action<Android.android.graphics.Bitmap> doneCallback) :807
void Image__ImageLoader__BitmapLoader__New5_fn(uString* url, uDelegate* doneCallback, Image__ImageLoader__BitmapLoader** __retval)
{
    *__retval = Image__ImageLoader__BitmapLoader::New5(url, doneCallback);
}

jclass Image__ImageLoader__BitmapLoader::_javaClass2_;

// public BitmapLoader(string url, Uno.Action<Android.android.graphics.Bitmap> doneCallback) [instance] :807
void Image__ImageLoader__BitmapLoader::ctor_5(uString* url, uDelegate* doneCallback)
{
    uStackFrame __("Fuse.Android.Controls.Image.ImageLoader.BitmapLoader", ".ctor(string,Uno.Action<Android.android.graphics.Bitmap>)");

    if (!_subclassed)
    {
        _subclassed = true;
        _javaClassName = ::STRINGS[4/*"com.Binding...*/];
    }

    ctor_4(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);

    if (::g::Android::Base::Primitives::ujclass::op_Equality(Image__ImageLoader__BitmapLoader::_javaClass2(), ::g::Android::Base::Primitives::ujclass::Null()))
    {
        Image__ImageLoader__BitmapLoader::_javaClass2() = ::g::Android::Base::JNI::LocalToGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[4/*"com.Binding...*/], false));
        JniHelper jni;
        BEGIN_REG_MTD(1);
        REG_MTD(0,"__n_run","(J)V",Binding_Fuse_Android_Controls_Image_ImageLoader_BitmapLoader__run31342);
        COMMIT_REG_MTD(Image__ImageLoader__BitmapLoader::_javaClass2());
    }

    jclass tmpCls = ::g::Android::Base::JNI::LoadClass3(_javaClassName, false);
    jmethodID mtd = ::g::Android::Base::JNI::GetMethodID(tmpCls, ::STRINGS[1/*"<init>"*/], ::STRINGS[5/*"(J)V"*/]);
    jobject tmp = ::g::Android::Base::JNI::NewObject1(tmpCls, mtd, ::g::Android::Base::Primitives::ujvalue::op_Implicit7((jlong)this->__obj_weak));
    ::g::Android::Base::JNI::CheckException();
    _javaObject = ::g::Android::Base::JNI::LocalToGlobalRef1(tmp);
    ::g::Android::Base::JNI::DeleteLocalRef(tmpCls);
    _url = url;
    _doneCallback = doneCallback;
}

// private void Done() [instance] :828
void Image__ImageLoader__BitmapLoader::Done()
{
    uStackFrame __("Fuse.Android.Controls.Image.ImageLoader.BitmapLoader", "Done()");

    if (::g::Uno::Delegate::op_Inequality(_doneCallback, NULL))
        uPtr(_doneCallback)->InvokeVoid(_bitmap);
}

// public BitmapLoader New(string url, Uno.Action<Android.android.graphics.Bitmap> doneCallback) [static] :807
Image__ImageLoader__BitmapLoader* Image__ImageLoader__BitmapLoader::New5(uString* url, uDelegate* doneCallback)
{
    Image__ImageLoader__BitmapLoader* obj1 = (Image__ImageLoader__BitmapLoader*)uNew(Image__ImageLoader__BitmapLoader_typeof());
    obj1->ctor_5(url, doneCallback);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\Controls\$.uno(39)
// ---------------------------------------------------------------------

// public sealed extern class Button :39
// {
// static Button() :39
static void Button__cctor_1_fn(uType* __type)
{
    ::g::Fuse::StyleProperty1* ret2;
    Button::TextColorProperty_ = (::g::Fuse::StyleProperty1__New1_fn(::TYPES[16/*Fuse.StyleProperty<Fuse.Android.Controls.Button, float4>*/], uCRef(::g::Uno::Float4__New2(1.0f, 1.0f, 1.0f, 1.0f)), uDelegate::New(::TYPES[17/*Uno.Action<Fuse.Android.Controls.Button>*/], (void*)Button__OnButtonPropertyChanged_fn), &ret2), ret2);
}

::g::Fuse::Android::Controls::Control_type* Button_typeof()
{
    static uSStrong< ::g::Fuse::Android::Controls::Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 61;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Button);
    options.TypeSize = sizeof(::g::Fuse::Android::Controls::Control_type);
    type = (::g::Fuse::Android::Controls::Control_type*)uClassType::New("Fuse.Android.Controls.Button", options);
    type->SetBase(::g::Fuse::Android::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::Button_typeof()));
    type->fp_ctor_ = (void*)Button__New1_fn;
    type->fp_cctor_ = Button__cctor_1_fn;
    type->fp_Attach = (void(*)(::g::Fuse::Android::Controls::Control*))Button__Attach_fn;
    type->fp_CreateInternal = (void(*)(::g::Fuse::Android::Controls::Element*, ::g::Android::android::view::View**))Button__CreateInternal_fn;
    type->fp_Detach = (void(*)(::g::Fuse::Android::Controls::Control*))Button__Detach_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::STRINGS[8] = uString::Const("");
    ::TYPES[16] = ::g::Fuse::StyleProperty1_typeof()->MakeType(Button_typeof(), ::g::Uno::Float4_typeof());
    ::TYPES[17] = ::g::Uno::Action1_typeof()->MakeType(Button_typeof());
    ::TYPES[18] = ::g::Fuse::Controls::Button_typeof();
    ::TYPES[19] = ::g::Fuse::Android::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::Button_typeof());
    ::TYPES[20] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[21] = ::g::Android::java::lang::Object_typeof();
    ::TYPES[22] = ::g::Android::android::content::Context_typeof();
    ::TYPES[23] = ::g::Android::android::view::View_typeof();
    ::TYPES[24] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[25] = ::g::Android::java::lang::CharSequence_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Android::Controls::Control_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Android::Controls::Control_type, interface1));
    type->SetFields(59,
        ::g::Android::android::widget::Button_typeof(), offsetof(::g::Fuse::Android::Controls::Button, _buttonView), 0,
        ::g::Fuse::StyleProperty1_typeof()->MakeType(Button_typeof(), ::g::Uno::Float4_typeof()), (uintptr_t)&::g::Fuse::Android::Controls::Button::TextColorProperty_, uFieldFlagsStatic);
    type->Reflection.SetFields(1,
        new uField("TextColorProperty", 60));
    type->Reflection.SetFunctions(3,
        new uFunction(".ctor", NULL, (void*)Button__New1_fn, 0, true, Button_typeof(), 0),
        new uFunction("get_TextColor", NULL, (void*)Button__get_TextColor_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_TextColor", NULL, (void*)Button__set_TextColor_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()));
    return type;
}

// public generated Button() :39
void Button__ctor_3_fn(Button* __this)
{
    __this->ctor_3();
}

// protected override sealed void Attach() :81
void Button__Attach_fn(Button* __this)
{
    uStackFrame __("Fuse.Android.Controls.Button", "Attach()");
    uPtr((::g::Fuse::Controls::Button*)__this->SemanticControl())->add_TextChanged(uDelegate::New(::TYPES[20/*Uno.UX.ValueChangedHandler<string>*/], (void*)Button__OnTextChanged_fn, __this));
    Button::OnButtonPropertyChanged(__this);
    __this->SetText(uPtr((::g::Fuse::Controls::Button*)__this->SemanticControl())->Text());
}

// internal override sealed Android.android.view.View CreateInternal() :68
void Button__CreateInternal_fn(Button* __this, ::g::Android::android::view::View** __retval)
{
    uStackFrame __("Fuse.Android.Controls.Button", "CreateInternal()");

    if (::g::Android::java::lang::Object::op_Equality1(__this->_buttonView, NULL))
    {
        __this->_buttonView = ::g::Android::android::widget::Button::New13(::g::Android::android::app::Activity::GetAppActivity());
        uPtr(__this->_buttonView)->setHorizontallyScrolling(false);
        uPtr(__this->_buttonView)->setEllipsize(NULL);
    }

    return *__retval = __this->_buttonView, void();
}

// protected override sealed void Detach() :88
void Button__Detach_fn(Button* __this)
{
    uStackFrame __("Fuse.Android.Controls.Button", "Detach()");
    uPtr((::g::Fuse::Controls::Button*)__this->SemanticControl())->remove_TextChanged(uDelegate::New(::TYPES[20/*Uno.UX.ValueChangedHandler<string>*/], (void*)Button__OnTextChanged_fn, __this));
}

// public generated Button New() :39
void Button__New1_fn(Button** __retval)
{
    *__retval = Button::New1();
}

// protected static void OnButtonPropertyChanged(Fuse.Android.Controls.Button t) :59
void Button__OnButtonPropertyChanged_fn(Button* t)
{
    Button::OnButtonPropertyChanged(t);
}

// protected void OnTextChanged(object sender, Uno.UX.ValueChangedArgs<string> args) :122
void Button__OnTextChanged_fn(Button* __this, uObject* sender, ::g::Uno::UX::ValueChangedArgs* args)
{
    __this->OnTextChanged(sender, args);
}

// private void SetText(string value) :127
void Button__SetText_fn(Button* __this, uString* value)
{
    __this->SetText(value);
}

// public float4 get_TextColor() :43
void Button__get_TextColor_fn(Button* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->TextColor();
}

// public void set_TextColor(float4 value) :44
void Button__set_TextColor_fn(Button* __this, ::g::Uno::Float4* value)
{
    __this->TextColor(*value);
}

uSStrong< ::g::Fuse::StyleProperty1*> Button::TextColorProperty_;

// public generated Button() [instance] :39
void Button::ctor_3()
{
    uStackFrame __("Fuse.Android.Controls.Button", ".ctor()");
    ctor_2();
}

// protected void OnTextChanged(object sender, Uno.UX.ValueChangedArgs<string> args) [instance] :122
void Button::OnTextChanged(uObject* sender, ::g::Uno::UX::ValueChangedArgs* args)
{
    uStackFrame __("Fuse.Android.Controls.Button", "OnTextChanged(object,Uno.UX.ValueChangedArgs<string>)");
    uString* ret3;
    SetText((::g::Uno::UX::ValueChangedArgs__get_Value_fn(uPtr(args), &ret3), ret3));
}

// private void SetText(string value) [instance] :127
void Button::SetText(uString* value)
{
    uStackFrame __("Fuse.Android.Controls.Button", "SetText(string)");
    uObject* charSequence = (uObject*)::g::Android::java::lang::String::op_Implicit1((value != NULL) ? value : ::STRINGS[8/*""*/]);
    uPtr(_buttonView)->setText(charSequence);
}

// public float4 get_TextColor() [instance] :43
::g::Uno::Float4 Button::TextColor()
{
    uStackFrame __("Fuse.Android.Controls.Button", "get_TextColor()");
    ::g::Uno::Float4 ret4;
    return (::g::Fuse::StyleProperty1__Get_fn(uPtr(Button::TextColorProperty()), this, &ret4), ret4);
}

// public void set_TextColor(float4 value) [instance] :44
void Button::TextColor(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.Android.Controls.Button", "set_TextColor(float4)");
    bool ret5;
    ::g::Fuse::StyleProperty1__Set_fn(uPtr(Button::TextColorProperty()), this, uCRef(value), &ret5);
}

// public generated Button New() [static] :39
Button* Button::New1()
{
    Button* obj1 = (Button*)uNew(Button_typeof());
    obj1->ctor_3();
    return obj1;
}

// protected static void OnButtonPropertyChanged(Fuse.Android.Controls.Button t) [static] :59
void Button::OnButtonPropertyChanged(Button* t)
{
    uStackFrame __("Fuse.Android.Controls.Button", "OnButtonPropertyChanged(Fuse.Android.Controls.Button)");
    Button_typeof()->Init();
    uPtr(t)->CreateInternal();
    uPtr(t->_buttonView)->setTextColor1(::g::Fuse::Android::Helpers::EncodeColor(t->TextColor()));
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\Controls\$.uno(280)
// ----------------------------------------------------------------------

// public sealed extern class CheckBox :280
// {
::g::Fuse::Android::Controls::CompoundButton_type* CheckBox_typeof()
{
    static uSStrong< ::g::Fuse::Android::Controls::CompoundButton_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 61;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(CheckBox);
    options.TypeSize = sizeof(::g::Fuse::Android::Controls::CompoundButton_type);
    type = (::g::Fuse::Android::Controls::CompoundButton_type*)uClassType::New("Fuse.Android.Controls.CheckBox", options);
    type->SetBase(::g::Fuse::Android::Controls::CompoundButton_typeof());
    type->fp_ctor_ = (void*)CheckBox__New1_fn;
    type->fp_CreateCompoundButton = (void(*)(::g::Fuse::Android::Controls::CompoundButton*, ::g::Android::android::widget::CompoundButton**))CheckBox__CreateCompoundButton_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::TYPES[26] = ::g::Android::android::widget::CompoundButton_typeof();
    ::TYPES[22] = ::g::Android::android::content::Context_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Android::Controls::CompoundButton_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Android::Controls::CompoundButton_type, interface1));
    type->SetFields(61);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)CheckBox__New1_fn, 0, true, CheckBox_typeof(), 0));
    return type;
}

// public generated CheckBox() :280
void CheckBox__ctor_4_fn(CheckBox* __this)
{
    __this->ctor_4();
}

// internal override sealed Android.android.widget.CompoundButton CreateCompoundButton() :282
void CheckBox__CreateCompoundButton_fn(CheckBox* __this, ::g::Android::android::widget::CompoundButton** __retval)
{
    uStackFrame __("Fuse.Android.Controls.CheckBox", "CreateCompoundButton()");
    return *__retval = ::g::Android::android::widget::Switch::New17(::g::Android::android::app::Activity::GetAppActivity()), void();
}

// public generated CheckBox New() :280
void CheckBox__New1_fn(CheckBox** __retval)
{
    *__retval = CheckBox::New1();
}

// public generated CheckBox() [instance] :280
void CheckBox::ctor_4()
{
    uStackFrame __("Fuse.Android.Controls.CheckBox", ".ctor()");
    ctor_3();
}

// public generated CheckBox New() [static] :280
CheckBox* CheckBox::New1()
{
    CheckBox* obj1 = (CheckBox*)uNew(CheckBox_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\Controls\$.uno(148)
// ----------------------------------------------------------------------

// public sealed extern class Circle :148
// {
::g::Fuse::Android::Controls::Shape_type* Circle_typeof()
{
    static uSStrong< ::g::Fuse::Android::Controls::Shape_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 61;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Circle);
    options.TypeSize = sizeof(::g::Fuse::Android::Controls::Shape_type);
    type = (::g::Fuse::Android::Controls::Shape_type*)uClassType::New("Fuse.Android.Controls.Circle", options);
    type->SetBase(::g::Fuse::Android::Controls::Shape_typeof()->MakeType(::g::Fuse::Controls::Circle_typeof()));
    type->fp_ctor_ = (void*)Circle__New1_fn;
    type->fp_AdjustLayout = (void(*)(::g::Fuse::Android::Controls::Element*, ::g::Uno::Float2*, ::g::Uno::Float2*, ::g::Uno::Float4*))Circle__AdjustLayout_fn;
    type->fp_UpdateShapeDrawable = (void(*)(::g::Fuse::Android::Controls::Shape*, ::g::Android::android::graphics::drawable::ShapeDrawable*))Circle__UpdateShapeDrawable_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::TYPES[27] = ::g::Uno::Float2_typeof();
    ::TYPES[28] = ::g::Fuse::Controls::Circle_typeof();
    ::TYPES[29] = ::g::Fuse::Android::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::Circle_typeof());
    ::TYPES[0] = ::g::Android::android::graphics::drawable::shapes::Shape_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Android::Controls::Shape_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Android::Controls::Shape_type, interface1));
    type->SetFields(61);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Circle__New1_fn, 0, true, Circle_typeof(), 0));
    return type;
}

// public generated Circle() :148
void Circle__ctor_4_fn(Circle* __this)
{
    __this->ctor_4();
}

// protected override sealed float4 AdjustLayout(float2 position, float2 size) :164
void Circle__AdjustLayout_fn(Circle* __this, ::g::Uno::Float2* position, ::g::Uno::Float2* size, ::g::Uno::Float4* __retval)
{
    uStackFrame __("Fuse.Android.Controls.Circle", "AdjustLayout(float2,float2)");
    ::g::Uno::Float2 size_ = *size;
    ::g::Uno::Float2 position_ = *position;
    float mn = ::g::Uno::Math::Min1(size_.X, size_.Y);
    ::g::Uno::Float2 np = ::g::Uno::Float2__op_Subtraction1(::g::Uno::Float2__op_Addition2(position_, ::g::Uno::Float2__op_Division1(size_, 2.0f)), mn / 2.0f);
    ::g::Uno::Float2 ns = ::g::Uno::Float2__New1(mn);
    return *__retval = ::g::Uno::Float4__New7(np, ns), void();
}

// public generated Circle New() :148
void Circle__New1_fn(Circle** __retval)
{
    *__retval = Circle::New1();
}

// protected override sealed void UpdateShapeDrawable(Android.android.graphics.drawable.ShapeDrawable shape) :150
void Circle__UpdateShapeDrawable_fn(Circle* __this, ::g::Android::android::graphics::drawable::ShapeDrawable* shape)
{
    uStackFrame __("Fuse.Android.Controls.Circle", "UpdateShapeDrawable(Android.android.graphics.drawable.ShapeDrawable)");
    bool angle = uPtr((::g::Fuse::Controls::Circle*)__this->SemanticControl())->UseAngle();
    float start = angle ? uPtr((::g::Fuse::Controls::Circle*)__this->SemanticControl())->StartAngleDegrees() : 0.0f;
    float end = angle ? uPtr((::g::Fuse::Controls::Circle*)__this->SemanticControl())->EffectiveEndAngleDegrees() : 360.0f;
    ::g::Android::android::graphics::drawable::shapes::ArcShape* arc = ::g::Android::android::graphics::drawable::shapes::ArcShape::New8(start, end - start);
    uPtr(shape)->setShape(arc);
}

// public generated Circle() [instance] :148
void Circle::ctor_4()
{
    uStackFrame __("Fuse.Android.Controls.Circle", ".ctor()");
    ctor_3();
}

// public generated Circle New() [static] :148
Circle* Circle::New1()
{
    Circle* obj1 = (Circle*)uNew(Circle_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\Controls\$.uno(198)
// ----------------------------------------------------------------------

// public abstract extern class CompoundButton :198
// {
CompoundButton_type* CompoundButton_typeof()
{
    static uSStrong<CompoundButton_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 61;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(CompoundButton);
    options.TypeSize = sizeof(CompoundButton_type);
    type = (CompoundButton_type*)uClassType::New("Fuse.Android.Controls.CompoundButton", options);
    type->SetBase(::g::Fuse::Android::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::ToggleControl_typeof()));
    type->fp_Attach = (void(*)(::g::Fuse::Android::Controls::Control*))CompoundButton__Attach_fn;
    type->fp_CreateInternal = (void(*)(::g::Fuse::Android::Controls::Element*, ::g::Android::android::view::View**))CompoundButton__CreateInternal_fn;
    type->fp_Detach = (void(*)(::g::Fuse::Android::Controls::Control*))CompoundButton__Detach_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::TYPES[30] = ::g::Fuse::Controls::ToggleControl_typeof();
    ::TYPES[31] = ::g::Fuse::Android::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::ToggleControl_typeof());
    ::TYPES[32] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Bool_typeof());
    ::TYPES[23] = ::g::Android::android::view::View_typeof();
    ::TYPES[21] = ::g::Android::java::lang::Object_typeof();
    ::TYPES[33] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Bool_typeof());
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(CompoundButton_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(CompoundButton_type, interface1));
    type->SetFields(59,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Android::Controls::CompoundButton, _settingChecked), 0,
        ::g::Android::android::widget::CompoundButton_typeof(), offsetof(::g::Fuse::Android::Controls::CompoundButton, _switch), 0);
    return type;
}

// protected generated CompoundButton() :198
void CompoundButton__ctor_3_fn(CompoundButton* __this)
{
    __this->ctor_3();
}

// protected override sealed void Attach() :231
void CompoundButton__Attach_fn(CompoundButton* __this)
{
    uStackFrame __("Fuse.Android.Controls.CompoundButton", "Attach()");
    uPtr((::g::Fuse::Controls::ToggleControl*)__this->SemanticControl())->add_ValueChanged(uDelegate::New(::TYPES[32/*Uno.UX.ValueChangedHandler<bool>*/], (void*)CompoundButton__OnValueChanged_fn, __this));
    __this->InitValue();
}

// internal override sealed Android.android.view.View CreateInternal() :222
void CompoundButton__CreateInternal_fn(CompoundButton* __this, ::g::Android::android::view::View** __retval)
{
    uStackFrame __("Fuse.Android.Controls.CompoundButton", "CreateInternal()");
    __this->_switch = __this->CreateCompoundButton();
    CompoundButton__Listener::New5(__this);
    return *__retval = __this->_switch, void();
}

// protected override sealed void Detach() :258
void CompoundButton__Detach_fn(CompoundButton* __this)
{
    uStackFrame __("Fuse.Android.Controls.CompoundButton", "Detach()");
    uPtr((::g::Fuse::Controls::ToggleControl*)__this->SemanticControl())->remove_ValueChanged(uDelegate::New(::TYPES[32/*Uno.UX.ValueChangedHandler<bool>*/], (void*)CompoundButton__OnValueChanged_fn, __this));
}

// private void InitValue() :252
void CompoundButton__InitValue_fn(CompoundButton* __this)
{
    __this->InitValue();
}

// private void OnValueChanged(object sender, Uno.UX.ValueChangedArgs<bool> args) :263
void CompoundButton__OnValueChanged_fn(CompoundButton* __this, uObject* sender, ::g::Uno::UX::ValueChangedArgs* args)
{
    __this->OnValueChanged(sender, args);
}

// private void SetChecked(bool val) :238
void CompoundButton__SetChecked_fn(CompoundButton* __this, bool* val)
{
    __this->SetChecked(*val);
}

// protected generated CompoundButton() [instance] :198
void CompoundButton::ctor_3()
{
    uStackFrame __("Fuse.Android.Controls.CompoundButton", ".ctor()");
    ctor_2();
}

// private void InitValue() [instance] :252
void CompoundButton::InitValue()
{
    uStackFrame __("Fuse.Android.Controls.CompoundButton", "InitValue()");

    if (::g::Android::java::lang::Object::op_Inequality1(_switch, NULL))
        SetChecked(uPtr((::g::Fuse::Controls::ToggleControl*)SemanticControl())->Value());
}

// private void OnValueChanged(object sender, Uno.UX.ValueChangedArgs<bool> args) [instance] :263
void CompoundButton::OnValueChanged(uObject* sender, ::g::Uno::UX::ValueChangedArgs* args)
{
    uStackFrame __("Fuse.Android.Controls.CompoundButton", "OnValueChanged(object,Uno.UX.ValueChangedArgs<bool>)");
    bool ret1;

    if (uPtr(args)->Origin() == this)
        return;

    SetChecked((::g::Uno::UX::ValueChangedArgs__get_Value_fn(uPtr(args), &ret1), ret1));
}

// private void SetChecked(bool val) [instance] :238
void CompoundButton::SetChecked(bool val)
{
    uStackFrame __("Fuse.Android.Controls.CompoundButton", "SetChecked(bool)");

    {
        const auto __finally_fun = [&]()
        {
            _settingChecked = false;
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        _settingChecked = true;
        uPtr(_switch)->setChecked(val);
        _settingChecked = false;
    }
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\Controls\$.uno(318)
// ----------------------------------------------------------------------

// public abstract extern class Control<T> :318
// {
Control_type* Control_typeof()
{
    static uSStrong<Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 59;
    options.GenericCount = 1;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Control);
    options.TypeSize = sizeof(Control_type);
    type = (Control_type*)uClassType::New("Fuse.Android.Controls.Control`1", options);
    type->SetBase(::g::Fuse::Android::Controls::Element_typeof());
    type->fp_Create = (void(*)(::g::Fuse::Android::Controls::Element*, ::g::Android::android::view::View**))Control__Create_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Control__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Control__OnUnrooted_fn;
    type->fp_get_ShowKeyboard = Control__get_ShowKeyboard_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::STRINGS[9] = uString::Const(" must be rooted in the subtree of a ");
    ::TYPES[21] = ::g::Android::java::lang::Object_typeof();
    ::TYPES[34] = ::g::Fuse::Android::FocusChangedHandler_typeof();
    ::TYPES[35] = ::g::Fuse::Node_typeof();
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[36] = ::g::Fuse::Android::Controls::FocusManager_typeof();
    ::TYPES[37] = ::g::Android::android::view::inputmethod::InputMethodManager_typeof();
    ::TYPES[22] = ::g::Android::android::content::Context_typeof();
    ::TYPES[38] = uObject_typeof();
    ::TYPES[39] = ::g::Fuse::Input::Focus_typeof();
    ::TYPES[40] = ::g::Fuse::Input::FocusGainedHandler_typeof();
    ::TYPES[41] = ::g::Fuse::Input::FocusLostHandler_typeof();
    ::TYPES[13] = ::g::Uno::Action_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(Control_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(Control_type, interface1));
    type->SetFields(57,
        type->T(0), offsetof(::g::Fuse::Android::Controls::Control, _semanticControl), 0,
        ::g::Android::android::view::View_typeof(), offsetof(::g::Fuse::Android::Controls::Control, _view), 0);
    return type;
}

// protected generated Control() :318
void Control__ctor_2_fn(Control* __this)
{
    __this->ctor_2();
}

// internal override sealed Android.android.view.View Create() :360
void Control__Create_fn(Control* __this, ::g::Android::android::view::View** __retval)
{
    uStackFrame __("Fuse.Android.Controls.Control`1", "Create()");

    if (::g::Android::java::lang::Object::op_Inequality1(__this->_view, NULL))
        return *__retval = __this->_view, void();

    __this->_view = __this->CreateInternal();
    ::g::Fuse::Android::FocusChangedListener::AddHandler(__this->_view, uDelegate::New(::TYPES[34/*Fuse.Android.FocusChangedHandler*/], (void*)Control__OnNativeFocusChanged_fn, __this));
    return *__retval = __this->_view, void();
}

// private T FindSemanticControl() :320
void Control__FindSemanticControl_fn(Control* __this, ::g::Fuse::Controls::Control** __retval)
{
    *__retval = __this->FindSemanticControl();
}

// private void OnGotFocus(object s, object a) :394
void Control__OnGotFocus_fn(Control* __this, uObject* s, uObject* a)
{
    __this->OnGotFocus(s, a);
}

// private void OnLostFocus(object s, object a) :400
void Control__OnLostFocus_fn(Control* __this, uObject* s, uObject* a)
{
    __this->OnLostFocus(s, a);
}

// protected void OnNativeFocusChanged(object s, bool hasFocus) :373
void Control__OnNativeFocusChanged_fn(Control* __this, uObject* s, bool* hasFocus)
{
    __this->OnNativeFocusChanged(s, *hasFocus);
}

// protected override sealed void OnRooted() :334
void Control__OnRooted_fn(Control* __this)
{
    uType* __types[] = {
        __this->__type->GetBase(Control_typeof())->T(0),
    };
    uStackFrame __("Fuse.Android.Controls.Control`1", "OnRooted()");
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->_semanticControl = __this->FindSemanticControl();

    if (__this->_semanticControl == NULL)
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition(__this, ::STRINGS[9/*" must be ro...*/]), __types[0])));

    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Gained()), __this, uDelegate::New(::TYPES[40/*Fuse.Input.FocusGainedHandler*/], (void*)Control__OnGotFocus_fn, __this));
    ::g::Fuse::NodeEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), __this, uDelegate::New(::TYPES[41/*Fuse.Input.FocusLostHandler*/], (void*)Control__OnLostFocus_fn, __this));
    __this->Attach();
}

// protected override sealed void OnUnrooted() :347
void Control__OnUnrooted_fn(Control* __this)
{
    uStackFrame __("Fuse.Android.Controls.Control`1", "OnUnrooted()");
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Focus::Gained()), __this, uDelegate::New(::TYPES[40/*Fuse.Input.FocusGainedHandler*/], (void*)Control__OnGotFocus_fn, __this));
    ::g::Fuse::NodeEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), __this, uDelegate::New(::TYPES[41/*Fuse.Input.FocusLostHandler*/], (void*)Control__OnLostFocus_fn, __this));
    __this->Detach();
    __this->_semanticControl = NULL;
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private void ScheduleFocusLoss() :406
void Control__ScheduleFocusLoss_fn(Control* __this)
{
    __this->ScheduleFocusLoss();
}

// protected T get_SemanticControl() :332
void Control__get_SemanticControl_fn(Control* __this, ::g::Fuse::Controls::Control** __retval)
{
    *__retval = __this->SemanticControl();
}

// protected virtual bool get_ShowKeyboard() :371
void Control__get_ShowKeyboard_fn(Control* __this, bool* __retval)
{
    uStackFrame __("Fuse.Android.Controls.Control`1", "get_ShowKeyboard()");
    return *__retval = false, void();
}

// protected generated Control() [instance] :318
void Control::ctor_2()
{
    uStackFrame __("Fuse.Android.Controls.Control`1", ".ctor()");
    ctor_1();
}

// private T FindSemanticControl() [instance] :320
::g::Fuse::Controls::Control* Control::FindSemanticControl()
{
    uType* __types[] = {
        __type->GetBase(Control_typeof())->T(0),
    };
    uStackFrame __("Fuse.Android.Controls.Control`1", "FindSemanticControl()");
    ::g::Fuse::Node* p = this;

    while (p != NULL)
    {
        if (uIs(p, __types[0]))
            return uCast< ::g::Fuse::Controls::Control*>(p, __types[0]);

        p = uPtr(p)->Parent();
    }

    return NULL;
}

// private void OnGotFocus(object s, object a) [instance] :394
void Control::OnGotFocus(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Android.Controls.Control`1", "OnGotFocus(object,object)");

    if (::g::Android::java::lang::Object::op_Inequality1(_view, NULL))
        uPtr(_view)->requestFocus();
}

// private void OnLostFocus(object s, object a) [instance] :400
void Control::OnLostFocus(uObject* s, uObject* a)
{
    uStackFrame __("Fuse.Android.Controls.Control`1", "OnLostFocus(object,object)");

    if (::g::Android::java::lang::Object::op_Inequality1(_view, NULL) && uPtr(_view)->hasFocus())
        ScheduleFocusLoss();
}

// protected void OnNativeFocusChanged(object s, bool hasFocus) [instance] :373
void Control::OnNativeFocusChanged(uObject* s, bool hasFocus)
{
    uStackFrame __("Fuse.Android.Controls.Control`1", "OnNativeFocusChanged(object,bool)");

    if (!hasFocus)
    {
        ::g::Fuse::Input::Focus::ReleaseFrom(this);
        ScheduleFocusLoss();
    }
    else
    {
        ::g::Fuse::Input::Focus::Obtained(this);

        if (ShowKeyboard())
        {
            uPtr(::g::Fuse::Android::Controls::FocusManager::Singleton())->HideKeyboardContext = NULL;
            ::g::Android::android::view::inputmethod::InputMethodManager* imm = uCast< ::g::Android::android::view::inputmethod::InputMethodManager*>(uPtr(uPtr(_view)->getContext())->getSystemService(::g::Android::android::content::Context::INPUT_METHOD_SERVICE()), ::TYPES[37/*Android.android.view.inputmethod.InputMethodManager*/]);
            uPtr(imm)->showSoftInput(_view, ::g::Android::android::view::inputmethod::InputMethodManager::SHOW_IMPLICIT());
        }
    }
}

// private void ScheduleFocusLoss() [instance] :406
void Control::ScheduleFocusLoss()
{
    uStackFrame __("Fuse.Android.Controls.Control`1", "ScheduleFocusLoss()");
    uPtr(::g::Fuse::Android::Controls::FocusManager::Singleton())->LoseFocus = _view;
    uPtr(::g::Fuse::Android::Controls::FocusManager::Singleton())->HideKeyboardContext = uPtr(_view)->getContext();
    uPtr(::g::Fuse::Android::Controls::FocusManager::Singleton())->HideKeyboardWindowToken = uPtr(_view)->getWindowToken();
    ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)::g::Fuse::Android::Controls::FocusManager__CompleteFocusLoss_fn, uPtr(::g::Fuse::Android::Controls::FocusManager::Singleton())), -1);
}

// protected T get_SemanticControl() [instance] :332
::g::Fuse::Controls::Control* Control::SemanticControl()
{
    uStackFrame __("Fuse.Android.Controls.Control`1", "get_SemanticControl()");
    return _semanticControl;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\Controls\$.uno(530)
// ----------------------------------------------------------------------

// internal sealed extern class EditorActionArgs :530
// {
uType* EditorActionArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(EditorActionArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Android.Controls.EditorActionArgs", options);
    type->SetBase(::g::Uno::EventArgs_typeof());
    type->fp_ctor_ = (void*)EditorActionArgs__New2_fn;
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Android::Controls::EditorActionArgs, ActionCode), 0);
    return type;
}

// public generated EditorActionArgs() :530
void EditorActionArgs__ctor_1_fn(EditorActionArgs* __this)
{
    __this->ctor_1();
}

// public generated EditorActionArgs New() :530
void EditorActionArgs__New2_fn(EditorActionArgs** __retval)
{
    *__retval = EditorActionArgs::New2();
}

// public generated EditorActionArgs() [instance] :530
void EditorActionArgs::ctor_1()
{
    uStackFrame __("Fuse.Android.Controls.EditorActionArgs", ".ctor()");
    ctor_();
}

// public generated EditorActionArgs New() [static] :530
EditorActionArgs* EditorActionArgs::New2()
{
    EditorActionArgs* obj1 = (EditorActionArgs*)uNew(EditorActionArgs_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\Controls\$.uno(535)
// ----------------------------------------------------------------------

// internal extern delegate bool EditorActionHandler(object sender, Fuse.Android.Controls.EditorActionArgs args) :535
uDelegateType* EditorActionHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Android.Controls.EditorActionHandler", 2, 0);
    type->SetSignature(::g::Uno::Bool_typeof(),
        uObject_typeof(),
        ::g::Fuse::Android::Controls::EditorActionArgs_typeof());
    return type;
}

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\Controls\$.uno(537)
// ----------------------------------------------------------------------

// internal sealed extern class EditorActionListener :537
// {
EditorActionListener_type* EditorActionListener_typeof()
{
    static uSStrong<EditorActionListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(EditorActionListener);
    options.TypeSize = sizeof(EditorActionListener_type);
    type = (EditorActionListener_type*)uClassType::New("Fuse.Android.Controls.EditorActionListener", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_onEditorAction = (void(*)(uObject*, ::g::Android::android::widget::TextView*, int*, ::g::Android::android::view::KeyEvent*, bool*))EditorActionListener__AndroidandroidwidgetTextViewDLROnEditorActionListeneronEditorAction_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))EditorActionListener__Dispose1_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::STRINGS[10] = uString::Const("com.Bindings.Binding_Fuse_Android_Controls_EditorActionListener");
    ::STRINGS[1] = uString::Const("<init>");
    ::STRINGS[5] = uString::Const("(J)V");
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[5] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[6] = ::g::Android::Base::Primitives::ujclass_typeof();
    ::TYPES[42] = ::g::Android::android::widget::TextViewDLROnEditorActionListener_typeof();
    ::TYPES[43] = ::g::Uno::IDisposable_typeof();
    ::TYPES[14] = ::g::Uno::Delegate_typeof();
    ::TYPES[44] = ::g::Fuse::Android::Controls::EditorActionArgs_typeof();
    ::TYPES[45] = ::g::Fuse::Android::Controls::EditorActionHandler_typeof();
    ::TYPES[38] = uObject_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(EditorActionListener_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(EditorActionListener_type, interface1),
        ::g::Android::android::widget::TextViewDLROnEditorActionListener_typeof(), offsetof(EditorActionListener_type, interface2));
    type->SetFields(5,
        ::g::Fuse::Android::Controls::EditorActionHandler_typeof(), offsetof(::g::Fuse::Android::Controls::EditorActionListener, _handler), 0,
        ::g::Android::android::widget::TextView_typeof(), offsetof(::g::Fuse::Android::Controls::EditorActionListener, _textView), 0,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Fuse::Android::Controls::EditorActionListener::_javaClass2_, uFieldFlagsStatic);
    return type;
}

// private EditorActionListener(Android.android.widget.TextView textView, Fuse.Android.Controls.EditorActionHandler handler) :553
void EditorActionListener__ctor_5_fn(EditorActionListener* __this, ::g::Android::android::widget::TextView* textView, uDelegate* handler)
{
    __this->ctor_5(textView, handler);
}

// public static Uno.IDisposable AddHandler(Android.android.widget.TextView textView, Fuse.Android.Controls.EditorActionHandler handler) :543
void EditorActionListener__AddHandler_fn(::g::Android::android::widget::TextView* textView, uDelegate* handler, uObject** __retval)
{
    *__retval = EditorActionListener::AddHandler(textView, handler);
}

// private bool Android.android.widget.TextViewDLROnEditorActionListener.onEditorAction(Android.android.widget.TextView v, int actionId, Android.android.view.KeyEvent ev) :562
void EditorActionListener__AndroidandroidwidgetTextViewDLROnEditorActionListeneronEditorAction_fn(EditorActionListener* __this, ::g::Android::android::widget::TextView* v, int* actionId, ::g::Android::android::view::KeyEvent* ev, bool* __retval)
{
    uStackFrame __("Fuse.Android.Controls.EditorActionListener", "Android.android.widget.TextViewDLROnEditorActionListener.onEditorAction(Android.android.widget.TextView,int,Android.android.view.KeyEvent)");
    int actionId_ = *actionId;
    bool ret2;

    if (::g::Uno::Delegate::op_Equality(__this->_handler, NULL))
        return *__retval = false, void();

    ::g::Fuse::Android::Controls::EditorActionArgs* args = ::g::Fuse::Android::Controls::EditorActionArgs::New2();
    args->ActionCode = actionId_;
    return *__retval = (uPtr(__this->_handler)->Invoke(&ret2, 2, __this, args), ret2), void();
}

// public void Dispose() :575
void EditorActionListener__Dispose1_fn(EditorActionListener* __this)
{
    __this->Dispose1();
}

// private EditorActionListener New(Android.android.widget.TextView textView, Fuse.Android.Controls.EditorActionHandler handler) :553
void EditorActionListener__New5_fn(::g::Android::android::widget::TextView* textView, uDelegate* handler, EditorActionListener** __retval)
{
    *__retval = EditorActionListener::New5(textView, handler);
}

jclass EditorActionListener::_javaClass2_;

// private EditorActionListener(Android.android.widget.TextView textView, Fuse.Android.Controls.EditorActionHandler handler) [instance] :553
void EditorActionListener::ctor_5(::g::Android::android::widget::TextView* textView, uDelegate* handler)
{
    uStackFrame __("Fuse.Android.Controls.EditorActionListener", ".ctor(Android.android.widget.TextView,Fuse.Android.Controls.EditorActionHandler)");

    if (!_subclassed)
    {
        _subclassed = true;
        _javaClassName = ::STRINGS[10/*"com.Binding...*/];
    }

    ctor_4(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);

    if (::g::Android::Base::Primitives::ujclass::op_Equality(EditorActionListener::_javaClass2(), ::g::Android::Base::Primitives::ujclass::Null()))
    {
        EditorActionListener::_javaClass2() = ::g::Android::Base::JNI::LocalToGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[10/*"com.Binding...*/], false));
        JniHelper jni;
        BEGIN_REG_MTD(1);
        REG_MTD(0,"__n_onEditorAction","(JLandroid/widget/TextView;ILandroid/view/KeyEvent;JJJ)Z",Binding_Fuse_Android_Controls_EditorActionListener__onEditorAction26520);
        COMMIT_REG_MTD(EditorActionListener::_javaClass2());
    }

    jclass tmpCls = ::g::Android::Base::JNI::LoadClass3(_javaClassName, false);
    jmethodID mtd = ::g::Android::Base::JNI::GetMethodID(tmpCls, ::STRINGS[1/*"<init>"*/], ::STRINGS[5/*"(J)V"*/]);
    jobject tmp = ::g::Android::Base::JNI::NewObject1(tmpCls, mtd, ::g::Android::Base::Primitives::ujvalue::op_Implicit7((jlong)this->__obj_weak));
    ::g::Android::Base::JNI::CheckException();
    _javaObject = ::g::Android::Base::JNI::LocalToGlobalRef1(tmp);
    ::g::Android::Base::JNI::DeleteLocalRef(tmpCls);
    _textView = textView;
    uPtr(_textView)->setOnEditorActionListener((uObject*)this);
    _handler = handler;
}

// public void Dispose() [instance] :575
void EditorActionListener::Dispose1()
{
    uStackFrame __("Fuse.Android.Controls.EditorActionListener", "Dispose()");
    uPtr(_textView)->setOnEditorActionListener(NULL);
}

// public static Uno.IDisposable AddHandler(Android.android.widget.TextView textView, Fuse.Android.Controls.EditorActionHandler handler) [static] :543
uObject* EditorActionListener::AddHandler(::g::Android::android::widget::TextView* textView, uDelegate* handler)
{
    uStackFrame __("Fuse.Android.Controls.EditorActionListener", "AddHandler(Android.android.widget.TextView,Fuse.Android.Controls.EditorActionHandler)");
    return (uObject*)EditorActionListener::New5(textView, handler);
}

// private EditorActionListener New(Android.android.widget.TextView textView, Fuse.Android.Controls.EditorActionHandler handler) [static] :553
EditorActionListener* EditorActionListener::New5(::g::Android::android::widget::TextView* textView, uDelegate* handler)
{
    EditorActionListener* obj1 = (EditorActionListener*)uNew(EditorActionListener_typeof());
    obj1->ctor_5(textView, handler);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\Controls\$.uno(606)
// ----------------------------------------------------------------------

// public abstract extern class Element :606
// {
Element_type* Element_typeof()
{
    static uSStrong<Element_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 57;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Element);
    options.TypeSize = sizeof(Element_type);
    type = (Element_type*)uClassType::New("Fuse.Android.Controls.Element", options);
    type->SetBase(::g::Fuse::Node_typeof());
    type->fp_AdjustLayout = Element__AdjustLayout_fn;
    type->fp_Create = Element__Create_fn;
    type->fp_GetMarginSize = (void(*)(::g::Fuse::Node*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))Element__GetMarginSize_fn;
    type->fp_get_HitTestLocalBounds = (void(*)(::g::Fuse::Node*, ::g::Fuse::NodeBounds**))Element__get_HitTestLocalBounds_fn;
    type->fp_get_LocalRenderBounds = (void(*)(::g::Fuse::Node*, ::g::Uno::Rect*))Element__get_LocalRenderBounds_fn;
    type->fp_OnArrangeMarginBox = (void(*)(::g::Fuse::Node*, ::g::Uno::Float2*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))Element__OnArrangeMarginBox_fn;
    type->fp_OnHitTest = (void(*)(::g::Fuse::Node*, ::g::Fuse::HitTestContext*))Element__OnHitTest_fn;
    type->fp_PrependImplicitTransform = (void(*)(::g::Fuse::Node*, ::g::Fuse::FastMatrix*))Element__PrependImplicitTransform_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::TYPES[35] = ::g::Fuse::Node_typeof();
    ::TYPES[46] = ::g::Fuse::Behavior_typeof();
    ::TYPES[47] = ::g::Fuse::IViewport_typeof();
    ::TYPES[48] = ::g::Uno::Int_typeof();
    ::TYPES[49] = ::g::Fuse::LayoutParams_typeof();
    ::TYPES[50] = ::g::Android::android::view::ViewDLRMeasureSpec_typeof();
    ::TYPES[51] = ::g::Fuse::Android::NativeViews::NativeView_typeof();
    ::TYPES[52] = ::g::Uno::Float_typeof();
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[27] = ::g::Uno::Float2_typeof();
    ::TYPES[53] = ::g::Uno::Float4_typeof();
    ::TYPES[13] = ::g::Uno::Action_typeof();
    ::TYPES[54] = ::g::Fuse::HitTestContext_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(Element_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(Element_type, interface1));
    type->SetFields(55,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Android::Controls::Element, _ActualSize), 0,
        ::g::Uno::Float2_typeof(), offsetof(::g::Fuse::Android::Controls::Element, _Position), 0);
    type->Reflection.SetFunctions(1,
        new uFunction("IsPointInside", NULL, (void*)Element__IsPointInside_fn, 0, false, ::g::Uno::Bool_typeof(), 1, ::g::Uno::Float2_typeof()));
    return type;
}

// public Element() :608
void Element__ctor_1_fn(Element* __this)
{
    __this->ctor_1();
}

// internal generated float2 get_ActualSize() :650
void Element__get_ActualSize_fn(Element* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ActualSize();
}

// protected generated void set_ActualSize(float2 value) :650
void Element__set_ActualSize_fn(Element* __this, ::g::Uno::Float2* value)
{
    __this->ActualSize(*value);
}

// protected virtual float4 AdjustLayout(float2 position, float2 size) :680
void Element__AdjustLayout_fn(Element* __this, ::g::Uno::Float2* position, ::g::Uno::Float2* size, ::g::Uno::Float4* __retval)
{
    uStackFrame __("Fuse.Android.Controls.Element", "AdjustLayout(float2,float2)");
    ::g::Uno::Float2 position_ = *position;
    ::g::Uno::Float2 size_ = *size;
    return *__retval = ::g::Uno::Float4__New7(position_, size_), void();
}

// internal virtual Android.android.view.View Create() :618
void Element__Create_fn(Element* __this, ::g::Android::android::view::View** __retval)
{
    uStackFrame __("Fuse.Android.Controls.Element", "Create()");
    return *__retval = __this->CreateInternal(), void();
}

// public override float2 GetMarginSize(Fuse.LayoutParams lp) :625
void Element__GetMarginSize_fn(Element* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Android.Controls.Element", "GetMarginSize(Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    float density = ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(__this->Viewport()), ::TYPES[47/*Fuse.IViewport*/]));
    int w = (int)(lp_.X() * density);
    int h = (int)(lp_.Y() * density);

    if (lp_.HasX())
        w = ::g::Android::android::view::ViewDLRMeasureSpec::makeMeasureSpec(w, ::g::Android::android::view::ViewDLRMeasureSpec::EXACTLY());
    else
        w = 0;

    if (lp_.HasY())
        h = ::g::Android::android::view::ViewDLRMeasureSpec::makeMeasureSpec(h, ::g::Android::android::view::ViewDLRMeasureSpec::EXACTLY());
    else
        h = 0;

    uPtr(uPtr(__this->NativeView())->Handle())->measure(w, h);
    int mw = uPtr(uPtr(__this->NativeView())->Handle())->getMeasuredWidth();
    int mh = uPtr(uPtr(__this->NativeView())->Handle())->getMeasuredHeight();
    return *__retval = ::g::Uno::Float2__New2((float)mw / density, (float)mh / density), void();
}

// protected override sealed Fuse.NodeBounds get_HitTestLocalBounds() :708
void Element__get_HitTestLocalBounds_fn(Element* __this, ::g::Fuse::NodeBounds** __retval)
{
    uStackFrame __("Fuse.Android.Controls.Element", "get_HitTestLocalBounds()");
    return *__retval = ::g::Fuse::NodeBounds::Rect(::g::Uno::Float2__New1(0.0f), __this->ActualSize()), void();
}

// public bool IsPointInside(float2 localPoint) :690
void Element__IsPointInside_fn(Element* __this, ::g::Uno::Float2* localPoint, bool* __retval)
{
    *__retval = __this->IsPointInside(*localPoint);
}

// public override sealed Uno.Rect get_LocalRenderBounds() :697
void Element__get_LocalRenderBounds_fn(Element* __this, ::g::Uno::Rect* __retval)
{
    uStackFrame __("Fuse.Android.Controls.Element", "get_LocalRenderBounds()");
    return *__retval = ::g::Uno::Rect__New2(::g::Uno::Float2__New1(0.0f), __this->ActualSize()), void();
}

// internal Fuse.Android.NativeViews.NativeView get_NativeView() :615
void Element__get_NativeView_fn(Element* __this, ::g::Fuse::Android::NativeViews::NativeView** __retval)
{
    *__retval = __this->NativeView();
}

// protected override float2 OnArrangeMarginBox(float2 position, Fuse.LayoutParams lp) :654
void Element__OnArrangeMarginBox_fn(Element* __this, ::g::Uno::Float2* position, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Android.Controls.Element", "OnArrangeMarginBox(float2,Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Uno::Float2 position_ = *position;
    ::g::Uno::Float2 sz = lp_.Size();

    if (!lp_.HasSize())
    {
        ::g::Uno::Float2 rsz = __this->GetMarginSize(lp_);

        if (!lp_.HasX())
            sz.X = rsz.X;

        if (!lp_.HasY())
            sz.Y = rsz.Y;
    }

    ::g::Uno::Float4 layout = __this->AdjustLayout(position_, sz);

    if (::g::Uno::Float2::op_Inequality(__this->Position(), ::g::Uno::Float2__New2(layout.X, layout.Y)) || ::g::Uno::Float2::op_Inequality(__this->ActualSize(), ::g::Uno::Float2__New2(layout.Z, layout.W)))
    {
        __this->Position(::g::Uno::Float2__New2(layout.X, layout.Y));
        __this->ActualSize(::g::Uno::Float2__New2(layout.Z, layout.W));
        __this->InvalidateLocalTransform();
    }

    ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)::g::Fuse::Android::NativeViews::NativeView__NotifyNewTransform_fn, uPtr(__this->NativeView())), -1);
    return *__retval = __this->ActualSize(), void();
}

// protected override sealed void OnHitTest(Fuse.HitTestContext htc) :700
void Element__OnHitTest_fn(Element* __this, ::g::Fuse::HitTestContext* htc)
{
    uStackFrame __("Fuse.Android.Controls.Element", "OnHitTest(Fuse.HitTestContext)");

    if (__this->IsPointInside(uPtr(htc)->LocalPoint()))
        uPtr(htc)->Hit(__this);
}

// internal generated float2 get_Position() :652
void Element__get_Position_fn(Element* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Position();
}

// protected generated void set_Position(float2 value) :652
void Element__set_Position_fn(Element* __this, ::g::Uno::Float2* value)
{
    __this->Position(*value);
}

// protected override sealed void PrependImplicitTransform(Fuse.FastMatrix m) :685
void Element__PrependImplicitTransform_fn(Element* __this, ::g::Fuse::FastMatrix* m)
{
    uStackFrame __("Fuse.Android.Controls.Element", "PrependImplicitTransform(Fuse.FastMatrix)");
    uPtr(m)->PrependTranslation1(::g::Uno::Float3__New4(__this->Position(), 0.0f));
}

// public Element() [instance] :608
void Element::ctor_1()
{
    uStackFrame __("Fuse.Android.Controls.Element", ".ctor()");
    ctor_();
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Behaviors()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[46/*Fuse.Behavior*/])), ::g::Fuse::Android::NativeViews::LeafNativeView::New1());
}

// internal generated float2 get_ActualSize() [instance] :650
::g::Uno::Float2 Element::ActualSize()
{
    uStackFrame __("Fuse.Android.Controls.Element", "get_ActualSize()");
    return _ActualSize;
}

// protected generated void set_ActualSize(float2 value) [instance] :650
void Element::ActualSize(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Android.Controls.Element", "set_ActualSize(float2)");
    _ActualSize = value;
}

// public bool IsPointInside(float2 localPoint) [instance] :690
bool Element::IsPointInside(::g::Uno::Float2 localPoint)
{
    uStackFrame __("Fuse.Android.Controls.Element", "IsPointInside(float2)");
    return !((((localPoint.X < 0.0f) || (localPoint.Y < 0.0f)) || (localPoint.X > ActualSize().X)) || (localPoint.Y > ActualSize().Y));
}

// internal Fuse.Android.NativeViews.NativeView get_NativeView() [instance] :615
::g::Fuse::Android::NativeViews::NativeView* Element::NativeView()
{
    uStackFrame __("Fuse.Android.Controls.Element", "get_NativeView()");
    return ::g::Fuse::Android::NativeViews::NativeView::GetFrom(this);
}

// internal generated float2 get_Position() [instance] :652
::g::Uno::Float2 Element::Position()
{
    uStackFrame __("Fuse.Android.Controls.Element", "get_Position()");
    return _Position;
}

// protected generated void set_Position(float2 value) [instance] :652
void Element::Position(::g::Uno::Float2 value)
{
    uStackFrame __("Fuse.Android.Controls.Element", "set_Position(float2)");
    _Position = value;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\Controls\$.uno(416)
// ----------------------------------------------------------------------

// internal sealed extern class FocusManager :416
// {
// static FocusManager() :416
static void FocusManager__cctor__fn(uType* __type)
{
    FocusManager::Singleton_ = FocusManager::New1();
}

uType* FocusManager_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(FocusManager);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Android.Controls.FocusManager", options);
    type->fp_ctor_ = (void*)FocusManager__New1_fn;
    type->fp_cctor_ = FocusManager__cctor__fn;
    ::TYPES[21] = ::g::Android::java::lang::Object_typeof();
    ::TYPES[37] = ::g::Android::android::view::inputmethod::InputMethodManager_typeof();
    ::TYPES[22] = ::g::Android::android::content::Context_typeof();
    type->SetFields(0,
        ::g::Android::android::content::Context_typeof(), offsetof(::g::Fuse::Android::Controls::FocusManager, HideKeyboardContext), 0,
        ::g::Android::android::os::IBinder_typeof(), offsetof(::g::Fuse::Android::Controls::FocusManager, HideKeyboardWindowToken), 0,
        ::g::Android::android::view::View_typeof(), offsetof(::g::Fuse::Android::Controls::FocusManager, LoseFocus), 0,
        FocusManager_typeof(), (uintptr_t)&::g::Fuse::Android::Controls::FocusManager::Singleton_, uFieldFlagsStatic);
    return type;
}

// public generated FocusManager() :416
void FocusManager__ctor__fn(FocusManager* __this)
{
    __this->ctor_();
}

// public void CompleteFocusLoss() :424
void FocusManager__CompleteFocusLoss_fn(FocusManager* __this)
{
    __this->CompleteFocusLoss();
}

// public generated FocusManager New() :416
void FocusManager__New1_fn(FocusManager** __retval)
{
    *__retval = FocusManager::New1();
}

uSStrong<FocusManager*> FocusManager::Singleton_;

// public generated FocusManager() [instance] :416
void FocusManager::ctor_()
{
}

// public void CompleteFocusLoss() [instance] :424
void FocusManager::CompleteFocusLoss()
{
    uStackFrame __("Fuse.Android.Controls.FocusManager", "CompleteFocusLoss()");

    if (::g::Android::java::lang::Object::op_Inequality1(LoseFocus, NULL))
    {
        if (uPtr(LoseFocus)->hasFocus())
            uPtr(uPtr(LoseFocus)->getRootView())->requestFocus();

        LoseFocus = NULL;
    }

    if (::g::Android::java::lang::Object::op_Inequality1(HideKeyboardContext, NULL))
    {
        ::g::Android::android::view::inputmethod::InputMethodManager* imm = uCast< ::g::Android::android::view::inputmethod::InputMethodManager*>(uPtr(HideKeyboardContext)->getSystemService(::g::Android::android::content::Context::INPUT_METHOD_SERVICE()), ::TYPES[37/*Android.android.view.inputmethod.InputMethodManager*/]);
        uPtr(imm)->hideSoftInputFromWindow(HideKeyboardWindowToken, 0);
        HideKeyboardContext = NULL;
    }
}

// public generated FocusManager New() [static] :416
FocusManager* FocusManager::New1()
{
    FocusManager* obj1 = (FocusManager*)uNew(FocusManager_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\Controls\$.uno(796)
// ----------------------------------------------------------------------

// public sealed extern class Image :796
// {
::g::Fuse::Android::Controls::Control_type* Image_typeof()
{
    static uSStrong< ::g::Fuse::Android::Controls::Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 64;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Image);
    options.TypeSize = sizeof(::g::Fuse::Android::Controls::Control_type);
    type = (::g::Fuse::Android::Controls::Control_type*)uClassType::New("Fuse.Android.Controls.Image", options);
    type->SetBase(::g::Fuse::Android::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::Image_typeof()));
    type->fp_ctor_ = (void*)Image__New1_fn;
    type->fp_Attach = (void(*)(::g::Fuse::Android::Controls::Control*))Image__Attach_fn;
    type->fp_CreateInternal = (void(*)(::g::Fuse::Android::Controls::Element*, ::g::Android::android::view::View**))Image__CreateInternal_fn;
    type->fp_Detach = (void(*)(::g::Fuse::Android::Controls::Control*))Image__Detach_fn;
    type->fp_GetMarginSize = (void(*)(::g::Fuse::Node*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))Image__GetMarginSize_fn;
    type->fp_OnArrangeMarginBox = (void(*)(::g::Fuse::Node*, ::g::Uno::Float2*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))Image__OnArrangeMarginBox_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::TYPES[55] = ::g::Fuse::Controls::Image_typeof();
    ::TYPES[56] = ::g::Fuse::Android::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::Image_typeof());
    ::TYPES[57] = ::g::Uno::EventHandler_typeof();
    ::TYPES[21] = ::g::Android::java::lang::Object_typeof();
    ::TYPES[22] = ::g::Android::android::content::Context_typeof();
    ::TYPES[58] = ::g::Android::android::widget::ImageViewDLRScaleType_typeof();
    ::TYPES[59] = ::g::Android::android::view::ViewGroupDLRLayoutParams_typeof();
    ::TYPES[23] = ::g::Android::android::view::View_typeof();
    ::TYPES[60] = ::g::Android::Runtime::FloatArray_typeof();
    ::TYPES[27] = ::g::Uno::Float2_typeof();
    ::TYPES[61] = ::g::Fuse::Internal::SizingContainer_typeof();
    ::TYPES[35] = ::g::Fuse::Node_typeof();
    ::TYPES[50] = ::g::Android::android::view::ViewDLRMeasureSpec_typeof();
    ::TYPES[52] = ::g::Uno::Float_typeof();
    ::TYPES[49] = ::g::Fuse::LayoutParams_typeof();
    ::TYPES[47] = ::g::Fuse::IViewport_typeof();
    ::TYPES[62] = ::g::Fuse::Android::Controls::Element_typeof();
    ::TYPES[13] = ::g::Uno::Action_typeof();
    ::TYPES[63] = ::g::Fuse::Resources::FileImageSource_typeof();
    ::TYPES[64] = ::g::Fuse::Resources::HttpImageSource_typeof();
    ::TYPES[48] = ::g::Uno::Int_typeof();
    ::TYPES[65] = ::g::Android::android::os::BuildDLRVERSION_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Android::Controls::Control_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Android::Controls::Control_type, interface1));
    type->SetFields(59,
        ::g::Android::android::graphics::Bitmap_typeof(), offsetof(::g::Fuse::Android::Controls::Image, _bitmap), 0,
        Image__ImageLoader_typeof(), offsetof(::g::Fuse::Android::Controls::Image, _currentImageLoader), 0,
        ::g::Android::android::widget::RelativeLayout_typeof(), offsetof(::g::Fuse::Android::Controls::Image, _imageContainer), 0,
        ::g::Android::android::widget::ImageView_typeof(), offsetof(::g::Fuse::Android::Controls::Image, _imageView), 0,
        ::g::Fuse::Internal::SizingContainer_typeof(), offsetof(::g::Fuse::Android::Controls::Image, _sizing), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Image__New1_fn, 0, true, Image_typeof(), 0));
    return type;
}

// public Image() :864
void Image__ctor_3_fn(Image* __this)
{
    __this->ctor_3();
}

// protected override sealed void Attach() :909
void Image__Attach_fn(Image* __this)
{
    uStackFrame __("Fuse.Android.Controls.Image", "Attach()");
    __this->Create();
    uPtr((::g::Fuse::Controls::Image*)__this->SemanticControl())->add_ParamChanged(uDelegate::New(::TYPES[57/*Uno.EventHandler*/], (void*)Image__OnParamChanged_fn, __this));
    uPtr((::g::Fuse::Controls::Image*)__this->SemanticControl())->add_SourceChanged(uDelegate::New(::TYPES[57/*Uno.EventHandler*/], (void*)Image__OnSourceChanged_fn, __this));
    __this->OnParamChanged(NULL, NULL);
    __this->OnSourceChanged(NULL, NULL);
}

// private Android.android.graphics.Bitmap get_Bitmap() :875
void Image__get_Bitmap_fn(Image* __this, ::g::Android::android::graphics::Bitmap** __retval)
{
    *__retval = __this->Bitmap();
}

// private void set_Bitmap(Android.android.graphics.Bitmap value) :876
void Image__set_Bitmap_fn(Image* __this, ::g::Android::android::graphics::Bitmap* value)
{
    __this->Bitmap(value);
}

// private void ClearSource() :938
void Image__ClearSource_fn(Image* __this)
{
    __this->ClearSource();
}

// internal override sealed Android.android.view.View CreateInternal() :889
void Image__CreateInternal_fn(Image* __this, ::g::Android::android::view::View** __retval)
{
    uStackFrame __("Fuse.Android.Controls.Image", "CreateInternal()");

    if (::g::Android::java::lang::Object::op_Equality1(__this->_imageView, NULL))
    {
        __this->_imageView = ::g::Android::android::widget::ImageView::New9(::g::Android::android::app::Activity::GetAppActivity());
        uPtr(__this->_imageView)->setScaleType(::g::Android::android::widget::ImageViewDLRScaleType::MATRIX());
        __this->_imageContainer = ::g::Android::android::widget::RelativeLayout::New9(::g::Android::android::app::Activity::GetAppActivity());
        uPtr(__this->_imageContainer)->setLayoutParams(::g::Android::android::widget::FrameLayoutDLRLayoutParams::New19(-1, -1));
        __this->SetImageViewSize(::g::Uno::Float2__New1(0.0f));
        uPtr(__this->_imageContainer)->addView(__this->_imageView);
        uPtr(__this->_imageView)->invalidate();
        uPtr(__this->_imageContainer)->invalidate();
    }

    return *__retval = __this->_imageContainer, void();
}

// private Android.android.graphics.Matrix CreateMatrix(float2 translation, float2 scale) :1076
void Image__CreateMatrix_fn(Image* __this, ::g::Uno::Float2* translation, ::g::Uno::Float2* scale, ::g::Android::android::graphics::Matrix** __retval)
{
    *__retval = __this->CreateMatrix(*translation, *scale);
}

// protected override sealed void Detach() :918
void Image__Detach_fn(Image* __this)
{
    uStackFrame __("Fuse.Android.Controls.Image", "Detach()");
    uPtr((::g::Fuse::Controls::Image*)__this->SemanticControl())->remove_ParamChanged(uDelegate::New(::TYPES[57/*Uno.EventHandler*/], (void*)Image__OnParamChanged_fn, __this));
    uPtr((::g::Fuse::Controls::Image*)__this->SemanticControl())->remove_SourceChanged(uDelegate::New(::TYPES[57/*Uno.EventHandler*/], (void*)Image__OnSourceChanged_fn, __this));
}

// public override sealed float2 GetMarginSize(Fuse.LayoutParams lp) :1027
void Image__GetMarginSize_fn(Image* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Android.Controls.Image", "GetMarginSize(Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    uPtr(__this->_sizing)->snapToPixels = uPtr((::g::Fuse::Controls::Image*)__this->SemanticControl())->SnapToPixels();
    uPtr(__this->_sizing)->absoluteZoom = uPtr((::g::Fuse::Controls::Image*)__this->SemanticControl())->AbsoluteZoom();
    ::g::Uno::Float2 measuredSize = __this->GetSize();
    ::g::Uno::Float2 marginSize = uPtr(__this->_sizing)->ExpandFillSize(measuredSize, lp_);
    return *__retval = marginSize, void();
}

// private float2 GetSize() :1011
void Image__GetSize_fn(Image* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetSize();
}

// private void Invalidate() :1006
void Image__Invalidate_fn(Image* __this)
{
    __this->Invalidate();
}

// public Image New() :864
void Image__New1_fn(Image** __retval)
{
    *__retval = Image::New1();
}

// protected override sealed float2 OnArrangeMarginBox(float2 position, Fuse.LayoutParams lp) :1045
void Image__OnArrangeMarginBox_fn(Image* __this, ::g::Uno::Float2* position, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Android.Controls.Image", "OnArrangeMarginBox(float2,Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    uPtr(__this->_sizing)->snapToPixels = uPtr((::g::Fuse::Controls::Image*)__this->SemanticControl())->SnapToPixels();
    uPtr(__this->_sizing)->absoluteZoom = uPtr((::g::Fuse::Controls::Image*)__this->SemanticControl())->AbsoluteZoom();
    ::g::Uno::Float2 contentDesiredSize = __this->GetSize();
    ::g::Uno::Float2 scale = uPtr(__this->_sizing)->CalcScale(lp_.Size(), contentDesiredSize);
    ::g::Uno::Float2 origin = uPtr(__this->_sizing)->CalcOrigin(lp_.Size(), ::g::Uno::Float2__op_Multiply2(contentDesiredSize, scale));
    ::g::Uno::Float2 drawOrigin = origin;
    ::g::Uno::Float2 drawSize = ::g::Uno::Float2__op_Multiply2(contentDesiredSize, scale);
    ::g::Uno::Float4 uvClip = uPtr(__this->_sizing)->CalcClip(lp_.Size(), &drawOrigin, &drawSize);
    ::g::Uno::Float2 transformOrigin = ::g::Uno::Float2__op_Subtraction2(origin, drawOrigin);
    float density = ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(__this->Viewport()), ::TYPES[47/*Fuse.IViewport*/]));
    __this->SetImageViewSize(::g::Uno::Float2__op_Multiply1(drawSize, density));
    uPtr(__this->_imageView)->setImageMatrix(__this->CreateMatrix(::g::Uno::Float2__op_Multiply1(transformOrigin, density), ::g::Uno::Float2__op_Multiply1(scale, density)));
    uPtr(__this->_imageView)->invalidate();
    uPtr(__this->_imageContainer)->invalidate();
    __this->Position(drawOrigin);
    __this->ActualSize(drawSize);
    ::g::Fuse::UpdateManager::AddDeferredAction(uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)::g::Fuse::Android::NativeViews::NativeView__NotifyNewTransform_fn, uPtr(__this->NativeView())), -1);
    return *__retval = __this->ActualSize(), void();
}

// private void OnParamChanged(object sender, Uno.EventArgs args) :924
void Image__OnParamChanged_fn(Image* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnParamChanged(sender, args);
}

// private void OnSourceChanged(object sender, Uno.EventArgs args) :980
void Image__OnSourceChanged_fn(Image* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnSourceChanged(sender, args);
}

// private void SetDensity(float density) :974
void Image__SetDensity_fn(Image* __this, float* density)
{
    __this->SetDensity(*density);
}

// private void SetImageViewSize(float2 size) :1038
void Image__SetImageViewSize_fn(Image* __this, ::g::Uno::Float2* size)
{
    __this->SetImageViewSize(*size);
}

// private void SetResampleMode(Fuse.Drawing.ResampleMode mode) :952
void Image__SetResampleMode_fn(Image* __this, int* mode)
{
    __this->SetResampleMode(*mode);
}

// private void SetSource(Android.android.graphics.Bitmap bitmap) :945
void Image__SetSource_fn(Image* __this, ::g::Android::android::graphics::Bitmap* bitmap)
{
    __this->SetSource(bitmap);
}

// public Image() [instance] :864
void Image::ctor_3()
{
    uStackFrame __("Fuse.Android.Controls.Image", ".ctor()");
    ctor_2();
    _sizing = ::g::Fuse::Internal::SizingContainer::New1();
}

// private Android.android.graphics.Bitmap get_Bitmap() [instance] :875
::g::Android::android::graphics::Bitmap* Image::Bitmap()
{
    uStackFrame __("Fuse.Android.Controls.Image", "get_Bitmap()");
    return _bitmap;
}

// private void set_Bitmap(Android.android.graphics.Bitmap value) [instance] :876
void Image::Bitmap(::g::Android::android::graphics::Bitmap* value)
{
    uStackFrame __("Fuse.Android.Controls.Image", "set_Bitmap(Android.android.graphics.Bitmap)");

    if (::g::Android::java::lang::Object::op_Inequality1(_bitmap, NULL))
        ClearSource();

    _bitmap = value;
    SetSource(_bitmap);
}

// private void ClearSource() [instance] :938
void Image::ClearSource()
{
    uStackFrame __("Fuse.Android.Controls.Image", "ClearSource()");
    uPtr(_imageView)->setImageBitmap(NULL);
    uPtr(_imageView)->invalidate();
    Invalidate();
}

// private Android.android.graphics.Matrix CreateMatrix(float2 translation, float2 scale) [instance] :1076
::g::Android::android::graphics::Matrix* Image::CreateMatrix(::g::Uno::Float2 translation, ::g::Uno::Float2 scale)
{
    uStackFrame __("Fuse.Android.Controls.Image", "CreateMatrix(float2,float2)");
    ::g::Android::Runtime::FloatArray* m = ::g::Android::Runtime::FloatArray::New6(9);
    m->Item(0, scale.X);
    m->Item(1, 0.0f);
    m->Item(2, translation.X);
    m->Item(3, 0.0f);
    m->Item(4, scale.Y);
    m->Item(5, translation.Y);
    m->Item(6, 0.0f);
    m->Item(7, 0.0f);
    m->Item(8, 1.0f);
    ::g::Android::android::graphics::Matrix* matrix = ::g::Android::android::graphics::Matrix::New5();
    matrix->setValues(m);
    return matrix;
}

// private float2 GetSize() [instance] :1011
::g::Uno::Float2 Image::GetSize()
{
    uStackFrame __("Fuse.Android.Controls.Image", "GetSize()");

    if (::g::Android::java::lang::Object::op_Inequality1(_imageView, NULL))
    {
        uPtr(_imageView)->measure(::g::Android::android::view::ViewDLRMeasureSpec::UNSPECIFIED(), ::g::Android::android::view::ViewDLRMeasureSpec::UNSPECIFIED());
        return ::g::Uno::Float2__New2((float)uPtr(_imageView)->getMeasuredWidth(), (float)uPtr(_imageView)->getMeasuredHeight());
    }

    return ::g::Uno::Float2__New1(0.0f);
}

// private void Invalidate() [instance] :1006
void Image::Invalidate()
{
    uStackFrame __("Fuse.Android.Controls.Image", "Invalidate()");
    uPtr((::g::Fuse::Controls::Image*)SemanticControl())->InvalidateLayout(2);
}

// private void OnParamChanged(object sender, Uno.EventArgs args) [instance] :924
void Image::OnParamChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Android.Controls.Image", "OnParamChanged(object,Uno.EventArgs)");

    if (((uPtr(_sizing)->SetStretchMode(uPtr((::g::Fuse::Controls::Image*)SemanticControl())->StretchMode()) || uPtr(_sizing)->SetStretchDirection(uPtr((::g::Fuse::Controls::Image*)SemanticControl())->StretchDirection())) || uPtr(_sizing)->SetStretchSizing(uPtr((::g::Fuse::Controls::Image*)SemanticControl())->StretchSizing())) || uPtr(_sizing)->SetAlignment(uPtr((::g::Fuse::Controls::Image*)SemanticControl())->ContentAlignment()))
        Invalidate();

    SetDensity(uPtr((::g::Fuse::Controls::Image*)SemanticControl())->Density());
    SetResampleMode(uPtr((::g::Fuse::Controls::Image*)SemanticControl())->ResampleMode());
}

// private void OnSourceChanged(object sender, Uno.EventArgs args) [instance] :980
void Image::OnSourceChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Android.Controls.Image", "OnSourceChanged(object,Uno.EventArgs)");

    if (_currentImageLoader != NULL)
    {
        uPtr(_currentImageLoader)->Cancel();
        _currentImageLoader = NULL;
    }

    if (uPtr((::g::Fuse::Controls::Image*)SemanticControl())->Source() == NULL)
        return;

    ::g::Fuse::Resources::FileImageSource* fs = uAs< ::g::Fuse::Resources::FileImageSource*>(uPtr((::g::Fuse::Controls::Image*)SemanticControl())->Source(), ::TYPES[63/*Fuse.Resources.FileImageSource*/]);

    if (fs != NULL)
    {
        Bitmap(::g::Fuse::Android::Controls::BitmapFactory::GetBitmap(uPtr(fs)->File()));
        OnParamChanged(NULL, NULL);
    }

    ::g::Fuse::Resources::HttpImageSource* http = uAs< ::g::Fuse::Resources::HttpImageSource*>(uPtr((::g::Fuse::Controls::Image*)SemanticControl())->Source(), ::TYPES[64/*Fuse.Resources.HttpImageSource*/]);

    if (http != NULL)
        _currentImageLoader = Image__ImageLoader::New1(this, uPtr(http)->Url());
}

// private void SetDensity(float density) [instance] :974
void Image::SetDensity(float density)
{
}

// private void SetImageViewSize(float2 size) [instance] :1038
void Image::SetImageViewSize(::g::Uno::Float2 size)
{
    uStackFrame __("Fuse.Android.Controls.Image", "SetImageViewSize(float2)");
    uPtr(_imageView)->setLayoutParams(::g::Android::android::widget::RelativeLayoutDLRLayoutParams::New19((int)size.X, (int)size.Y));
}

// private void SetResampleMode(Fuse.Drawing.ResampleMode mode) [instance] :952
void Image::SetResampleMode(int mode)
{
    uStackFrame __("Fuse.Android.Controls.Image", "SetResampleMode(Fuse.Drawing.ResampleMode)");

    if (::g::Android::java::lang::Object::op_Equality1(Bitmap(), NULL))
        return;

    if (::g::Android::android::os::BuildDLRVERSION::SDK_INT() >= 17)
        uPtr(Bitmap())->setHasMipMap(false);

    switch (mode)
    {
        case 0:
            break;
        case 1:
            break;
        case 2:
        {
            if (::g::Android::android::os::BuildDLRVERSION::SDK_INT() >= 17)
                uPtr(Bitmap())->setHasMipMap(true);

            break;
        }
    }

    uPtr(_imageView)->invalidate();
}

// private void SetSource(Android.android.graphics.Bitmap bitmap) [instance] :945
void Image::SetSource(::g::Android::android::graphics::Bitmap* bitmap)
{
    uStackFrame __("Fuse.Android.Controls.Image", "SetSource(Android.android.graphics.Bitmap)");
    uPtr(_imageView)->setImageBitmap(bitmap);
    uPtr(_imageView)->invalidate();
    Invalidate();
}

// public Image New() [static] :864
Image* Image::New1()
{
    Image* obj1 = (Image*)uNew(Image_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\Controls\$.uno(798)
// ----------------------------------------------------------------------

// private sealed class Image.ImageLoader :798
// {
uType* Image__ImageLoader_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(Image__ImageLoader);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Android.Controls.Image.ImageLoader", options);
    ::TYPES[15] = ::g::Uno::Action1_typeof()->MakeType(::g::Android::android::graphics::Bitmap_typeof());
    ::TYPES[66] = ::g::Android::java::lang::Runnable_typeof();
    ::TYPES[21] = ::g::Android::java::lang::Object_typeof();
    ::TYPES[67] = ::g::Fuse::Android::Controls::Image_typeof();
    type->SetFields(0,
        ::g::Fuse::Android::Controls::Image_typeof(), offsetof(::g::Fuse::Android::Controls::Image__ImageLoader, _image), uFieldFlagsWeak,
        Image__ImageLoader__BitmapLoader_typeof(), offsetof(::g::Fuse::Android::Controls::Image__ImageLoader, _loader), 0,
        ::g::Android::java::lang::Thread_typeof(), offsetof(::g::Fuse::Android::Controls::Image__ImageLoader, _thread), 0);
    return type;
}

// public ImageLoader(Fuse.Android.Controls.Image image, string url) :841
void Image__ImageLoader__ctor__fn(Image__ImageLoader* __this, ::g::Fuse::Android::Controls::Image* image, uString* url)
{
    __this->ctor_(image, url);
}

// public void Cancel() :855
void Image__ImageLoader__Cancel_fn(Image__ImageLoader* __this)
{
    __this->Cancel();
}

// public ImageLoader New(Fuse.Android.Controls.Image image, string url) :841
void Image__ImageLoader__New1_fn(::g::Fuse::Android::Controls::Image* image, uString* url, Image__ImageLoader** __retval)
{
    *__retval = Image__ImageLoader::New1(image, url);
}

// private void OnDone(Android.android.graphics.Bitmap bitmap) :849
void Image__ImageLoader__OnDone_fn(Image__ImageLoader* __this, ::g::Android::android::graphics::Bitmap* bitmap)
{
    __this->OnDone(bitmap);
}

// public ImageLoader(Fuse.Android.Controls.Image image, string url) [instance] :841
void Image__ImageLoader::ctor_(::g::Fuse::Android::Controls::Image* image, uString* url)
{
    uStackFrame __("Fuse.Android.Controls.Image.ImageLoader", ".ctor(Fuse.Android.Controls.Image,string)");
    _image = image;
    _loader = Image__ImageLoader__BitmapLoader::New5(url, uDelegate::New(::TYPES[15/*Uno.Action<Android.android.graphics.Bitmap>*/], (void*)Image__ImageLoader__OnDone_fn, this));
    _thread = ::g::Android::java::lang::Thread::New7((uObject*)_loader);
    uPtr(_thread)->start();
}

// public void Cancel() [instance] :855
void Image__ImageLoader::Cancel()
{
    uStackFrame __("Fuse.Android.Controls.Image.ImageLoader", "Cancel()");
    uPtr(_thread)->stop();
}

// private void OnDone(Android.android.graphics.Bitmap bitmap) [instance] :849
void Image__ImageLoader::OnDone(::g::Android::android::graphics::Bitmap* bitmap)
{
    uStackFrame __("Fuse.Android.Controls.Image.ImageLoader", "OnDone(Android.android.graphics.Bitmap)");

    if (::g::Android::java::lang::Object::op_Inequality1(bitmap, NULL) && (_image != NULL))
        uPtr(_image)->Bitmap(bitmap);
}

// public ImageLoader New(Fuse.Android.Controls.Image image, string url) [static] :841
Image__ImageLoader* Image__ImageLoader::New1(::g::Fuse::Android::Controls::Image* image, uString* url)
{
    Image__ImageLoader* obj1 = (Image__ImageLoader*)uNew(Image__ImageLoader_typeof());
    obj1->ctor_(image, url);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\Controls\$.uno(1999)
// -----------------------------------------------------------------------

// internal sealed extern class JsResultHandler :1999
// {
JsResultHandler_type* JsResultHandler_typeof()
{
    static uSStrong<JsResultHandler_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(JsResultHandler);
    options.TypeSize = sizeof(JsResultHandler_type);
    type = (JsResultHandler_type*)uClassType::New("Fuse.Android.Controls.JsResultHandler", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_update = (void(*)(uObject*, ::g::Android::java::util::Observable*, ::g::Android::java::lang::Object*))JsResultHandler__update_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::STRINGS[11] = uString::Const("com.Bindings.Binding_Fuse_Android_Controls_JsResultHandler");
    ::STRINGS[1] = uString::Const("<init>");
    ::STRINGS[5] = uString::Const("(J)V");
    ::STRINGS[12] = uString::Const(".forceNotifyObservers( eval('");
    ::STRINGS[13] = uString::Const("') );");
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[5] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[6] = ::g::Android::Base::Primitives::ujclass_typeof();
    ::TYPES[14] = ::g::Uno::Delegate_typeof();
    ::TYPES[68] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[69] = ::g::Android::java::lang::String_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(JsResultHandler_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(JsResultHandler_type, interface1),
        ::g::Android::java::util::Observer_typeof(), offsetof(JsResultHandler_type, interface2));
    type->SetFields(5,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Android::Controls::JsResultHandler, _name), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof()), offsetof(::g::Fuse::Android::Controls::JsResultHandler, Callback), 0,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Fuse::Android::Controls::JsResultHandler::_javaClass2_, uFieldFlagsStatic);
    return type;
}

// public JsResultHandler(string name, Uno.Action<string> callback) :2004
void JsResultHandler__ctor_5_fn(JsResultHandler* __this, uString* name, uDelegate* callback)
{
    __this->ctor_5(name, callback);
}

// public string getExpr(string js) :2020
void JsResultHandler__getExpr_fn(JsResultHandler* __this, uString* js, uString** __retval)
{
    *__retval = __this->getExpr(js);
}

// public string get_Name() :2017
void JsResultHandler__get_Name_fn(JsResultHandler* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// public JsResultHandler New(string name, Uno.Action<string> callback) :2004
void JsResultHandler__New5_fn(uString* name, uDelegate* callback, JsResultHandler** __retval)
{
    *__retval = JsResultHandler::New5(name, callback);
}

// public void update(Android.java.util.Observable observable, Android.java.lang.Object data) :2010
void JsResultHandler__update_fn(JsResultHandler* __this, ::g::Android::java::util::Observable* observable, ::g::Android::java::lang::Object* data)
{
    __this->update(observable, data);
}

jclass JsResultHandler::_javaClass2_;

// public JsResultHandler(string name, Uno.Action<string> callback) [instance] :2004
void JsResultHandler::ctor_5(uString* name, uDelegate* callback)
{
    uStackFrame __("Fuse.Android.Controls.JsResultHandler", ".ctor(string,Uno.Action<string>)");

    if (!_subclassed)
    {
        _subclassed = true;
        _javaClassName = ::STRINGS[11/*"com.Binding...*/];
    }

    ctor_4(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);

    if (::g::Android::Base::Primitives::ujclass::op_Equality(JsResultHandler::_javaClass2(), ::g::Android::Base::Primitives::ujclass::Null()))
    {
        JsResultHandler::_javaClass2() = ::g::Android::Base::JNI::LocalToGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[11/*"com.Binding...*/], false));
        JniHelper jni;
        BEGIN_REG_MTD(1);
        REG_MTD(0,"__n_update","(JLjava/util/Observable;Ljava/lang/Object;JJ)V",Binding_Fuse_Android_Controls_JsResultHandler__update38392);
        COMMIT_REG_MTD(JsResultHandler::_javaClass2());
    }

    jclass tmpCls = ::g::Android::Base::JNI::LoadClass3(_javaClassName, false);
    jmethodID mtd = ::g::Android::Base::JNI::GetMethodID(tmpCls, ::STRINGS[1/*"<init>"*/], ::STRINGS[5/*"(J)V"*/]);
    jobject tmp = ::g::Android::Base::JNI::NewObject1(tmpCls, mtd, ::g::Android::Base::Primitives::ujvalue::op_Implicit7((jlong)this->__obj_weak));
    ::g::Android::Base::JNI::CheckException();
    _javaObject = ::g::Android::Base::JNI::LocalToGlobalRef1(tmp);
    ::g::Android::Base::JNI::DeleteLocalRef(tmpCls);
    _name = name;
    Callback = callback;
}

// public string getExpr(string js) [instance] :2020
uString* JsResultHandler::getExpr(uString* js)
{
    uStackFrame __("Fuse.Android.Controls.JsResultHandler", "getExpr(string)");
    return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(Name(), ::STRINGS[12/*".forceNotif...*/]), js), ::STRINGS[13/*"') );"*/]);
}

// public string get_Name() [instance] :2017
uString* JsResultHandler::Name()
{
    uStackFrame __("Fuse.Android.Controls.JsResultHandler", "get_Name()");
    return _name;
}

// public void update(Android.java.util.Observable observable, Android.java.lang.Object data) [instance] :2010
void JsResultHandler::update(::g::Android::java::util::Observable* observable, ::g::Android::java::lang::Object* data)
{
    uStackFrame __("Fuse.Android.Controls.JsResultHandler", "update(Android.java.util.Observable,Android.java.lang.Object)");

    if (::g::Uno::Delegate::op_Inequality(Callback, NULL))
        uPtr(Callback)->InvokeVoid(::g::Android::java::lang::String::op_Implicit(uCast< ::g::Android::java::lang::String*>(data, ::TYPES[69/*Android.java.lang.String*/])));
}

// public JsResultHandler New(string name, Uno.Action<string> callback) [static] :2004
JsResultHandler* JsResultHandler::New5(uString* name, uDelegate* callback)
{
    JsResultHandler* obj1 = (JsResultHandler*)uNew(JsResultHandler_typeof());
    obj1->ctor_5(name, callback);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\Controls\$.uno(203)
// ----------------------------------------------------------------------

// private sealed class CompoundButton.Listener :203
// {
CompoundButton__Listener_type* CompoundButton__Listener_typeof()
{
    static uSStrong<CompoundButton__Listener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(CompoundButton__Listener);
    options.TypeSize = sizeof(CompoundButton__Listener_type);
    type = (CompoundButton__Listener_type*)uClassType::New("Fuse.Android.Controls.CompoundButton.Listener", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_onCheckedChanged = (void(*)(uObject*, ::g::Android::android::widget::CompoundButton*, bool*))CompoundButton__Listener__onCheckedChanged_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::STRINGS[14] = uString::Const("com.Bindings.Binding_Fuse_Android_Controls_CompoundButton_Listener");
    ::STRINGS[1] = uString::Const("<init>");
    ::STRINGS[5] = uString::Const("(J)V");
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[5] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[6] = ::g::Android::Base::Primitives::ujclass_typeof();
    ::TYPES[70] = ::g::Fuse::Android::Controls::CompoundButton_typeof();
    ::TYPES[71] = ::g::Android::android::widget::CompoundButtonDLROnCheckedChangeListener_typeof();
    ::TYPES[31] = ::g::Fuse::Android::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::ToggleControl_typeof());
    ::TYPES[38] = uObject_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(CompoundButton__Listener_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(CompoundButton__Listener_type, interface1),
        ::g::Android::android::widget::CompoundButtonDLROnCheckedChangeListener_typeof(), offsetof(CompoundButton__Listener_type, interface2));
    type->SetFields(5,
        ::g::Fuse::Android::Controls::CompoundButton_typeof(), offsetof(::g::Fuse::Android::Controls::CompoundButton__Listener, _s), 0,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Fuse::Android::Controls::CompoundButton__Listener::_javaClass2_, uFieldFlagsStatic);
    return type;
}

// public Listener(Fuse.Android.Controls.CompoundButton s) :209
void CompoundButton__Listener__ctor_5_fn(CompoundButton__Listener* __this, ::g::Fuse::Android::Controls::CompoundButton* s)
{
    __this->ctor_5(s);
}

// public Listener New(Fuse.Android.Controls.CompoundButton s) :209
void CompoundButton__Listener__New5_fn(::g::Fuse::Android::Controls::CompoundButton* s, CompoundButton__Listener** __retval)
{
    *__retval = CompoundButton__Listener::New5(s);
}

// public void onCheckedChanged(Android.android.widget.CompoundButton buttonView, bool isChecked) :215
void CompoundButton__Listener__onCheckedChanged_fn(CompoundButton__Listener* __this, ::g::Android::android::widget::CompoundButton* buttonView, bool* isChecked)
{
    __this->onCheckedChanged(buttonView, *isChecked);
}

jclass CompoundButton__Listener::_javaClass2_;

// public Listener(Fuse.Android.Controls.CompoundButton s) [instance] :209
void CompoundButton__Listener::ctor_5(::g::Fuse::Android::Controls::CompoundButton* s)
{
    uStackFrame __("Fuse.Android.Controls.CompoundButton.Listener", ".ctor(Fuse.Android.Controls.CompoundButton)");

    if (!_subclassed)
    {
        _subclassed = true;
        _javaClassName = ::STRINGS[14/*"com.Binding...*/];
    }

    ctor_4(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);

    if (::g::Android::Base::Primitives::ujclass::op_Equality(CompoundButton__Listener::_javaClass2(), ::g::Android::Base::Primitives::ujclass::Null()))
    {
        CompoundButton__Listener::_javaClass2() = ::g::Android::Base::JNI::LocalToGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[14/*"com.Binding...*/], false));
        JniHelper jni;
        BEGIN_REG_MTD(1);
        REG_MTD(0,"__n_onCheckedChanged","(JLandroid/widget/CompoundButton;ZJJ)V",Binding_Fuse_Android_Controls_CompoundButton_Listener__onCheckedChanged24924);
        COMMIT_REG_MTD(CompoundButton__Listener::_javaClass2());
    }

    jclass tmpCls = ::g::Android::Base::JNI::LoadClass3(_javaClassName, false);
    jmethodID mtd = ::g::Android::Base::JNI::GetMethodID(tmpCls, ::STRINGS[1/*"<init>"*/], ::STRINGS[5/*"(J)V"*/]);
    jobject tmp = ::g::Android::Base::JNI::NewObject1(tmpCls, mtd, ::g::Android::Base::Primitives::ujvalue::op_Implicit7((jlong)this->__obj_weak));
    ::g::Android::Base::JNI::CheckException();
    _javaObject = ::g::Android::Base::JNI::LocalToGlobalRef1(tmp);
    ::g::Android::Base::JNI::DeleteLocalRef(tmpCls);
    _s = s;
    uPtr(uPtr(_s)->_switch)->setOnCheckedChangeListener((uObject*)this);
}

// public void onCheckedChanged(Android.android.widget.CompoundButton buttonView, bool isChecked) [instance] :215
void CompoundButton__Listener::onCheckedChanged(::g::Android::android::widget::CompoundButton* buttonView, bool isChecked)
{
    uStackFrame __("Fuse.Android.Controls.CompoundButton.Listener", "onCheckedChanged(Android.android.widget.CompoundButton,bool)");

    if (!uPtr(_s)->_settingChecked)
        uPtr((::g::Fuse::Controls::ToggleControl*)uPtr(_s)->SemanticControl())->SetValue(isChecked, _s);
}

// public Listener New(Fuse.Android.Controls.CompoundButton s) [static] :209
CompoundButton__Listener* CompoundButton__Listener::New5(::g::Fuse::Android::Controls::CompoundButton* s)
{
    CompoundButton__Listener* obj1 = (CompoundButton__Listener*)uNew(CompoundButton__Listener_typeof());
    obj1->ctor_5(s);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\Controls\$.uno(1176)
// -----------------------------------------------------------------------

// public sealed extern class MapView :1176
// {
::g::Fuse::Android::Controls::Control_type* MapView_typeof()
{
    static uSStrong< ::g::Fuse::Android::Controls::Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 59;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(MapView);
    options.TypeSize = sizeof(::g::Fuse::Android::Controls::Control_type);
    type = (::g::Fuse::Android::Controls::Control_type*)uClassType::New("Fuse.Android.Controls.MapView", options);
    type->SetBase(::g::Fuse::Android::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::MapView_typeof()));
    type->fp_ctor_ = (void*)MapView__New1_fn;
    type->fp_Attach = (void(*)(::g::Fuse::Android::Controls::Control*))MapView__Attach_fn;
    type->fp_CreateInternal = (void(*)(::g::Fuse::Android::Controls::Element*, ::g::Android::android::view::View**))MapView__CreateInternal_fn;
    type->fp_Detach = (void(*)(::g::Fuse::Android::Controls::Control*))MapView__Detach_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::STRINGS[15] = uString::Const("Not implemented on this platform");
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Android::Controls::Control_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Android::Controls::Control_type, interface1));
    type->SetFields(59);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)MapView__New1_fn, 0, true, MapView_typeof(), 0));
    return type;
}

// public generated MapView() :1176
void MapView__ctor_3_fn(MapView* __this)
{
    __this->ctor_3();
}

// protected override sealed void Attach() :1184
void MapView__Attach_fn(MapView* __this)
{
}

// internal override sealed Android.android.view.View CreateInternal() :1179
void MapView__CreateInternal_fn(MapView* __this, ::g::Android::android::view::View** __retval)
{
    uStackFrame __("Fuse.Android.Controls.MapView", "CreateInternal()");
    U_THROW(::g::Uno::Exception::New2(::STRINGS[15/*"Not impleme...*/]));
}

// protected override sealed void Detach() :1189
void MapView__Detach_fn(MapView* __this)
{
}

// public generated MapView New() :1176
void MapView__New1_fn(MapView** __retval)
{
    *__retval = MapView::New1();
}

// public generated MapView() [instance] :1176
void MapView::ctor_3()
{
    uStackFrame __("Fuse.Android.Controls.MapView", ".ctor()");
    ctor_2();
}

// public generated MapView New() [static] :1176
MapView* MapView::New1()
{
    MapView* obj1 = (MapView*)uNew(MapView_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\Controls\$.uno(1801)
// -----------------------------------------------------------------------

// public sealed extern class PlainTextEdit :1801
// {
::g::Fuse::Android::Controls::TextEdit_type* PlainTextEdit_typeof()
{
    static uSStrong< ::g::Fuse::Android::Controls::TextEdit_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 66;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(PlainTextEdit);
    options.TypeSize = sizeof(::g::Fuse::Android::Controls::TextEdit_type);
    type = (::g::Fuse::Android::Controls::TextEdit_type*)uClassType::New("Fuse.Android.Controls.PlainTextEdit", options);
    type->SetBase(::g::Fuse::Android::Controls::TextEdit_typeof());
    type->fp_ctor_ = (void*)PlainTextEdit__New2_fn;
    type->fp_get_Plain = (void(*)(::g::Fuse::Android::Controls::TextEdit*, bool*))PlainTextEdit__get_Plain_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Android::Controls::TextEdit_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Android::Controls::TextEdit_type, interface1));
    type->SetFields(66);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)PlainTextEdit__New2_fn, 0, true, PlainTextEdit_typeof(), 0));
    return type;
}

// public generated PlainTextEdit() :1801
void PlainTextEdit__ctor_5_fn(PlainTextEdit* __this)
{
    __this->ctor_5();
}

// public generated PlainTextEdit New() :1801
void PlainTextEdit__New2_fn(PlainTextEdit** __retval)
{
    *__retval = PlainTextEdit::New2();
}

// protected override sealed bool get_Plain() :1803
void PlainTextEdit__get_Plain_fn(PlainTextEdit* __this, bool* __retval)
{
    uStackFrame __("Fuse.Android.Controls.PlainTextEdit", "get_Plain()");
    return *__retval = true, void();
}

// public generated PlainTextEdit() [instance] :1801
void PlainTextEdit::ctor_5()
{
    uStackFrame __("Fuse.Android.Controls.PlainTextEdit", ".ctor()");
    ctor_4();
}

// public generated PlainTextEdit New() [static] :1801
PlainTextEdit* PlainTextEdit::New2()
{
    PlainTextEdit* obj1 = (PlainTextEdit*)uNew(PlainTextEdit_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\Controls\$.uno(1364)
// -----------------------------------------------------------------------

// internal extern delegate void ProgressChangedHandler(object sender, int progress, bool fromUser) :1364
uDelegateType* ProgressChangedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Android.Controls.ProgressChangedHandler", 3, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Uno::Int_typeof(),
        ::g::Uno::Bool_typeof());
    return type;
}

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\Controls\$.uno(1366)
// -----------------------------------------------------------------------

// internal sealed extern class ProgressChangedListener :1366
// {
ProgressChangedListener_type* ProgressChangedListener_typeof()
{
    static uSStrong<ProgressChangedListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(ProgressChangedListener);
    options.TypeSize = sizeof(ProgressChangedListener_type);
    type = (ProgressChangedListener_type*)uClassType::New("Fuse.Android.Controls.ProgressChangedListener", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_onProgressChanged = (void(*)(uObject*, ::g::Android::android::widget::SeekBar*, int*, bool*))ProgressChangedListener__AndroidandroidwidgetSeekBarDLROnSeekBarChangeListeneronProgressChanged_fn;
    type->interface2.fp_onStartTrackingTouch = (void(*)(uObject*, ::g::Android::android::widget::SeekBar*))ProgressChangedListener__AndroidandroidwidgetSeekBarDLROnSeekBarChangeListeneronStartTrackingTouch_fn;
    type->interface2.fp_onStopTrackingTouch = (void(*)(uObject*, ::g::Android::android::widget::SeekBar*))ProgressChangedListener__AndroidandroidwidgetSeekBarDLROnSeekBarChangeListeneronStopTrackingTouch_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))ProgressChangedListener__UnoIDisposableDispose1_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::STRINGS[16] = uString::Const("com.Bindings.Binding_Fuse_Android_Controls_ProgressChangedListener");
    ::STRINGS[1] = uString::Const("<init>");
    ::STRINGS[5] = uString::Const("(J)V");
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[5] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[6] = ::g::Android::Base::Primitives::ujclass_typeof();
    ::TYPES[72] = ::g::Android::android::widget::SeekBarDLROnSeekBarChangeListener_typeof();
    ::TYPES[43] = ::g::Uno::IDisposable_typeof();
    ::TYPES[14] = ::g::Uno::Delegate_typeof();
    ::TYPES[73] = ::g::Fuse::Android::Controls::ProgressChangedHandler_typeof();
    ::TYPES[38] = uObject_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(ProgressChangedListener_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(ProgressChangedListener_type, interface1),
        ::g::Android::android::widget::SeekBarDLROnSeekBarChangeListener_typeof(), offsetof(ProgressChangedListener_type, interface2));
    type->SetFields(5,
        ::g::Fuse::Android::Controls::ProgressChangedHandler_typeof(), offsetof(::g::Fuse::Android::Controls::ProgressChangedListener, _handler), 0,
        ::g::Android::android::widget::SeekBar_typeof(), offsetof(::g::Fuse::Android::Controls::ProgressChangedListener, _seekBar), 0,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Fuse::Android::Controls::ProgressChangedListener::_javaClass2_, uFieldFlagsStatic);
    return type;
}

// private ProgressChangedListener(Android.android.widget.SeekBar seekBar, Fuse.Android.Controls.ProgressChangedHandler handler) :1382
void ProgressChangedListener__ctor_5_fn(ProgressChangedListener* __this, ::g::Android::android::widget::SeekBar* seekBar, uDelegate* handler)
{
    __this->ctor_5(seekBar, handler);
}

// public static Uno.IDisposable AddHandler(Android.android.widget.SeekBar seekBar, Fuse.Android.Controls.ProgressChangedHandler handler) :1372
void ProgressChangedListener__AddHandler_fn(::g::Android::android::widget::SeekBar* seekBar, uDelegate* handler, uObject** __retval)
{
    *__retval = ProgressChangedListener::AddHandler(seekBar, handler);
}

// private void Android.android.widget.SeekBarDLROnSeekBarChangeListener.onProgressChanged(Android.android.widget.SeekBar seekBar, int value, bool fromUser) :1391
void ProgressChangedListener__AndroidandroidwidgetSeekBarDLROnSeekBarChangeListeneronProgressChanged_fn(ProgressChangedListener* __this, ::g::Android::android::widget::SeekBar* seekBar, int* value, bool* fromUser)
{
    uStackFrame __("Fuse.Android.Controls.ProgressChangedListener", "Android.android.widget.SeekBarDLROnSeekBarChangeListener.onProgressChanged(Android.android.widget.SeekBar,int,bool)");
    int value_ = *value;
    bool fromUser_ = *fromUser;

    if (::g::Uno::Delegate::op_Inequality(__this->_handler, NULL))
        uPtr(__this->_handler)->Invoke(3, seekBar, uCRef<int>(value_), uCRef(fromUser_));
}

// private void Android.android.widget.SeekBarDLROnSeekBarChangeListener.onStartTrackingTouch(Android.android.widget.SeekBar sb) :1400
void ProgressChangedListener__AndroidandroidwidgetSeekBarDLROnSeekBarChangeListeneronStartTrackingTouch_fn(ProgressChangedListener* __this, ::g::Android::android::widget::SeekBar* sb)
{
}

// private void Android.android.widget.SeekBarDLROnSeekBarChangeListener.onStopTrackingTouch(Android.android.widget.SeekBar sb) :1403
void ProgressChangedListener__AndroidandroidwidgetSeekBarDLROnSeekBarChangeListeneronStopTrackingTouch_fn(ProgressChangedListener* __this, ::g::Android::android::widget::SeekBar* sb)
{
}

// private ProgressChangedListener New(Android.android.widget.SeekBar seekBar, Fuse.Android.Controls.ProgressChangedHandler handler) :1382
void ProgressChangedListener__New5_fn(::g::Android::android::widget::SeekBar* seekBar, uDelegate* handler, ProgressChangedListener** __retval)
{
    *__retval = ProgressChangedListener::New5(seekBar, handler);
}

// private void Uno.IDisposable.Dispose() :1406
void ProgressChangedListener__UnoIDisposableDispose1_fn(ProgressChangedListener* __this)
{
    uStackFrame __("Fuse.Android.Controls.ProgressChangedListener", "Uno.IDisposable.Dispose()");
    uPtr(__this->_seekBar)->setOnSeekBarChangeListener(NULL);
}

jclass ProgressChangedListener::_javaClass2_;

// private ProgressChangedListener(Android.android.widget.SeekBar seekBar, Fuse.Android.Controls.ProgressChangedHandler handler) [instance] :1382
void ProgressChangedListener::ctor_5(::g::Android::android::widget::SeekBar* seekBar, uDelegate* handler)
{
    uStackFrame __("Fuse.Android.Controls.ProgressChangedListener", ".ctor(Android.android.widget.SeekBar,Fuse.Android.Controls.ProgressChangedHandler)");

    if (!_subclassed)
    {
        _subclassed = true;
        _javaClassName = ::STRINGS[16/*"com.Binding...*/];
    }

    ctor_4(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);

    if (::g::Android::Base::Primitives::ujclass::op_Equality(ProgressChangedListener::_javaClass2(), ::g::Android::Base::Primitives::ujclass::Null()))
    {
        ProgressChangedListener::_javaClass2() = ::g::Android::Base::JNI::LocalToGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[16/*"com.Binding...*/], false));
        JniHelper jni;
        BEGIN_REG_MTD(3);
        REG_MTD(0,"__n_onProgressChanged","(JLandroid/widget/SeekBar;IZJJJ)V",Binding_Fuse_Android_Controls_ProgressChangedListener__onProgressChanged26181);
        REG_MTD(1,"__n_onStartTrackingTouch","(JLandroid/widget/SeekBar;J)V",Binding_Fuse_Android_Controls_ProgressChangedListener__onStartTrackingTouch26182);
        REG_MTD(2,"__n_onStopTrackingTouch","(JLandroid/widget/SeekBar;J)V",Binding_Fuse_Android_Controls_ProgressChangedListener__onStopTrackingTouch26183);
        COMMIT_REG_MTD(ProgressChangedListener::_javaClass2());
    }

    jclass tmpCls = ::g::Android::Base::JNI::LoadClass3(_javaClassName, false);
    jmethodID mtd = ::g::Android::Base::JNI::GetMethodID(tmpCls, ::STRINGS[1/*"<init>"*/], ::STRINGS[5/*"(J)V"*/]);
    jobject tmp = ::g::Android::Base::JNI::NewObject1(tmpCls, mtd, ::g::Android::Base::Primitives::ujvalue::op_Implicit7((jlong)this->__obj_weak));
    ::g::Android::Base::JNI::CheckException();
    _javaObject = ::g::Android::Base::JNI::LocalToGlobalRef1(tmp);
    ::g::Android::Base::JNI::DeleteLocalRef(tmpCls);
    _seekBar = seekBar;
    _handler = handler;
    uPtr(_seekBar)->setOnSeekBarChangeListener((uObject*)this);
}

// public static Uno.IDisposable AddHandler(Android.android.widget.SeekBar seekBar, Fuse.Android.Controls.ProgressChangedHandler handler) [static] :1372
uObject* ProgressChangedListener::AddHandler(::g::Android::android::widget::SeekBar* seekBar, uDelegate* handler)
{
    uStackFrame __("Fuse.Android.Controls.ProgressChangedListener", "AddHandler(Android.android.widget.SeekBar,Fuse.Android.Controls.ProgressChangedHandler)");
    return (uObject*)ProgressChangedListener::New5(seekBar, handler);
}

// private ProgressChangedListener New(Android.android.widget.SeekBar seekBar, Fuse.Android.Controls.ProgressChangedHandler handler) [static] :1382
ProgressChangedListener* ProgressChangedListener::New5(::g::Android::android::widget::SeekBar* seekBar, uDelegate* handler)
{
    ProgressChangedListener* obj1 = (ProgressChangedListener*)uNew(ProgressChangedListener_typeof());
    obj1->ctor_5(seekBar, handler);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\Controls\$.uno(289)
// ----------------------------------------------------------------------

// public sealed extern class RadioButton :289
// {
::g::Fuse::Android::Controls::CompoundButton_type* RadioButton_typeof()
{
    static uSStrong< ::g::Fuse::Android::Controls::CompoundButton_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 61;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(RadioButton);
    options.TypeSize = sizeof(::g::Fuse::Android::Controls::CompoundButton_type);
    type = (::g::Fuse::Android::Controls::CompoundButton_type*)uClassType::New("Fuse.Android.Controls.RadioButton", options);
    type->SetBase(::g::Fuse::Android::Controls::CompoundButton_typeof());
    type->fp_ctor_ = (void*)RadioButton__New1_fn;
    type->fp_CreateCompoundButton = (void(*)(::g::Fuse::Android::Controls::CompoundButton*, ::g::Android::android::widget::CompoundButton**))RadioButton__CreateCompoundButton_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::TYPES[26] = ::g::Android::android::widget::CompoundButton_typeof();
    ::TYPES[22] = ::g::Android::android::content::Context_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Android::Controls::CompoundButton_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Android::Controls::CompoundButton_type, interface1));
    type->SetFields(61);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)RadioButton__New1_fn, 0, true, RadioButton_typeof(), 0));
    return type;
}

// public generated RadioButton() :289
void RadioButton__ctor_4_fn(RadioButton* __this)
{
    __this->ctor_4();
}

// internal override sealed Android.android.widget.CompoundButton CreateCompoundButton() :291
void RadioButton__CreateCompoundButton_fn(RadioButton* __this, ::g::Android::android::widget::CompoundButton** __retval)
{
    uStackFrame __("Fuse.Android.Controls.RadioButton", "CreateCompoundButton()");
    return *__retval = ::g::Android::android::widget::Switch::New17(::g::Android::android::app::Activity::GetAppActivity()), void();
}

// public generated RadioButton New() :289
void RadioButton__New1_fn(RadioButton** __retval)
{
    *__retval = RadioButton::New1();
}

// public generated RadioButton() [instance] :289
void RadioButton::ctor_4()
{
    uStackFrame __("Fuse.Android.Controls.RadioButton", ".ctor()");
    ctor_3();
}

// public generated RadioButton New() [static] :289
RadioButton* RadioButton::New1()
{
    RadioButton* obj1 = (RadioButton*)uNew(RadioButton_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\Controls\$.uno(1214)
// -----------------------------------------------------------------------

// public sealed extern class Rectangle :1214
// {
::g::Fuse::Android::Controls::Shape_type* Rectangle_typeof()
{
    static uSStrong< ::g::Fuse::Android::Controls::Shape_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 62;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Rectangle);
    options.TypeSize = sizeof(::g::Fuse::Android::Controls::Shape_type);
    type = (::g::Fuse::Android::Controls::Shape_type*)uClassType::New("Fuse.Android.Controls.Rectangle", options);
    type->SetBase(::g::Fuse::Android::Controls::Shape_typeof()->MakeType(::g::Fuse::Controls::Rectangle_typeof()));
    type->fp_ctor_ = (void*)Rectangle__New1_fn;
    type->fp_Detach = (void(*)(::g::Fuse::Android::Controls::Control*))Rectangle__Detach_fn;
    type->fp_UpdateShapeDrawable = (void(*)(::g::Fuse::Android::Controls::Shape*, ::g::Android::android::graphics::drawable::ShapeDrawable*))Rectangle__UpdateShapeDrawable_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::TYPES[47] = ::g::Fuse::IViewport_typeof();
    ::TYPES[35] = ::g::Fuse::Node_typeof();
    ::TYPES[74] = ::g::Fuse::Android::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::Rectangle_typeof());
    ::TYPES[75] = ::g::Fuse::Controls::Rectangle_typeof();
    ::TYPES[21] = ::g::Android::java::lang::Object_typeof();
    ::TYPES[60] = ::g::Android::Runtime::FloatArray_typeof();
    ::TYPES[53] = ::g::Uno::Float4_typeof();
    ::TYPES[0] = ::g::Android::android::graphics::drawable::shapes::Shape_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Android::Controls::Shape_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Android::Controls::Shape_type, interface1));
    type->SetFields(61,
        ::g::Android::Runtime::FloatArray_typeof(), offsetof(::g::Fuse::Android::Controls::Rectangle, _cornerArray), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Rectangle__New1_fn, 0, true, Rectangle_typeof(), 0));
    return type;
}

// public generated Rectangle() :1214
void Rectangle__ctor_4_fn(Rectangle* __this)
{
    __this->ctor_4();
}

// protected override sealed void Detach() :1216
void Rectangle__Detach_fn(Rectangle* __this)
{
    uStackFrame __("Fuse.Android.Controls.Rectangle", "Detach()");
    __this->_cornerArray = NULL;
    ::g::Fuse::Android::Controls::Shape__Detach_fn(__this);
}

// public generated Rectangle New() :1214
void Rectangle__New1_fn(Rectangle** __retval)
{
    *__retval = Rectangle::New1();
}

// protected override sealed void UpdateShapeDrawable(Android.android.graphics.drawable.ShapeDrawable shape) :1223
void Rectangle__UpdateShapeDrawable_fn(Rectangle* __this, ::g::Android::android::graphics::drawable::ShapeDrawable* shape)
{
    uStackFrame __("Fuse.Android.Controls.Rectangle", "UpdateShapeDrawable(Android.android.graphics.drawable.ShapeDrawable)");
    float ind1;
    float ind2;
    float ind3;
    float ind4;
    float density = ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(uPtr((::g::Fuse::Controls::Rectangle*)__this->SemanticControl())->Viewport()), ::TYPES[47/*Fuse.IViewport*/]));
    ::g::Uno::Float4 cr = ::g::Uno::Float4__op_Multiply1(uPtr((::g::Fuse::Controls::Rectangle*)__this->SemanticControl())->CornerRadius(), density);

    if (::g::Android::java::lang::Object::op_Equality1(__this->_cornerArray, NULL))
        __this->_cornerArray = ::g::Android::Runtime::FloatArray::New6(8);

    ::g::Android::Runtime::FloatArray* r = __this->_cornerArray;
    uPtr(r)->Item(0, (ind1 = cr.X, uPtr(r)->Item(1, ind1), ind1));
    r->Item(2, (ind2 = cr.Y, r->Item(3, ind2), ind2));
    r->Item(4, (ind3 = cr.Z, r->Item(5, ind3), ind3));
    r->Item(6, (ind4 = cr.W, r->Item(7, ind4), ind4));
    ::g::Android::android::graphics::drawable::shapes::RoundRectShape* rrs = ::g::Android::android::graphics::drawable::shapes::RoundRectShape::New8(r, NULL, NULL);
    uPtr(shape)->setShape(rrs);
}

// public generated Rectangle() [instance] :1214
void Rectangle::ctor_4()
{
    uStackFrame __("Fuse.Android.Controls.Rectangle", ".ctor()");
    ctor_3();
}

// public generated Rectangle New() [static] :1214
Rectangle* Rectangle::New1()
{
    Rectangle* obj5 = (Rectangle*)uNew(Rectangle_typeof());
    obj5->ctor_4();
    return obj5;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\Controls\$.uno(1281)
// -----------------------------------------------------------------------

// public sealed extern class SeekBar :1281
// {
::g::Fuse::Android::Controls::Control_type* SeekBar_typeof()
{
    static uSStrong< ::g::Fuse::Android::Controls::Control_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 62;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(SeekBar);
    options.TypeSize = sizeof(::g::Fuse::Android::Controls::Control_type);
    type = (::g::Fuse::Android::Controls::Control_type*)uClassType::New("Fuse.Android.Controls.SeekBar", options);
    type->SetBase(::g::Fuse::Android::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::Slider_typeof()));
    type->fp_ctor_ = (void*)SeekBar__New1_fn;
    type->fp_Attach = (void(*)(::g::Fuse::Android::Controls::Control*))SeekBar__Attach_fn;
    type->fp_CreateInternal = (void(*)(::g::Fuse::Android::Controls::Element*, ::g::Android::android::view::View**))SeekBar__CreateInternal_fn;
    type->fp_Detach = (void(*)(::g::Fuse::Android::Controls::Control*))SeekBar__Detach_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::TYPES[76] = ::g::Fuse::Controls::RangeControl_typeof();
    ::TYPES[77] = ::g::Fuse::Android::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::Slider_typeof());
    ::TYPES[78] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof());
    ::TYPES[73] = ::g::Fuse::Android::Controls::ProgressChangedHandler_typeof();
    ::TYPES[21] = ::g::Android::java::lang::Object_typeof();
    ::TYPES[79] = ::g::Android::android::widget::SeekBar_typeof();
    ::TYPES[22] = ::g::Android::android::content::Context_typeof();
    ::TYPES[7] = ::g::Uno::Func1_typeof()->MakeType(::g::Android::android::view::MotionEvent_typeof(), ::g::Uno::Bool_typeof());
    ::TYPES[23] = ::g::Android::android::view::View_typeof();
    ::TYPES[80] = ::g::Uno::Double_typeof();
    ::TYPES[38] = uObject_typeof();
    ::TYPES[35] = ::g::Fuse::Node_typeof();
    ::TYPES[13] = ::g::Uno::Action_typeof();
    ::TYPES[81] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Double_typeof());
    ::TYPES[48] = ::g::Uno::Int_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Android::Controls::Control_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Android::Controls::Control_type, interface1));
    type->SetFields(59,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Android::Controls::SeekBar, _index), 0,
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Android::Controls::SeekBar, _progressChangedEvent), 0,
        ::g::Android::android::widget::SeekBar_typeof(), offsetof(::g::Fuse::Android::Controls::SeekBar, _seekBar), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)SeekBar__New1_fn, 0, true, SeekBar_typeof(), 0));
    return type;
}

// public generated SeekBar() :1281
void SeekBar__ctor_3_fn(SeekBar* __this)
{
    __this->ctor_3();
}

// protected override sealed void Attach() :1336
void SeekBar__Attach_fn(SeekBar* __this)
{
    uStackFrame __("Fuse.Android.Controls.SeekBar", "Attach()");
    __this->Create();
    uPtr((::g::Fuse::Controls::Slider*)__this->SemanticControl())->add_ValueChanged(uDelegate::New(::TYPES[78/*Uno.UX.ValueChangedHandler<double>*/], (void*)SeekBar__OnValueChanged_fn, __this));
    __this->_progressChangedEvent = ::g::Fuse::Android::Controls::ProgressChangedListener::AddHandler(__this->_seekBar, uDelegate::New(::TYPES[73/*Fuse.Android.Controls.ProgressChangedHandler*/], (void*)SeekBar__OnSeekBarProgressChanged_fn, __this));
    __this->UpdateValue(uPtr((::g::Fuse::Controls::Slider*)__this->SemanticControl())->Value());
}

// internal override sealed Android.android.view.View CreateInternal() :1288
void SeekBar__CreateInternal_fn(SeekBar* __this, ::g::Android::android::view::View** __retval)
{
    uStackFrame __("Fuse.Android.Controls.SeekBar", "CreateInternal()");

    if (::g::Android::java::lang::Object::op_Equality1(__this->_seekBar, NULL))
    {
        __this->_seekBar = ::g::Fuse::Android::Controls::AndroidSeekBar::New17(::g::Android::android::app::Activity::GetAppActivity(), uDelegate::New(::TYPES[7/*Uno.Func<Android.android.view.MotionEvent, bool>*/], (void*)SeekBar__OnTouchEvent_fn, __this));
        uPtr(__this->_seekBar)->setMax(1000);
    }

    return *__retval = __this->_seekBar, void();
}

// protected override sealed void Detach() :1344
void SeekBar__Detach_fn(SeekBar* __this)
{
    uStackFrame __("Fuse.Android.Controls.SeekBar", "Detach()");
    uPtr((::g::Fuse::Controls::Slider*)__this->SemanticControl())->remove_ValueChanged(uDelegate::New(::TYPES[78/*Uno.UX.ValueChangedHandler<double>*/], (void*)SeekBar__OnValueChanged_fn, __this));
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_progressChangedEvent), ::TYPES[43/*Uno.IDisposable*/]));
}

// private void LostCallback() :1328
void SeekBar__LostCallback_fn(SeekBar* __this)
{
    __this->LostCallback();
}

// public generated SeekBar New() :1281
void SeekBar__New1_fn(SeekBar** __retval)
{
    *__retval = SeekBar::New1();
}

// private void OnSeekBarProgressChanged(object sender, int value, bool fromUser) :1330
void SeekBar__OnSeekBarProgressChanged_fn(SeekBar* __this, uObject* sender, int* value, bool* fromUser)
{
    __this->OnSeekBarProgressChanged(sender, *value, *fromUser);
}

// private bool OnTouchEvent(Android.android.view.MotionEvent motionEvent) :1299
void SeekBar__OnTouchEvent_fn(SeekBar* __this, ::g::Android::android::view::MotionEvent* motionEvent, bool* __retval)
{
    *__retval = __this->OnTouchEvent(motionEvent);
}

// private void OnValueChanged(object sender, Uno.UX.ValueChangedArgs<double> args) :1350
void SeekBar__OnValueChanged_fn(SeekBar* __this, uObject* sender, ::g::Uno::UX::ValueChangedArgs* args)
{
    __this->OnValueChanged(sender, args);
}

// private void UpdateValue(double value) :1357
void SeekBar__UpdateValue_fn(SeekBar* __this, double* value)
{
    __this->UpdateValue(*value);
}

// public generated SeekBar() [instance] :1281
void SeekBar::ctor_3()
{
    uStackFrame __("Fuse.Android.Controls.SeekBar", ".ctor()");
    _index = -1;
    ctor_2();
}

// private void LostCallback() [instance] :1328
void SeekBar::LostCallback()
{
    uStackFrame __("Fuse.Android.Controls.SeekBar", "LostCallback()");
    _index = -1;
}

// private void OnSeekBarProgressChanged(object sender, int value, bool fromUser) [instance] :1330
void SeekBar::OnSeekBarProgressChanged(uObject* sender, int value, bool fromUser)
{
    uStackFrame __("Fuse.Android.Controls.SeekBar", "OnSeekBarProgressChanged(object,int,bool)");

    if (fromUser)
        uPtr((::g::Fuse::Controls::Slider*)SemanticControl())->SetValue(uPtr((::g::Fuse::Controls::Slider*)SemanticControl())->ValueFromRelative((double)value / 1000.0), this);
}

// private bool OnTouchEvent(Android.android.view.MotionEvent motionEvent) [instance] :1299
bool SeekBar::OnTouchEvent(::g::Android::android::view::MotionEvent* motionEvent)
{
    uStackFrame __("Fuse.Android.Controls.SeekBar", "OnTouchEvent(Android.android.view.MotionEvent)");
    int action = uPtr(motionEvent)->getActionMasked();

    switch (action)
    {
        case 0:
        case 5:
        {
            if (_index == -1)
            {
                _index = uPtr(motionEvent)->getPointerId(uPtr(motionEvent)->getPointerCount() - 1);
                ::g::Fuse::Input::Pointer::HardCapture(_index, this, this, uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)SeekBar__LostCallback_fn, this));
            }

            break;
        }
        case 1:
        case 3:
        case 6:
        {
            if (::g::Fuse::Input::Pointer::IsHardCaptured1(uPtr(motionEvent)->getPointerId(uPtr(motionEvent)->getPointerCount() - 1), this))
            {
                ::g::Fuse::Input::Pointer::ReleaseHardCapture(_index);
                _index = -1;
            }

            break;
        }
    }

    return _index != -1;
}

// private void OnValueChanged(object sender, Uno.UX.ValueChangedArgs<double> args) [instance] :1350
void SeekBar::OnValueChanged(uObject* sender, ::g::Uno::UX::ValueChangedArgs* args)
{
    uStackFrame __("Fuse.Android.Controls.SeekBar", "OnValueChanged(object,Uno.UX.ValueChangedArgs<double>)");
    double ret2;

    if ((args == NULL) || (uPtr(args)->Origin() == this))
        return;

    UpdateValue((::g::Uno::UX::ValueChangedArgs__get_Value_fn(uPtr(args), &ret2), ret2));
}

// private void UpdateValue(double value) [instance] :1357
void SeekBar::UpdateValue(double value)
{
    uStackFrame __("Fuse.Android.Controls.SeekBar", "UpdateValue(double)");
    int inc = (int)(uPtr((::g::Fuse::Controls::Slider*)SemanticControl())->ValueToRelative(value) * 1000.0);
    uPtr(_seekBar)->setProgress(inc);
}

// public generated SeekBar New() [static] :1281
SeekBar* SeekBar::New1()
{
    SeekBar* obj1 = (SeekBar*)uNew(SeekBar_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\Controls\$.uno(467)
// ----------------------------------------------------------------------

// internal sealed extern class ShaderFactory :467
// {
::g::Android::android::graphics::drawable::ShapeDrawableDLRShaderFactory_type* ShaderFactory_typeof()
{
    static uSStrong< ::g::Android::android::graphics::drawable::ShapeDrawableDLRShaderFactory_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ShaderFactory);
    options.TypeSize = sizeof(::g::Android::android::graphics::drawable::ShapeDrawableDLRShaderFactory_type);
    type = (::g::Android::android::graphics::drawable::ShapeDrawableDLRShaderFactory_type*)uClassType::New("Fuse.Android.Controls.ShaderFactory", options);
    type->SetBase(::g::Android::android::graphics::drawable::ShapeDrawableDLRShaderFactory_typeof());
    type->fp_resize = (void(*)(::g::Android::android::graphics::drawable::ShapeDrawableDLRShaderFactory*, int*, int*, ::g::Android::android::graphics::Shader**))ShaderFactory__resize_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::STRINGS[17] = uString::Const("com.Bindings.Binding_Fuse_Android_Controls_ShaderFactory");
    ::STRINGS[1] = uString::Const("<init>");
    ::STRINGS[5] = uString::Const("(J)V");
    ::STRINGS[18] = uString::Const("Unsupported brush type: ");
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[5] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[6] = ::g::Android::Base::Primitives::ujclass_typeof();
    ::TYPES[82] = ::g::Fuse::Drawing::GradientStop_typeof()->Array();
    ::TYPES[83] = ::g::Fuse::Drawing::LinearGradient_typeof();
    ::TYPES[84] = ::g::Android::Runtime::IntArray_typeof();
    ::TYPES[85] = ::g::Fuse::Drawing::GradientStop_typeof();
    ::TYPES[60] = ::g::Android::Runtime::FloatArray_typeof();
    ::TYPES[86] = ::g::Android::android::graphics::Shader_typeof();
    ::TYPES[27] = ::g::Uno::Float2_typeof();
    ::TYPES[87] = ::g::Android::android::graphics::ShaderDLRTileMode_typeof();
    ::TYPES[38] = uObject_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::android::graphics::drawable::ShapeDrawableDLRShaderFactory_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::android::graphics::drawable::ShapeDrawableDLRShaderFactory_type, interface1));
    type->SetFields(5,
        ::g::Fuse::Drawing::Brush_typeof(), offsetof(::g::Fuse::Android::Controls::ShaderFactory, _brush), 0,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Fuse::Android::Controls::ShaderFactory::_javaClass3_, uFieldFlagsStatic);
    return type;
}

// public ShaderFactory(Fuse.Drawing.Brush brush) :472
void ShaderFactory__ctor_7_fn(ShaderFactory* __this, ::g::Fuse::Drawing::Brush* brush)
{
    __this->ctor_7(brush);
}

// private Android.android.graphics.Shader LinearGradientShader(Fuse.Drawing.LinearGradient linearGradient) :485
void ShaderFactory__LinearGradientShader_fn(ShaderFactory* __this, ::g::Fuse::Drawing::LinearGradient* linearGradient, ::g::Android::android::graphics::Shader** __retval)
{
    *__retval = __this->LinearGradientShader(linearGradient);
}

// public ShaderFactory New(Fuse.Drawing.Brush brush) :472
void ShaderFactory__New5_fn(::g::Fuse::Drawing::Brush* brush, ShaderFactory** __retval)
{
    *__retval = ShaderFactory::New5(brush);
}

// public override sealed Android.android.graphics.Shader resize(int width, int height) :477
void ShaderFactory__resize_fn(ShaderFactory* __this, int* width, int* height, ::g::Android::android::graphics::Shader** __retval)
{
    uStackFrame __("Fuse.Android.Controls.ShaderFactory", "resize(int,int)");

    if (uIs(__this->_brush, ::TYPES[83/*Fuse.Drawing.LinearGradient*/]))
        return *__retval = __this->LinearGradientShader(uCast< ::g::Fuse::Drawing::LinearGradient*>(__this->_brush, ::TYPES[83/*Fuse.Drawing.LinearGradient*/])), void();

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[18/*"Unsupported...*/], __this->_brush)));
}

jclass ShaderFactory::_javaClass3_;

// public ShaderFactory(Fuse.Drawing.Brush brush) [instance] :472
void ShaderFactory::ctor_7(::g::Fuse::Drawing::Brush* brush)
{
    uStackFrame __("Fuse.Android.Controls.ShaderFactory", ".ctor(Fuse.Drawing.Brush)");

    if (!_subclassed)
    {
        _subclassed = true;
        _javaClassName = ::STRINGS[17/*"com.Binding...*/];
    }

    ctor_6(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);

    if (::g::Android::Base::Primitives::ujclass::op_Equality(ShaderFactory::_javaClass3(), ::g::Android::Base::Primitives::ujclass::Null()))
    {
        ShaderFactory::_javaClass3() = ::g::Android::Base::JNI::LocalToGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[17/*"com.Binding...*/], false));
        JniHelper jni;
        BEGIN_REG_MTD(1);
        REG_MTD(0,"__n_resize","(JIIJJ)Landroid/graphics/Shader;",Binding_Fuse_Android_Controls_ShaderFactory__resize6361);
        COMMIT_REG_MTD(ShaderFactory::_javaClass3());
    }

    jclass tmpCls = ::g::Android::Base::JNI::LoadClass3(_javaClassName, false);
    jmethodID mtd = ::g::Android::Base::JNI::GetMethodID(tmpCls, ::STRINGS[1/*"<init>"*/], ::STRINGS[5/*"(J)V"*/]);
    jobject tmp = ::g::Android::Base::JNI::NewObject1(tmpCls, mtd, ::g::Android::Base::Primitives::ujvalue::op_Implicit7((jlong)this->__obj_weak));
    ::g::Android::Base::JNI::CheckException();
    _javaObject = ::g::Android::Base::JNI::LocalToGlobalRef1(tmp);
    ::g::Android::Base::JNI::DeleteLocalRef(tmpCls);
    _brush = brush;
}

// private Android.android.graphics.Shader LinearGradientShader(Fuse.Drawing.LinearGradient linearGradient) [instance] :485
::g::Android::android::graphics::Shader* ShaderFactory::LinearGradientShader(::g::Fuse::Drawing::LinearGradient* linearGradient)
{
    uStackFrame __("Fuse.Android.Controls.ShaderFactory", "LinearGradientShader(Fuse.Drawing.LinearGradient)");
    ::g::Android::Runtime::IntArray* colors = ::g::Android::Runtime::IntArray::New6(uPtr(uPtr(linearGradient)->SortedStops())->Length());
    ::g::Android::Runtime::FloatArray* positions = ::g::Android::Runtime::FloatArray::New6(uPtr(linearGradient->SortedStops())->Length());

    for (int i = 0; i < uPtr(linearGradient->SortedStops())->Length(); i++)
    {
        ::g::Fuse::Drawing::GradientStop* gradientStop = uPtr(uPtr(linearGradient)->SortedStops())->Strong< ::g::Fuse::Drawing::GradientStop*>(i);
        uPtr(colors)->Item(i, ::g::Fuse::Android::Helpers::EncodeColor(uPtr(gradientStop)->Color()));
        uPtr(positions)->Item(i, gradientStop->Offset());
    }

    return ::g::Android::android::graphics::LinearGradient::New8(linearGradient->StartPoint().X, linearGradient->StartPoint().Y, linearGradient->EndPoint().X, linearGradient->EndPoint().Y, colors, positions, ::g::Android::android::graphics::ShaderDLRTileMode::CLAMP());
}

// public ShaderFactory New(Fuse.Drawing.Brush brush) [static] :472
ShaderFactory* ShaderFactory::New5(::g::Fuse::Drawing::Brush* brush)
{
    ShaderFactory* obj1 = (ShaderFactory*)uNew(ShaderFactory_typeof());
    obj1->ctor_7(brush);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\Controls\$.uno(1434)
// -----------------------------------------------------------------------

// public abstract extern class Shape<T> :1434
// {
Shape_type* Shape_typeof()
{
    static uSStrong<Shape_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 61;
    options.GenericCount = 1;
    options.InterfaceCount = 2;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(Shape);
    options.TypeSize = sizeof(Shape_type);
    type = (Shape_type*)uClassType::New("Fuse.Android.Controls.Shape`1", options);
    type->SetBase(::g::Fuse::Android::Controls::Control_typeof()->MakeType(type->T(0)));
    type->fp_Attach = (void(*)(::g::Fuse::Android::Controls::Control*))Shape__Attach_fn;
    type->fp_CreateInternal = (void(*)(::g::Fuse::Android::Controls::Element*, ::g::Android::android::view::View**))Shape__CreateInternal_fn;
    type->fp_Detach = (void(*)(::g::Fuse::Android::Controls::Control*))Shape__Detach_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::STRINGS[8] = uString::Const("");
    ::STRINGS[7] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Android\\0.24.7\\Controls\\$.uno");
    ::STRINGS[19] = uString::Const("SetBrush");
    ::TYPES[88] = ::g::Fuse::Controls::Shape_typeof();
    ::TYPES[89] = ::g::Fuse::Android::Controls::Control_typeof();
    ::TYPES[13] = ::g::Uno::Action_typeof();
    ::TYPES[22] = ::g::Android::android::content::Context_typeof();
    ::TYPES[90] = ::g::Android::android::graphics::drawable::ShapeDrawable_typeof();
    ::TYPES[21] = ::g::Android::java::lang::Object_typeof();
    ::TYPES[91] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[92] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof());
    ::TYPES[93] = ::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::android::graphics::drawable::Drawable_typeof());
    ::TYPES[3] = ::g::Android::android::graphics::drawable::Drawable_typeof();
    ::TYPES[65] = ::g::Android::android::os::BuildDLRVERSION_typeof();
    ::TYPES[94] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof());
    ::TYPES[95] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Drawing::Stroke_typeof());
    ::TYPES[96] = ::g::Fuse::Drawing::SolidColor_typeof();
    ::TYPES[97] = ::g::Fuse::Drawing::StaticSolidColor_typeof();
    ::TYPES[38] = uObject_typeof();
    ::TYPES[48] = ::g::Uno::Int_typeof();
    ::TYPES[53] = ::g::Uno::Float4_typeof();
    ::TYPES[98] = ::g::Fuse::Drawing::Stroke_typeof();
    ::TYPES[99] = ::g::Android::android::graphics::PaintDLRStyle_typeof();
    ::TYPES[47] = ::g::Fuse::IViewport_typeof();
    ::TYPES[35] = ::g::Fuse::Node_typeof();
    type->SetPrecalc(
        ::TYPES[89/*Fuse.Android.Controls.Control`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(Shape_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(Shape_type, interface1));
    type->SetFields(59,
        ::g::Android::android::graphics::drawable::LayerDrawable_typeof(), offsetof(::g::Fuse::Android::Controls::Shape, _drawable), 0,
        ::g::Android::android::view::View_typeof(), offsetof(::g::Fuse::Android::Controls::Shape, _shapeView), 0);
    return type;
}

// protected generated Shape() :1434
void Shape__ctor_3_fn(Shape* __this)
{
    __this->ctor_3();
}

// protected override sealed void Attach() :1445
void Shape__Attach_fn(Shape* __this)
{
    uType* __types[] = {
        __this->__type->GetBase(Shape_typeof())->Precalced(0/*Fuse.Android.Controls.Control<T>*/),
        __this->__type->GetBase(Shape_typeof())->T(0),
    };
    uStackFrame __("Fuse.Android.Controls.Shape`1", "Attach()");
    uPtr((::g::Fuse::Controls::Shape*)__this->SemanticControl())->add_ShapeChanged(uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)Shape__OnShapeChanged_fn, __this));
    __this->OnShapeChanged();
}

// internal override sealed Android.android.view.View CreateInternal() :1439
void Shape__CreateInternal_fn(Shape* __this, ::g::Android::android::view::View** __retval)
{
    uStackFrame __("Fuse.Android.Controls.Shape`1", "CreateInternal()");
    __this->_shapeView = ::g::Android::android::view::View::New5(::g::Android::android::app::Activity::GetAppActivity());
    return *__retval = __this->_shapeView, void();
}

// protected override void Detach() :1451
void Shape__Detach_fn(Shape* __this)
{
    uType* __types[] = {
        __this->__type->GetBase(Shape_typeof())->Precalced(0/*Fuse.Android.Controls.Control<T>*/),
        __this->__type->GetBase(Shape_typeof())->T(0),
    };
    uStackFrame __("Fuse.Android.Controls.Shape`1", "Detach()");
    uPtr((::g::Fuse::Controls::Shape*)__this->SemanticControl())->remove_ShapeChanged(uDelegate::New(::TYPES[13/*Uno.Action*/], (void*)Shape__OnShapeChanged_fn, __this));
}

// private Android.android.graphics.drawable.ShapeDrawable GetLayer(int index) :1459
void Shape__GetLayer_fn(Shape* __this, int* index, ::g::Android::android::graphics::drawable::ShapeDrawable** __retval)
{
    *__retval = __this->GetLayer(*index);
}

// private void OnShapeChanged() :1492
void Shape__OnShapeChanged_fn(Shape* __this)
{
    __this->OnShapeChanged();
}

// private void SetBrush(Android.android.graphics.drawable.ShapeDrawable drawable, Fuse.Drawing.Brush brush) :1464
void Shape__SetBrush_fn(Shape* __this, ::g::Android::android::graphics::drawable::ShapeDrawable* drawable, ::g::Fuse::Drawing::Brush* brush)
{
    __this->SetBrush(drawable, brush);
}

// private void SetStroke(Android.android.graphics.drawable.ShapeDrawable drawable, Fuse.Drawing.Stroke stroke) :1482
void Shape__SetStroke_fn(Shape* __this, ::g::Android::android::graphics::drawable::ShapeDrawable* drawable, ::g::Fuse::Drawing::Stroke* stroke)
{
    __this->SetStroke(drawable, stroke);
}

// protected generated Shape() [instance] :1434
void Shape::ctor_3()
{
    uStackFrame __("Fuse.Android.Controls.Shape`1", ".ctor()");
    ctor_2();
}

// private Android.android.graphics.drawable.ShapeDrawable GetLayer(int index) [instance] :1459
::g::Android::android::graphics::drawable::ShapeDrawable* Shape::GetLayer(int index)
{
    uStackFrame __("Fuse.Android.Controls.Shape`1", "GetLayer(int)");
    return uAs< ::g::Android::android::graphics::drawable::ShapeDrawable*>(uPtr(_drawable)->getDrawable(index), ::TYPES[90/*Android.android.graphics.drawable.ShapeDrawable*/]);
}

// private void OnShapeChanged() [instance] :1492
void Shape::OnShapeChanged()
{
    uType* __types[] = {
        __type->GetBase(Shape_typeof())->Precalced(0/*Fuse.Android.Controls.Control<T>*/),
        __type->GetBase(Shape_typeof())->T(0),
    };
    uStackFrame __("Fuse.Android.Controls.Shape`1", "OnShapeChanged()");
    ::g::Fuse::Drawing::Brush* ret1;
    ::g::Fuse::Drawing::Stroke* ret2;

    if (::g::Android::java::lang::Object::op_Equality1(_shapeView, NULL))
        return;

    int layerCount = (uPtr((::g::Fuse::Controls::Shape*)SemanticControl())->HasFills() ? ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr((::g::Fuse::Controls::Shape*)SemanticControl())->Fills()), ::TYPES[91/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/])) : 0) + (uPtr((::g::Fuse::Controls::Shape*)SemanticControl())->HasStrokes() ? ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr((::g::Fuse::Controls::Shape*)SemanticControl())->Strokes()), ::TYPES[92/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/])) : 0);

    if (::g::Android::java::lang::Object::op_Equality1(_drawable, NULL) || (layerCount != uPtr(_drawable)->getNumberOfLayers()))
    {
        ::g::Android::Runtime::ObjectArray* list = (::g::Android::Runtime::ObjectArray*)::g::Android::Runtime::ObjectArray::New6(::TYPES[93/*Android.Runtime.ObjectArray<Android.android.graphics.drawable.Drawable>*/], layerCount);

        for (int i = 0; i < layerCount; ++i)
            list->Item(i, ::g::Android::android::graphics::drawable::ShapeDrawable::New5());

        _drawable = ::g::Android::android::graphics::drawable::LayerDrawable::New6(list);

        if (::g::Android::android::os::BuildDLRVERSION::SDK_INT() >= 17)
            uPtr(_shapeView)->setBackground(_drawable);
        else
            uPtr(_shapeView)->setBackgroundDrawable(_drawable);
    }

    for (int i1 = 0; i1 < layerCount; ++i1)
        UpdateShapeDrawable(GetLayer(i1));

    int layer = 0;

    if (uPtr((::g::Fuse::Controls::Shape*)SemanticControl())->HasFills())
    {
        uObject* fills = uPtr((::g::Fuse::Controls::Shape*)SemanticControl())->Fills();

        for (int i2 = ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(fills), ::TYPES[91/*Uno.Collections.ICollection<Fuse.Drawing.Brush>*/])) - 1; i2 >= 0; --i2)
            SetBrush(GetLayer(layer++), (::g::Uno::Collections::IList::get_Item_ex(uInterface(fills, ::TYPES[94/*Uno.Collections.IList<Fuse.Drawing.Brush>*/]), uCRef<int>(i2), &ret1), ret1));
    }

    if (uPtr((::g::Fuse::Controls::Shape*)SemanticControl())->HasStrokes())
    {
        uObject* strokes = uPtr((::g::Fuse::Controls::Shape*)SemanticControl())->Strokes();

        for (int i3 = ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(strokes), ::TYPES[92/*Uno.Collections.ICollection<Fuse.Drawing.Stroke>*/])) - 1; i3 >= 0; --i3)
            SetStroke(GetLayer(layer++), (::g::Uno::Collections::IList::get_Item_ex(uInterface(strokes, ::TYPES[95/*Uno.Collections.IList<Fuse.Drawing.Stroke>*/]), uCRef<int>(i3), &ret2), ret2));
    }
}

// private void SetBrush(Android.android.graphics.drawable.ShapeDrawable drawable, Fuse.Drawing.Brush brush) [instance] :1464
void Shape::SetBrush(::g::Android::android::graphics::drawable::ShapeDrawable* drawable, ::g::Fuse::Drawing::Brush* brush)
{
    uStackFrame __("Fuse.Android.Controls.Shape`1", "SetBrush(Android.android.graphics.drawable.ShapeDrawable,Fuse.Drawing.Brush)");
    ::g::Android::android::graphics::Paint* p = uPtr(drawable)->getPaint();
    ::g::Uno::Float4 c = ::g::Uno::Float4__New1(0.0f);
    ::g::Fuse::Drawing::SolidColor* sc = uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[96/*Fuse.Drawing.SolidColor*/]);

    if (sc != NULL)
        c = uPtr(sc)->Color();

    ::g::Fuse::Drawing::StaticSolidColor* ssc = uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[97/*Fuse.Drawing.StaticSolidColor*/]);

    if (ssc != NULL)
        c = uPtr(ssc)->Color();

    if ((sc == NULL) && (ssc == NULL))
        ::g::Fuse::Diagnostics::Unsupported(::STRINGS[8/*""*/], brush, ::STRINGS[7/*"C:\\Program...*/], 1477, ::STRINGS[19/*"SetBrush"*/]);

    uPtr(p)->setARGB((int)(c.W * 255.0f), (int)(c.X * 255.0f), (int)(c.Y * 255.0f), (int)(c.Z * 255.0f));
}

// private void SetStroke(Android.android.graphics.drawable.ShapeDrawable drawable, Fuse.Drawing.Stroke stroke) [instance] :1482
void Shape::SetStroke(::g::Android::android::graphics::drawable::ShapeDrawable* drawable, ::g::Fuse::Drawing::Stroke* stroke)
{
    uType* __types[] = {
        __type->GetBase(Shape_typeof())->Precalced(0/*Fuse.Android.Controls.Control<T>*/),
        __type->GetBase(Shape_typeof())->T(0),
    };
    uStackFrame __("Fuse.Android.Controls.Shape`1", "SetStroke(Android.android.graphics.drawable.ShapeDrawable,Fuse.Drawing.Stroke)");

    if (uPtr(stroke)->Brush() != NULL)
        SetBrush(drawable, uPtr(stroke)->Brush());

    ::g::Android::android::graphics::Paint* p = uPtr(drawable)->getPaint();
    uPtr(p)->setStyle(::g::Android::android::graphics::PaintDLRStyle::STROKE());
    p->setStrokeWidth(stroke->Width() * ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(uPtr((::g::Fuse::Controls::Shape*)SemanticControl())->Viewport()), ::TYPES[47/*Fuse.IViewport*/])));
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\Controls\$.uno(271)
// ----------------------------------------------------------------------

// public sealed extern class Switch :271
// {
::g::Fuse::Android::Controls::CompoundButton_type* Switch_typeof()
{
    static uSStrong< ::g::Fuse::Android::Controls::CompoundButton_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 61;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(Switch);
    options.TypeSize = sizeof(::g::Fuse::Android::Controls::CompoundButton_type);
    type = (::g::Fuse::Android::Controls::CompoundButton_type*)uClassType::New("Fuse.Android.Controls.Switch", options);
    type->SetBase(::g::Fuse::Android::Controls::CompoundButton_typeof());
    type->fp_ctor_ = (void*)Switch__New1_fn;
    type->fp_CreateCompoundButton = (void(*)(::g::Fuse::Android::Controls::CompoundButton*, ::g::Android::android::widget::CompoundButton**))Switch__CreateCompoundButton_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::TYPES[26] = ::g::Android::android::widget::CompoundButton_typeof();
    ::TYPES[22] = ::g::Android::android::content::Context_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Android::Controls::CompoundButton_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Android::Controls::CompoundButton_type, interface1));
    type->SetFields(61);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)Switch__New1_fn, 0, true, Switch_typeof(), 0));
    return type;
}

// public generated Switch() :271
void Switch__ctor_4_fn(Switch* __this)
{
    __this->ctor_4();
}

// internal override sealed Android.android.widget.CompoundButton CreateCompoundButton() :273
void Switch__CreateCompoundButton_fn(Switch* __this, ::g::Android::android::widget::CompoundButton** __retval)
{
    uStackFrame __("Fuse.Android.Controls.Switch", "CreateCompoundButton()");
    return *__retval = ::g::Android::android::widget::Switch::New17(::g::Android::android::app::Activity::GetAppActivity()), void();
}

// public generated Switch New() :271
void Switch__New1_fn(Switch** __retval)
{
    *__retval = Switch::New1();
}

// public generated Switch() [instance] :271
void Switch::ctor_4()
{
    uStackFrame __("Fuse.Android.Controls.Switch", ".ctor()");
    ctor_3();
}

// public generated Switch New() [static] :271
Switch* Switch::New1()
{
    Switch* obj1 = (Switch*)uNew(Switch_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\Controls\$.uno(1545)
// -----------------------------------------------------------------------

// internal extern delegate void TextChangedHandler(object sender, string text) :1545
uDelegateType* TextChangedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Android.Controls.TextChangedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Uno::String_typeof());
    return type;
}

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\Controls\$.uno(1547)
// -----------------------------------------------------------------------

// internal sealed extern class TextChangedListener :1547
// {
TextChangedListener_type* TextChangedListener_typeof()
{
    static uSStrong<TextChangedListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(TextChangedListener);
    options.TypeSize = sizeof(TextChangedListener_type);
    type = (TextChangedListener_type*)uClassType::New("Fuse.Android.Controls.TextChangedListener", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface2.fp_onTextChanged = (void(*)(uObject*, uObject*, int*, int*, int*))TextChangedListener__AndroidandroidtextTextWatcheronTextChanged_fn;
    type->interface2.fp_beforeTextChanged = (void(*)(uObject*, uObject*, int*, int*, int*))TextChangedListener__AndroidandroidtextTextWatcherbeforeTextChanged_fn;
    type->interface2.fp_afterTextChanged = (void(*)(uObject*, uObject*))TextChangedListener__AndroidandroidtextTextWatcherafterTextChanged_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))TextChangedListener__UnoIDisposableDispose1_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::STRINGS[20] = uString::Const("com.Bindings.Binding_Fuse_Android_Controls_TextChangedListener");
    ::STRINGS[1] = uString::Const("<init>");
    ::STRINGS[5] = uString::Const("(J)V");
    ::STRINGS[8] = uString::Const("");
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[5] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[6] = ::g::Android::Base::Primitives::ujclass_typeof();
    ::TYPES[100] = ::g::Android::android::text::TextWatcher_typeof();
    ::TYPES[43] = ::g::Uno::IDisposable_typeof();
    ::TYPES[14] = ::g::Uno::Delegate_typeof();
    ::TYPES[101] = ::g::Fuse::Android::Controls::TextChangedHandler_typeof();
    ::TYPES[38] = uObject_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(TextChangedListener_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(TextChangedListener_type, interface1),
        ::g::Android::android::text::TextWatcher_typeof(), offsetof(TextChangedListener_type, interface2));
    type->SetFields(5,
        ::g::Fuse::Android::Controls::TextChangedHandler_typeof(), offsetof(::g::Fuse::Android::Controls::TextChangedListener, _handler), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Android::Controls::TextChangedListener, _isDisposed), 0,
        ::g::Android::android::widget::TextView_typeof(), offsetof(::g::Fuse::Android::Controls::TextChangedListener, _textView), 0,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Fuse::Android::Controls::TextChangedListener::_javaClass2_, uFieldFlagsStatic);
    return type;
}

// private TextChangedListener(Android.android.widget.TextView textView, Fuse.Android.Controls.TextChangedHandler handler) :1563
void TextChangedListener__ctor_5_fn(TextChangedListener* __this, ::g::Android::android::widget::TextView* textView, uDelegate* handler)
{
    __this->ctor_5(textView, handler);
}

// public static Uno.IDisposable AddHandler(Android.android.widget.TextView textView, Fuse.Android.Controls.TextChangedHandler handler) :1553
void TextChangedListener__AddHandler_fn(::g::Android::android::widget::TextView* textView, uDelegate* handler, uObject** __retval)
{
    *__retval = TextChangedListener::AddHandler(textView, handler);
}

// private void Android.android.text.TextWatcher.afterTextChanged(Android.android.text.Editable arg0) :1582
void TextChangedListener__AndroidandroidtextTextWatcherafterTextChanged_fn(TextChangedListener* __this, uObject* arg0)
{
}

// private void Android.android.text.TextWatcher.beforeTextChanged(Android.java.lang.CharSequence cs, int start, int count, int after) :1579
void TextChangedListener__AndroidandroidtextTextWatcherbeforeTextChanged_fn(TextChangedListener* __this, uObject* cs, int* start, int* count, int* after)
{
}

// private void Android.android.text.TextWatcher.onTextChanged(Android.java.lang.CharSequence cs, int start, int before, int arg3) :1572
void TextChangedListener__AndroidandroidtextTextWatcheronTextChanged_fn(TextChangedListener* __this, uObject* cs, int* start, int* before, int* arg3)
{
    uStackFrame __("Fuse.Android.Controls.TextChangedListener", "Android.android.text.TextWatcher.onTextChanged(Android.java.lang.CharSequence,int,int,int)");

    if (::g::Uno::Delegate::op_Inequality(__this->_handler, NULL))
        uPtr(__this->_handler)->Invoke(2, (::g::Android::android::widget::TextView*)__this->_textView, (cs != NULL) ? (uString*)::g::Android::java::lang::String::op_Implicit(::g::Android::java::lang::CharSequence::toString(uInterface(uPtr(cs), ::TYPES[25/*Android.java.lang.CharSequence*/]))) : ::STRINGS[8/*""*/]);
}

// private TextChangedListener New(Android.android.widget.TextView textView, Fuse.Android.Controls.TextChangedHandler handler) :1563
void TextChangedListener__New5_fn(::g::Android::android::widget::TextView* textView, uDelegate* handler, TextChangedListener** __retval)
{
    *__retval = TextChangedListener::New5(textView, handler);
}

// private void Uno.IDisposable.Dispose() :1586
void TextChangedListener__UnoIDisposableDispose1_fn(TextChangedListener* __this)
{
    uStackFrame __("Fuse.Android.Controls.TextChangedListener", "Uno.IDisposable.Dispose()");

    if (!__this->_isDisposed)
    {
        uPtr(__this->_textView)->removeTextChangedListener((uObject*)__this);
        __this->_isDisposed = true;
    }
}

jclass TextChangedListener::_javaClass2_;

// private TextChangedListener(Android.android.widget.TextView textView, Fuse.Android.Controls.TextChangedHandler handler) [instance] :1563
void TextChangedListener::ctor_5(::g::Android::android::widget::TextView* textView, uDelegate* handler)
{
    uStackFrame __("Fuse.Android.Controls.TextChangedListener", ".ctor(Android.android.widget.TextView,Fuse.Android.Controls.TextChangedHandler)");

    if (!_subclassed)
    {
        _subclassed = true;
        _javaClassName = ::STRINGS[20/*"com.Binding...*/];
    }

    ctor_4(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);

    if (::g::Android::Base::Primitives::ujclass::op_Equality(TextChangedListener::_javaClass2(), ::g::Android::Base::Primitives::ujclass::Null()))
    {
        TextChangedListener::_javaClass2() = ::g::Android::Base::JNI::LocalToGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[20/*"com.Binding...*/], false));
        JniHelper jni;
        BEGIN_REG_MTD(3);
        REG_MTD(0,"__n_onTextChanged","(JLjava/lang/CharSequence;IIIJJJJ)V",Binding_Fuse_Android_Controls_TextChangedListener__onTextChanged20152);
        REG_MTD(1,"__n_beforeTextChanged","(JLjava/lang/CharSequence;IIIJJJJ)V",Binding_Fuse_Android_Controls_TextChangedListener__beforeTextChanged20151);
        REG_MTD(2,"__n_afterTextChanged","(JLandroid/text/Editable;J)V",Binding_Fuse_Android_Controls_TextChangedListener__afterTextChanged20153);
        COMMIT_REG_MTD(TextChangedListener::_javaClass2());
    }

    jclass tmpCls = ::g::Android::Base::JNI::LoadClass3(_javaClassName, false);
    jmethodID mtd = ::g::Android::Base::JNI::GetMethodID(tmpCls, ::STRINGS[1/*"<init>"*/], ::STRINGS[5/*"(J)V"*/]);
    jobject tmp = ::g::Android::Base::JNI::NewObject1(tmpCls, mtd, ::g::Android::Base::Primitives::ujvalue::op_Implicit7((jlong)this->__obj_weak));
    ::g::Android::Base::JNI::CheckException();
    _javaObject = ::g::Android::Base::JNI::LocalToGlobalRef1(tmp);
    ::g::Android::Base::JNI::DeleteLocalRef(tmpCls);
    _textView = textView;
    _handler = handler;
    uPtr(_textView)->addTextChangedListener((uObject*)this);
}

// public static Uno.IDisposable AddHandler(Android.android.widget.TextView textView, Fuse.Android.Controls.TextChangedHandler handler) [static] :1553
uObject* TextChangedListener::AddHandler(::g::Android::android::widget::TextView* textView, uDelegate* handler)
{
    uStackFrame __("Fuse.Android.Controls.TextChangedListener", "AddHandler(Android.android.widget.TextView,Fuse.Android.Controls.TextChangedHandler)");
    return (uObject*)TextChangedListener::New5(textView, handler);
}

// private TextChangedListener New(Android.android.widget.TextView textView, Fuse.Android.Controls.TextChangedHandler handler) [static] :1563
TextChangedListener* TextChangedListener::New5(::g::Android::android::widget::TextView* textView, uDelegate* handler)
{
    TextChangedListener* obj1 = (TextChangedListener*)uNew(TextChangedListener_typeof());
    obj1->ctor_5(textView, handler);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\Controls\$.uno(1611)
// -----------------------------------------------------------------------

// public extern class TextEdit :1611
// {
TextEdit_type* TextEdit_typeof()
{
    static uSStrong<TextEdit_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 66;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TextEdit);
    options.TypeSize = sizeof(TextEdit_type);
    type = (TextEdit_type*)uClassType::New("Fuse.Android.Controls.TextEdit", options);
    type->SetBase(::g::Fuse::Android::Controls::TextViewBase_typeof()->MakeType(::g::Fuse::Controls::TextEdit_typeof()));
    type->fp_ctor_ = (void*)TextEdit__New1_fn;
    type->fp_Attach = (void(*)(::g::Fuse::Android::Controls::Control*))TextEdit__Attach_fn;
    type->fp_CreateTextView = (void(*)(::g::Fuse::Android::Controls::TextViewBase*, ::g::Android::android::widget::TextView**))TextEdit__CreateTextView_fn;
    type->fp_Detach = (void(*)(::g::Fuse::Android::Controls::Control*))TextEdit__Detach_fn;
    type->fp_GetMarginSize = (void(*)(::g::Fuse::Node*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))TextEdit__GetMarginSize_fn;
    type->fp_OnTextLayoutPropertyChanged = (void(*)(::g::Fuse::Android::Controls::TextViewBase*, uObject*, ::g::Uno::EventArgs*))TextEdit__OnTextLayoutPropertyChanged_fn;
    type->fp_OnTextRenderPropertyChanged = (void(*)(::g::Fuse::Android::Controls::TextViewBase*, uObject*, ::g::Uno::EventArgs*))TextEdit__OnTextRenderPropertyChanged_fn;
    type->fp_get_Plain = TextEdit__get_Plain_fn;
    type->fp_get_ShowKeyboard = (void(*)(::g::Fuse::Android::Controls::Control*, bool*))TextEdit__get_ShowKeyboard_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::STRINGS[21] = uString::Const("android.widget.TextView");
    ::STRINGS[22] = uString::Const("mCursorDrawableRes");
    ::STRINGS[23] = uString::Const("mEditor");
    ::STRINGS[24] = uString::Const("mCursorDrawable");
    ::STRINGS[7] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Android\\0.24.7\\Controls\\$.uno");
    ::TYPES[35] = ::g::Fuse::Node_typeof();
    ::TYPES[45] = ::g::Fuse::Android::Controls::EditorActionHandler_typeof();
    ::TYPES[21] = ::g::Android::java::lang::Object_typeof();
    ::TYPES[102] = ::g::Android::android::widget::TextView_typeof();
    ::TYPES[22] = ::g::Android::android::content::Context_typeof();
    ::TYPES[103] = ::g::Android::Base::Versions_typeof();
    ::TYPES[49] = ::g::Fuse::LayoutParams_typeof();
    ::TYPES[47] = ::g::Fuse::IViewport_typeof();
    ::TYPES[104] = ::g::Fuse::Controls::TextControl_typeof();
    ::TYPES[105] = ::g::Fuse::Android::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::TextEdit_typeof());
    ::TYPES[52] = ::g::Uno::Float_typeof();
    ::TYPES[106] = ::g::Fuse::Android::TextControlLayout_typeof();
    ::TYPES[44] = ::g::Fuse::Android::Controls::EditorActionArgs_typeof();
    ::TYPES[107] = ::g::Fuse::Controls::TextEdit_typeof();
    ::TYPES[25] = ::g::Android::java::lang::CharSequence_typeof();
    ::TYPES[93] = ::g::Android::Runtime::ObjectArray_typeof()->MakeType(::g::Android::android::graphics::drawable::Drawable_typeof());
    ::TYPES[108] = ::g::Android::android::graphics::PorterDuffDLRMode_typeof();
    ::TYPES[38] = uObject_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(TextEdit_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(TextEdit_type, interface1));
    type->SetFields(63,
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Android::Controls::TextEdit, _editorActionEvent), 0,
        ::g::Fuse::Android::TextControlLayout_typeof(), offsetof(::g::Fuse::Android::Controls::TextEdit, _textLayout), 0,
        ::g::Android::android::widget::TextView_typeof(), offsetof(::g::Fuse::Android::Controls::TextEdit, _textView1), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)TextEdit__New1_fn, 0, true, TextEdit_typeof(), 0));
    return type;
}

// public TextEdit() :1615
void TextEdit__ctor_4_fn(TextEdit* __this)
{
    __this->ctor_4();
}

// protected override sealed void Attach() :1685
void TextEdit__Attach_fn(TextEdit* __this)
{
    uStackFrame __("Fuse.Android.Controls.TextEdit", "Attach()");
    ::g::Fuse::Android::Controls::TextViewBase__Attach_fn(__this);
    __this->_textLayout = ::g::Fuse::Android::TextControlLayout::New1();
    __this->_editorActionEvent = ::g::Fuse::Android::Controls::EditorActionListener::AddHandler(__this->_textView1, uDelegate::New(::TYPES[45/*Fuse.Android.Controls.EditorActionHandler*/], (void*)TextEdit__OnEditorAction_fn, __this));
}

// internal override sealed Android.android.widget.TextView CreateTextView() :1639
void TextEdit__CreateTextView_fn(TextEdit* __this, ::g::Android::android::widget::TextView** __retval)
{
    uStackFrame __("Fuse.Android.Controls.TextEdit", "CreateTextView()");

    if (::g::Android::java::lang::Object::op_Equality1(__this->_textView1, NULL))
    {
        __this->_textView1 = ::g::Android::android::widget::EditText::New13(::g::Android::android::app::Activity::GetAppActivity());

        if (__this->Plain())
        {
            uPtr(__this->_textView1)->setIncludeFontPadding(false);
            uPtr(__this->_textView1)->setBackgroundResource(0);
            uPtr(__this->_textView1)->setPadding(0, 0, 0, 0);

            if (::g::Android::Base::Versions::ApiLevel() >= 16)
                uPtr(__this->_textView1)->setPaddingRelative(0, 0, 0, 0);
        }
    }

    return *__retval = __this->_textView1, void();
}

// protected override sealed void Detach() :1692
void TextEdit__Detach_fn(TextEdit* __this)
{
    uStackFrame __("Fuse.Android.Controls.TextEdit", "Detach()");
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_editorActionEvent), ::TYPES[43/*Uno.IDisposable*/]));
    uPtr(__this->_textLayout)->Dispose();
    __this->_textLayout = NULL;
    ::g::Fuse::Android::Controls::TextViewBase__Detach_fn(__this);
}

// public override sealed float2 GetMarginSize(Fuse.LayoutParams lp) :1629
void TextEdit__GetMarginSize_fn(TextEdit* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Android.Controls.TextEdit", "GetMarginSize(Fuse.LayoutParams)");
    ::g::Uno::Float2 ret2;
    ::g::Fuse::LayoutParams lp_ = *lp;

    if (__this->_textLayout == NULL)
        return *__retval = (::g::Fuse::Android::Controls::Element__GetMarginSize_fn(__this, uCRef(lp_), &ret2), ret2), void();

    float wrapWidth = lp_.HasX() ? ::g::Uno::Math::Max1(lp_.X() * ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(__this->Viewport()), ::TYPES[47/*Fuse.IViewport*/])), 0.0f) : FLT_INF;
    uPtr(__this->_textLayout)->Measure((::g::Fuse::Controls::TextEdit*)__this->SemanticControl(), wrapWidth);
    return *__retval = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2((float)uPtr(uPtr(__this->_textLayout)->Layout())->getWidth(), (float)uPtr(uPtr(__this->_textLayout)->Layout())->getHeight()), ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(__this->Viewport()), ::TYPES[47/*Fuse.IViewport*/]))), void();
}

// public TextEdit New() :1615
void TextEdit__New1_fn(TextEdit** __retval)
{
    *__retval = TextEdit::New1();
}

// private bool OnEditorAction(object sender, Fuse.Android.Controls.EditorActionArgs args) :1783
void TextEdit__OnEditorAction_fn(TextEdit* __this, uObject* sender, ::g::Fuse::Android::Controls::EditorActionArgs* args, bool* __retval)
{
    *__retval = __this->OnEditorAction(sender, args);
}

// protected override sealed void OnTextLayoutPropertyChanged(object sender, Uno.EventArgs args) :1702
void TextEdit__OnTextLayoutPropertyChanged_fn(TextEdit* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Android.Controls.TextEdit", "OnTextLayoutPropertyChanged(object,Uno.EventArgs)");
    int flags = 0;

    switch (uPtr((::g::Fuse::Controls::TextEdit*)__this->SemanticControl())->InputHint())
    {
        case 1:
        {
            flags = flags | 33;
            break;
        }
        case 2:
        {
            flags = flags | 17;
            break;
        }
        case 3:
        {
            flags = flags | 3;
            break;
        }
        case 4:
        {
            flags = flags | 2;
            break;
        }
        default:
        {
            flags = flags | 1;
            break;
        }
    }

    if (uPtr((::g::Fuse::Controls::TextEdit*)__this->SemanticControl())->IsMultiline())
        flags = flags | 131072;

    if (uPtr((::g::Fuse::Controls::TextEdit*)__this->SemanticControl())->IsPassword())
        flags = flags | 128;

    uPtr(__this->_textView1)->setInputType(flags);
    uPtr(__this->_textView1)->setImeOptions(__this->ReturnKeyType());
    ::g::Fuse::Android::Controls::TextViewBase__OnTextLayoutPropertyChanged_fn(__this, sender, args);

    if (uPtr((::g::Fuse::Controls::TextEdit*)__this->SemanticControl())->IsMultiline())
        uPtr(__this->_textView1)->setMaxLines(2147483647);
    else

        switch (uPtr((::g::Fuse::Controls::TextEdit*)__this->SemanticControl())->TextWrapping())
        {
            case 1:
            {
                uPtr(__this->_textView1)->setMaxLines(2147483647);
                break;
            }
            case 0:
            {
                uPtr(__this->_textView1)->setMaxLines(1);
                break;
            }
        }
}

// protected override sealed void OnTextRenderPropertyChanged(object sender, Uno.EventArgs args) :1772
void TextEdit__OnTextRenderPropertyChanged_fn(TextEdit* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Android.Controls.TextEdit", "OnTextRenderPropertyChanged(object,Uno.EventArgs)");
    __this->SetCursorDrawableColor(::g::Fuse::Android::Helpers::EncodeColor(uPtr((::g::Fuse::Controls::TextEdit*)__this->SemanticControl())->CaretColor()));
    uPtr(__this->_textView1)->setHint((uObject*)::g::Android::java::lang::String::op_Implicit1(uPtr((::g::Fuse::Controls::TextEdit*)__this->SemanticControl())->PlaceholderText()));
    uPtr(__this->_textView1)->setHintTextColor1(::g::Fuse::Android::Helpers::EncodeColor(uPtr((::g::Fuse::Controls::TextEdit*)__this->SemanticControl())->PlaceholderColor()));
    ::g::Fuse::Android::Controls::TextViewBase__OnTextRenderPropertyChanged_fn(__this, sender, args);
}

// protected virtual bool get_Plain() :1620
void TextEdit__get_Plain_fn(TextEdit* __this, bool* __retval)
{
    uStackFrame __("Fuse.Android.Controls.TextEdit", "get_Plain()");
    return *__retval = false, void();
}

// private int get_ReturnKeyType() :1758
void TextEdit__get_ReturnKeyType_fn(TextEdit* __this, int* __retval)
{
    *__retval = __this->ReturnKeyType();
}

// private void SetCursorDrawableColor(int color) :1656
void TextEdit__SetCursorDrawableColor_fn(TextEdit* __this, int* color)
{
    __this->SetCursorDrawableColor(*color);
}

// protected override sealed bool get_ShowKeyboard() :1700
void TextEdit__get_ShowKeyboard_fn(TextEdit* __this, bool* __retval)
{
    uStackFrame __("Fuse.Android.Controls.TextEdit", "get_ShowKeyboard()");
    return *__retval = true, void();
}

// public TextEdit() [instance] :1615
void TextEdit::ctor_4()
{
    uStackFrame __("Fuse.Android.Controls.TextEdit", ".ctor()");
    ctor_3();
    ::g::Fuse::Input::Focus::SetIsFocusable(this, true);
}

// private bool OnEditorAction(object sender, Fuse.Android.Controls.EditorActionArgs args) [instance] :1783
bool TextEdit::OnEditorAction(uObject* sender, ::g::Fuse::Android::Controls::EditorActionArgs* args)
{
    uStackFrame __("Fuse.Android.Controls.TextEdit", "OnEditorAction(object,Fuse.Android.Controls.EditorActionArgs)");

    switch (uPtr(args)->ActionCode)
    {
        case 6:
        case 5:
        case 2:
        case 3:
        case 4:
            return uPtr((::g::Fuse::Controls::TextEdit*)SemanticControl())->OnAction();
    }

    return false;
}

// private int get_ReturnKeyType() [instance] :1758
int TextEdit::ReturnKeyType()
{
    uStackFrame __("Fuse.Android.Controls.TextEdit", "get_ReturnKeyType()");

    switch (uPtr((::g::Fuse::Controls::TextEdit*)SemanticControl())->ActionStyle())
    {
        case 1:
            return 6;
        case 2:
            return 5;
        case 3:
            return 2;
        case 4:
            return 3;
        case 5:
            return 4;
    }

    return 0;
}

// private void SetCursorDrawableColor(int color) [instance] :1656
void TextEdit::SetCursorDrawableColor(int color)
{
    uStackFrame __("Fuse.Android.Controls.TextEdit", "SetCursorDrawableColor(int)");

    try
    {
        ::g::Android::java::lang::Class* textViewClass = ::g::Android::java::lang::Class::forName(::g::Android::java::lang::String::op_Implicit1(::STRINGS[21/*"android.wid...*/]));
        ::g::Android::java::lang::reflect::Field* fCursorDrawableRes = uPtr(textViewClass)->getDeclaredField(::g::Android::java::lang::String::op_Implicit1(::STRINGS[22/*"mCursorDraw...*/]));
        uPtr(fCursorDrawableRes)->setAccessible1(true);
        int mCursorDrawableRes = fCursorDrawableRes->getInt(_textView1);
        ::g::Android::java::lang::reflect::Field* fEditor = textViewClass->getDeclaredField(::g::Android::java::lang::String::op_Implicit1(::STRINGS[23/*"mEditor"*/]));
        uPtr(fEditor)->setAccessible1(true);
        ::g::Android::java::lang::Object* editor = fEditor->get(_textView1);
        ::g::Android::java::lang::reflect::Field* fCursorDrawable = uPtr(uPtr(editor)->getClass())->getDeclaredField(::g::Android::java::lang::String::op_Implicit1(::STRINGS[24/*"mCursorDraw...*/]));
        uPtr(fCursorDrawable)->setAccessible1(true);
        ::g::Android::Runtime::ObjectArray* r = (::g::Android::Runtime::ObjectArray*)::g::Android::Runtime::ObjectArray::New6(::TYPES[93/*Android.Runtime.ObjectArray<Android.android.graphics.drawable.Drawable>*/], 2);
        r->Item(0, uPtr(uPtr(uPtr(_textView1)->getContext())->getResources())->getDrawable(mCursorDrawableRes));
        r->Item(1, uPtr(uPtr(uPtr(_textView1)->getContext())->getResources())->getDrawable(mCursorDrawableRes));
        uPtr((::g::Android::android::graphics::drawable::Drawable*)r->Item(0))->setColorFilter1(color, ::g::Android::android::graphics::PorterDuffDLRMode::SRC_IN());
        uPtr((::g::Android::android::graphics::drawable::Drawable*)r->Item(1))->setColorFilter1(color, ::g::Android::android::graphics::PorterDuffDLRMode::SRC_IN());
        fCursorDrawable->set(editor, r);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Uno::Diagnostics::Debug::Log2(e, 1, ::STRINGS[7/*"C:\\Program...*/], 1680);
    }
}

// public TextEdit New() [static] :1615
TextEdit* TextEdit::New1()
{
    TextEdit* obj1 = (TextEdit*)uNew(TextEdit_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\Controls\$.uno(1965)
// -----------------------------------------------------------------------

// public sealed extern class TextView :1965
// {
::g::Fuse::Android::Controls::TextViewBase_type* TextView_typeof()
{
    static uSStrong< ::g::Fuse::Android::Controls::TextViewBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 63;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(TextView);
    options.TypeSize = sizeof(::g::Fuse::Android::Controls::TextViewBase_type);
    type = (::g::Fuse::Android::Controls::TextViewBase_type*)uClassType::New("Fuse.Android.Controls.TextView", options);
    type->SetBase(::g::Fuse::Android::Controls::TextViewBase_typeof()->MakeType(::g::Fuse::Controls::TextControl_typeof()));
    type->fp_ctor_ = (void*)TextView__New1_fn;
    type->fp_CreateTextView = (void(*)(::g::Fuse::Android::Controls::TextViewBase*, ::g::Android::android::widget::TextView**))TextView__CreateTextView_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::TYPES[22] = ::g::Android::android::content::Context_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Android::Controls::TextViewBase_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Android::Controls::TextViewBase_type, interface1));
    type->SetFields(63);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)TextView__New1_fn, 0, true, TextView_typeof(), 0));
    return type;
}

// public generated TextView() :1965
void TextView__ctor_4_fn(TextView* __this)
{
    __this->ctor_4();
}

// internal override sealed Android.android.widget.TextView CreateTextView() :1967
void TextView__CreateTextView_fn(TextView* __this, ::g::Android::android::widget::TextView** __retval)
{
    uStackFrame __("Fuse.Android.Controls.TextView", "CreateTextView()");
    return *__retval = ::g::Android::android::widget::TextView::New9(::g::Android::android::app::Activity::GetAppActivity()), void();
}

// public generated TextView New() :1965
void TextView__New1_fn(TextView** __retval)
{
    *__retval = TextView::New1();
}

// public generated TextView() [instance] :1965
void TextView::ctor_4()
{
    uStackFrame __("Fuse.Android.Controls.TextView", ".ctor()");
    ctor_3();
}

// public generated TextView New() [static] :1965
TextView* TextView::New1()
{
    TextView* obj1 = (TextView*)uNew(TextView_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\Controls\$.uno(1834)
// -----------------------------------------------------------------------

// public abstract extern class TextViewBase<T> :1834
// {
TextViewBase_type* TextViewBase_typeof()
{
    static uSStrong<TextViewBase_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 63;
    options.GenericCount = 1;
    options.InterfaceCount = 2;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(TextViewBase);
    options.TypeSize = sizeof(TextViewBase_type);
    type = (TextViewBase_type*)uClassType::New("Fuse.Android.Controls.TextViewBase`1", options);
    type->SetBase(::g::Fuse::Android::Controls::Control_typeof()->MakeType(type->T(0)));
    type->fp_Attach = (void(*)(::g::Fuse::Android::Controls::Control*))TextViewBase__Attach_fn;
    type->fp_CreateInternal = (void(*)(::g::Fuse::Android::Controls::Element*, ::g::Android::android::view::View**))TextViewBase__CreateInternal_fn;
    type->fp_Detach = (void(*)(::g::Fuse::Android::Controls::Control*))TextViewBase__Detach_fn;
    type->fp_OnTextLayoutPropertyChanged = TextViewBase__OnTextLayoutPropertyChanged_fn;
    type->fp_OnTextRenderPropertyChanged = TextViewBase__OnTextRenderPropertyChanged_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::STRINGS[8] = uString::Const("");
    ::TYPES[38] = uObject_typeof();
    ::TYPES[109] = ::g::Uno::EventArgs_typeof();
    ::TYPES[104] = ::g::Fuse::Controls::TextControl_typeof();
    ::TYPES[89] = ::g::Fuse::Android::Controls::Control_typeof();
    ::TYPES[57] = ::g::Uno::EventHandler_typeof();
    ::TYPES[20] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[101] = ::g::Fuse::Android::Controls::TextChangedHandler_typeof();
    ::TYPES[21] = ::g::Android::java::lang::Object_typeof();
    ::TYPES[23] = ::g::Android::android::view::View_typeof();
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[110] = ::g::Android::android::graphics::Typeface_typeof();
    ::TYPES[111] = ::g::Android::android::util::TypedValue_typeof();
    ::TYPES[47] = ::g::Fuse::IViewport_typeof();
    ::TYPES[35] = ::g::Fuse::Node_typeof();
    ::TYPES[65] = ::g::Android::android::os::BuildDLRVERSION_typeof();
    ::TYPES[112] = ::g::Android::android::view::Gravity_typeof();
    ::TYPES[24] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[25] = ::g::Android::java::lang::CharSequence_typeof();
    type->SetPrecalc(
        ::TYPES[89/*Fuse.Android.Controls.Control`1*/]->MakeType(type->T(0)));
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(TextViewBase_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(TextViewBase_type, interface1));
    type->SetFields(59,
        ::g::Uno::Int_typeof(), offsetof(::g::Fuse::Android::Controls::TextViewBase, _defaultTextColor), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Android::Controls::TextViewBase, _settingText), 0,
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Android::Controls::TextViewBase, _textChangedEvent), 0,
        ::g::Android::android::widget::TextView_typeof(), offsetof(::g::Fuse::Android::Controls::TextViewBase, _textView), 0);
    return type;
}

// protected generated TextViewBase() :1834
void TextViewBase__ctor_3_fn(TextViewBase* __this)
{
    __this->ctor_3();
}

// protected override void Attach() :1843
void TextViewBase__Attach_fn(TextViewBase* __this)
{
    uType* __types[] = {
        __this->__type->GetBase(TextViewBase_typeof())->Precalced(0/*Fuse.Android.Controls.Control<T>*/),
        __this->__type->GetBase(TextViewBase_typeof())->T(0),
    };
    uStackFrame __("Fuse.Android.Controls.TextViewBase`1", "Attach()");
    __this->Create();
    __this->OnTextLayoutPropertyChanged(__this, ::g::Uno::EventArgs::Empty());
    __this->OnTextRenderPropertyChanged(__this, ::g::Uno::EventArgs::Empty());
    __this->SetText();
    uPtr((::g::Fuse::Controls::TextControl*)__this->SemanticControl())->add_TextLayoutPropertyChanged(uDelegate::New(::TYPES[57/*Uno.EventHandler*/], __this, offsetof(TextViewBase_type, fp_OnTextLayoutPropertyChanged)));
    uPtr((::g::Fuse::Controls::TextControl*)__this->SemanticControl())->add_TextRenderPropertyChanged(uDelegate::New(::TYPES[57/*Uno.EventHandler*/], __this, offsetof(TextViewBase_type, fp_OnTextRenderPropertyChanged)));
    uPtr((::g::Fuse::Controls::TextControl*)__this->SemanticControl())->add_ValueChanged(uDelegate::New(::TYPES[20/*Uno.UX.ValueChangedHandler<string>*/], (void*)TextViewBase__OnValueChanged_fn, __this));
    __this->_textChangedEvent = ::g::Fuse::Android::Controls::TextChangedListener::AddHandler(__this->_textView, uDelegate::New(::TYPES[101/*Fuse.Android.Controls.TextChangedHandler*/], (void*)TextViewBase__OnTextChanged_fn, __this));
}

// internal override sealed Android.android.view.View CreateInternal() :1865
void TextViewBase__CreateInternal_fn(TextViewBase* __this, ::g::Android::android::view::View** __retval)
{
    uStackFrame __("Fuse.Android.Controls.TextViewBase`1", "CreateInternal()");

    if (::g::Android::java::lang::Object::op_Equality1(__this->_textView, NULL))
    {
        __this->_textView = __this->CreateTextView();
        __this->_defaultTextColor = uPtr(uPtr(__this->_textView)->getTextColors())->getDefaultColor();
        uPtr(__this->_textView)->setHorizontallyScrolling(false);
        uPtr(__this->_textView)->setEllipsize(NULL);
    }

    return *__retval = __this->_textView, void();
}

// protected override void Detach() :1857
void TextViewBase__Detach_fn(TextViewBase* __this)
{
    uType* __types[] = {
        __this->__type->GetBase(TextViewBase_typeof())->Precalced(0/*Fuse.Android.Controls.Control<T>*/),
        __this->__type->GetBase(TextViewBase_typeof())->T(0),
    };
    uStackFrame __("Fuse.Android.Controls.TextViewBase`1", "Detach()");
    uPtr((::g::Fuse::Controls::TextControl*)__this->SemanticControl())->remove_TextLayoutPropertyChanged(uDelegate::New(::TYPES[57/*Uno.EventHandler*/], __this, offsetof(TextViewBase_type, fp_OnTextLayoutPropertyChanged)));
    uPtr((::g::Fuse::Controls::TextControl*)__this->SemanticControl())->remove_TextRenderPropertyChanged(uDelegate::New(::TYPES[57/*Uno.EventHandler*/], __this, offsetof(TextViewBase_type, fp_OnTextRenderPropertyChanged)));
    uPtr((::g::Fuse::Controls::TextControl*)__this->SemanticControl())->remove_ValueChanged(uDelegate::New(::TYPES[20/*Uno.UX.ValueChangedHandler<string>*/], (void*)TextViewBase__OnValueChanged_fn, __this));
    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(__this->_textChangedEvent), ::TYPES[43/*Uno.IDisposable*/]));
}

// protected internal void OnTextChanged(object sender, string text) :1954
void TextViewBase__OnTextChanged_fn(TextViewBase* __this, uObject* sender, uString* text)
{
    __this->OnTextChanged(sender, text);
}

// protected virtual void OnTextLayoutPropertyChanged(object sender, Uno.EventArgs args) :1880
void TextViewBase__OnTextLayoutPropertyChanged_fn(TextViewBase* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    uType* __types[] = {
        __this->__type->GetBase(TextViewBase_typeof())->Precalced(0/*Fuse.Android.Controls.Control<T>*/),
        __this->__type->GetBase(TextViewBase_typeof())->T(0),
    };
    uStackFrame __("Fuse.Android.Controls.TextViewBase`1", "OnTextLayoutPropertyChanged(object,Uno.EventArgs)");
    bool ret1;

    if ((::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Controls::TextControl::FontProperty()), (::g::Fuse::Controls::TextControl*)__this->SemanticControl(), &ret1), ret1))
        uPtr(__this->_textView)->setTypeface(::g::Fuse::Android::TypefaceCache::GetTypeface(uPtr((::g::Fuse::Controls::TextControl*)__this->SemanticControl())->Font()));
    else
        uPtr(__this->_textView)->setTypeface(::g::Android::android::graphics::Typeface::DEFAULT());

    uPtr(__this->_textView)->setTextSize1(::g::Android::android::util::TypedValue::COMPLEX_UNIT_DIP(), uPtr((::g::Fuse::Controls::TextControl*)__this->SemanticControl())->FontSize());
    uPtr(__this->_textView)->setLineSpacing(uPtr((::g::Fuse::Controls::TextControl*)__this->SemanticControl())->LineSpacing() * ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(uPtr((::g::Fuse::Controls::TextControl*)__this->SemanticControl())->Viewport()), ::TYPES[47/*Fuse.IViewport*/])), 1.0f);

    if (::g::Android::android::os::BuildDLRVERSION::SDK_INT() >= 17)
        uPtr(__this->_textView)->setTextAlignment(::g::Android::android::view::View::TEXT_ALIGNMENT_GRAVITY());

    switch (uPtr((::g::Fuse::Controls::TextControl*)__this->SemanticControl())->TextAlignment())
    {
        case 0:
        {
            uPtr(__this->_textView)->setGravity(::g::Android::android::view::Gravity::LEFT());
            break;
        }
        case 1:
        {
            uPtr(__this->_textView)->setGravity(::g::Android::android::view::Gravity::CENTER_HORIZONTAL());
            break;
        }
        case 2:
        {
            uPtr(__this->_textView)->setGravity(::g::Android::android::view::Gravity::RIGHT());
            break;
        }
    }

    switch (uPtr((::g::Fuse::Controls::TextControl*)__this->SemanticControl())->TextWrapping())
    {
        case 1:
        {
            uPtr(__this->_textView)->setMaxLines(2147483647);
            break;
        }
        case 0:
        {
            uPtr(__this->_textView)->setMaxLines(1);
            break;
        }
    }

    __this->InvalidateLayout(2);
}

// protected virtual void OnTextRenderPropertyChanged(object sender, Uno.EventArgs args) :1919
void TextViewBase__OnTextRenderPropertyChanged_fn(TextViewBase* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    uType* __types[] = {
        __this->__type->GetBase(TextViewBase_typeof())->Precalced(0/*Fuse.Android.Controls.Control<T>*/),
        __this->__type->GetBase(TextViewBase_typeof())->T(0),
    };
    uStackFrame __("Fuse.Android.Controls.TextViewBase`1", "OnTextRenderPropertyChanged(object,Uno.EventArgs)");
    uPtr(__this->_textView)->setTextColor1(::g::Fuse::Android::Helpers::EncodeColor(uPtr((::g::Fuse::Controls::TextControl*)__this->SemanticControl())->TextColor()));
}

// private void OnValueChanged(object sender, Uno.UX.ValueChangedArgs<string> args) :1948
void TextViewBase__OnValueChanged_fn(TextViewBase* __this, uObject* sender, ::g::Uno::UX::ValueChangedArgs* args)
{
    __this->OnValueChanged(sender, args);
}

// protected void SetText() :1925
void TextViewBase__SetText_fn(TextViewBase* __this)
{
    __this->SetText();
}

// protected generated TextViewBase() [instance] :1834
void TextViewBase::ctor_3()
{
    uStackFrame __("Fuse.Android.Controls.TextViewBase`1", ".ctor()");
    ctor_2();
}

// protected internal void OnTextChanged(object sender, string text) [instance] :1954
void TextViewBase::OnTextChanged(uObject* sender, uString* text)
{
    uType* __types[] = {
        __type->GetBase(TextViewBase_typeof())->Precalced(0/*Fuse.Android.Controls.Control<T>*/),
        __type->GetBase(TextViewBase_typeof())->T(0),
    };
    uStackFrame __("Fuse.Android.Controls.TextViewBase`1", "OnTextChanged(object,string)");

    if (!_settingText)
        uPtr((::g::Fuse::Controls::TextControl*)SemanticControl())->SetValue1(text, this);

    InvalidateLayout(2);
}

// private void OnValueChanged(object sender, Uno.UX.ValueChangedArgs<string> args) [instance] :1948
void TextViewBase::OnValueChanged(uObject* sender, ::g::Uno::UX::ValueChangedArgs* args)
{
    uStackFrame __("Fuse.Android.Controls.TextViewBase`1", "OnValueChanged(object,Uno.UX.ValueChangedArgs<string>)");

    if (uPtr(args)->Origin() == this)
        return;

    SetText();
}

// protected void SetText() [instance] :1925
void TextViewBase::SetText()
{
    uType* __types[] = {
        __type->GetBase(TextViewBase_typeof())->Precalced(0/*Fuse.Android.Controls.Control<T>*/),
        __type->GetBase(TextViewBase_typeof())->T(0),
    };
    uStackFrame __("Fuse.Android.Controls.TextViewBase`1", "SetText()");

    {
        const auto __finally_fun = [&]()
        {
            _settingText = false;
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        _settingText = true;

        if (::g::Uno::String::op_Inequality(uPtr((::g::Fuse::Controls::TextControl*)SemanticControl())->Value(), NULL))
        {
            uObject* charSequence = (uObject*)::g::Android::java::lang::String::op_Implicit1(uPtr((::g::Fuse::Controls::TextControl*)SemanticControl())->Value());
            uPtr(_textView)->setText(charSequence);
        }
        else
        {
            uObject* charSequence1 = (uObject*)::g::Android::java::lang::String::op_Implicit1(::STRINGS[8/*""*/]);
            uPtr(_textView)->setText(charSequence1);
        }

        uPtr(_textView)->requestLayout();
    }
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\Controls\$.uno(298)
// ----------------------------------------------------------------------

// public sealed extern class ToggleButton :298
// {
::g::Fuse::Android::Controls::CompoundButton_type* ToggleButton_typeof()
{
    static uSStrong< ::g::Fuse::Android::Controls::CompoundButton_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 61;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(ToggleButton);
    options.TypeSize = sizeof(::g::Fuse::Android::Controls::CompoundButton_type);
    type = (::g::Fuse::Android::Controls::CompoundButton_type*)uClassType::New("Fuse.Android.Controls.ToggleButton", options);
    type->SetBase(::g::Fuse::Android::Controls::CompoundButton_typeof());
    type->fp_ctor_ = (void*)ToggleButton__New1_fn;
    type->fp_CreateCompoundButton = (void(*)(::g::Fuse::Android::Controls::CompoundButton*, ::g::Android::android::widget::CompoundButton**))ToggleButton__CreateCompoundButton_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::TYPES[26] = ::g::Android::android::widget::CompoundButton_typeof();
    ::TYPES[22] = ::g::Android::android::content::Context_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(::g::Fuse::Android::Controls::CompoundButton_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(::g::Fuse::Android::Controls::CompoundButton_type, interface1));
    type->SetFields(61);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)ToggleButton__New1_fn, 0, true, ToggleButton_typeof(), 0));
    return type;
}

// public generated ToggleButton() :298
void ToggleButton__ctor_4_fn(ToggleButton* __this)
{
    __this->ctor_4();
}

// internal override sealed Android.android.widget.CompoundButton CreateCompoundButton() :300
void ToggleButton__CreateCompoundButton_fn(ToggleButton* __this, ::g::Android::android::widget::CompoundButton** __retval)
{
    uStackFrame __("Fuse.Android.Controls.ToggleButton", "CreateCompoundButton()");
    return *__retval = ::g::Android::android::widget::Switch::New17(::g::Android::android::app::Activity::GetAppActivity()), void();
}

// public generated ToggleButton New() :298
void ToggleButton__New1_fn(ToggleButton** __retval)
{
    *__retval = ToggleButton::New1();
}

// public generated ToggleButton() [instance] :298
void ToggleButton::ctor_4()
{
    uStackFrame __("Fuse.Android.Controls.ToggleButton", ".ctor()");
    ctor_3();
}

// public generated ToggleButton New() [static] :298
ToggleButton* ToggleButton::New1()
{
    ToggleButton* obj1 = (ToggleButton*)uNew(ToggleButton_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\Controls\$.uno(2208)
// -----------------------------------------------------------------------

// internal sealed extern class WebChromeClient :2208
// {
::g::Android::android::webkit::WebChromeClient_type* WebChromeClient_typeof()
{
    static uSStrong< ::g::Android::android::webkit::WebChromeClient_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(WebChromeClient);
    options.TypeSize = sizeof(::g::Android::android::webkit::WebChromeClient_type);
    type = (::g::Android::android::webkit::WebChromeClient_type*)uClassType::New("Fuse.Android.Controls.WebChromeClient", options);
    type->SetBase(::g::Android::android::webkit::WebChromeClient_typeof());
    type->fp_ctor_ = (void*)WebChromeClient__New7_fn;
    type->fp_onProgressChanged = (void(*)(::g::Android::android::webkit::WebChromeClient*, ::g::Android::android::webkit::WebView*, int*))WebChromeClient__onProgressChanged_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::STRINGS[25] = uString::Const("com.Bindings.Binding_Fuse_Android_Controls_WebChromeClient");
    ::STRINGS[1] = uString::Const("<init>");
    ::STRINGS[5] = uString::Const("(J)V");
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[5] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[6] = ::g::Android::Base::Primitives::ujclass_typeof();
    ::TYPES[14] = ::g::Uno::Delegate_typeof();
    ::TYPES[78] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof());
    ::TYPES[38] = uObject_typeof();
    ::TYPES[81] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Double_typeof());
    ::TYPES[80] = ::g::Uno::Double_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::android::webkit::WebChromeClient_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::android::webkit::WebChromeClient_type, interface1));
    type->SetFields(5,
        ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof()), offsetof(::g::Fuse::Android::Controls::WebChromeClient, ProgressChanged1), 0,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Fuse::Android::Controls::WebChromeClient::_javaClass3_, uFieldFlagsStatic);
    return type;
}

// public generated WebChromeClient() :2208
void WebChromeClient__ctor_7_fn(WebChromeClient* __this)
{
    __this->ctor_7();
}

// public generated WebChromeClient New() :2208
void WebChromeClient__New7_fn(WebChromeClient** __retval)
{
    *__retval = WebChromeClient::New7();
}

// public override sealed void onProgressChanged(Android.android.webkit.WebView arg0, int arg1) :2213
void WebChromeClient__onProgressChanged_fn(WebChromeClient* __this, ::g::Android::android::webkit::WebView* arg0, int* arg1)
{
    uStackFrame __("Fuse.Android.Controls.WebChromeClient", "onProgressChanged(Android.android.webkit.WebView,int)");
    int arg1_ = *arg1;
    ::g::Uno::UX::ValueChangedArgs* ret2;
    ::g::Android::android::webkit::WebChromeClient__onProgressChanged_fn(__this, arg0, uCRef<int>(arg1_));

    if (::g::Uno::Delegate::op_Inequality(__this->ProgressChanged1, NULL))
        uPtr(__this->ProgressChanged1)->Invoke(2, __this, (::g::Uno::UX::ValueChangedArgs__New2_fn(::TYPES[81/*Uno.UX.ValueChangedArgs<double>*/], uCRef((double)uPtr(arg0)->getProgress() / 100.0), __this, &ret2), ret2));
}

// public generated void add_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) :2211
void WebChromeClient__add_ProgressChanged_fn(WebChromeClient* __this, uDelegate* value)
{
    __this->add_ProgressChanged(value);
}

// public generated void remove_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) :2211
void WebChromeClient__remove_ProgressChanged_fn(WebChromeClient* __this, uDelegate* value)
{
    __this->remove_ProgressChanged(value);
}

jclass WebChromeClient::_javaClass3_;

// public generated WebChromeClient() [instance] :2208
void WebChromeClient::ctor_7()
{
    uStackFrame __("Fuse.Android.Controls.WebChromeClient", ".ctor()");

    if (!_subclassed)
    {
        _subclassed = true;
        _javaClassName = ::STRINGS[25/*"com.Binding...*/];
    }

    ctor_6(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);

    if (::g::Android::Base::Primitives::ujclass::op_Equality(WebChromeClient::_javaClass3(), ::g::Android::Base::Primitives::ujclass::Null()))
    {
        WebChromeClient::_javaClass3() = ::g::Android::Base::JNI::LocalToGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[25/*"com.Binding...*/], false));
        JniHelper jni;
        BEGIN_REG_MTD(1);
        REG_MTD(0,"__n_onProgressChanged","(JLandroid/webkit/WebView;IJJ)V",Binding_Fuse_Android_Controls_WebChromeClient__onProgressChanged24000);
        COMMIT_REG_MTD(WebChromeClient::_javaClass3());
    }

    jclass tmpCls = ::g::Android::Base::JNI::LoadClass3(_javaClassName, false);
    jmethodID mtd = ::g::Android::Base::JNI::GetMethodID(tmpCls, ::STRINGS[1/*"<init>"*/], ::STRINGS[5/*"(J)V"*/]);
    jobject tmp = ::g::Android::Base::JNI::NewObject1(tmpCls, mtd, ::g::Android::Base::Primitives::ujvalue::op_Implicit7((jlong)this->__obj_weak));
    ::g::Android::Base::JNI::CheckException();
    _javaObject = ::g::Android::Base::JNI::LocalToGlobalRef1(tmp);
    ::g::Android::Base::JNI::DeleteLocalRef(tmpCls);
}

// public generated void add_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) [instance] :2211
void WebChromeClient::add_ProgressChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Android.Controls.WebChromeClient", "add_ProgressChanged(Uno.UX.ValueChangedHandler<double>)");
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ProgressChanged1, value), ::TYPES[78/*Uno.UX.ValueChangedHandler<double>*/]);
}

// public generated void remove_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) [instance] :2211
void WebChromeClient::remove_ProgressChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Android.Controls.WebChromeClient", "remove_ProgressChanged(Uno.UX.ValueChangedHandler<double>)");
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ProgressChanged1, value), ::TYPES[78/*Uno.UX.ValueChangedHandler<double>*/]);
}

// public generated WebChromeClient New() [static] :2208
WebChromeClient* WebChromeClient::New7()
{
    WebChromeClient* obj1 = (WebChromeClient*)uNew(WebChromeClient_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\Controls\$.uno(2025)
// -----------------------------------------------------------------------

// public sealed extern class WebView :2025
// {
WebView_type* WebView_typeof()
{
    static uSStrong<WebView_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 66;
    options.InterfaceCount = 6;
    options.ObjectSize = sizeof(WebView);
    options.TypeSize = sizeof(WebView_type);
    type = (WebView_type*)uClassType::New("Fuse.Android.Controls.WebView", options);
    type->SetBase(::g::Fuse::Android::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::WebView_typeof()));
    type->fp_ctor_ = (void*)WebView__New1_fn;
    type->fp_Attach = (void(*)(::g::Fuse::Android::Controls::Control*))WebView__Attach_fn;
    type->fp_CreateInternal = (void(*)(::g::Fuse::Android::Controls::Element*, ::g::Android::android::view::View**))WebView__CreateInternal_fn;
    type->fp_Detach = (void(*)(::g::Fuse::Android::Controls::Control*))WebView__Detach_fn;
    type->interface2.fp_Eval1 = (void(*)(uObject*, uString*, uDelegate*))WebView__Eval1_fn;
    type->interface2.fp_Eval = (void(*)(uObject*, uString*))WebView__Eval_fn;
    type->interface2.fp_LoadHtml = (void(*)(uObject*, uString*))WebView__LoadHtml_fn;
    type->interface2.fp_LoadHtml1 = (void(*)(uObject*, uString*, uString*))WebView__LoadHtml1_fn;
    type->interface2.fp_LoadUrl = (void(*)(uObject*, uString*))WebView__LoadUrl_fn;
    type->interface2.fp_Stop = (void(*)(uObject*))WebView__Stop_fn;
    type->interface2.fp_Reload = (void(*)(uObject*))WebView__Reload_fn;
    type->interface2.fp_get_BaseUrl = (void(*)(uObject*, uString**))WebView__get_BaseUrl_fn;
    type->interface2.fp_set_BaseUrl = (void(*)(uObject*, uString*))WebView__set_BaseUrl_fn;
    type->interface2.fp_get_Url = (void(*)(uObject*, uString**))WebView__get_Url_fn;
    type->interface2.fp_set_Url = (void(*)(uObject*, uString*))WebView__set_Url_fn;
    type->interface2.fp_get_DocumentTitle = (void(*)(uObject*, uString**))WebView__get_DocumentTitle_fn;
    type->interface2.fp_get_File = (void(*)(uObject*, ::g::Uno::UX::FileSource**))WebView__get_File_fn;
    type->interface2.fp_set_File = (void(*)(uObject*, ::g::Uno::UX::FileSource*))WebView__set_File_fn;
    type->interface2.fp_add_PageLoaded = (void(*)(uObject*, uDelegate*))WebView__add_PageLoaded_fn;
    type->interface2.fp_remove_PageLoaded = (void(*)(uObject*, uDelegate*))WebView__remove_PageLoaded_fn;
    type->interface2.fp_add_BeginLoading = (void(*)(uObject*, uDelegate*))WebView__add_BeginLoading_fn;
    type->interface2.fp_remove_BeginLoading = (void(*)(uObject*, uDelegate*))WebView__remove_BeginLoading_fn;
    type->interface2.fp_add_UrlChanged = (void(*)(uObject*, uDelegate*))WebView__add_UrlChanged_fn;
    type->interface2.fp_remove_UrlChanged = (void(*)(uObject*, uDelegate*))WebView__remove_UrlChanged_fn;
    type->interface3.fp_get_Progress = (void(*)(uObject*, double*))WebView__get_Progress_fn;
    type->interface3.fp_add_ProgressChanged = (void(*)(uObject*, uDelegate*))WebView__add_ProgressChanged_fn;
    type->interface3.fp_remove_ProgressChanged = (void(*)(uObject*, uDelegate*))WebView__remove_ProgressChanged_fn;
    type->interface4.fp_GoForward = (void(*)(uObject*))WebView__GoForward_fn;
    type->interface4.fp_GoBack = (void(*)(uObject*))WebView__GoBack_fn;
    type->interface4.fp_get_CanGoBack = (void(*)(uObject*, bool*))WebView__get_CanGoBack_fn;
    type->interface4.fp_get_CanGoForward = (void(*)(uObject*, bool*))WebView__get_CanGoForward_fn;
    type->interface5.fp_get_Source = (void(*)(uObject*, uString**))WebView__get_Source_fn;
    type->interface5.fp_set_Source = (void(*)(uObject*, uString*))WebView__set_Source_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::STRINGS[26] = uString::Const("FuseJSHandler");
    ::STRINGS[27] = uString::Const("javascript:");
    ::STRINGS[8] = uString::Const("");
    ::STRINGS[28] = uString::Const("text/html");
    ::STRINGS[29] = uString::Const("UTF-8");
    ::STRINGS[30] = uString::Const("utf-8");
    ::STRINGS[31] = uString::Const("about:blank");
    ::TYPES[113] = ::g::Fuse::Controls::WebView_typeof();
    ::TYPES[114] = ::g::Fuse::Android::Controls::Control_typeof()->MakeType(::g::Fuse::Controls::WebView_typeof());
    ::TYPES[115] = ::g::Fuse::Controls::IWebView_typeof();
    ::TYPES[21] = ::g::Android::java::lang::Object_typeof();
    ::TYPES[116] = ::g::Android::java::util::Observer_typeof();
    ::TYPES[22] = ::g::Android::android::content::Context_typeof();
    ::TYPES[117] = ::g::Android::android::webkit::WebViewClient_typeof();
    ::TYPES[118] = ::g::Android::android::webkit::WebChromeClient_typeof();
    ::TYPES[119] = ::g::Fuse::Android::Controls::JsResultHandler_typeof();
    ::TYPES[23] = ::g::Android::android::view::View_typeof();
    ::TYPES[80] = ::g::Uno::Double_typeof();
    ::TYPES[120] = ::g::Fuse::Android::Controls::WebViewClient_typeof();
    ::TYPES[121] = ::g::Fuse::Android::Controls::WebChromeClient_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(WebView_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(WebView_type, interface1),
        ::g::Fuse::Controls::IWebView_typeof(), offsetof(WebView_type, interface2),
        ::g::Fuse::Triggers::IProgress_typeof(), offsetof(WebView_type, interface3),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(WebView_type, interface4),
        ::g::Fuse::Controls::ISourceReceiver_typeof(), offsetof(WebView_type, interface5));
    type->SetFields(59,
        ::g::Android::android::webkit::WebView_typeof(), offsetof(::g::Fuse::Android::Controls::WebView, _androidWebView), 0,
        ::g::Uno::UX::FileSource_typeof(), offsetof(::g::Fuse::Android::Controls::WebView, _file), 0,
        ::g::Fuse::Android::Controls::JsResultHandler_typeof(), offsetof(::g::Fuse::Android::Controls::WebView, _resultHandler), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Android::Controls::WebView, _source), 0,
        ::g::Fuse::Android::Controls::WebChromeClient_typeof(), offsetof(::g::Fuse::Android::Controls::WebView, _webChromeClient), 0,
        ::g::Fuse::Android::Controls::WebViewClient_typeof(), offsetof(::g::Fuse::Android::Controls::WebView, _webViewClient), 0,
        ::g::Uno::String_typeof(), offsetof(::g::Fuse::Android::Controls::WebView, _BaseUrl), 0);
    type->Reflection.SetFunctions(30,
        new uFunction("get_BaseUrl", NULL, (void*)WebView__get_BaseUrl_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_BaseUrl", NULL, (void*)WebView__set_BaseUrl_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("add_BeginLoading", NULL, (void*)WebView__add_BeginLoading_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_BeginLoading", NULL, (void*)WebView__remove_BeginLoading_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("get_CanGoBack", NULL, (void*)WebView__get_CanGoBack_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_CanGoForward", NULL, (void*)WebView__get_CanGoForward_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("get_DocumentTitle", NULL, (void*)WebView__get_DocumentTitle_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("Eval", NULL, (void*)WebView__Eval_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("Eval", NULL, (void*)WebView__Eval1_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof())),
        new uFunction("get_File", NULL, (void*)WebView__get_File_fn, 0, false, ::g::Uno::UX::FileSource_typeof(), 0),
        new uFunction("set_File", NULL, (void*)WebView__set_File_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::FileSource_typeof()),
        new uFunction("GoBack", NULL, (void*)WebView__GoBack_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("GoForward", NULL, (void*)WebView__GoForward_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("LoadHtml", NULL, (void*)WebView__LoadHtml_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("LoadHtml", NULL, (void*)WebView__LoadHtml1_fn, 0, false, uVoid_typeof(), 2, ::g::Uno::String_typeof(), ::g::Uno::String_typeof()),
        new uFunction("LoadUrl", NULL, (void*)WebView__LoadUrl_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction(".ctor", NULL, (void*)WebView__New1_fn, 0, true, WebView_typeof(), 0),
        new uFunction("add_PageLoaded", NULL, (void*)WebView__add_PageLoaded_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_PageLoaded", NULL, (void*)WebView__remove_PageLoaded_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("get_Progress", NULL, (void*)WebView__get_Progress_fn, 0, false, ::g::Uno::Double_typeof(), 0),
        new uFunction("add_ProgressChanged", NULL, (void*)WebView__add_ProgressChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof())),
        new uFunction("remove_ProgressChanged", NULL, (void*)WebView__remove_ProgressChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof())),
        new uFunction("Reload", NULL, (void*)WebView__Reload_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_Source", NULL, (void*)WebView__get_Source_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Source", NULL, (void*)WebView__set_Source_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("Stop", NULL, (void*)WebView__Stop_fn, 0, false, uVoid_typeof(), 0),
        new uFunction("get_Url", NULL, (void*)WebView__get_Url_fn, 0, false, ::g::Uno::String_typeof(), 0),
        new uFunction("set_Url", NULL, (void*)WebView__set_Url_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::String_typeof()),
        new uFunction("add_UrlChanged", NULL, (void*)WebView__add_UrlChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()),
        new uFunction("remove_UrlChanged", NULL, (void*)WebView__remove_UrlChanged_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::EventHandler_typeof()));
    return type;
}

// public generated WebView() :2025
void WebView__ctor_3_fn(WebView* __this)
{
    __this->ctor_3();
}

// protected override sealed void Attach() :2058
void WebView__Attach_fn(WebView* __this)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "Attach()");
    __this->Create();
    uPtr((::g::Fuse::Controls::WebView*)__this->SemanticControl())->WebViewClient((uObject*)__this);
}

// public generated string get_BaseUrl() :2082
void WebView__get_BaseUrl_fn(WebView* __this, uString** __retval)
{
    *__retval = __this->BaseUrl();
}

// public generated void set_BaseUrl(string value) :2082
void WebView__set_BaseUrl_fn(WebView* __this, uString* value)
{
    __this->BaseUrl(value);
}

// public void add_BeginLoading(Uno.EventHandler value) :2156
void WebView__add_BeginLoading_fn(WebView* __this, uDelegate* value)
{
    __this->add_BeginLoading(value);
}

// public void remove_BeginLoading(Uno.EventHandler value) :2157
void WebView__remove_BeginLoading_fn(WebView* __this, uDelegate* value)
{
    __this->remove_BeginLoading(value);
}

// public bool get_CanGoBack() :2104
void WebView__get_CanGoBack_fn(WebView* __this, bool* __retval)
{
    *__retval = __this->CanGoBack();
}

// public bool get_CanGoForward() :2109
void WebView__get_CanGoForward_fn(WebView* __this, bool* __retval)
{
    *__retval = __this->CanGoForward();
}

// internal override sealed Android.android.view.View CreateInternal() :2037
void WebView__CreateInternal_fn(WebView* __this, ::g::Android::android::view::View** __retval)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "CreateInternal()");

    if (::g::Android::java::lang::Object::op_Equality1(__this->_androidWebView, NULL))
    {
        ::g::Android::Runtime::UnoHelper::Init();
        __this->_resultHandler = ::g::Fuse::Android::Controls::JsResultHandler::New5(::STRINGS[26/*"FuseJSHandler"*/], NULL);
        ::g::Android::java::util::Observable* obs = ::g::Android::Runtime::UnoHelper::MakeJSObservable((uObject*)__this->_resultHandler);
        __this->_webChromeClient = ::g::Fuse::Android::Controls::WebChromeClient::New7();
        __this->_webViewClient = ::g::Fuse::Android::Controls::WebViewClient::New7();
        __this->_androidWebView = ::g::Android::android::webkit::WebView::New13(::g::Android::android::app::Activity::GetAppActivity());
        uPtr(__this->_androidWebView)->setWebViewClient(__this->_webViewClient);
        uPtr(__this->_androidWebView)->setWebChromeClient(__this->_webChromeClient);
        uPtr(uPtr(__this->_androidWebView)->getSettings())->setJavaScriptEnabled(true);
        uPtr(uPtr(__this->_androidWebView)->getSettings())->setDomStorageEnabled(true);
        uPtr(__this->_androidWebView)->addJavascriptInterface(obs, ::g::Android::java::lang::String::op_Implicit1(uPtr(__this->_resultHandler)->Name()));
    }

    return *__retval = __this->_androidWebView, void();
}

// protected override sealed void Detach() :2064
void WebView__Detach_fn(WebView* __this)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "Detach()");
    uPtr((::g::Fuse::Controls::WebView*)__this->SemanticControl())->WebViewClient(NULL);
}

// public string get_DocumentTitle() :2099
void WebView__get_DocumentTitle_fn(WebView* __this, uString** __retval)
{
    *__retval = __this->DocumentTitle();
}

// public void Eval(string js) :2075
void WebView__Eval_fn(WebView* __this, uString* js)
{
    __this->Eval(js);
}

// public void Eval(string js, Uno.Action<string> resultHandler) :2069
void WebView__Eval1_fn(WebView* __this, uString* js, uDelegate* resultHandler)
{
    __this->Eval1(js, resultHandler);
}

// public Uno.UX.FileSource get_File() :2181
void WebView__get_File_fn(WebView* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->File();
}

// public void set_File(Uno.UX.FileSource value) :2182
void WebView__set_File_fn(WebView* __this, ::g::Uno::UX::FileSource* value)
{
    __this->File(value);
}

// public void GoBack() :2112
void WebView__GoBack_fn(WebView* __this)
{
    __this->GoBack();
}

// public void GoForward() :2117
void WebView__GoForward_fn(WebView* __this)
{
    __this->GoForward();
}

// private void LoadFile(Uno.UX.FileSource file) :2194
void WebView__LoadFile_fn(WebView* __this, ::g::Uno::UX::FileSource* file)
{
    __this->LoadFile(file);
}

// public void LoadHtml(string html) :2132
void WebView__LoadHtml_fn(WebView* __this, uString* html)
{
    __this->LoadHtml(html);
}

// public void LoadHtml(string html, string baseUrl) :2137
void WebView__LoadHtml1_fn(WebView* __this, uString* html, uString* baseUrl)
{
    __this->LoadHtml1(html, baseUrl);
}

// private void LoadHTML(string html) :2190
void WebView__LoadHTML_fn(WebView* __this, uString* html)
{
    __this->LoadHTML(html);
}

// public void LoadUrl(string url) :2143
void WebView__LoadUrl_fn(WebView* __this, uString* url)
{
    __this->LoadUrl(url);
}

// public generated WebView New() :2025
void WebView__New1_fn(WebView** __retval)
{
    *__retval = WebView::New1();
}

// public void add_PageLoaded(Uno.EventHandler value) :2168
void WebView__add_PageLoaded_fn(WebView* __this, uDelegate* value)
{
    __this->add_PageLoaded(value);
}

// public void remove_PageLoaded(Uno.EventHandler value) :2169
void WebView__remove_PageLoaded_fn(WebView* __this, uDelegate* value)
{
    __this->remove_PageLoaded(value);
}

// public double get_Progress() :2151
void WebView__get_Progress_fn(WebView* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// public void add_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) :2174
void WebView__add_ProgressChanged_fn(WebView* __this, uDelegate* value)
{
    __this->add_ProgressChanged(value);
}

// public void remove_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) :2175
void WebView__remove_ProgressChanged_fn(WebView* __this, uDelegate* value)
{
    __this->remove_ProgressChanged(value);
}

// public void Reload() :2122
void WebView__Reload_fn(WebView* __this)
{
    __this->Reload();
}

// public string get_Source() :2087
void WebView__get_Source_fn(WebView* __this, uString** __retval)
{
    *__retval = __this->Source();
}

// public void set_Source(string value) :2088
void WebView__set_Source_fn(WebView* __this, uString* value)
{
    __this->Source(value);
}

// public void Stop() :2127
void WebView__Stop_fn(WebView* __this)
{
    __this->Stop();
}

// public string get_Url() :2093
void WebView__get_Url_fn(WebView* __this, uString** __retval)
{
    *__retval = __this->Url();
}

// public void set_Url(string value) :2094
void WebView__set_Url_fn(WebView* __this, uString* value)
{
    __this->Url(value);
}

// public void add_UrlChanged(Uno.EventHandler value) :2162
void WebView__add_UrlChanged_fn(WebView* __this, uDelegate* value)
{
    __this->add_UrlChanged(value);
}

// public void remove_UrlChanged(Uno.EventHandler value) :2163
void WebView__remove_UrlChanged_fn(WebView* __this, uDelegate* value)
{
    __this->remove_UrlChanged(value);
}

// public generated WebView() [instance] :2025
void WebView::ctor_3()
{
    uStackFrame __("Fuse.Android.Controls.WebView", ".ctor()");
    ctor_2();
}

// public generated string get_BaseUrl() [instance] :2082
uString* WebView::BaseUrl()
{
    uStackFrame __("Fuse.Android.Controls.WebView", "get_BaseUrl()");
    return _BaseUrl;
}

// public generated void set_BaseUrl(string value) [instance] :2082
void WebView::BaseUrl(uString* value)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "set_BaseUrl(string)");
    _BaseUrl = value;
}

// public void add_BeginLoading(Uno.EventHandler value) [instance] :2156
void WebView::add_BeginLoading(uDelegate* value)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "add_BeginLoading(Uno.EventHandler)");
    uPtr(_webViewClient)->add_PageStarted(value);
}

// public void remove_BeginLoading(Uno.EventHandler value) [instance] :2157
void WebView::remove_BeginLoading(uDelegate* value)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "remove_BeginLoading(Uno.EventHandler)");
    uPtr(_webViewClient)->remove_PageStarted(value);
}

// public bool get_CanGoBack() [instance] :2104
bool WebView::CanGoBack()
{
    uStackFrame __("Fuse.Android.Controls.WebView", "get_CanGoBack()");
    return uPtr(_androidWebView)->canGoBack();
}

// public bool get_CanGoForward() [instance] :2109
bool WebView::CanGoForward()
{
    uStackFrame __("Fuse.Android.Controls.WebView", "get_CanGoForward()");
    return uPtr(_androidWebView)->canGoForward();
}

// public string get_DocumentTitle() [instance] :2099
uString* WebView::DocumentTitle()
{
    uStackFrame __("Fuse.Android.Controls.WebView", "get_DocumentTitle()");
    return ::g::Android::java::lang::String::op_Implicit(uPtr(_androidWebView)->getTitle());
}

// public void Eval(string js) [instance] :2075
void WebView::Eval(uString* js)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "Eval(string)");
    uPtr(_resultHandler)->Callback = NULL;
    uPtr(_androidWebView)->loadUrl(::g::Android::java::lang::String::op_Implicit1(::g::Uno::String::op_Addition2(::STRINGS[27/*"javascript:"*/], js)));
}

// public void Eval(string js, Uno.Action<string> resultHandler) [instance] :2069
void WebView::Eval1(uString* js, uDelegate* resultHandler)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "Eval(string,Uno.Action<string>)");
    uPtr(_resultHandler)->Callback = resultHandler;
    uPtr(_androidWebView)->loadUrl(::g::Android::java::lang::String::op_Implicit1(::g::Uno::String::op_Addition2(::STRINGS[27/*"javascript:"*/], uPtr(_resultHandler)->getExpr(js))));
}

// public Uno.UX.FileSource get_File() [instance] :2181
::g::Uno::UX::FileSource* WebView::File()
{
    uStackFrame __("Fuse.Android.Controls.WebView", "get_File()");
    return _file;
}

// public void set_File(Uno.UX.FileSource value) [instance] :2182
void WebView::File(::g::Uno::UX::FileSource* value)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "set_File(Uno.UX.FileSource)");
    _file = value;

    if (_file != NULL)
        LoadFile(_file);
}

// public void GoBack() [instance] :2112
void WebView::GoBack()
{
    uStackFrame __("Fuse.Android.Controls.WebView", "GoBack()");
    uPtr(_androidWebView)->goBack();
}

// public void GoForward() [instance] :2117
void WebView::GoForward()
{
    uStackFrame __("Fuse.Android.Controls.WebView", "GoForward()");
    uPtr(_androidWebView)->goForward();
}

// private void LoadFile(Uno.UX.FileSource file) [instance] :2194
void WebView::LoadFile(::g::Uno::UX::FileSource* file)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "LoadFile(Uno.UX.FileSource)");
    uString* data = ::STRINGS[8/*""*/];

    {
        const auto __finally_fun = [&]()
        {
            LoadHTML(data);
        };

        const uFinally<decltype(__finally_fun)> __f(__finally_fun);
        try
        {
            data = uPtr(file)->ReadAllText();
        }
        catch (const uThrowable& __t)
        {
            ::g::Uno::Exception* e = __t.Exception;
            data = uPtr(e)->ToString();
        }
    }
}

// public void LoadHtml(string html) [instance] :2132
void WebView::LoadHtml(uString* html)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "LoadHtml(string)");
    uString* ind1;
    LoadHtml1(html, (ind1 = BaseUrl(), (ind1 != NULL) ? ind1 : ::STRINGS[8/*""*/]));
}

// public void LoadHtml(string html, string baseUrl) [instance] :2137
void WebView::LoadHtml1(uString* html, uString* baseUrl)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "LoadHtml(string,string)");
    uString* ind2;

    if (::g::Uno::String::op_Equality(html, NULL) || ::g::Uno::String::op_Equality(html, ::STRINGS[8/*""*/]))
        return;

    uPtr(_androidWebView)->loadDataWithBaseURL(::g::Android::java::lang::String::op_Implicit1((ind2 = (baseUrl != NULL) ? baseUrl : (uString*)BaseUrl(), (ind2 != NULL) ? ind2 : ::STRINGS[8/*""*/])), ::g::Android::java::lang::String::op_Implicit1(html), ::g::Android::java::lang::String::op_Implicit1(::STRINGS[28/*"text/html"*/]), ::g::Android::java::lang::String::op_Implicit1(::STRINGS[29/*"UTF-8"*/]), NULL);
}

// private void LoadHTML(string html) [instance] :2190
void WebView::LoadHTML(uString* html)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "LoadHTML(string)");
    uPtr(_androidWebView)->loadDataWithBaseURL(NULL, ::g::Android::java::lang::String::op_Implicit1(html), ::g::Android::java::lang::String::op_Implicit1(::STRINGS[28/*"text/html"*/]), ::g::Android::java::lang::String::op_Implicit1(::STRINGS[30/*"utf-8"*/]), NULL);
}

// public void LoadUrl(string url) [instance] :2143
void WebView::LoadUrl(uString* url)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "LoadUrl(string)");

    if (::g::Uno::String::op_Equality(url, NULL) || ::g::Uno::String::op_Equality(url, ::STRINGS[8/*""*/]))
        url = ::STRINGS[31/*"about:blank"*/];

    uPtr(_androidWebView)->loadUrl(::g::Android::java::lang::String::op_Implicit1(url));
}

// public void add_PageLoaded(Uno.EventHandler value) [instance] :2168
void WebView::add_PageLoaded(uDelegate* value)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "add_PageLoaded(Uno.EventHandler)");
    uPtr(_webViewClient)->add_PageLoaded(value);
}

// public void remove_PageLoaded(Uno.EventHandler value) [instance] :2169
void WebView::remove_PageLoaded(uDelegate* value)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "remove_PageLoaded(Uno.EventHandler)");
    uPtr(_webViewClient)->remove_PageLoaded(value);
}

// public double get_Progress() [instance] :2151
double WebView::Progress()
{
    uStackFrame __("Fuse.Android.Controls.WebView", "get_Progress()");
    return (double)uPtr(_androidWebView)->getProgress() / 100.0;
}

// public void add_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) [instance] :2174
void WebView::add_ProgressChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "add_ProgressChanged(Uno.UX.ValueChangedHandler<double>)");
    uPtr(_webChromeClient)->add_ProgressChanged(value);
}

// public void remove_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) [instance] :2175
void WebView::remove_ProgressChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "remove_ProgressChanged(Uno.UX.ValueChangedHandler<double>)");
    uPtr(_webChromeClient)->remove_ProgressChanged(value);
}

// public void Reload() [instance] :2122
void WebView::Reload()
{
    uStackFrame __("Fuse.Android.Controls.WebView", "Reload()");
    uPtr(_androidWebView)->reload();
}

// public string get_Source() [instance] :2087
uString* WebView::Source()
{
    uStackFrame __("Fuse.Android.Controls.WebView", "get_Source()");
    return _source;
}

// public void set_Source(string value) [instance] :2088
void WebView::Source(uString* value)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "set_Source(string)");
    LoadHtml(_source = value);
}

// public void Stop() [instance] :2127
void WebView::Stop()
{
    uStackFrame __("Fuse.Android.Controls.WebView", "Stop()");
    uPtr(_androidWebView)->stopLoading();
}

// public string get_Url() [instance] :2093
uString* WebView::Url()
{
    uStackFrame __("Fuse.Android.Controls.WebView", "get_Url()");
    return ::g::Android::java::lang::String::op_Implicit(uPtr(_androidWebView)->getUrl());
}

// public void set_Url(string value) [instance] :2094
void WebView::Url(uString* value)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "set_Url(string)");
    LoadUrl(value);
}

// public void add_UrlChanged(Uno.EventHandler value) [instance] :2162
void WebView::add_UrlChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "add_UrlChanged(Uno.EventHandler)");
    uPtr(_webViewClient)->add_UrlChanged(value);
}

// public void remove_UrlChanged(Uno.EventHandler value) [instance] :2163
void WebView::remove_UrlChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Android.Controls.WebView", "remove_UrlChanged(Uno.EventHandler)");
    uPtr(_webViewClient)->remove_UrlChanged(value);
}

// public generated WebView New() [static] :2025
WebView* WebView::New1()
{
    WebView* obj3 = (WebView*)uNew(WebView_typeof());
    obj3->ctor_3();
    return obj3;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\Controls\$.uno(2221)
// -----------------------------------------------------------------------

// internal sealed extern class WebViewClient :2221
// {
::g::Android::android::webkit::WebViewClient_type* WebViewClient_typeof()
{
    static uSStrong< ::g::Android::android::webkit::WebViewClient_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(WebViewClient);
    options.TypeSize = sizeof(::g::Android::android::webkit::WebViewClient_type);
    type = (::g::Android::android::webkit::WebViewClient_type*)uClassType::New("Fuse.Android.Controls.WebViewClient", options);
    type->SetBase(::g::Android::android::webkit::WebViewClient_typeof());
    type->fp_ctor_ = (void*)WebViewClient__New7_fn;
    type->fp_onPageFinished = (void(*)(::g::Android::android::webkit::WebViewClient*, ::g::Android::android::webkit::WebView*, ::g::Android::java::lang::String*))WebViewClient__onPageFinished_fn;
    type->fp_onPageStarted = (void(*)(::g::Android::android::webkit::WebViewClient*, ::g::Android::android::webkit::WebView*, ::g::Android::java::lang::String*, ::g::Android::android::graphics::Bitmap*))WebViewClient__onPageStarted_fn;
    type->fp_shouldOverrideUrlLoading = (void(*)(::g::Android::android::webkit::WebViewClient*, ::g::Android::android::webkit::WebView*, ::g::Android::java::lang::String*, bool*))WebViewClient__shouldOverrideUrlLoading_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::STRINGS[32] = uString::Const("com.Bindings.Binding_Fuse_Android_Controls_WebViewClient");
    ::STRINGS[1] = uString::Const("<init>");
    ::STRINGS[5] = uString::Const("(J)V");
    ::TYPES[4] = ::g::Uno::Bool_typeof();
    ::TYPES[5] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[6] = ::g::Android::Base::Primitives::ujclass_typeof();
    ::TYPES[14] = ::g::Uno::Delegate_typeof();
    ::TYPES[57] = ::g::Uno::EventHandler_typeof();
    ::TYPES[38] = uObject_typeof();
    ::TYPES[109] = ::g::Uno::EventArgs_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::android::webkit::WebViewClient_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::android::webkit::WebViewClient_type, interface1));
    type->SetFields(5,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Android::Controls::WebViewClient, loadingFinished), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Android::Controls::WebViewClient, redirect), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Android::Controls::WebViewClient, PageLoaded1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Android::Controls::WebViewClient, PageStarted1), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(::g::Fuse::Android::Controls::WebViewClient, UrlChanged1), 0,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Fuse::Android::Controls::WebViewClient::_javaClass3_, uFieldFlagsStatic);
    return type;
}

// public WebViewClient() :2231
void WebViewClient__ctor_7_fn(WebViewClient* __this)
{
    __this->ctor_7();
}

// public WebViewClient New() :2231
void WebViewClient__New7_fn(WebViewClient** __retval)
{
    *__retval = WebViewClient::New7();
}

// public override sealed void onPageFinished(Android.android.webkit.WebView view, Android.java.lang.String url) :2263
void WebViewClient__onPageFinished_fn(WebViewClient* __this, ::g::Android::android::webkit::WebView* view, ::g::Android::java::lang::String* url)
{
    uStackFrame __("Fuse.Android.Controls.WebViewClient", "onPageFinished(Android.android.webkit.WebView,Android.java.lang.String)");

    if (::g::Uno::Delegate::op_Inequality(__this->UrlChanged1, NULL))
        uPtr(__this->UrlChanged1)->Invoke(2, __this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());

    if (!__this->redirect)
        __this->loadingFinished = true;

    if (__this->loadingFinished && !__this->redirect)
    {
        __this->loadingFinished = true;

        if (::g::Uno::Delegate::op_Inequality(__this->PageLoaded1, NULL))
            uPtr(__this->PageLoaded1)->Invoke(2, __this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
    }
    else
        __this->redirect = false;
}

// public override sealed void onPageStarted(Android.android.webkit.WebView view, Android.java.lang.String url, Android.android.graphics.Bitmap favIcon) :2253
void WebViewClient__onPageStarted_fn(WebViewClient* __this, ::g::Android::android::webkit::WebView* view, ::g::Android::java::lang::String* url, ::g::Android::android::graphics::Bitmap* favIcon)
{
    uStackFrame __("Fuse.Android.Controls.WebViewClient", "onPageStarted(Android.android.webkit.WebView,Android.java.lang.String,Android.android.graphics.Bitmap)");

    if (__this->loadingFinished)
    {
        if (::g::Uno::Delegate::op_Inequality(__this->PageStarted1, NULL))
            uPtr(__this->PageStarted1)->Invoke(2, __this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
    }

    __this->loadingFinished = false;
}

// public generated void add_PageLoaded(Uno.EventHandler value) :2224
void WebViewClient__add_PageLoaded_fn(WebViewClient* __this, uDelegate* value)
{
    __this->add_PageLoaded(value);
}

// public generated void remove_PageLoaded(Uno.EventHandler value) :2224
void WebViewClient__remove_PageLoaded_fn(WebViewClient* __this, uDelegate* value)
{
    __this->remove_PageLoaded(value);
}

// public generated void add_PageStarted(Uno.EventHandler value) :2225
void WebViewClient__add_PageStarted_fn(WebViewClient* __this, uDelegate* value)
{
    __this->add_PageStarted(value);
}

// public generated void remove_PageStarted(Uno.EventHandler value) :2225
void WebViewClient__remove_PageStarted_fn(WebViewClient* __this, uDelegate* value)
{
    __this->remove_PageStarted(value);
}

// public override sealed bool shouldOverrideUrlLoading(Android.android.webkit.WebView view, Android.java.lang.String url) :2237
void WebViewClient__shouldOverrideUrlLoading_fn(WebViewClient* __this, ::g::Android::android::webkit::WebView* view, ::g::Android::java::lang::String* url, bool* __retval)
{
    uStackFrame __("Fuse.Android.Controls.WebViewClient", "shouldOverrideUrlLoading(Android.android.webkit.WebView,Android.java.lang.String)");

    if (!__this->loadingFinished)
        __this->redirect = true;
    else
    {
        if (::g::Uno::Delegate::op_Inequality(__this->PageStarted1, NULL))
            uPtr(__this->PageStarted1)->Invoke(2, __this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
    }

    __this->loadingFinished = false;
    uPtr(view)->loadUrl(url);
    return *__retval = true, void();
}

// public generated void add_UrlChanged(Uno.EventHandler value) :2226
void WebViewClient__add_UrlChanged_fn(WebViewClient* __this, uDelegate* value)
{
    __this->add_UrlChanged(value);
}

// public generated void remove_UrlChanged(Uno.EventHandler value) :2226
void WebViewClient__remove_UrlChanged_fn(WebViewClient* __this, uDelegate* value)
{
    __this->remove_UrlChanged(value);
}

jclass WebViewClient::_javaClass3_;

// public WebViewClient() [instance] :2231
void WebViewClient::ctor_7()
{
    uStackFrame __("Fuse.Android.Controls.WebViewClient", ".ctor()");

    if (!_subclassed)
    {
        _subclassed = true;
        _javaClassName = ::STRINGS[32/*"com.Binding...*/];
    }

    ctor_6(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);

    if (::g::Android::Base::Primitives::ujclass::op_Equality(WebViewClient::_javaClass3(), ::g::Android::Base::Primitives::ujclass::Null()))
    {
        WebViewClient::_javaClass3() = ::g::Android::Base::JNI::LocalToGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[32/*"com.Binding...*/], false));
        JniHelper jni;
        BEGIN_REG_MTD(3);
        REG_MTD(0,"__n_shouldOverrideUrlLoading","(JLandroid/webkit/WebView;Ljava/lang/String;JJ)Z",Binding_Fuse_Android_Controls_WebViewClient__shouldOverrideUrlLoading24355);
        REG_MTD(1,"__n_onPageStarted","(JLandroid/webkit/WebView;Ljava/lang/String;Landroid/graphics/Bitmap;JJJ)V",Binding_Fuse_Android_Controls_WebViewClient__onPageStarted24356);
        REG_MTD(2,"__n_onPageFinished","(JLandroid/webkit/WebView;Ljava/lang/String;JJ)V",Binding_Fuse_Android_Controls_WebViewClient__onPageFinished24357);
        COMMIT_REG_MTD(WebViewClient::_javaClass3());
    }

    jclass tmpCls = ::g::Android::Base::JNI::LoadClass3(_javaClassName, false);
    jmethodID mtd = ::g::Android::Base::JNI::GetMethodID(tmpCls, ::STRINGS[1/*"<init>"*/], ::STRINGS[5/*"(J)V"*/]);
    jobject tmp = ::g::Android::Base::JNI::NewObject1(tmpCls, mtd, ::g::Android::Base::Primitives::ujvalue::op_Implicit7((jlong)this->__obj_weak));
    ::g::Android::Base::JNI::CheckException();
    _javaObject = ::g::Android::Base::JNI::LocalToGlobalRef1(tmp);
    ::g::Android::Base::JNI::DeleteLocalRef(tmpCls);
    loadingFinished = true;
    redirect = false;
}

// public generated void add_PageLoaded(Uno.EventHandler value) [instance] :2224
void WebViewClient::add_PageLoaded(uDelegate* value)
{
    uStackFrame __("Fuse.Android.Controls.WebViewClient", "add_PageLoaded(Uno.EventHandler)");
    PageLoaded1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PageLoaded1, value), ::TYPES[57/*Uno.EventHandler*/]);
}

// public generated void remove_PageLoaded(Uno.EventHandler value) [instance] :2224
void WebViewClient::remove_PageLoaded(uDelegate* value)
{
    uStackFrame __("Fuse.Android.Controls.WebViewClient", "remove_PageLoaded(Uno.EventHandler)");
    PageLoaded1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PageLoaded1, value), ::TYPES[57/*Uno.EventHandler*/]);
}

// public generated void add_PageStarted(Uno.EventHandler value) [instance] :2225
void WebViewClient::add_PageStarted(uDelegate* value)
{
    uStackFrame __("Fuse.Android.Controls.WebViewClient", "add_PageStarted(Uno.EventHandler)");
    PageStarted1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PageStarted1, value), ::TYPES[57/*Uno.EventHandler*/]);
}

// public generated void remove_PageStarted(Uno.EventHandler value) [instance] :2225
void WebViewClient::remove_PageStarted(uDelegate* value)
{
    uStackFrame __("Fuse.Android.Controls.WebViewClient", "remove_PageStarted(Uno.EventHandler)");
    PageStarted1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PageStarted1, value), ::TYPES[57/*Uno.EventHandler*/]);
}

// public generated void add_UrlChanged(Uno.EventHandler value) [instance] :2226
void WebViewClient::add_UrlChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Android.Controls.WebViewClient", "add_UrlChanged(Uno.EventHandler)");
    UrlChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(UrlChanged1, value), ::TYPES[57/*Uno.EventHandler*/]);
}

// public generated void remove_UrlChanged(Uno.EventHandler value) [instance] :2226
void WebViewClient::remove_UrlChanged(uDelegate* value)
{
    uStackFrame __("Fuse.Android.Controls.WebViewClient", "remove_UrlChanged(Uno.EventHandler)");
    UrlChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(UrlChanged1, value), ::TYPES[57/*Uno.EventHandler*/]);
}

// public WebViewClient New() [static] :2231
WebViewClient* WebViewClient::New7()
{
    WebViewClient* obj1 = (WebViewClient*)uNew(WebViewClient_typeof());
    obj1->ctor_7();
    return obj1;
}
// }

}}}} // ::g::Fuse::Android::Controls
