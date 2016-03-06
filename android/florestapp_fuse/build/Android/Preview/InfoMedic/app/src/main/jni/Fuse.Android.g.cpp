// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseAndroid_bundle.h>
#include <Android.android.app.Activity.h>
#include <Android.android.content.Context.h>
#include <Android.android.content.ContextWrapper.h>
#include <Android.android.content.res.AssetManager.h>
#include <Android.android.graphics.Bitmap.h>
#include <Android.android.graphics.BitmapDLRConfig.h>
#include <Android.android.graphics.Canvas.h>
#include <Android.android.graphics.Paint.h>
#include <Android.android.graphics.Rect.h>
#include <Android.android.graphics.Typeface.h>
#include <Android.android.opengl.GLUtils.h>
#include <Android.android.os.BuildDLRVERSION.h>
#include <Android.android.text.Layout.h>
#include <Android.android.text.LayoutDLRAlignment.h>
#include <Android.android.text.StaticLayout.h>
#include <Android.android.text.TextPaint.h>
#include <Android.android.text.TextUtilsDLRTruncateAt.h>
#include <Android.android.view.MotionEvent.h>
#include <Android.android.view.View.h>
#include <Android.android.view.ViewDLROnTouchListener.h>
#include <Android.android.view.ViewGroup.h>
#include <Android.android.view.ViewGroupDLRLayoutParams.h>
#include <Android.android.widget.RelativeLayout.h>
#include <Android.android.widget.RelativeLayoutDLRLayoutParams.h>
#include <Android.Base.JNI.h>
#include <Android.Base.Primitives.jmethodID.h>
#include <Android.Base.Primitives.ujclass.h>
#include <Android.Base.Primitives.ujlong.h>
#include <Android.Base.Primitives.ujobject.h>
#include <Android.Base.Primitives.ujvalue.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.java.lang.CharSequence.h>
#include <Android.java.lang.Object.h>
#include <Android.java.lang.String.h>
#include <Android.Runtime.IntArray.h>
#include <Fuse.Android.AndroidExtensions.h>
#include <Fuse.Android.BindingView.h>
#include <Fuse.Android.Blitter.h>
#include <Fuse.Android.Controls.Button.h>
#include <Fuse.Android.Controls.Circle.h>
#include <Fuse.Android.Controls.Image.h>
#include <Fuse.Android.Controls.MapView.h>
#include <Fuse.Android.Controls.PlainTextEdit.h>
#include <Fuse.Android.Controls.Rectangle.h>
#include <Fuse.Android.Controls.SeekBar.h>
#include <Fuse.Android.Controls.Switch.h>
#include <Fuse.Android.Controls.TextEdit.h>
#include <Fuse.Android.Controls.TextView.h>
#include <Fuse.Android.Controls.WebView.h>
#include <Fuse.Android.FocusChangedHandler.h>
#include <Fuse.Android.FocusChangedListener.h>
#include <Fuse.Android.Helpers.h>
#include <Fuse.Android.InputDispatch.h>
#include <Fuse.Android.InputDispatch.TouchListener.h>
#include <Fuse.Android.NativeStyle.h>
#include <Fuse.Android.NativeStyle.Template.h>
#include <Fuse.Android.NativeStyle.Template.Template1.h>
#include <Fuse.Android.NativeStyle.Template.Template2.Factory.h>
#include <Fuse.Android.NativeStyle.Template.Template2.Factory1.h>
#include <Fuse.Android.NativeStyle.Template.Template2.h>
#include <Fuse.Android.NativeTemplate.h>
#include <Fuse.Android.NativeViews.ContentControl.h>
#include <Fuse.Android.NativeViews.NativeView.h>
#include <Fuse.Android.NativeViews.NativeViewHost.h>
#include <Fuse.Android.NativeViews.ParentControl.h>
#include <Fuse.Android.NativeViews.ScrollView.h>
#include <Fuse.Android.NativeViews.SurfaceView.h>
#include <Fuse.Android.NativeViews.TextureView.h>
#include <Fuse.Android.RootView.h>
#include <Fuse.Android.RootViewContainer.h>
#include <Fuse.Android.StatusBarConfig.h>
#include <Fuse.Android.TextControlLayout.h>
#include <Fuse.Android.TextRenderer.BackgroundRender.h>
#include <Fuse.Android.TextRenderer.h>
#include <Fuse.Android.TypefaceCache.h>
#include <Fuse.AppBase.h>
#include <Fuse.Behavior.h>
#include <Fuse.Controls.Button.h>
#include <Fuse.Controls.Circle.h>
#include <Fuse.Controls.ContentControl.h>
#include <Fuse.Controls.Graphics.ControlVisual-1.h>
#include <Fuse.Controls.Graphics.Visual.h>
#include <Fuse.Controls.GraphicsView.h>
#include <Fuse.Controls.Image.h>
#include <Fuse.Controls.MapView.h>
#include <Fuse.Controls.NativeViewHost.h>
#include <Fuse.Controls.ParentControl.h>
#include <Fuse.Controls.PlainTextEdit.h>
#include <Fuse.Controls.Rectangle.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.Slider.h>
#include <Fuse.Controls.Switch.h>
#include <Fuse.Controls.TextBlock.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.TextEdit.h>
#include <Fuse.Controls.WebView.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Elements.TextAlignment.h>
#include <Fuse.Elements.TextWrapping.h>
#include <Fuse.Font.h>
#include <Fuse.GraphicsWorker.h>
#include <Fuse.Input.Pointer.h>
#include <Fuse.Input.PointerEventData.h>
#include <Fuse.Input.PointerMovedArgs.h>
#include <Fuse.Input.PointerPressedArgs.h>
#include <Fuse.Input.PointerReleasedArgs.h>
#include <Fuse.IViewport.h>
#include <Fuse.LayoutParams.h>
#include <Fuse.Node.h>
#include <Fuse.Resources.DisposalManager.h>
#include <Fuse.Style.h>
#include <Fuse.StyleProperty-2.h>
#include <Fuse.Themes.GraphicsStyle.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <jni.h>
#include <OpenGL.GL.h>
#include <OpenGL.GLTextureHandle.h>
#include <OpenGL.GLTextureTarget.h>
#include <Uno.Action.h>
#include <Uno.Application.h>
#include <Uno.ArgumentOutOfRangeException.h>
#include <Uno.Bool.h>
#include <Uno.Buffer.h>
#include <Uno.BundleFile.h>
#include <Uno.Byte.h>
#include <Uno.Byte4.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.HashSet-1.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.Format.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAttributeType.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.IO.Directory.h>
#include <Uno.IO.File.h>
#include <Uno.IO.UserDirectory.h>
#include <Uno.Long.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.Platform.PointerType.h>
#include <Uno.Platform.ViewNativeHandle.h>
#include <Uno.Platform2.Application.h>
#include <Uno.Rect.h>
#include <Uno.Recti.h>
#include <Uno.Runtime.Implementation.Internal.BufferConverters.h>
#include <Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.ULong.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.Factory.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Template-1.h>
#include <Uno.UX.ValueChangedArgs-1.h>
#include <Uno.UX.ValueChangedHandler-1.h>
#include <Uno/JNIHelper.h>
//~
JNFUN(jboolean,Binding_Fuse_Android_InputDispatch_TouchListener__onTouch22729,jlong ujPtr, jobject arg0, jobject arg1, jlong arg2, jlong arg3) {
    INITCALLBACK(uPtr,uObject*);
    JARG_TO_UNO(arg2,::g::Android::android::view::View*,((::g::Android::android::view::View*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::android::view::View_typeof(), false, true, true)));
    JARG_TO_UNO(arg3,::g::Android::android::view::MotionEvent*,((::g::Android::android::view::MotionEvent*)::g::Android::Base::Wrappers::JWrapper::New2(arg1, (uType*)::g::Android::android::view::MotionEvent_typeof(), false, true, true)));
    JTRY
    return (jboolean)::g::Android::android::view::ViewDLROnTouchListener::onTouch(uInterface(uPtr, ::g::Android::android::view::ViewDLROnTouchListener_typeof()), tmparg2, tmparg3);
    JCATCH
}
JNFUN(jboolean,Binding_Fuse_Android_RootViewContainer__onInterceptTouchEvent23409,jlong ujPtr, jobject arg0, jlong arg1) {
    INITCALLBACK(uPtr,::g::Android::android::view::ViewGroup*);
    JARG_TO_UNO(arg1,::g::Android::android::view::MotionEvent*,((::g::Android::android::view::MotionEvent*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::android::view::MotionEvent_typeof(), false, true, true)));
    JTRY
    return (jboolean)uPtr->onInterceptTouchEvent(tmparg1);
    JCATCH
}
JNFUN(jboolean,Binding_Fuse_Android_RootViewContainer__onTouchEvent22991,jlong ujPtr, jobject arg0, jlong arg1) {
    INITCALLBACK(uPtr,::g::Android::android::view::View*);
    JARG_TO_UNO(arg1,::g::Android::android::view::MotionEvent*,((::g::Android::android::view::MotionEvent*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::android::view::MotionEvent_typeof(), false, true, true)));
    JTRY
    return (jboolean)uPtr->onTouchEvent(tmparg1);
    JCATCH
}
JNFUN(void,Binding_Fuse_Android_FocusChangedListener__onFocusChange22722,jlong ujPtr, jobject arg0, jboolean arg1, jlong arg2, jlong arg3) {
    INITCALLBACK(uPtr,uObject*);
    JARG_TO_UNO(arg2,::g::Android::android::view::View*,((::g::Android::android::view::View*)::g::Android::Base::Wrappers::JWrapper::New2(arg0, (uType*)::g::Android::android::view::View_typeof(), false, true, true)));
    JTRY
    ::g::Android::android::view::ViewDLROnFocusChangeListener::onFocusChange(uInterface(uPtr, ::g::Android::android::view::ViewDLROnFocusChangeListener_typeof()), tmparg2, ((bool)arg1));
    JCATCH
}
static uString* STRINGS[12];
static uType* TYPES[86];

namespace g{
namespace Fuse{
namespace Android{

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\$.uno(253)
// -------------------------------------------------------------

// internal static extern class AndroidExtensions :253
// {
uClassType* AndroidExtensions_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Android.AndroidExtensions", options);
    ::TYPES[0] = ::g::Uno::Float_typeof();
    ::TYPES[1] = ::g::Android::android::graphics::Rect_typeof();
    return type;
}

// public static Uno.Rect ToRect(Android.android.graphics.Rect r) :255
void AndroidExtensions__ToRect_fn(::g::Android::android::graphics::Rect* r, ::g::Uno::Rect* __retval)
{
    *__retval = AndroidExtensions::ToRect(r);
}

// public static Uno.Rect ToRect(Android.android.graphics.Rect r) [static] :255
::g::Uno::Rect AndroidExtensions::ToRect(::g::Android::android::graphics::Rect* r)
{
    uStackFrame __("Fuse.Android.AndroidExtensions", "ToRect(Android.android.graphics.Rect)");
    return ::g::Uno::Rect__New1((float)uPtr(r)->left(), (float)uPtr(r)->top(), (float)uPtr(r)->right(), (float)uPtr(r)->bottom());
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\$.uno(1158)
// --------------------------------------------------------------

// private sealed class TextRenderer.BackgroundRender :1158
// {
uType* TextRenderer__BackgroundRender_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(TextRenderer__BackgroundRender);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Android.TextRenderer.BackgroundRender", options);
    ::TYPES[2] = ::g::Fuse::Android::TextRenderer_typeof();
    ::TYPES[3] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        ::g::Android::android::text::StaticLayout_typeof(), offsetof(::g::Fuse::Android::TextRenderer__BackgroundRender, _layout), 0,
        ::g::Uno::Recti_typeof(), offsetof(::g::Fuse::Android::TextRenderer__BackgroundRender, _pixelBounds), 0,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Android::TextRenderer__BackgroundRender, _renderColor), 0,
        ::g::OpenGL::GLTextureHandle_typeof(), offsetof(::g::Fuse::Android::TextRenderer__BackgroundRender, _result), 0,
        ::g::Fuse::Android::TextRenderer_typeof(), offsetof(::g::Fuse::Android::TextRenderer__BackgroundRender, _textRenderer), 0,
        ::g::Uno::ULong_typeof(), offsetof(::g::Fuse::Android::TextRenderer__BackgroundRender, _textureVersion), 0);
    return type;
}

// public BackgroundRender(Fuse.Android.TextRenderer textRenderer, ulong textureVersion, Android.android.text.StaticLayout layout, float4 renderColor, Uno.Recti pixelBounds) :1167
void TextRenderer__BackgroundRender__ctor__fn(TextRenderer__BackgroundRender* __this, ::g::Fuse::Android::TextRenderer* textRenderer, uint64_t* textureVersion, ::g::Android::android::text::StaticLayout* layout, ::g::Uno::Float4* renderColor, ::g::Uno::Recti* pixelBounds)
{
    __this->ctor_(textRenderer, *textureVersion, layout, *renderColor, *pixelBounds);
}

// private void DoneCallback() :1182
void TextRenderer__BackgroundRender__DoneCallback_fn(TextRenderer__BackgroundRender* __this)
{
    __this->DoneCallback();
}

// public BackgroundRender New(Fuse.Android.TextRenderer textRenderer, ulong textureVersion, Android.android.text.StaticLayout layout, float4 renderColor, Uno.Recti pixelBounds) :1167
void TextRenderer__BackgroundRender__New1_fn(::g::Fuse::Android::TextRenderer* textRenderer, uint64_t* textureVersion, ::g::Android::android::text::StaticLayout* layout, ::g::Uno::Float4* renderColor, ::g::Uno::Recti* pixelBounds, TextRenderer__BackgroundRender** __retval)
{
    *__retval = TextRenderer__BackgroundRender::New1(textRenderer, *textureVersion, layout, *renderColor, *pixelBounds);
}

// public void UpdateTextureAsync() :1176
void TextRenderer__BackgroundRender__UpdateTextureAsync_fn(TextRenderer__BackgroundRender* __this)
{
    __this->UpdateTextureAsync();
}

// public BackgroundRender(Fuse.Android.TextRenderer textRenderer, ulong textureVersion, Android.android.text.StaticLayout layout, float4 renderColor, Uno.Recti pixelBounds) [instance] :1167
void TextRenderer__BackgroundRender::ctor_(::g::Fuse::Android::TextRenderer* textRenderer, uint64_t textureVersion, ::g::Android::android::text::StaticLayout* layout, ::g::Uno::Float4 renderColor, ::g::Uno::Recti pixelBounds)
{
    uStackFrame __("Fuse.Android.TextRenderer.BackgroundRender", ".ctor(Fuse.Android.TextRenderer,ulong,Android.android.text.StaticLayout,float4,Uno.Recti)");
    _textRenderer = textRenderer;
    _textureVersion = textureVersion;
    _layout = layout;
    _renderColor = renderColor;
    _pixelBounds = pixelBounds;
}

// private void DoneCallback() [instance] :1182
void TextRenderer__BackgroundRender::DoneCallback()
{
    uStackFrame __("Fuse.Android.TextRenderer.BackgroundRender", "DoneCallback()");

    if (_textureVersion == uPtr(_textRenderer)->_wantedVersion)
    {
        uPtr(_textRenderer)->SetTexture(_result);
        uPtr(_textRenderer)->_textureVersion = _textureVersion;
    }
    else
        ::g::OpenGL::GL::DeleteTexture(_result);
}

// public void UpdateTextureAsync() [instance] :1176
void TextRenderer__BackgroundRender::UpdateTextureAsync()
{
    uStackFrame __("Fuse.Android.TextRenderer.BackgroundRender", "UpdateTextureAsync()");
    _result = uPtr(_textRenderer)->UpdateTexture(_layout, _renderColor, _pixelBounds);
    ::g::Fuse::UpdateManager::AddOnceAction(uDelegate::New(::TYPES[3/*Uno.Action*/], (void*)TextRenderer__BackgroundRender__DoneCallback_fn, this), 0);
}

// public BackgroundRender New(Fuse.Android.TextRenderer textRenderer, ulong textureVersion, Android.android.text.StaticLayout layout, float4 renderColor, Uno.Recti pixelBounds) [static] :1167
TextRenderer__BackgroundRender* TextRenderer__BackgroundRender::New1(::g::Fuse::Android::TextRenderer* textRenderer, uint64_t textureVersion, ::g::Android::android::text::StaticLayout* layout, ::g::Uno::Float4 renderColor, ::g::Uno::Recti pixelBounds)
{
    TextRenderer__BackgroundRender* obj1 = (TextRenderer__BackgroundRender*)uNew(TextRenderer__BackgroundRender_typeof());
    obj1->ctor_(textRenderer, textureVersion, layout, renderColor, pixelBounds);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\$.uno(177)
// -------------------------------------------------------------

// internal static extern class BindingView :177
// {
uClassType* BindingView_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Android.BindingView", options);
    return type;
}

// public static Uno.Platform.ViewNativeHandle GetNativeViewHandle(Android.android.view.View view) :179
void BindingView__GetNativeViewHandle_fn(::g::Android::android::view::View* view, uPlatform2::ViewNativeHandle* __retval)
{
    *__retval = BindingView::GetNativeViewHandle(view);
}

// public static Uno.Platform.ViewNativeHandle GetNativeViewHandle(Android.android.view.View view) [static] :179
uPlatform2::ViewNativeHandle BindingView::GetNativeViewHandle(::g::Android::android::view::View* view)
{
    uStackFrame __("Fuse.Android.BindingView", "GetNativeViewHandle(Android.android.view.View)");
    return (uPlatform2::ViewNativeHandle)uPtr(view)->_GetJavaObject();
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\$.uno(1216)
// --------------------------------------------------------------

// internal sealed class Blitter :1216
// {
// static Blitter() :1216
static void Blitter__cctor__fn(uType* __type)
{
    Blitter::Singleton_ = Blitter::New1();
}

uType* Blitter_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Blitter);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Android.Blitter", options);
    type->fp_ctor_ = (void*)Blitter__New1_fn;
    type->fp_cctor_ = Blitter__cctor__fn;
    ::TYPES[4] = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof();
    ::TYPES[5] = ::g::Uno::Float2_typeof()->Array();
    ::TYPES[6] = ::g::FuseAndroid_bundle_typeof();
    type->SetFields(0,
        ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall_typeof(), offsetof(::g::Fuse::Android::Blitter, _draw_55a11d82), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(::g::Fuse::Android::Blitter, Blit_v_55a11d82_1_7_1), 0,
        ::g::Uno::Float2_typeof()->Array(), offsetof(::g::Fuse::Android::Blitter, Blit_verts_55a11d82_1_6_5), 0,
        Blitter_typeof(), (uintptr_t)&::g::Fuse::Android::Blitter::Singleton_, uFieldFlagsStatic);
    return type;
}

// public generated Blitter() :1216
void Blitter__ctor__fn(Blitter* __this)
{
    __this->ctor_();
}

// public void Blit(texture2D vt, float2 pos, float2 size, float4x4 localToClipTransform) :1220
void Blitter__Blit_fn(Blitter* __this, ::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2* pos, ::g::Uno::Float2* size, ::g::Uno::Float4x4* localToClipTransform)
{
    __this->Blit(vt, *pos, *size, *localToClipTransform);
}

// private generated void init_DrawCalls() :1216
void Blitter__init_DrawCalls_fn(Blitter* __this)
{
    __this->init_DrawCalls();
}

// public generated Blitter New() :1216
void Blitter__New1_fn(Blitter** __retval)
{
    *__retval = Blitter::New1();
}

uSStrong<Blitter*> Blitter::Singleton_;

// public generated Blitter() [instance] :1216
void Blitter::ctor_()
{
    uStackFrame __("Fuse.Android.Blitter", ".ctor()");
    init_DrawCalls();
}

// public void Blit(texture2D vt, float2 pos, float2 size, float4x4 localToClipTransform) [instance] :1220
void Blitter::Blit(::g::Uno::Graphics::Texture2D* vt, ::g::Uno::Float2 pos, ::g::Uno::Float2 size, ::g::Uno::Float4x4 localToClipTransform)
{
    uStackFrame __("Fuse.Android.Blitter", "Blit(texture2D,float2,float2,float4x4)");
    _draw_55a11d82.BlendEnabled(true);
    _draw_55a11d82.CullFace(0);
    _draw_55a11d82.BlendSrcAlpha(7);
    _draw_55a11d82.BlendDstRgb(3);
    _draw_55a11d82.Use();
    _draw_55a11d82.Attrib1(0, 2, Blit_v_55a11d82_1_7_1, 8, 0);
    _draw_55a11d82.Uniform2(1, size);
    _draw_55a11d82.Uniform2(2, pos);
    _draw_55a11d82.Uniform12(3, localToClipTransform);
    _draw_55a11d82.Sampler2(4, vt);
    _draw_55a11d82.DrawArrays(uPtr(Blit_verts_55a11d82_1_6_5)->Length());
}

// private generated void init_DrawCalls() [instance] :1216
void Blitter::init_DrawCalls()
{
    uStackFrame __("Fuse.Android.Blitter", "init_DrawCalls()");
    uArray* verts_55a11d82_1_6_0 = uArray::Init< ::g::Uno::Float2>(::TYPES[5/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 1.0f));
    Blit_v_55a11d82_1_7_1 = ::g::Uno::Graphics::VertexBuffer::New2(::g::Uno::Runtime::Implementation::Internal::BufferConverters::ToBuffer3(verts_55a11d82_1_6_0), 0);
    Blit_verts_55a11d82_1_6_5 = verts_55a11d82_1_6_0;
    _draw_55a11d82 = ::g::Uno::Runtime::Implementation::ShaderBackends::OpenGL::GLDrawCall__New1(::g::FuseAndroid_bundle::Blitter8e9d75eb());
}

// public generated Blitter New() [static] :1216
Blitter* Blitter::New1()
{
    Blitter* obj1 = (Blitter*)uNew(Blitter_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\.uno\$.uno(37)
// -----------------------------------------------------------------

// public partial sealed class NativeStyle.Template.Template2.Factory :37
// {
// static Factory() :44
static void NativeStyle__Template__Template2__Factory__cctor__fn(uType* __type)
{
}

::g::Uno::UX::Factory_type* NativeStyle__Template__Template2__Factory_typeof()
{
    static uSStrong< ::g::Uno::UX::Factory_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(NativeStyle__Template__Template2__Factory);
    options.TypeSize = sizeof(::g::Uno::UX::Factory_type);
    type = (::g::Uno::UX::Factory_type*)uClassType::New("Fuse.Android.NativeStyle.Template.Template2.Factory", options);
    type->SetBase(::g::Uno::UX::Factory_typeof());
    type->fp_cctor_ = NativeStyle__Template__Template2__Factory__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Factory*, uObject**))NativeStyle__Template__Template2__Factory__New1_fn;
    ::TYPES[7] = uObject_typeof();
    type->SetFields(2,
        ::g::Fuse::Android::NativeStyle__Template__Template2_typeof(), offsetof(::g::Fuse::Android::NativeStyle__Template__Template2__Factory, __parent1), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NativeStyle__Template__Template2__Factory__New2_fn, 0, true, NativeStyle__Template__Template2__Factory_typeof(), 1, ::g::Fuse::Android::NativeStyle__Template__Template2_typeof()));
    return type;
}

// public Factory(Fuse.Android.NativeStyle.Template.Template2 parent) :40
void NativeStyle__Template__Template2__Factory__ctor_1_fn(NativeStyle__Template__Template2__Factory* __this, ::g::Fuse::Android::NativeStyle__Template__Template2* parent)
{
    __this->ctor_1(parent);
}

// public override sealed object New() :47
void NativeStyle__Template__Template2__Factory__New1_fn(NativeStyle__Template__Template2__Factory* __this, uObject** __retval)
{
    uStackFrame __("Fuse.Android.NativeStyle.Template.Template2.Factory", "New()");
    ::g::Fuse::Android::Controls::PlainTextEdit* self = ::g::Fuse::Android::Controls::PlainTextEdit::New2();
    return *__retval = self, void();
}

// public Factory New(Fuse.Android.NativeStyle.Template.Template2 parent) :40
void NativeStyle__Template__Template2__Factory__New2_fn(::g::Fuse::Android::NativeStyle__Template__Template2* parent, NativeStyle__Template__Template2__Factory** __retval)
{
    *__retval = NativeStyle__Template__Template2__Factory::New2(parent);
}

// public Factory(Fuse.Android.NativeStyle.Template.Template2 parent) [instance] :40
void NativeStyle__Template__Template2__Factory::ctor_1(::g::Fuse::Android::NativeStyle__Template__Template2* parent)
{
    uStackFrame __("Fuse.Android.NativeStyle.Template.Template2.Factory", ".ctor(Fuse.Android.NativeStyle.Template.Template2)");
    ctor_(NULL, false);
    __parent1 = parent;
}

// public Factory New(Fuse.Android.NativeStyle.Template.Template2 parent) [static] :40
NativeStyle__Template__Template2__Factory* NativeStyle__Template__Template2__Factory::New2(::g::Fuse::Android::NativeStyle__Template__Template2* parent)
{
    NativeStyle__Template__Template2__Factory* obj1 = (NativeStyle__Template__Template2__Factory*)uNew(NativeStyle__Template__Template2__Factory_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\.uno\$.uno(53)
// -----------------------------------------------------------------

// public partial sealed class NativeStyle.Template.Template2.Factory1 :53
// {
// static Factory1() :60
static void NativeStyle__Template__Template2__Factory1__cctor__fn(uType* __type)
{
}

::g::Uno::UX::Factory_type* NativeStyle__Template__Template2__Factory1_typeof()
{
    static uSStrong< ::g::Uno::UX::Factory_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(NativeStyle__Template__Template2__Factory1);
    options.TypeSize = sizeof(::g::Uno::UX::Factory_type);
    type = (::g::Uno::UX::Factory_type*)uClassType::New("Fuse.Android.NativeStyle.Template.Template2.Factory1", options);
    type->SetBase(::g::Uno::UX::Factory_typeof());
    type->fp_cctor_ = NativeStyle__Template__Template2__Factory1__cctor__fn;
    type->fp_New1 = (void(*)(::g::Uno::UX::Factory*, uObject**))NativeStyle__Template__Template2__Factory1__New1_fn;
    ::TYPES[7] = uObject_typeof();
    type->SetFields(2,
        ::g::Fuse::Android::NativeStyle__Template__Template2_typeof(), offsetof(::g::Fuse::Android::NativeStyle__Template__Template2__Factory1, __parent1), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NativeStyle__Template__Template2__Factory1__New2_fn, 0, true, NativeStyle__Template__Template2__Factory1_typeof(), 1, ::g::Fuse::Android::NativeStyle__Template__Template2_typeof()));
    return type;
}

// public Factory1(Fuse.Android.NativeStyle.Template.Template2 parent) :56
void NativeStyle__Template__Template2__Factory1__ctor_1_fn(NativeStyle__Template__Template2__Factory1* __this, ::g::Fuse::Android::NativeStyle__Template__Template2* parent)
{
    __this->ctor_1(parent);
}

// public override sealed object New() :63
void NativeStyle__Template__Template2__Factory1__New1_fn(NativeStyle__Template__Template2__Factory1* __this, uObject** __retval)
{
    uStackFrame __("Fuse.Android.NativeStyle.Template.Template2.Factory1", "New()");
    ::g::Fuse::Android::TextRenderer* self = ::g::Fuse::Android::TextRenderer::New1();
    return *__retval = self, void();
}

// public Factory1 New(Fuse.Android.NativeStyle.Template.Template2 parent) :56
void NativeStyle__Template__Template2__Factory1__New2_fn(::g::Fuse::Android::NativeStyle__Template__Template2* parent, NativeStyle__Template__Template2__Factory1** __retval)
{
    *__retval = NativeStyle__Template__Template2__Factory1::New2(parent);
}

// public Factory1(Fuse.Android.NativeStyle.Template.Template2 parent) [instance] :56
void NativeStyle__Template__Template2__Factory1::ctor_1(::g::Fuse::Android::NativeStyle__Template__Template2* parent)
{
    uStackFrame __("Fuse.Android.NativeStyle.Template.Template2.Factory1", ".ctor(Fuse.Android.NativeStyle.Template.Template2)");
    ctor_(NULL, false);
    __parent1 = parent;
}

// public Factory1 New(Fuse.Android.NativeStyle.Template.Template2 parent) [static] :56
NativeStyle__Template__Template2__Factory1* NativeStyle__Template__Template2__Factory1::New2(::g::Fuse::Android::NativeStyle__Template__Template2* parent)
{
    NativeStyle__Template__Template2__Factory1* obj1 = (NativeStyle__Template__Template2__Factory1*)uNew(NativeStyle__Template__Template2__Factory1_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\$.uno(195)
// -------------------------------------------------------------

// internal extern delegate void FocusChangedHandler(object sender, bool hasFocus) :195
uDelegateType* FocusChangedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != NULL) return type;

    type = uDelegateType::New("Fuse.Android.FocusChangedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Uno::Bool_typeof());
    return type;
}

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\$.uno(197)
// -------------------------------------------------------------

// internal sealed extern class FocusChangedListener :197
// {
FocusChangedListener_type* FocusChangedListener_typeof()
{
    static uSStrong<FocusChangedListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(FocusChangedListener);
    options.TypeSize = sizeof(FocusChangedListener_type);
    type = (FocusChangedListener_type*)uClassType::New("Fuse.Android.FocusChangedListener", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->interface1.fp_Dispose = (void(*)(uObject*))FocusChangedListener__UnoIDisposableDispose1_fn;
    type->interface2.fp_onFocusChange = (void(*)(uObject*, ::g::Android::android::view::View*, bool*))FocusChangedListener__AndroidandroidviewViewDLROnFocusChangeListeneronFocusChange_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    ::STRINGS[0] = uString::Const("com.Bindings.Binding_Fuse_Android_FocusChangedListener");
    ::STRINGS[1] = uString::Const("<init>");
    ::STRINGS[2] = uString::Const("(J)V");
    ::TYPES[8] = ::g::Uno::Bool_typeof();
    ::TYPES[9] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[10] = ::g::Android::Base::Primitives::ujclass_typeof();
    ::TYPES[11] = ::g::Android::android::view::ViewDLROnFocusChangeListener_typeof();
    ::TYPES[12] = ::g::Uno::IDisposable_typeof();
    ::TYPES[13] = ::g::Fuse::Android::FocusChangedHandler_typeof();
    ::TYPES[7] = uObject_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(FocusChangedListener_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(FocusChangedListener_type, interface1),
        ::g::Android::android::view::ViewDLROnFocusChangeListener_typeof(), offsetof(FocusChangedListener_type, interface2));
    type->SetFields(5,
        ::g::Fuse::Android::FocusChangedHandler_typeof(), offsetof(::g::Fuse::Android::FocusChangedListener, _handler), 0,
        ::g::Android::android::view::View_typeof(), offsetof(::g::Fuse::Android::FocusChangedListener, _view), 0,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Fuse::Android::FocusChangedListener::_javaClass2_, uFieldFlagsStatic);
    return type;
}

// private FocusChangedListener(Android.android.view.View view, Fuse.Android.FocusChangedHandler handler) :212
void FocusChangedListener__ctor_5_fn(FocusChangedListener* __this, ::g::Android::android::view::View* view, uDelegate* handler)
{
    __this->ctor_5(view, handler);
}

// public static Uno.IDisposable AddHandler(Android.android.view.View view, Fuse.Android.FocusChangedHandler handler) :202
void FocusChangedListener__AddHandler_fn(::g::Android::android::view::View* view, uDelegate* handler, uObject** __retval)
{
    *__retval = FocusChangedListener::AddHandler(view, handler);
}

// private void Android.android.view.ViewDLROnFocusChangeListener.onFocusChange(Android.android.view.View v, bool hasFocus) :226
void FocusChangedListener__AndroidandroidviewViewDLROnFocusChangeListeneronFocusChange_fn(FocusChangedListener* __this, ::g::Android::android::view::View* v, bool* hasFocus)
{
    uStackFrame __("Fuse.Android.FocusChangedListener", "Android.android.view.ViewDLROnFocusChangeListener.onFocusChange(Android.android.view.View,bool)");
    bool hasFocus_ = *hasFocus;
    uPtr(__this->_handler)->Invoke(2, v, uCRef(hasFocus_));
}

// private FocusChangedListener New(Android.android.view.View view, Fuse.Android.FocusChangedHandler handler) :212
void FocusChangedListener__New5_fn(::g::Android::android::view::View* view, uDelegate* handler, FocusChangedListener** __retval)
{
    *__retval = FocusChangedListener::New5(view, handler);
}

// private void Uno.IDisposable.Dispose() :221
void FocusChangedListener__UnoIDisposableDispose1_fn(FocusChangedListener* __this)
{
    uStackFrame __("Fuse.Android.FocusChangedListener", "Uno.IDisposable.Dispose()");
    uPtr(__this->_view)->setOnFocusChangeListener(NULL);
}

jclass FocusChangedListener::_javaClass2_;

// private FocusChangedListener(Android.android.view.View view, Fuse.Android.FocusChangedHandler handler) [instance] :212
void FocusChangedListener::ctor_5(::g::Android::android::view::View* view, uDelegate* handler)
{
    uStackFrame __("Fuse.Android.FocusChangedListener", ".ctor(Android.android.view.View,Fuse.Android.FocusChangedHandler)");

    if (!_subclassed)
    {
        _subclassed = true;
        _javaClassName = ::STRINGS[0/*"com.Binding...*/];
    }

    ctor_4(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);

    if (::g::Android::Base::Primitives::ujclass::op_Equality(FocusChangedListener::_javaClass2(), ::g::Android::Base::Primitives::ujclass::Null()))
    {
        FocusChangedListener::_javaClass2() = ::g::Android::Base::JNI::LocalToGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[0/*"com.Binding...*/], false));
        JniHelper jni;
        BEGIN_REG_MTD(1);
        REG_MTD(0,"__n_onFocusChange","(JLandroid/view/View;ZJJ)V",Binding_Fuse_Android_FocusChangedListener__onFocusChange22722);
        COMMIT_REG_MTD(FocusChangedListener::_javaClass2());
    }

    jclass tmpCls = ::g::Android::Base::JNI::LoadClass3(_javaClassName, false);
    jmethodID mtd = ::g::Android::Base::JNI::GetMethodID(tmpCls, ::STRINGS[1/*"<init>"*/], ::STRINGS[2/*"(J)V"*/]);
    jobject tmp = ::g::Android::Base::JNI::NewObject1(tmpCls, mtd, ::g::Android::Base::Primitives::ujvalue::op_Implicit7((jlong)this->__obj_weak));
    ::g::Android::Base::JNI::CheckException();
    _javaObject = ::g::Android::Base::JNI::LocalToGlobalRef1(tmp);
    ::g::Android::Base::JNI::DeleteLocalRef(tmpCls);
    _view = view;
    _handler = handler;
    uPtr(_view)->setOnFocusChangeListener((uObject*)this);
}

// public static Uno.IDisposable AddHandler(Android.android.view.View view, Fuse.Android.FocusChangedHandler handler) [static] :202
uObject* FocusChangedListener::AddHandler(::g::Android::android::view::View* view, uDelegate* handler)
{
    uStackFrame __("Fuse.Android.FocusChangedListener", "AddHandler(Android.android.view.View,Fuse.Android.FocusChangedHandler)");
    return (uObject*)FocusChangedListener::New5(view, handler);
}

// private FocusChangedListener New(Android.android.view.View view, Fuse.Android.FocusChangedHandler handler) [static] :212
FocusChangedListener* FocusChangedListener::New5(::g::Android::android::view::View* view, uDelegate* handler)
{
    FocusChangedListener* obj1 = (FocusChangedListener*)uNew(FocusChangedListener_typeof());
    obj1->ctor_5(view, handler);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\$.uno(240)
// -------------------------------------------------------------

// internal static class Helpers :240
// {
uClassType* Helpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Android.Helpers", options);
    ::TYPES[14] = ::g::Uno::Int_typeof();
    ::TYPES[15] = ::g::Uno::Float4_typeof();
    return type;
}

// public static int EncodeColor(float4 c) :242
void Helpers__EncodeColor_fn(::g::Uno::Float4* c, int* __retval)
{
    *__retval = Helpers::EncodeColor(*c);
}

// public static int EncodeColor(float4 c) [static] :242
int Helpers::EncodeColor(::g::Uno::Float4 c)
{
    uStackFrame __("Fuse.Android.Helpers", "EncodeColor(float4)");
    int r = ::g::Uno::Math::Clamp8((int)(c.X * 255.0f), 0, 255);
    int g = ::g::Uno::Math::Clamp8((int)(c.Y * 255.0f), 0, 255);
    int b = ::g::Uno::Math::Clamp8((int)(c.Z * 255.0f), 0, 255);
    int a = ::g::Uno::Math::Clamp8((int)(c.W * 255.0f), 0, 255);
    return (((a << 24) | (r << 16)) | (g << 8)) | b;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\$.uno(287)
// -------------------------------------------------------------

// internal static extern class InputDispatch :287
// {
// static InputDispatch() :287
static void InputDispatch__cctor__fn(uType* __type)
{
    InputDispatch::_listeners_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[16/*Uno.Collections.Dictionary<Android.android.view.View, Fuse.Node>*/]));
    InputDispatch::_activePointers_ = ((::g::Uno::Collections::HashSet*)::g::Uno::Collections::HashSet::New1(::TYPES[17/*Uno.Collections.HashSet<int>*/]));
    InputDispatch::_captureIdentiy_ = ::g::Uno::Object::New();
}

uClassType* InputDispatch_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Android.InputDispatch", options);
    type->fp_cctor_ = InputDispatch__cctor__fn;
    ::TYPES[16] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Android::android::view::View_typeof(), ::g::Fuse::Node_typeof());
    ::TYPES[17] = ::g::Uno::Collections::HashSet_typeof()->MakeType(::g::Uno::Int_typeof());
    ::TYPES[18] = ::g::Android::java::lang::Object_typeof();
    ::TYPES[19] = ::g::Fuse::Android::NativeViews::NativeView_typeof();
    ::TYPES[20] = ::g::Android::android::view::ViewDLROnTouchListener_typeof();
    ::TYPES[21] = ::g::Fuse::Node_typeof();
    ::TYPES[22] = ::g::Fuse::Input::PointerEventData_typeof()->Array();
    ::TYPES[0] = ::g::Uno::Float_typeof();
    ::TYPES[23] = ::g::Android::Runtime::IntArray_typeof();
    ::TYPES[24] = ::g::Fuse::IViewport_typeof();
    ::TYPES[25] = ::g::Fuse::Input::PointerEventData_typeof();
    ::TYPES[26] = ::g::Uno::Double_typeof();
    ::TYPES[3] = ::g::Uno::Action_typeof();
    ::TYPES[27] = ::g::Android::android::view::MotionEvent_typeof();
    ::TYPES[8] = ::g::Uno::Bool_typeof();
    type->SetFields(0,
        ::g::Uno::Collections::HashSet_typeof()->MakeType(::g::Uno::Int_typeof()), (uintptr_t)&::g::Fuse::Android::InputDispatch::_activePointers_, uFieldFlagsStatic,
        uObject_typeof(), (uintptr_t)&::g::Fuse::Android::InputDispatch::_captureIdentiy_, uFieldFlagsStatic,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Android::android::view::View_typeof(), ::g::Fuse::Node_typeof()), (uintptr_t)&::g::Fuse::Android::InputDispatch::_listeners_, uFieldFlagsStatic,
        InputDispatch__TouchListener_typeof(), (uintptr_t)&::g::Fuse::Android::InputDispatch::_touchListener_, uFieldFlagsStatic);
    return type;
}

// public static void AddListener(Fuse.Android.NativeViews.NativeView nativeView) :315
void InputDispatch__AddListener_fn(::g::Fuse::Android::NativeViews::NativeView* nativeView)
{
    InputDispatch::AddListener(nativeView);
}

// private static Fuse.Node FindRoot(Fuse.Node n) :425
void InputDispatch__FindRoot_fn(::g::Fuse::Node* n, ::g::Fuse::Node** __retval)
{
    *__retval = InputDispatch::FindRoot(n);
}

// private static Fuse.Node GetNode(Android.android.view.View handle) :333
void InputDispatch__GetNode_fn(::g::Android::android::view::View* handle, ::g::Fuse::Node** __retval)
{
    *__retval = InputDispatch::GetNode(handle);
}

// private static void LostCallback() :486
void InputDispatch__LostCallback_fn()
{
    InputDispatch::LostCallback();
}

// private static Fuse.Input.PointerEventData[] MakePointerEventData(Fuse.Node node, Android.android.view.View view, Android.android.view.MotionEvent motionEvent) :359
void InputDispatch__MakePointerEventData_fn(::g::Fuse::Node* node, ::g::Android::android::view::View* view, ::g::Android::android::view::MotionEvent* motionEvent, uArray** __retval)
{
    *__retval = InputDispatch::MakePointerEventData(node, view, motionEvent);
}

// private static void RaiseCancel(Fuse.Node node, Fuse.Input.PointerEventData data) :472
void InputDispatch__RaiseCancel_fn(::g::Fuse::Node* node, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch::RaiseCancel(node, data);
}

// public static void RaiseEvent(Fuse.Node node, Android.android.view.View view, Android.android.view.MotionEvent motionEvent) :390
void InputDispatch__RaiseEvent_fn(::g::Fuse::Node* node, ::g::Android::android::view::View* view, ::g::Android::android::view::MotionEvent* motionEvent)
{
    InputDispatch::RaiseEvent(node, view, motionEvent);
}

// private static void RaiseMoved(Fuse.Node node, Fuse.Input.PointerEventData data) :446
void InputDispatch__RaiseMoved_fn(::g::Fuse::Node* node, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch::RaiseMoved(node, data);
}

// private static void RaisePressed(Fuse.Node node, Fuse.Input.PointerEventData data) :431
void InputDispatch__RaisePressed_fn(::g::Fuse::Node* node, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch::RaisePressed(node, data);
}

// private static void RaiseReleased(Fuse.Node node, Fuse.Input.PointerEventData data) :458
void InputDispatch__RaiseReleased_fn(::g::Fuse::Node* node, ::g::Fuse::Input::PointerEventData* data)
{
    InputDispatch::RaiseReleased(node, data);
}

// private static bool RegisterPointer(int pointerId) :343
void InputDispatch__RegisterPointer_fn(int* pointerId, bool* __retval)
{
    *__retval = InputDispatch::RegisterPointer(*pointerId);
}

// public static void RemoveListener(Fuse.Android.NativeViews.NativeView nativeView) :327
void InputDispatch__RemoveListener_fn(::g::Fuse::Android::NativeViews::NativeView* nativeView)
{
    InputDispatch::RemoveListener(nativeView);
}

// private static void UnregisterPointer(int pointerId) :353
void InputDispatch__UnregisterPointer_fn(int* pointerId)
{
    InputDispatch::UnregisterPointer(*pointerId);
}

uSStrong< ::g::Uno::Collections::HashSet*> InputDispatch::_activePointers_;
uSStrong<uObject*> InputDispatch::_captureIdentiy_;
uSStrong< ::g::Uno::Collections::Dictionary*> InputDispatch::_listeners_;
uSStrong<InputDispatch__TouchListener*> InputDispatch::_touchListener_;

// public static void AddListener(Fuse.Android.NativeViews.NativeView nativeView) [static] :315
void InputDispatch::AddListener(::g::Fuse::Android::NativeViews::NativeView* nativeView)
{
    uStackFrame __("Fuse.Android.InputDispatch", "AddListener(Fuse.Android.NativeViews.NativeView)");
    InputDispatch_typeof()->Init();

    if (::g::Android::java::lang::Object::op_Equality1(InputDispatch::_touchListener(), NULL))
        InputDispatch::_touchListener() = InputDispatch__TouchListener::New5();

    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(InputDispatch::_listeners()), uPtr(nativeView)->Handle(), uPtr(nativeView)->Node());
    uPtr(nativeView->Handle())->setOnTouchListener((uObject*)InputDispatch::_touchListener());
}

// private static Fuse.Node FindRoot(Fuse.Node n) [static] :425
::g::Fuse::Node* InputDispatch::FindRoot(::g::Fuse::Node* n)
{
    uStackFrame __("Fuse.Android.InputDispatch", "FindRoot(Fuse.Node)");
    InputDispatch_typeof()->Init();

    if (uPtr(n)->Parent() == NULL)
        return n;

    return InputDispatch::FindRoot(uPtr(n)->Parent());
}

// private static Fuse.Node GetNode(Android.android.view.View handle) [static] :333
::g::Fuse::Node* InputDispatch::GetNode(::g::Android::android::view::View* handle)
{
    uStackFrame __("Fuse.Android.InputDispatch", "GetNode(Android.android.view.View)");
    InputDispatch_typeof()->Init();
    bool ret2;
    ::g::Fuse::Node* ret3;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(InputDispatch::_listeners()), handle, &ret2), ret2))
        return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(InputDispatch::_listeners()), handle, &ret3), ret3);

    return NULL;
}

// private static void LostCallback() [static] :486
void InputDispatch::LostCallback()
{
    InputDispatch_typeof()->Init();
}

// private static Fuse.Input.PointerEventData[] MakePointerEventData(Fuse.Node node, Android.android.view.View view, Android.android.view.MotionEvent motionEvent) [static] :359
uArray* InputDispatch::MakePointerEventData(::g::Fuse::Node* node, ::g::Android::android::view::View* view, ::g::Android::android::view::MotionEvent* motionEvent)
{
    uStackFrame __("Fuse.Android.InputDispatch", "MakePointerEventData(Fuse.Node,Android.android.view.View,Android.android.view.MotionEvent)");
    InputDispatch_typeof()->Init();
    ::g::Fuse::Input::PointerEventData* collection1;
    uArray* pointerEventData = uArray::New(::TYPES[22/*Fuse.Input.PointerEventData[]*/], uPtr(motionEvent)->getPointerCount());
    ::g::Android::Runtime::IntArray* intArray = ::g::Android::Runtime::IntArray::New6(2);
    uPtr(view)->getLocationOnScreen(intArray);
    ::g::Uno::Float2 offset = ::g::Uno::Float2__New2((float)intArray->Item(0), (float)intArray->Item(1));
    float density = ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(uPtr(node)->Viewport()), ::TYPES[24/*Fuse.IViewport*/]));

    for (int i = 0; i < pointerEventData->Length(); i++)
    {
        ::g::Uno::Float2 windowPoint = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Addition2(offset, ::g::Uno::Float2__New2(uPtr(motionEvent)->getX1(i), uPtr(motionEvent)->getY1(i))), density);
        int pointerId = motionEvent->getPointerId(i);
        uPtr(pointerEventData)->Strong< ::g::Fuse::Input::PointerEventData*>(i) = (collection1 = ::g::Fuse::Input::PointerEventData::New1(), uPtr(collection1)->PointIndex = pointerId, uPtr(collection1)->WindowPoint = windowPoint, uPtr(collection1)->Timestamp = ((double)motionEvent->getEventTime() / 1000.0), uPtr(collection1)->PointerType = 2, uPtr(collection1)->IsPrimary = (pointerId == 0), collection1);
    }

    return pointerEventData;
}

// private static void RaiseCancel(Fuse.Node node, Fuse.Input.PointerEventData data) [static] :472
void InputDispatch::RaiseCancel(::g::Fuse::Node* node, ::g::Fuse::Input::PointerEventData* data)
{
    uStackFrame __("Fuse.Android.InputDispatch", "RaiseCancel(Fuse.Node,Fuse.Input.PointerEventData)");
    InputDispatch_typeof()->Init();
    InputDispatch::UnregisterPointer(uPtr(data)->PointIndex);

    try
    {
        if (::g::Fuse::Input::Pointer::HardCapture(uPtr(data)->PointIndex, node, InputDispatch::_captureIdentiy(), uDelegate::New(::TYPES[3/*Uno.Action*/], (void*)InputDispatch__LostCallback_fn)))
            ::g::Fuse::Input::Pointer::ReleaseHardCapture(uPtr(data)->PointIndex);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// public static void RaiseEvent(Fuse.Node node, Android.android.view.View view, Android.android.view.MotionEvent motionEvent) [static] :390
void InputDispatch::RaiseEvent(::g::Fuse::Node* node, ::g::Android::android::view::View* view, ::g::Android::android::view::MotionEvent* motionEvent)
{
    uStackFrame __("Fuse.Android.InputDispatch", "RaiseEvent(Fuse.Node,Android.android.view.View,Android.android.view.MotionEvent)");
    InputDispatch_typeof()->Init();
    int action = uPtr(motionEvent)->getActionMasked();
    uArray* data = InputDispatch::MakePointerEventData(node, view, motionEvent);

    switch (action)
    {
        case 3:
        {
            for (int i = 0; i < uPtr(data)->Length(); i++)
                InputDispatch::RaiseCancel(node, uPtr(data)->Strong< ::g::Fuse::Input::PointerEventData*>(i));

            break;
        }
        case 0:
        case 5:
        {
            for (int i1 = 0; i1 < uPtr(data)->Length(); i1++)
                InputDispatch::RaisePressed(node, uPtr(data)->Strong< ::g::Fuse::Input::PointerEventData*>(i1));

            break;
        }
        case 2:
        {
            for (int i2 = 0; i2 < uPtr(data)->Length(); i2++)
                InputDispatch::RaiseMoved(node, uPtr(data)->Strong< ::g::Fuse::Input::PointerEventData*>(i2));

            break;
        }
        case 1:
        case 6:
        {
            int pointerMask = ::g::Android::android::view::MotionEvent::ACTION_POINTER_INDEX_MASK();
            int pointerShit = ::g::Android::android::view::MotionEvent::ACTION_POINTER_INDEX_SHIFT();
            int pointerIndex = (uPtr(motionEvent)->getAction() & pointerMask) >> pointerShit;
            InputDispatch::RaiseReleased(node, uPtr(data)->Strong< ::g::Fuse::Input::PointerEventData*>(pointerIndex));
            break;
        }
    }
}

// private static void RaiseMoved(Fuse.Node node, Fuse.Input.PointerEventData data) [static] :446
void InputDispatch::RaiseMoved(::g::Fuse::Node* node, ::g::Fuse::Input::PointerEventData* data)
{
    uStackFrame __("Fuse.Android.InputDispatch", "RaiseMoved(Fuse.Node,Fuse.Input.PointerEventData)");
    InputDispatch_typeof()->Init();

    try
    {
        ::g::Fuse::Input::Pointer::RaiseMoved(InputDispatch::FindRoot(node), data);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private static void RaisePressed(Fuse.Node node, Fuse.Input.PointerEventData data) [static] :431
void InputDispatch::RaisePressed(::g::Fuse::Node* node, ::g::Fuse::Input::PointerEventData* data)
{
    uStackFrame __("Fuse.Android.InputDispatch", "RaisePressed(Fuse.Node,Fuse.Input.PointerEventData)");
    InputDispatch_typeof()->Init();

    if (!InputDispatch::RegisterPointer(uPtr(data)->PointIndex))
        return;

    try
    {
        ::g::Fuse::Input::Pointer::RaisePressed(InputDispatch::FindRoot(node), data);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private static void RaiseReleased(Fuse.Node node, Fuse.Input.PointerEventData data) [static] :458
void InputDispatch::RaiseReleased(::g::Fuse::Node* node, ::g::Fuse::Input::PointerEventData* data)
{
    uStackFrame __("Fuse.Android.InputDispatch", "RaiseReleased(Fuse.Node,Fuse.Input.PointerEventData)");
    InputDispatch_typeof()->Init();
    InputDispatch::UnregisterPointer(uPtr(data)->PointIndex);

    try
    {
        ::g::Fuse::Input::Pointer::RaiseReleased(InputDispatch::FindRoot(node), data);
    }
    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::AppBase::OnUnhandledExceptionInternal(e);
    }
}

// private static bool RegisterPointer(int pointerId) [static] :343
bool InputDispatch::RegisterPointer(int pointerId)
{
    uStackFrame __("Fuse.Android.InputDispatch", "RegisterPointer(int)");
    InputDispatch_typeof()->Init();
    bool ret4;
    bool ret5;

    if (!(::g::Uno::Collections::HashSet__Contains_fn(uPtr(InputDispatch::_activePointers()), uCRef<int>(pointerId), &ret4), ret4))
    {
        ::g::Uno::Collections::HashSet__Add_fn(uPtr(InputDispatch::_activePointers()), uCRef<int>(pointerId), &ret5);
        return true;
    }

    return false;
}

// public static void RemoveListener(Fuse.Android.NativeViews.NativeView nativeView) [static] :327
void InputDispatch::RemoveListener(::g::Fuse::Android::NativeViews::NativeView* nativeView)
{
    uStackFrame __("Fuse.Android.InputDispatch", "RemoveListener(Fuse.Android.NativeViews.NativeView)");
    InputDispatch_typeof()->Init();
    bool ret6;
    uPtr(uPtr(nativeView)->Handle())->setOnTouchListener(NULL);
    ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(InputDispatch::_listeners()), nativeView->Handle(), &ret6);
}

// private static void UnregisterPointer(int pointerId) [static] :353
void InputDispatch::UnregisterPointer(int pointerId)
{
    uStackFrame __("Fuse.Android.InputDispatch", "UnregisterPointer(int)");
    InputDispatch_typeof()->Init();
    bool ret7;
    bool ret8;

    if ((::g::Uno::Collections::HashSet__Contains_fn(uPtr(InputDispatch::_activePointers()), uCRef<int>(pointerId), &ret7), ret7))
        ::g::Uno::Collections::HashSet__Remove_fn(uPtr(InputDispatch::_activePointers()), uCRef<int>(pointerId), &ret8);
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\.uno\$.uno(5)
// ----------------------------------------------------------------

// public partial sealed class NativeStyle :5
// {
// static NativeStyle() :95
static void NativeStyle__cctor__fn(uType* __type)
{
}

::g::Fuse::Style_type* NativeStyle_typeof()
{
    static uSStrong< ::g::Fuse::Style_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NativeStyle);
    options.TypeSize = sizeof(::g::Fuse::Style_type);
    type = (::g::Fuse::Style_type*)uClassType::New("Fuse.Android.NativeStyle", options);
    type->SetBase(::g::Fuse::Style_typeof());
    type->fp_ctor_ = (void*)NativeStyle__New2_fn;
    type->fp_cctor_ = NativeStyle__cctor__fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Fuse::Style__Apply_fn;
    ::TYPES[28] = ::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::GraphicsView_typeof());
    ::TYPES[29] = ::g::Fuse::Style_typeof();
    ::TYPES[30] = ::g::Uno::UX::ITemplate_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(::g::Fuse::Style_type, interface0));
    type->SetFields(5);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NativeStyle__New2_fn, 0, true, NativeStyle_typeof(), 0));
    return type;
}

// public NativeStyle() :98
void NativeStyle__ctor_1_fn(NativeStyle* __this)
{
    __this->ctor_1();
}

// private void InitializeUX() :102
void NativeStyle__InitializeUX_fn(NativeStyle* __this)
{
    __this->InitializeUX();
}

// public NativeStyle New() :98
void NativeStyle__New2_fn(NativeStyle** __retval)
{
    *__retval = NativeStyle::New2();
}

// public NativeStyle() [instance] :98
void NativeStyle::ctor_1()
{
    uStackFrame __("Fuse.Android.NativeStyle", ".ctor()");
    ctor_();
    InitializeUX();
}

// private void InitializeUX() [instance] :102
void NativeStyle::InitializeUX()
{
    uStackFrame __("Fuse.Android.NativeStyle", "InitializeUX()");
    NativeStyle__Template* collection1;
    ::g::Fuse::Android::NativeTemplate* temp = ::g::Fuse::Android::NativeTemplate::New1();
    collection1 = NativeStyle__Template::New1(this);
    uPtr(collection1)->Cascade(true);
    true;
    uPtr(collection1)->AffectSubtypes(true);
    true;
    NativeStyle__Template* temp1 = collection1;
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[30/*Uno.UX.ITemplate*/])), (uObject*)temp);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[30/*Uno.UX.ITemplate*/])), (uObject*)temp1);
}

// public NativeStyle New() [static] :98
NativeStyle* NativeStyle::New2()
{
    NativeStyle* obj2 = (NativeStyle*)uNew(NativeStyle_typeof());
    obj2->ctor_1();
    return obj2;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\$.uno(499)
// -------------------------------------------------------------

// internal sealed class NativeTemplate :499
// {
NativeTemplate_type* NativeTemplate_typeof()
{
    static uSStrong<NativeTemplate_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NativeTemplate);
    options.TypeSize = sizeof(NativeTemplate_type);
    type = (NativeTemplate_type*)uClassType::New("Fuse.Android.NativeTemplate", options);
    type->fp_ctor_ = (void*)NativeTemplate__New1_fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))NativeTemplate__Apply_fn;
    ::STRINGS[3] = uString::Const("GraphicsView inside a native application on Android API < 14 is not properly supported and will result in visual anomalies.");
    ::STRINGS[4] = uString::Const("C:\\ProgramData\\Uno\\Packages\\Fuse.Android\\0.24.7\\$.uno");
    ::STRINGS[5] = uString::Const("Apply");
    ::TYPES[21] = ::g::Fuse::Node_typeof();
    ::TYPES[31] = ::g::Fuse::Controls::ParentControl_typeof();
    ::TYPES[32] = ::g::Fuse::Controls::NativeViewHost_typeof();
    ::TYPES[33] = ::g::Fuse::Behavior_typeof();
    ::TYPES[8] = ::g::Uno::Bool_typeof();
    ::TYPES[34] = ::g::Fuse::Controls::Button_typeof();
    ::TYPES[35] = ::g::Fuse::Controls::Switch_typeof();
    ::TYPES[36] = ::g::Fuse::Controls::TextEdit_typeof();
    ::TYPES[37] = ::g::Fuse::Controls::TextBlock_typeof();
    ::TYPES[38] = ::g::Fuse::Controls::Slider_typeof();
    ::TYPES[39] = ::g::Fuse::Controls::Image_typeof();
    ::TYPES[40] = ::g::Fuse::Controls::Rectangle_typeof();
    ::TYPES[41] = ::g::Fuse::Controls::Circle_typeof();
    ::TYPES[42] = ::g::Fuse::Controls::WebView_typeof();
    ::TYPES[43] = ::g::Fuse::Controls::MapView_typeof();
    ::TYPES[44] = ::g::Fuse::Controls::ContentControl_typeof();
    ::TYPES[45] = ::g::Fuse::Controls::GraphicsView_typeof();
    ::TYPES[46] = ::g::Android::android::os::BuildDLRVERSION_typeof();
    ::TYPES[47] = ::g::Fuse::Controls::ScrollView_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(NativeTemplate_type, interface0));
    return type;
}

// public generated NativeTemplate() :499
void NativeTemplate__ctor__fn(NativeTemplate* __this)
{
    __this->ctor_();
}

// public extern bool Apply(object obj) :530
void NativeTemplate__Apply_fn(NativeTemplate* __this, uObject* obj, bool* __retval)
{
    *__retval = __this->Apply(obj);
}

// private bool HaveGraphicsViewAncestor(Fuse.Node node) :501
void NativeTemplate__HaveGraphicsViewAncestor_fn(NativeTemplate* __this, ::g::Fuse::Node* node, bool* __retval)
{
    *__retval = __this->HaveGraphicsViewAncestor(node);
}

// public generated NativeTemplate New() :499
void NativeTemplate__New1_fn(NativeTemplate** __retval)
{
    *__retval = NativeTemplate::New1();
}

// public generated NativeTemplate() [instance] :499
void NativeTemplate::ctor_()
{
}

// public extern bool Apply(object obj) [instance] :530
bool NativeTemplate::Apply(uObject* obj)
{
    uStackFrame __("Fuse.Android.NativeTemplate", "Apply(object)");

    if (HaveGraphicsViewAncestor(uAs< ::g::Fuse::Node*>(obj, ::TYPES[21/*Fuse.Node*/])))
        return true;

    ::g::Fuse::Controls::ParentControl* parentControl = uAs< ::g::Fuse::Controls::ParentControl*>(obj, ::TYPES[31/*Fuse.Controls.ParentControl*/]);

    if (uIs(obj, ::TYPES[32/*Fuse.Controls.NativeViewHost*/]))
    {
        uPtr(parentControl)->AddStyleBehavior(::g::Fuse::Android::NativeViews::NativeViewHost::New1());
        return true;
    }

    if ((parentControl != NULL) && !HaveGraphicsViewAncestor(parentControl))
    {
        uPtr(parentControl)->AddStyleBehavior(::g::Fuse::Android::NativeViews::ParentControl::New1());

        if (uIs(parentControl, ::TYPES[34/*Fuse.Controls.Button*/]))
            parentControl->AddStyleChild(::g::Fuse::Android::Controls::Button::New1());

        if (uIs(parentControl, ::TYPES[35/*Fuse.Controls.Switch*/]))
            parentControl->AddStyleChild(::g::Fuse::Android::Controls::Switch::New1());

        if (uIs(parentControl, ::TYPES[36/*Fuse.Controls.TextEdit*/]))
            parentControl->AddStyleChild(::g::Fuse::Android::Controls::TextEdit::New1());

        if (uIs(parentControl, ::TYPES[37/*Fuse.Controls.TextBlock*/]))
            parentControl->AddStyleChild(::g::Fuse::Android::Controls::TextView::New1());

        if (uIs(parentControl, ::TYPES[38/*Fuse.Controls.Slider*/]))
            parentControl->AddStyleChild(::g::Fuse::Android::Controls::SeekBar::New1());

        if (uIs(parentControl, ::TYPES[39/*Fuse.Controls.Image*/]))
            parentControl->AddStyleChild(::g::Fuse::Android::Controls::Image::New1());

        if (uIs(parentControl, ::TYPES[40/*Fuse.Controls.Rectangle*/]))
            parentControl->AddStyleChild(::g::Fuse::Android::Controls::Rectangle::New1());

        if (uIs(parentControl, ::TYPES[41/*Fuse.Controls.Circle*/]))
            parentControl->AddStyleChild(::g::Fuse::Android::Controls::Circle::New1());

        if (uIs(parentControl, ::TYPES[42/*Fuse.Controls.WebView*/]))
            parentControl->AddStyleChild(::g::Fuse::Android::Controls::WebView::New1());

        if (uIs(parentControl, ::TYPES[43/*Fuse.Controls.MapView*/]))
            parentControl->AddStyleChild(::g::Fuse::Android::Controls::MapView::New1());
    }

    ::g::Fuse::Controls::ContentControl* contentControl = uAs< ::g::Fuse::Controls::ContentControl*>(obj, ::TYPES[44/*Fuse.Controls.ContentControl*/]);

    if (contentControl != NULL)
    {
        ::g::Fuse::Controls::GraphicsView* gv = uAs< ::g::Fuse::Controls::GraphicsView*>(contentControl, ::TYPES[45/*Fuse.Controls.GraphicsView*/]);

        if (gv != NULL)
        {
            if (uPtr(gv)->IsFullScreen)
                uPtr(contentControl)->AddStyleBehavior(::g::Fuse::Android::NativeViews::SurfaceView::New1());
            else
            {
                int api = ::g::Android::android::os::BuildDLRVERSION::SDK_INT();

                if (api < 14)
                {
                    ::g::Fuse::Diagnostics::Error(::STRINGS[3/*"GraphicsVie...*/], NULL, ::STRINGS[4/*"C:\\Program...*/], 594, ::STRINGS[5/*"Apply"*/]);
                    uPtr(contentControl)->AddStyleBehavior(::g::Fuse::Android::NativeViews::SurfaceView::New1());
                }
                else
                    uPtr(contentControl)->AddStyleBehavior(::g::Fuse::Android::NativeViews::TextureView::New1());
            }
        }
        else if (uIs(contentControl, ::TYPES[47/*Fuse.Controls.ScrollView*/]))
            uPtr(contentControl)->AddStyleBehavior(::g::Fuse::Android::NativeViews::ScrollView::New1());
        else
            uPtr(contentControl)->AddStyleBehavior(::g::Fuse::Android::NativeViews::ContentControl::New1());
    }

    return true;
}

// private bool HaveGraphicsViewAncestor(Fuse.Node node) [instance] :501
bool NativeTemplate::HaveGraphicsViewAncestor(::g::Fuse::Node* node)
{
    uStackFrame __("Fuse.Android.NativeTemplate", "HaveGraphicsViewAncestor(Fuse.Node)");

    if (node == NULL)
        return false;

    if (uPtr(node)->Parent() == NULL)
        return false;

    if (uIs(node, ::TYPES[32/*Fuse.Controls.NativeViewHost*/]))
        return false;

    if (uIs(uPtr(node)->Parent(), ::TYPES[45/*Fuse.Controls.GraphicsView*/]))
        return true;

    return HaveGraphicsViewAncestor(uPtr(node)->Parent());
}

// public generated NativeTemplate New() [static] :499
NativeTemplate* NativeTemplate::New1()
{
    NativeTemplate* obj1 = (NativeTemplate*)uNew(NativeTemplate_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\$.uno(691)
// -------------------------------------------------------------

// internal sealed extern class RootView :691
// {
uType* RootView_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(RootView);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Android.RootView", options);
    type->fp_ctor_ = (void*)RootView__New1_fn;
    ::STRINGS[6] = uString::Const("A rootview is already set");
    ::TYPES[48] = ::g::Android::android::widget::RelativeLayout_typeof();
    ::TYPES[49] = ::g::Android::android::content::Context_typeof();
    ::TYPES[50] = ::g::Android::android::view::ViewGroupDLRLayoutParams_typeof();
    ::TYPES[51] = ::g::Uno::Platform2::Application_typeof();
    ::TYPES[52] = ::g::Android::android::view::View_typeof();
    ::TYPES[19] = ::g::Fuse::Android::NativeViews::NativeView_typeof();
    ::TYPES[24] = ::g::Fuse::IViewport_typeof();
    ::TYPES[21] = ::g::Fuse::Node_typeof();
    ::TYPES[14] = ::g::Uno::Int_typeof();
    ::TYPES[53] = ::g::Uno::Float2_typeof();
    type->SetFields(0,
        ::g::Android::android::widget::RelativeLayout_typeof(), offsetof(::g::Fuse::Android::RootView, _relativeLayout), 0,
        ::g::Fuse::Android::NativeViews::NativeView_typeof(), offsetof(::g::Fuse::Android::RootView, _root), 0,
        RootView_typeof(), (uintptr_t)&::g::Fuse::Android::RootView::_singleton_, uFieldFlagsStatic);
    return type;
}

// private RootView() :696
void RootView__ctor__fn(RootView* __this)
{
    __this->ctor_();
}

// public static void ClearRoot() :761
void RootView__ClearRoot_fn()
{
    RootView::ClearRoot();
}

// private void Invalidate() :739
void RootView__Invalidate_fn(RootView* __this)
{
    __this->Invalidate();
}

// public static bool IsRoot(Fuse.Android.NativeViews.NativeView view) :766
void RootView__IsRoot_fn(::g::Fuse::Android::NativeViews::NativeView* view, bool* __retval)
{
    *__retval = RootView::IsRoot(view);
}

// private RootView New() :696
void RootView__New1_fn(RootView** __retval)
{
    *__retval = RootView::New1();
}

// private Fuse.Android.NativeViews.NativeView get_Root() :713
void RootView__get_Root_fn(RootView* __this, ::g::Fuse::Android::NativeViews::NativeView** __retval)
{
    *__retval = __this->Root();
}

// private void set_Root(Fuse.Android.NativeViews.NativeView value) :714
void RootView__set_Root_fn(RootView* __this, ::g::Fuse::Android::NativeViews::NativeView* value)
{
    __this->Root(value);
}

// public static void SetRoot(Fuse.Android.NativeViews.NativeView view) :753
void RootView__SetRoot_fn(::g::Fuse::Android::NativeViews::NativeView* view)
{
    RootView::SetRoot(view);
}

// private static Fuse.Android.RootView get_Singleton() :750
void RootView__get_Singleton_fn(RootView** __retval)
{
    *__retval = RootView::Singleton();
}

// private void UpdateRootSize(float2 size) :729
void RootView__UpdateRootSize_fn(RootView* __this, ::g::Uno::Float2* size)
{
    __this->UpdateRootSize(*size);
}

// public static void UpdateSize(float2 size) :771
void RootView__UpdateSize_fn(::g::Uno::Float2* size)
{
    RootView::UpdateSize(*size);
}

uSStrong<RootView*> RootView::_singleton_;

// private RootView() [instance] :696
void RootView::ctor_()
{
    uStackFrame __("Fuse.Android.RootView", ".ctor()");
    _relativeLayout = ::g::Fuse::Android::RootViewContainer::New13(::g::Android::android::app::Activity::GetAppActivity());
    uPtr(_relativeLayout)->setLayoutParams(::g::Android::android::widget::RelativeLayoutDLRLayoutParams::New19(::g::Android::android::view::ViewGroupDLRLayoutParams::FILL_PARENT(), ::g::Android::android::view::ViewGroupDLRLayoutParams::FILL_PARENT()));
    uPtr(_relativeLayout)->setFocusable(true);
    uPtr(_relativeLayout)->setFocusableInTouchMode(true);
    ::g::Uno::Platform2::Application::RootView(::g::Fuse::Android::BindingView::GetNativeViewHandle(_relativeLayout));
}

// private void Invalidate() [instance] :739
void RootView::Invalidate()
{
    uStackFrame __("Fuse.Android.RootView", "Invalidate()");

    if (Root() != NULL)
        uPtr(uPtr(Root())->Handle())->invalidate();

    uPtr(_relativeLayout)->invalidate();
}

// private Fuse.Android.NativeViews.NativeView get_Root() [instance] :713
::g::Fuse::Android::NativeViews::NativeView* RootView::Root()
{
    uStackFrame __("Fuse.Android.RootView", "get_Root()");
    return _root;
}

// private void set_Root(Fuse.Android.NativeViews.NativeView value) [instance] :714
void RootView::Root(::g::Fuse::Android::NativeViews::NativeView* value)
{
    uStackFrame __("Fuse.Android.RootView", "set_Root(Fuse.Android.NativeViews.NativeView)");

    if (_root != NULL)
        uPtr(_relativeLayout)->removeView(uPtr(_root)->Handle());

    _root = value;

    if (_root != NULL)
    {
        uPtr(_relativeLayout)->addView(uPtr(_root)->Handle());
        Invalidate();
    }
}

// private void UpdateRootSize(float2 size) [instance] :729
void RootView::UpdateRootSize(::g::Uno::Float2 size)
{
    uStackFrame __("Fuse.Android.RootView", "UpdateRootSize(float2)");

    if (Root() != NULL)
    {
        float density = ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(uPtr(uPtr(Root())->Node())->Viewport()), ::TYPES[24/*Fuse.IViewport*/]));
        ::g::Uno::Float2 pixelSize = ::g::Uno::Float2__op_Multiply1(size, density);
        uPtr(uPtr(Root())->Handle())->setLayoutParams(::g::Android::android::widget::RelativeLayoutDLRLayoutParams::New19((int)pixelSize.X, (int)pixelSize.Y));
    }
}

// public static void ClearRoot() [static] :761
void RootView::ClearRoot()
{
    uStackFrame __("Fuse.Android.RootView", "ClearRoot()");
    uPtr(RootView::Singleton())->Root(NULL);
}

// public static bool IsRoot(Fuse.Android.NativeViews.NativeView view) [static] :766
bool RootView::IsRoot(::g::Fuse::Android::NativeViews::NativeView* view)
{
    uStackFrame __("Fuse.Android.RootView", "IsRoot(Fuse.Android.NativeViews.NativeView)");
    return uPtr(RootView::Singleton())->Root() == view;
}

// private RootView New() [static] :696
RootView* RootView::New1()
{
    RootView* obj2 = (RootView*)uNew(RootView_typeof());
    obj2->ctor_();
    return obj2;
}

// public static void SetRoot(Fuse.Android.NativeViews.NativeView view) [static] :753
void RootView::SetRoot(::g::Fuse::Android::NativeViews::NativeView* view)
{
    uStackFrame __("Fuse.Android.RootView", "SetRoot(Fuse.Android.NativeViews.NativeView)");

    if (uPtr(RootView::Singleton())->Root() != NULL)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[6/*"A rootview ...*/]));

    uPtr(RootView::Singleton())->Root(view);
}

// public static void UpdateSize(float2 size) [static] :771
void RootView::UpdateSize(::g::Uno::Float2 size)
{
    uStackFrame __("Fuse.Android.RootView", "UpdateSize(float2)");
    uPtr(RootView::Singleton())->UpdateRootSize(size);
    uPtr(RootView::Singleton())->Invalidate();
}

// private static Fuse.Android.RootView get_Singleton() [static] :750
RootView* RootView::Singleton()
{
    uStackFrame __("Fuse.Android.RootView", "get_Singleton()");
    RootView* ind1 = RootView::_singleton();
    return (ind1 != NULL) ? ind1 : (RootView*)(RootView::_singleton() = RootView::New1());
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\$.uno(645)
// -------------------------------------------------------------

// internal sealed extern class RootViewContainer :645
// {
::g::Android::android::view::ViewGroup_type* RootViewContainer_typeof()
{
    static uSStrong< ::g::Android::android::view::ViewGroup_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(RootViewContainer);
    options.TypeSize = sizeof(::g::Android::android::view::ViewGroup_type);
    type = (::g::Android::android::view::ViewGroup_type*)uClassType::New("Fuse.Android.RootViewContainer", options);
    type->SetBase(::g::Android::android::widget::RelativeLayout_typeof());
    type->fp_onInterceptTouchEvent = (void(*)(::g::Android::android::view::ViewGroup*, ::g::Android::android::view::MotionEvent*, bool*))RootViewContainer__onInterceptTouchEvent_fn;
    type->fp_onTouchEvent = (void(*)(::g::Android::android::view::View*, ::g::Android::android::view::MotionEvent*, bool*))RootViewContainer__onTouchEvent_fn;
    type->interface2.fp_requestLayout = (void(*)(uObject*))::g::Android::android::view::View__requestLayout_fn;
    type->interface2.fp_isLayoutRequested = (void(*)(uObject*, bool*))::g::Android::android::view::View__isLayoutRequested_fn;
    type->interface2.fp_requestTransparentRegion = (void(*)(uObject*, ::g::Android::android::view::View*))::g::Android::android::view::ViewGroup__requestTransparentRegion_fn;
    type->interface2.fp_invalidateChild = (void(*)(uObject*, ::g::Android::android::view::View*, ::g::Android::android::graphics::Rect*))::g::Android::android::view::ViewGroup__invalidateChild_fn;
    type->interface2.fp_invalidateChildInParent = (void(*)(uObject*, ::g::Android::Runtime::IntArray*, ::g::Android::android::graphics::Rect*, uObject**))::g::Android::android::view::ViewGroup__invalidateChildInParent_fn;
    type->interface2.fp_getParent = (void(*)(uObject*, uObject**))::g::Android::android::view::View__getParent_fn;
    type->interface2.fp_requestChildFocus = (void(*)(uObject*, ::g::Android::android::view::View*, ::g::Android::android::view::View*))::g::Android::android::view::ViewGroup__requestChildFocus_fn;
    type->interface2.fp_recomputeViewAttributes = (void(*)(uObject*, ::g::Android::android::view::View*))::g::Android::android::view::ViewGroup__recomputeViewAttributes_fn;
    type->interface2.fp_clearChildFocus = (void(*)(uObject*, ::g::Android::android::view::View*))::g::Android::android::view::ViewGroup__clearChildFocus_fn;
    type->interface2.fp_getChildVisibleRect = (void(*)(uObject*, ::g::Android::android::view::View*, ::g::Android::android::graphics::Rect*, ::g::Android::android::graphics::Point*, bool*))::g::Android::android::view::ViewGroup__getChildVisibleRect_fn;
    type->interface2.fp_focusSearch = (void(*)(uObject*, ::g::Android::android::view::View*, int*, ::g::Android::android::view::View**))::g::Android::android::view::ViewGroup__focusSearch1_fn;
    type->interface2.fp_bringChildToFront = (void(*)(uObject*, ::g::Android::android::view::View*))::g::Android::android::view::ViewGroup__bringChildToFront_fn;
    type->interface2.fp_focusableViewAvailable = (void(*)(uObject*, ::g::Android::android::view::View*))::g::Android::android::view::ViewGroup__focusableViewAvailable_fn;
    type->interface2.fp_showContextMenuForChild = (void(*)(uObject*, ::g::Android::android::view::View*, bool*))::g::Android::android::view::ViewGroup__showContextMenuForChild_fn;
    type->interface2.fp_createContextMenu = (void(*)(uObject*, uObject*))::g::Android::android::view::View__createContextMenu_fn;
    type->interface2.fp_startActionModeForChild = (void(*)(uObject*, ::g::Android::android::view::View*, uObject*, ::g::Android::android::view::ActionMode**))::g::Android::android::view::ViewGroup__startActionModeForChild_fn;
    type->interface2.fp_childDrawableStateChanged = (void(*)(uObject*, ::g::Android::android::view::View*))::g::Android::android::view::ViewGroup__childDrawableStateChanged_fn;
    type->interface2.fp_requestDisallowInterceptTouchEvent = (void(*)(uObject*, bool*))::g::Android::android::view::ViewGroup__requestDisallowInterceptTouchEvent_fn;
    type->interface2.fp_requestChildRectangleOnScreen = (void(*)(uObject*, ::g::Android::android::view::View*, ::g::Android::android::graphics::Rect*, bool*, bool*))::g::Android::android::view::ViewGroup__requestChildRectangleOnScreen_fn;
    type->interface2.fp_requestSendAccessibilityEvent = (void(*)(uObject*, ::g::Android::android::view::View*, ::g::Android::android::view::accessibility::AccessibilityEvent*, bool*))::g::Android::android::view::ViewGroup__requestSendAccessibilityEvent_fn;
    type->interface2.fp_childHasTransientStateChanged = (void(*)(uObject*, ::g::Android::android::view::View*, bool*))::g::Android::android::view::ViewGroup__childHasTransientStateChanged_fn;
    type->interface2.fp_requestFitSystemWindows = (void(*)(uObject*))::g::Android::android::view::View__requestFitSystemWindows_fn;
    type->interface2.fp_getParentForAccessibility = (void(*)(uObject*, uObject**))::g::Android::android::view::View__getParentForAccessibility_fn;
    type->interface2.fp_notifySubtreeAccessibilityStateChanged = (void(*)(uObject*, ::g::Android::android::view::View*, ::g::Android::android::view::View*, int*))::g::Android::android::view::ViewGroup__notifySubtreeAccessibilityStateChanged_fn;
    type->interface2.fp_canResolveLayoutDirection = (void(*)(uObject*, bool*))::g::Android::android::view::View__canResolveLayoutDirection_fn;
    type->interface2.fp_isLayoutDirectionResolved = (void(*)(uObject*, bool*))::g::Android::android::view::View__isLayoutDirectionResolved_fn;
    type->interface2.fp_getLayoutDirection = (void(*)(uObject*, int*))::g::Android::android::view::View__getLayoutDirection_fn;
    type->interface2.fp_canResolveTextDirection = (void(*)(uObject*, bool*))::g::Android::android::view::View__canResolveTextDirection_fn;
    type->interface2.fp_isTextDirectionResolved = (void(*)(uObject*, bool*))::g::Android::android::view::View__isTextDirectionResolved_fn;
    type->interface2.fp_getTextDirection = (void(*)(uObject*, int*))::g::Android::android::view::View__getTextDirection_fn;
    type->interface2.fp_canResolveTextAlignment = (void(*)(uObject*, bool*))::g::Android::android::view::View__canResolveTextAlignment_fn;
    type->interface2.fp_isTextAlignmentResolved = (void(*)(uObject*, bool*))::g::Android::android::view::View__isTextAlignmentResolved_fn;
    type->interface2.fp_getTextAlignment = (void(*)(uObject*, int*))::g::Android::android::view::View__getTextAlignment_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::STRINGS[7] = uString::Const("com.Bindings.Binding_Fuse_Android_RootViewContainer");
    ::STRINGS[1] = uString::Const("<init>");
    ::STRINGS[8] = uString::Const("(JLandroid/content/Context;)V");
    ::TYPES[8] = ::g::Uno::Bool_typeof();
    ::TYPES[9] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[10] = ::g::Android::Base::Primitives::ujclass_typeof();
    ::TYPES[18] = ::g::Android::java::lang::Object_typeof();
    ::TYPES[52] = ::g::Android::android::view::View_typeof();
    ::TYPES[54] = ::g::Fuse::AppBase_typeof();
    ::TYPES[55] = ::g::Uno::Application_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(::g::Android::android::view::ViewGroup_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Android::android::view::ViewGroup_type, interface1),
        ::g::Android::android::view::ViewParent_typeof(), offsetof(::g::Android::android::view::ViewGroup_type, interface2));
    type->SetFields(5,
        ::g::Android::android::view::MotionEvent_typeof(), offsetof(::g::Fuse::Android::RootViewContainer, _currentEvent), 0,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Fuse::Android::RootViewContainer::_javaClass5_, uFieldFlagsStatic);
    return type;
}

// public RootViewContainer(Android.android.content.Context context) :649
void RootViewContainer__ctor_17_fn(RootViewContainer* __this, ::g::Android::android::content::Context* context)
{
    __this->ctor_17(context);
}

// public RootViewContainer New(Android.android.content.Context context) :649
void RootViewContainer__New13_fn(::g::Android::android::content::Context* context, RootViewContainer** __retval)
{
    *__retval = RootViewContainer::New13(context);
}

// public override sealed bool onInterceptTouchEvent(Android.android.view.MotionEvent motionEvent) :653
void RootViewContainer__onInterceptTouchEvent_fn(RootViewContainer* __this, ::g::Android::android::view::MotionEvent* motionEvent, bool* __retval)
{
    uStackFrame __("Fuse.Android.RootViewContainer", "onInterceptTouchEvent(Android.android.view.MotionEvent)");
    bool ret2;
    __this->_currentEvent = motionEvent;
    return *__retval = (::g::Android::android::view::ViewGroup__onInterceptTouchEvent_fn(__this, motionEvent, &ret2), ret2), void();
}

// public override sealed bool onTouchEvent(Android.android.view.MotionEvent motionEvent) :659
void RootViewContainer__onTouchEvent_fn(RootViewContainer* __this, ::g::Android::android::view::MotionEvent* motionEvent, bool* __retval)
{
    uStackFrame __("Fuse.Android.RootViewContainer", "onTouchEvent(Android.android.view.MotionEvent)");
    bool ret3;

    if (::g::Android::java::lang::Object::op_Inequality1(__this->_currentEvent, motionEvent))
        return *__retval = false, void();

    bool result = (::g::Android::android::view::View__onTouchEvent_fn(__this, motionEvent, &ret3), ret3);
    ::g::Fuse::Node* node = __this->RootNode();

    if (node == NULL)
        return *__retval = false, void();

    ::g::Fuse::Android::InputDispatch::RaiseEvent(node, __this, motionEvent);
    return *__retval = ::g::Android::java::lang::Object::op_Equality1(__this->_currentEvent, motionEvent), void();
}

// private Fuse.Node get_RootNode() :679
void RootViewContainer__get_RootNode_fn(RootViewContainer* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->RootNode();
}

jclass RootViewContainer::_javaClass5_;

// public RootViewContainer(Android.android.content.Context context) [instance] :649
void RootViewContainer::ctor_17(::g::Android::android::content::Context* context)
{
    uStackFrame __("Fuse.Android.RootViewContainer", ".ctor(Android.android.content.Context)");

    if (!_subclassed)
    {
        _subclassed = true;
        _javaClassName = ::STRINGS[7/*"com.Binding...*/];
    }

    ctor_16(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);

    if (::g::Android::Base::Primitives::ujclass::op_Equality(RootViewContainer::_javaClass5(), ::g::Android::Base::Primitives::ujclass::Null()))
    {
        RootViewContainer::_javaClass5() = ::g::Android::Base::JNI::LocalToGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[7/*"com.Binding...*/], false));
        JniHelper jni;
        BEGIN_REG_MTD(2);
        REG_MTD(0,"__n_onInterceptTouchEvent","(JLandroid/view/MotionEvent;J)Z",Binding_Fuse_Android_RootViewContainer__onInterceptTouchEvent23409);
        REG_MTD(1,"__n_onTouchEvent","(JLandroid/view/MotionEvent;J)Z",Binding_Fuse_Android_RootViewContainer__onTouchEvent22991);
        COMMIT_REG_MTD(RootViewContainer::_javaClass5());
    }

    jclass tmpCls = ::g::Android::Base::JNI::LoadClass3(_javaClassName, false);
    jmethodID mtd = ::g::Android::Base::JNI::GetMethodID(tmpCls, ::STRINGS[1/*"<init>"*/], ::STRINGS[8/*"(JLandroid/...*/]);
    jobject tmp = ::g::Android::Base::JNI::NewObject2(tmpCls, mtd, ::g::Android::Base::Primitives::ujvalue::op_Implicit7((jlong)this->__obj_weak), ::g::Android::Base::Primitives::ujvalue::op_Implicit8(uPtr(context)->_GetJavaObject()));
    ::g::Android::Base::JNI::CheckException();
    _javaObject = ::g::Android::Base::JNI::LocalToGlobalRef1(tmp);
    ::g::Android::Base::JNI::DeleteLocalRef(tmpCls);
}

// private Fuse.Node get_RootNode() [instance] :679
::g::Fuse::Node* RootViewContainer::RootNode()
{
    uStackFrame __("Fuse.Android.RootViewContainer", "get_RootNode()");
    ::g::Fuse::AppBase* app = uAs< ::g::Fuse::AppBase*>(::g::Uno::Application::Current(), ::TYPES[54/*Fuse.AppBase*/]);

    if (app == NULL)
        return NULL;

    return uPtr(app)->RootNode();
}

// public RootViewContainer New(Android.android.content.Context context) [static] :649
RootViewContainer* RootViewContainer::New13(::g::Android::android::content::Context* context)
{
    RootViewContainer* obj1 = (RootViewContainer*)uNew(RootViewContainer_typeof());
    obj1->ctor_17(context);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\$.uno(789)
// -------------------------------------------------------------

// public sealed class StatusBarConfig :789
// {
::g::Fuse::Behavior_type* StatusBarConfig_typeof()
{
    static uSStrong< ::g::Fuse::Behavior_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(StatusBarConfig);
    options.TypeSize = sizeof(::g::Fuse::Behavior_type);
    type = (::g::Fuse::Behavior_type*)uClassType::New("Fuse.Android.StatusBarConfig", options);
    type->SetBase(::g::Fuse::Behavior_typeof());
    type->fp_ctor_ = (void*)StatusBarConfig__New1_fn;
    ::TYPES[56] = ::g::Uno::Byte_typeof();
    ::TYPES[15] = ::g::Uno::Float4_typeof();
    ::TYPES[57] = ::g::Uno::Byte4_typeof();
    ::TYPES[14] = ::g::Uno::Int_typeof();
    type->SetFields(3,
        ::g::Uno::Float4_typeof(), offsetof(::g::Fuse::Android::StatusBarConfig, _color), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Android::StatusBarConfig, _isNavigationBarVisible), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Android::StatusBarConfig, _isVisible), 0);
    type->Reflection.SetFunctions(7,
        new uFunction("get_Color", NULL, (void*)StatusBarConfig__get_Color_fn, 0, false, ::g::Uno::Float4_typeof(), 0),
        new uFunction("set_Color", NULL, (void*)StatusBarConfig__set_Color_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Float4_typeof()),
        new uFunction("get_IsNavigationBarVisible", NULL, (void*)StatusBarConfig__get_IsNavigationBarVisible_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsNavigationBarVisible", NULL, (void*)StatusBarConfig__set_IsNavigationBarVisible_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction("get_IsVisible", NULL, (void*)StatusBarConfig__get_IsVisible_fn, 0, false, ::g::Uno::Bool_typeof(), 0),
        new uFunction("set_IsVisible", NULL, (void*)StatusBarConfig__set_IsVisible_fn, 0, false, uVoid_typeof(), 1, ::g::Uno::Bool_typeof()),
        new uFunction(".ctor", NULL, (void*)StatusBarConfig__New1_fn, 0, true, StatusBarConfig_typeof(), 0));
    return type;
}

// public generated StatusBarConfig() :789
void StatusBarConfig__ctor_1_fn(StatusBarConfig* __this)
{
    __this->ctor_1();
}

// public float4 get_Color() :795
void StatusBarConfig__get_Color_fn(StatusBarConfig* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Color();
}

// public void set_Color(float4 value) :796
void StatusBarConfig__set_Color_fn(StatusBarConfig* __this, ::g::Uno::Float4* value)
{
    __this->Color(*value);
}

// public bool get_IsNavigationBarVisible() :817
void StatusBarConfig__get_IsNavigationBarVisible_fn(StatusBarConfig* __this, bool* __retval)
{
    *__retval = __this->IsNavigationBarVisible();
}

// public void set_IsNavigationBarVisible(bool value) :818
void StatusBarConfig__set_IsNavigationBarVisible_fn(StatusBarConfig* __this, bool* value)
{
    __this->IsNavigationBarVisible(*value);
}

// public bool get_IsVisible() :806
void StatusBarConfig__get_IsVisible_fn(StatusBarConfig* __this, bool* __retval)
{
    *__retval = __this->IsVisible();
}

// public void set_IsVisible(bool value) :807
void StatusBarConfig__set_IsVisible_fn(StatusBarConfig* __this, bool* value)
{
    __this->IsVisible(*value);
}

// public generated StatusBarConfig New() :789
void StatusBarConfig__New1_fn(StatusBarConfig** __retval)
{
    *__retval = StatusBarConfig::New1();
}

// private extern void SetNavigationBarVisible(bool visible) :876
void StatusBarConfig__SetNavigationBarVisible_fn(StatusBarConfig* __this, bool* visible)
{
    __this->SetNavigationBarVisible(*visible);
}

// private void SetStatusBarColor(float4 color) :825
void StatusBarConfig__SetStatusBarColor_fn(StatusBarConfig* __this, ::g::Uno::Float4* color)
{
    __this->SetStatusBarColor(*color);
}

// private extern void SetStatusBarColor(int color) :845
void StatusBarConfig__SetStatusBarColor1_fn(StatusBarConfig* __this, int* color)
{
    __this->SetStatusBarColor1(*color);
}

// private extern void SetStatusBarVisible(bool visible) :856
void StatusBarConfig__SetStatusBarVisible_fn(StatusBarConfig* __this, bool* visible)
{
    __this->SetStatusBarVisible(*visible);
}

// public generated StatusBarConfig() [instance] :789
void StatusBarConfig::ctor_1()
{
    uStackFrame __("Fuse.Android.StatusBarConfig", ".ctor()");
    ctor_();
}

// public float4 get_Color() [instance] :795
::g::Uno::Float4 StatusBarConfig::Color()
{
    uStackFrame __("Fuse.Android.StatusBarConfig", "get_Color()");
    return _color;
}

// public void set_Color(float4 value) [instance] :796
void StatusBarConfig::Color(::g::Uno::Float4 value)
{
    uStackFrame __("Fuse.Android.StatusBarConfig", "set_Color(float4)");
    _color = value;
    SetStatusBarColor(_color);
}

// public bool get_IsNavigationBarVisible() [instance] :817
bool StatusBarConfig::IsNavigationBarVisible()
{
    uStackFrame __("Fuse.Android.StatusBarConfig", "get_IsNavigationBarVisible()");
    return _isNavigationBarVisible;
}

// public void set_IsNavigationBarVisible(bool value) [instance] :818
void StatusBarConfig::IsNavigationBarVisible(bool value)
{
    uStackFrame __("Fuse.Android.StatusBarConfig", "set_IsNavigationBarVisible(bool)");
    _isNavigationBarVisible = value;
    SetNavigationBarVisible(_isNavigationBarVisible);
}

// public bool get_IsVisible() [instance] :806
bool StatusBarConfig::IsVisible()
{
    uStackFrame __("Fuse.Android.StatusBarConfig", "get_IsVisible()");
    return _isVisible;
}

// public void set_IsVisible(bool value) [instance] :807
void StatusBarConfig::IsVisible(bool value)
{
    uStackFrame __("Fuse.Android.StatusBarConfig", "set_IsVisible(bool)");
    _isVisible = value;
    SetStatusBarVisible(_isVisible);
}

// private extern void SetNavigationBarVisible(bool visible) [instance] :876
void StatusBarConfig::SetNavigationBarVisible(bool visible)
{
    uStackFrame __("Fuse.Android.StatusBarConfig", "SetNavigationBarVisible(bool)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetNavigationBarVisible_0", "(Ljava/lang/Object;Z)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box(this),(jboolean)visible);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private void SetStatusBarColor(float4 color) [instance] :825
void StatusBarConfig::SetStatusBarColor(::g::Uno::Float4 color)
{
    uStackFrame __("Fuse.Android.StatusBarConfig", "SetStatusBarColor(float4)");
    ::g::Uno::Byte4 c = ::g::Uno::Byte4__New2((uint8_t)::g::Uno::Math::Clamp1(color.X * 255.0f, 0.0f, 255.0f), (uint8_t)::g::Uno::Math::Clamp1(color.Y * 255.0f, 0.0f, 255.0f), (uint8_t)::g::Uno::Math::Clamp1(color.Z * 255.0f, 0.0f, 255.0f), (uint8_t)::g::Uno::Math::Clamp1(color.W * 255.0f, 0.0f, 255.0f));
    int androidColor = 0;
    androidColor = androidColor | (c.W << 24);
    androidColor = androidColor | (c.X << 16);
    androidColor = androidColor | (c.Y << 8);
    androidColor = androidColor | (int)c.Z;
    SetStatusBarColor1(androidColor);
}

// private extern void SetStatusBarColor(int color) [instance] :845
void StatusBarConfig::SetStatusBarColor1(int color)
{
    uStackFrame __("Fuse.Android.StatusBarConfig", "SetStatusBarColor(int)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetStatusBarColor1_1", "(Ljava/lang/Object;I)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box(this),(jint)color);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private extern void SetStatusBarVisible(bool visible) [instance] :856
void StatusBarConfig::SetStatusBarVisible(bool visible)
{
    uStackFrame __("Fuse.Android.StatusBarConfig", "SetStatusBarVisible(bool)");
    {
        JniHelper _jni;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetStatusBarVisible_2", "(Ljava/lang/Object;Z)V");
        _jni->CallStaticVoidMethod(__cls, __mtd,::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box(this),(jboolean)visible);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public generated StatusBarConfig New() [static] :789
StatusBarConfig* StatusBarConfig::New1()
{
    StatusBarConfig* obj1 = (StatusBarConfig*)uNew(StatusBarConfig_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\.uno\$.uno(7)
// ----------------------------------------------------------------

// public partial sealed class NativeStyle.Template :7
// {
// static Template() :80
static void NativeStyle__Template__cctor__fn(uType* __type)
{
}

::g::Uno::UX::Template_type* NativeStyle__Template_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NativeStyle__Template);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Fuse.Android.NativeStyle.Template", options);
    type->SetBase(::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::GraphicsView_typeof()));
    type->fp_cctor_ = NativeStyle__Template__cctor__fn;
    type->fp_OnApply = (void(*)(::g::Uno::UX::Template*, void*))NativeStyle__Template__OnApply_fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Uno::UX::Template__Apply_fn;
    ::TYPES[58] = ::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::TextBlock_typeof());
    ::TYPES[59] = ::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::PlainTextEdit_typeof());
    ::TYPES[29] = ::g::Fuse::Style_typeof();
    ::TYPES[30] = ::g::Uno::UX::ITemplate_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(::g::Uno::UX::Template_type, interface0));
    type->SetFields(2,
        ::g::Fuse::Android::NativeStyle_typeof(), offsetof(::g::Fuse::Android::NativeStyle__Template, __parent1), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NativeStyle__Template__New1_fn, 0, true, NativeStyle__Template_typeof(), 1, ::g::Fuse::Android::NativeStyle_typeof()));
    return type;
}

// public Template(Fuse.Android.NativeStyle parent) :10
void NativeStyle__Template__ctor_1_fn(NativeStyle__Template* __this, ::g::Fuse::Android::NativeStyle* parent)
{
    __this->ctor_1(parent);
}

// public Template New(Fuse.Android.NativeStyle parent) :10
void NativeStyle__Template__New1_fn(::g::Fuse::Android::NativeStyle* parent, NativeStyle__Template** __retval)
{
    *__retval = NativeStyle__Template::New1(parent);
}

// protected override sealed void OnApply(Fuse.Controls.GraphicsView self) :83
void NativeStyle__Template__OnApply_fn(NativeStyle__Template* __this, ::g::Fuse::Controls::GraphicsView* self)
{
    uStackFrame __("Fuse.Android.NativeStyle.Template", "OnApply(Fuse.Controls.GraphicsView)");
    NativeStyle__Template__Template1* collection1;
    NativeStyle__Template__Template2* collection2;
    ::g::Fuse::Style* temp = ::g::Fuse::Style::New1();
    collection1 = NativeStyle__Template__Template1::New1(__this);
    uPtr(collection1)->Cascade(true);
    true;
    uPtr(collection1)->AffectSubtypes(true);
    true;
    NativeStyle__Template__Template1* temp1 = collection1;
    collection2 = NativeStyle__Template__Template2::New1(__this);
    uPtr(collection2)->Cascade(true);
    true;
    uPtr(collection2)->AffectSubtypes(true);
    true;
    NativeStyle__Template__Template2* temp2 = collection2;
    ::g::Fuse::Themes::GraphicsStyle* temp3 = ::g::Fuse::Themes::GraphicsStyle::New2();
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[30/*Uno.UX.ITemplate*/])), (uObject*)temp1);
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(temp->Templates()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[30/*Uno.UX.ITemplate*/])), (uObject*)temp2);
    uPtr(self)->AddStyleStyle(temp);
    self->AddStyleStyle(temp3);
}

// public Template(Fuse.Android.NativeStyle parent) [instance] :10
void NativeStyle__Template::ctor_1(::g::Fuse::Android::NativeStyle* parent)
{
    uStackFrame __("Fuse.Android.NativeStyle.Template", ".ctor(Fuse.Android.NativeStyle)");
    ctor_();
    __parent1 = parent;
}

// public Template New(Fuse.Android.NativeStyle parent) [static] :10
NativeStyle__Template* NativeStyle__Template::New1(::g::Fuse::Android::NativeStyle* parent)
{
    NativeStyle__Template* obj3 = (NativeStyle__Template*)uNew(NativeStyle__Template_typeof());
    obj3->ctor_1(parent);
    return obj3;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\.uno\$.uno(14)
// -----------------------------------------------------------------

// public partial sealed class NativeStyle.Template.Template1 :14
// {
// static Template1() :21
static void NativeStyle__Template__Template1__cctor__fn(uType* __type)
{
}

::g::Uno::UX::Template_type* NativeStyle__Template__Template1_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NativeStyle__Template__Template1);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Fuse.Android.NativeStyle.Template.Template1", options);
    type->SetBase(::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::TextBlock_typeof()));
    type->fp_cctor_ = NativeStyle__Template__Template1__cctor__fn;
    type->fp_OnApply = (void(*)(::g::Uno::UX::Template*, void*))NativeStyle__Template__Template1__OnApply_fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Uno::UX::Template__Apply_fn;
    ::TYPES[21] = ::g::Fuse::Node_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(::g::Uno::UX::Template_type, interface0));
    type->SetFields(2,
        ::g::Fuse::Android::NativeStyle__Template_typeof(), offsetof(::g::Fuse::Android::NativeStyle__Template__Template1, __parent1), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NativeStyle__Template__Template1__New1_fn, 0, true, NativeStyle__Template__Template1_typeof(), 1, ::g::Fuse::Android::NativeStyle__Template_typeof()));
    return type;
}

// public Template1(Fuse.Android.NativeStyle.Template parent) :17
void NativeStyle__Template__Template1__ctor_1_fn(NativeStyle__Template__Template1* __this, ::g::Fuse::Android::NativeStyle__Template* parent)
{
    __this->ctor_1(parent);
}

// public Template1 New(Fuse.Android.NativeStyle.Template parent) :17
void NativeStyle__Template__Template1__New1_fn(::g::Fuse::Android::NativeStyle__Template* parent, NativeStyle__Template__Template1** __retval)
{
    *__retval = NativeStyle__Template__Template1::New1(parent);
}

// protected override sealed void OnApply(Fuse.Controls.TextBlock self) :24
void NativeStyle__Template__Template1__OnApply_fn(NativeStyle__Template__Template1* __this, ::g::Fuse::Controls::TextBlock* self)
{
    uStackFrame __("Fuse.Android.NativeStyle.Template.Template1", "OnApply(Fuse.Controls.TextBlock)");
    ::g::Fuse::Android::TextRenderer* temp = ::g::Fuse::Android::TextRenderer::New1();
    uPtr(self)->AddStyleChild(temp);
}

// public Template1(Fuse.Android.NativeStyle.Template parent) [instance] :17
void NativeStyle__Template__Template1::ctor_1(::g::Fuse::Android::NativeStyle__Template* parent)
{
    uStackFrame __("Fuse.Android.NativeStyle.Template.Template1", ".ctor(Fuse.Android.NativeStyle.Template)");
    ctor_();
    __parent1 = parent;
}

// public Template1 New(Fuse.Android.NativeStyle.Template parent) [static] :17
NativeStyle__Template__Template1* NativeStyle__Template__Template1::New1(::g::Fuse::Android::NativeStyle__Template* parent)
{
    NativeStyle__Template__Template1* obj1 = (NativeStyle__Template__Template1*)uNew(NativeStyle__Template__Template1_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\.uno\$.uno(30)
// -----------------------------------------------------------------

// public partial sealed class NativeStyle.Template.Template2 :30
// {
// static Template2() :69
static void NativeStyle__Template__Template2__cctor__fn(uType* __type)
{
}

::g::Uno::UX::Template_type* NativeStyle__Template__Template2_typeof()
{
    static uSStrong< ::g::Uno::UX::Template_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NativeStyle__Template__Template2);
    options.TypeSize = sizeof(::g::Uno::UX::Template_type);
    type = (::g::Uno::UX::Template_type*)uClassType::New("Fuse.Android.NativeStyle.Template.Template2", options);
    type->SetBase(::g::Uno::UX::Template_typeof()->MakeType(::g::Fuse::Controls::PlainTextEdit_typeof()));
    type->fp_cctor_ = NativeStyle__Template__Template2__cctor__fn;
    type->fp_OnApply = (void(*)(::g::Uno::UX::Template*, void*))NativeStyle__Template__Template2__OnApply_fn;
    type->interface0.fp_Apply = (void(*)(uObject*, uObject*, bool*))::g::Uno::UX::Template__Apply_fn;
    ::TYPES[60] = ::g::Fuse::Controls::PlainTextEdit_typeof();
    ::TYPES[61] = ::g::Uno::UX::Factory_typeof();
    type->SetInterfaces(
        ::g::Uno::UX::ITemplate_typeof(), offsetof(::g::Uno::UX::Template_type, interface0));
    type->SetFields(2,
        ::g::Fuse::Android::NativeStyle__Template_typeof(), offsetof(::g::Fuse::Android::NativeStyle__Template__Template2, __parent1), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)NativeStyle__Template__Template2__New1_fn, 0, true, NativeStyle__Template__Template2_typeof(), 1, ::g::Fuse::Android::NativeStyle__Template_typeof()));
    return type;
}

// public Template2(Fuse.Android.NativeStyle.Template parent) :33
void NativeStyle__Template__Template2__ctor_1_fn(NativeStyle__Template__Template2* __this, ::g::Fuse::Android::NativeStyle__Template* parent)
{
    __this->ctor_1(parent);
}

// public Template2 New(Fuse.Android.NativeStyle.Template parent) :33
void NativeStyle__Template__Template2__New1_fn(::g::Fuse::Android::NativeStyle__Template* parent, NativeStyle__Template__Template2** __retval)
{
    *__retval = NativeStyle__Template__Template2::New1(parent);
}

// protected override sealed void OnApply(Fuse.Controls.PlainTextEdit self) :72
void NativeStyle__Template__Template2__OnApply_fn(NativeStyle__Template__Template2* __this, ::g::Fuse::Controls::PlainTextEdit* self)
{
    uStackFrame __("Fuse.Android.NativeStyle.Template.Template2", "OnApply(Fuse.Controls.PlainTextEdit)");
    bool ret2;
    bool ret3;
    NativeStyle__Template__Template2__Factory* temp = NativeStyle__Template__Template2__Factory::New2(__this);
    NativeStyle__Template__Template2__Factory1* temp1 = NativeStyle__Template__Template2__Factory1::New2(__this);
    ::g::Fuse::StyleProperty1__SetStyle_fn(uPtr(::g::Fuse::Controls::PlainTextEdit::NativeEditProperty()), self, temp, &ret2);
    ::g::Fuse::StyleProperty1__SetStyle_fn(uPtr(::g::Fuse::Controls::PlainTextEdit::NativeTextProperty()), self, temp1, &ret3);
}

// public Template2(Fuse.Android.NativeStyle.Template parent) [instance] :33
void NativeStyle__Template__Template2::ctor_1(::g::Fuse::Android::NativeStyle__Template* parent)
{
    uStackFrame __("Fuse.Android.NativeStyle.Template.Template2", ".ctor(Fuse.Android.NativeStyle.Template)");
    ctor_();
    __parent1 = parent;
}

// public Template2 New(Fuse.Android.NativeStyle.Template parent) [static] :33
NativeStyle__Template__Template2* NativeStyle__Template__Template2::New1(::g::Fuse::Android::NativeStyle__Template* parent)
{
    NativeStyle__Template__Template2* obj1 = (NativeStyle__Template__Template2*)uNew(NativeStyle__Template__Template2_typeof());
    obj1->ctor_1(parent);
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\$.uno(926)
// -------------------------------------------------------------

// internal sealed extern class TextControlLayout :926
// {
uType* TextControlLayout_typeof()
{
    static uSStrong<uType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(TextControlLayout);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Android.TextControlLayout", options);
    type->fp_ctor_ = (void*)TextControlLayout__New1_fn;
    ::STRINGS[9] = uString::Const("wrapWidth");
    ::TYPES[62] = ::g::Fuse::Controls::TextControl_typeof();
    ::TYPES[63] = ::g::Android::android::graphics::Typeface_typeof();
    ::TYPES[24] = ::g::Fuse::IViewport_typeof();
    ::TYPES[21] = ::g::Fuse::Node_typeof();
    ::TYPES[64] = ::g::Android::java::lang::CharSequence_typeof();
    ::TYPES[14] = ::g::Uno::Int_typeof();
    ::TYPES[65] = ::g::Uno::String_typeof();
    ::TYPES[66] = ::g::Android::android::text::TextUtilsDLRTruncateAt_typeof();
    ::TYPES[0] = ::g::Uno::Float_typeof();
    ::TYPES[67] = ::g::Uno::Rect_typeof();
    ::TYPES[68] = ::g::Uno::Int2_typeof();
    ::TYPES[69] = ::g::Android::android::text::LayoutDLRAlignment_typeof();
    type->SetFields(0,
        ::g::Android::android::text::StaticLayout_typeof(), offsetof(::g::Fuse::Android::TextControlLayout, _Layout), 0,
        ::g::Android::android::text::TextPaint_typeof(), offsetof(::g::Fuse::Android::TextControlLayout, _Paint), 0,
        ::g::Uno::Recti_typeof(), offsetof(::g::Fuse::Android::TextControlLayout, _PixelBounds), 0);
    return type;
}

// public generated TextControlLayout() :926
void TextControlLayout__ctor__fn(TextControlLayout* __this)
{
    __this->ctor_();
}

// public void Dispose() :932
void TextControlLayout__Dispose_fn(TextControlLayout* __this)
{
    __this->Dispose();
}

// public generated Android.android.text.StaticLayout get_Layout() :929
void TextControlLayout__get_Layout_fn(TextControlLayout* __this, ::g::Android::android::text::StaticLayout** __retval)
{
    *__retval = __this->Layout();
}

// private generated void set_Layout(Android.android.text.StaticLayout value) :929
void TextControlLayout__set_Layout_fn(TextControlLayout* __this, ::g::Android::android::text::StaticLayout* value)
{
    __this->Layout(value);
}

// public void Measure(Fuse.Controls.TextControl Control, float wrapWidth) :938
void TextControlLayout__Measure_fn(TextControlLayout* __this, ::g::Fuse::Controls::TextControl* Control, float* wrapWidth)
{
    __this->Measure(Control, *wrapWidth);
}

// public generated TextControlLayout New() :926
void TextControlLayout__New1_fn(TextControlLayout** __retval)
{
    *__retval = TextControlLayout::New1();
}

// public generated Android.android.text.TextPaint get_Paint() :928
void TextControlLayout__get_Paint_fn(TextControlLayout* __this, ::g::Android::android::text::TextPaint** __retval)
{
    *__retval = __this->Paint();
}

// private generated void set_Paint(Android.android.text.TextPaint value) :928
void TextControlLayout__set_Paint_fn(TextControlLayout* __this, ::g::Android::android::text::TextPaint* value)
{
    __this->Paint(value);
}

// public generated Uno.Recti get_PixelBounds() :930
void TextControlLayout__get_PixelBounds_fn(TextControlLayout* __this, ::g::Uno::Recti* __retval)
{
    *__retval = __this->PixelBounds();
}

// private generated void set_PixelBounds(Uno.Recti value) :930
void TextControlLayout__set_PixelBounds_fn(TextControlLayout* __this, ::g::Uno::Recti* value)
{
    __this->PixelBounds(*value);
}

// private Android.android.text.LayoutDLRAlignment TextAlignmentToAndroidLayoutAlignment(Fuse.Elements.TextAlignment textAlignment) :989
void TextControlLayout__TextAlignmentToAndroidLayoutAlignment_fn(TextControlLayout* __this, int* textAlignment, ::g::Android::android::text::LayoutDLRAlignment** __retval)
{
    *__retval = __this->TextAlignmentToAndroidLayoutAlignment(*textAlignment);
}

// public generated TextControlLayout() [instance] :926
void TextControlLayout::ctor_()
{
}

// public void Dispose() [instance] :932
void TextControlLayout::Dispose()
{
    uStackFrame __("Fuse.Android.TextControlLayout", "Dispose()");
    Layout(NULL);
    Paint(NULL);
}

// public generated Android.android.text.StaticLayout get_Layout() [instance] :929
::g::Android::android::text::StaticLayout* TextControlLayout::Layout()
{
    uStackFrame __("Fuse.Android.TextControlLayout", "get_Layout()");
    return _Layout;
}

// private generated void set_Layout(Android.android.text.StaticLayout value) [instance] :929
void TextControlLayout::Layout(::g::Android::android::text::StaticLayout* value)
{
    uStackFrame __("Fuse.Android.TextControlLayout", "set_Layout(Android.android.text.StaticLayout)");
    _Layout = value;
}

// public void Measure(Fuse.Controls.TextControl Control, float wrapWidth) [instance] :938
void TextControlLayout::Measure(::g::Fuse::Controls::TextControl* Control, float wrapWidth)
{
    uStackFrame __("Fuse.Android.TextControlLayout", "Measure(Fuse.Controls.TextControl,float)");
    bool ret2;

    if (wrapWidth < 0.0f)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[9/*"wrapWidth"*/]));

    Paint(::g::Android::android::text::TextPaint::New9());
    uPtr(Paint())->setAntiAlias(true);

    if ((::g::Fuse::StyleProperty1__HasValue_fn(uPtr(::g::Fuse::Controls::TextControl::FontProperty()), Control, &ret2), ret2))
        uPtr(Paint())->setTypeface(::g::Fuse::Android::TypefaceCache::GetTypeface(uPtr(Control)->Font()));
    else
        uPtr(Paint())->setTypeface(::g::Android::android::graphics::Typeface::DEFAULT());

    uPtr(Paint())->setTextSize(Control->FontSize() * ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(Control->Viewport()), ::TYPES[24/*Fuse.IViewport*/])));
    ::g::Android::android::text::LayoutDLRAlignment* align = TextAlignmentToAndroidLayoutAlignment(Control->TextAlignment());
    ::g::Android::java::lang::String* text = ::g::Android::java::lang::String::op_Implicit1(Control->RenderValue());
    float lineSpacing = Control->LineSpacing() * ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(Control->Viewport()), ::TYPES[24/*Fuse.IViewport*/]));
    float desiredWidth = ::g::Android::android::text::Layout::getDesiredWidth((uObject*)text, Paint());

    if (wrapWidth == FLT_INF)
        wrapWidth = desiredWidth;

    int width = (int)::g::Uno::Math::Min1(::g::Uno::Math::Ceil1(wrapWidth), 2.14748365e+09f);

    if ((Control->TextWrapping() == 0) && (desiredWidth > wrapWidth))
    {
        int layoutWidth = (int)::g::Uno::Math::Ceil1(desiredWidth);
        Layout(::g::Android::android::text::StaticLayout::New8((uObject*)text, 0, uPtr(uPtr(Control)->RenderValue())->Length(), Paint(), layoutWidth, align, 1.0f, lineSpacing, false, ::g::Android::android::text::TextUtilsDLRTruncateAt::END(), width));
    }
    else
        Layout(::g::Android::android::text::StaticLayout::New6((uObject*)text, Paint(), width, align, 1.0f, lineSpacing, false));

    ::g::Uno::Rect bounds = ::g::Uno::Rect__New1(0.0f, 0.0f, 0.0f, 0.0f);

    for (int i = 0; i < uPtr(Layout())->getLineCount(); ++i)
    {
        ::g::Android::android::graphics::Rect* temp = ::g::Android::android::graphics::Rect::New5();
        uPtr(Paint())->getTextBounds(text, uPtr(Layout())->getLineStart(i), uPtr(Layout())->getLineEnd(i), temp);
        ::g::Uno::Rect lineBounds = ::g::Fuse::Android::AndroidExtensions::ToRect(temp);
        lineBounds = ::g::Uno::Rect__Translate(lineBounds, ::g::Uno::Float2__New2(uPtr(Layout())->getLineLeft(i), (float)uPtr(Layout())->getLineBaseline(i)));

        if (i == 0)
            bounds = lineBounds;
        else
            bounds = ::g::Uno::Rect__Union(bounds, lineBounds);
    }

    ::g::Uno::Int2 min = ::g::Uno::Int2__op_Explicit(::g::Uno::Math::Floor2(bounds.Minimum()));
    ::g::Uno::Int2 max = ::g::Uno::Int2__op_Explicit(::g::Uno::Math::Ceil2(bounds.Maximum()));
    PixelBounds(::g::Uno::Recti__Inflate(::g::Uno::Recti__New1(min.X, min.Y, max.X, max.Y), 1));
}

// public generated Android.android.text.TextPaint get_Paint() [instance] :928
::g::Android::android::text::TextPaint* TextControlLayout::Paint()
{
    uStackFrame __("Fuse.Android.TextControlLayout", "get_Paint()");
    return _Paint;
}

// private generated void set_Paint(Android.android.text.TextPaint value) [instance] :928
void TextControlLayout::Paint(::g::Android::android::text::TextPaint* value)
{
    uStackFrame __("Fuse.Android.TextControlLayout", "set_Paint(Android.android.text.TextPaint)");
    _Paint = value;
}

// public generated Uno.Recti get_PixelBounds() [instance] :930
::g::Uno::Recti TextControlLayout::PixelBounds()
{
    uStackFrame __("Fuse.Android.TextControlLayout", "get_PixelBounds()");
    return _PixelBounds;
}

// private generated void set_PixelBounds(Uno.Recti value) [instance] :930
void TextControlLayout::PixelBounds(::g::Uno::Recti value)
{
    uStackFrame __("Fuse.Android.TextControlLayout", "set_PixelBounds(Uno.Recti)");
    _PixelBounds = value;
}

// private Android.android.text.LayoutDLRAlignment TextAlignmentToAndroidLayoutAlignment(Fuse.Elements.TextAlignment textAlignment) [instance] :989
::g::Android::android::text::LayoutDLRAlignment* TextControlLayout::TextAlignmentToAndroidLayoutAlignment(int textAlignment)
{
    uStackFrame __("Fuse.Android.TextControlLayout", "TextAlignmentToAndroidLayoutAlignment(Fuse.Elements.TextAlignment)");

    switch (textAlignment)
    {
        case 0:
            return ::g::Android::android::text::LayoutDLRAlignment::ALIGN_NORMAL();
        case 1:
            return ::g::Android::android::text::LayoutDLRAlignment::ALIGN_CENTER();
        case 2:
            return ::g::Android::android::text::LayoutDLRAlignment::ALIGN_OPPOSITE();
    }

    return ::g::Android::android::text::LayoutDLRAlignment::ALIGN_NORMAL();
}

// public generated TextControlLayout New() [static] :926
TextControlLayout* TextControlLayout::New1()
{
    TextControlLayout* obj1 = (TextControlLayout*)uNew(TextControlLayout_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\$.uno(1002)
// --------------------------------------------------------------

// public sealed extern class TextRenderer :1002
// {
TextRenderer_type* TextRenderer_typeof()
{
    static uSStrong<TextRenderer_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 66;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(TextRenderer);
    options.TypeSize = sizeof(TextRenderer_type);
    type = (TextRenderer_type*)uClassType::New("Fuse.Android.TextRenderer", options);
    type->SetBase(::g::Fuse::Controls::Graphics::TextVisual_typeof());
    type->fp_ctor_ = (void*)TextRenderer__New1_fn;
    type->fp_Attach = (void(*)(::g::Fuse::Controls::Graphics::ControlVisual*))TextRenderer__Attach_fn;
    type->fp_Detach = (void(*)(::g::Fuse::Controls::Graphics::ControlVisual*))TextRenderer__Detach_fn;
    type->fp_GetMarginSize = (void(*)(::g::Fuse::Node*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))TextRenderer__GetMarginSize_fn;
    type->fp_get_LocalRenderBounds = (void(*)(::g::Fuse::Node*, ::g::Uno::Rect*))TextRenderer__get_LocalRenderBounds_fn;
    type->fp_OnDraw = (void(*)(::g::Fuse::Controls::Graphics::Visual*, ::g::Fuse::DrawContext*))TextRenderer__OnDraw_fn;
    type->interface2.fp_SoftDispose = (void(*)(uObject*))TextRenderer__FuseResourcesISoftDisposableSoftDispose_fn;
    type->interface0.fp_FindObjectByName = (void(*)(uObject*, uString*, uDelegate*, uObject**))::g::Fuse::Node__FindObjectByName_fn;
    type->interface1.fp_get_DataContext = (void(*)(uObject*, uObject**))::g::Fuse::Node__get_DataContext_fn;
    type->interface1.fp_set_DataContext = (void(*)(uObject*, uObject*))::g::Fuse::Node__set_DataContext_fn;
    ::TYPES[70] = ::g::OpenGL::GLTextureHandle_typeof();
    ::TYPES[71] = ::g::Fuse::Resources::ISoftDisposable_typeof();
    ::TYPES[62] = ::g::Fuse::Controls::TextControl_typeof();
    ::TYPES[72] = ::g::Fuse::Controls::Graphics::ControlVisual_typeof()->MakeType(::g::Fuse::Controls::TextControl_typeof());
    ::TYPES[73] = ::g::Uno::EventHandler_typeof();
    ::TYPES[74] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::String_typeof());
    ::TYPES[75] = ::g::Fuse::LayoutParams_typeof();
    ::TYPES[24] = ::g::Fuse::IViewport_typeof();
    ::TYPES[21] = ::g::Fuse::Node_typeof();
    ::TYPES[0] = ::g::Uno::Float_typeof();
    ::TYPES[76] = ::g::Fuse::Android::TextControlLayout_typeof();
    ::TYPES[77] = ::g::Uno::Recti_typeof();
    ::TYPES[78] = ::g::Fuse::Android::Blitter_typeof();
    ::TYPES[53] = ::g::Uno::Float2_typeof();
    ::TYPES[79] = ::g::Fuse::Controls::Graphics::Visual_typeof();
    ::TYPES[8] = ::g::Uno::Bool_typeof();
    ::TYPES[68] = ::g::Uno::Int2_typeof();
    ::TYPES[3] = ::g::Uno::Action_typeof();
    ::TYPES[65] = ::g::Uno::String_typeof();
    ::TYPES[80] = ::g::Android::android::graphics::BitmapDLRConfig_typeof();
    ::TYPES[14] = ::g::Uno::Int_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::INameScope_typeof(), offsetof(TextRenderer_type, interface0),
        ::g::Fuse::IDataContext_typeof(), offsetof(TextRenderer_type, interface1),
        ::g::Fuse::Resources::ISoftDisposable_typeof(), offsetof(TextRenderer_type, interface2));
    type->SetFields(58,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Android::TextRenderer, _emitNewTexture), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Android::TextRenderer, _layoutValid), 0,
        ::g::Uno::Bool_typeof(), offsetof(::g::Fuse::Android::TextRenderer, _renderThreaded), 0,
        ::g::Fuse::Android::TextControlLayout_typeof(), offsetof(::g::Fuse::Android::TextRenderer, _textLayout), 0,
        ::g::OpenGL::GLTextureHandle_typeof(), offsetof(::g::Fuse::Android::TextRenderer, _texture), 0,
        ::g::Uno::ULong_typeof(), offsetof(::g::Fuse::Android::TextRenderer, _textureVersion), 0,
        ::g::Uno::ULong_typeof(), offsetof(::g::Fuse::Android::TextRenderer, _wantedVersion), 0,
        ::g::Uno::Float_typeof(), offsetof(::g::Fuse::Android::TextRenderer, _wrapWidth), 0);
    type->Reflection.SetFunctions(1,
        new uFunction(".ctor", NULL, (void*)TextRenderer__New1_fn, 0, true, TextRenderer_typeof(), 0));
    return type;
}

// public TextRenderer() :1008
void TextRenderer__ctor_4_fn(TextRenderer* __this)
{
    __this->ctor_4();
}

// protected override sealed void Attach() :1018
void TextRenderer__Attach_fn(TextRenderer* __this)
{
    uStackFrame __("Fuse.Android.TextRenderer", "Attach()");
    ::g::Fuse::Controls::TextControl* ret2;
    ::g::Fuse::Controls::TextControl* ret3;
    ::g::Fuse::Controls::TextControl* ret4;
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret2), ret2))->add_TextLayoutPropertyChanged(uDelegate::New(::TYPES[73/*Uno.EventHandler*/], (void*)TextRenderer__OnTextLayoutPropertyChanged1_fn, __this));
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret3), ret3))->add_TextRenderPropertyChanged(uDelegate::New(::TYPES[73/*Uno.EventHandler*/], (void*)TextRenderer__OnTextRenderPropertyChanged1_fn, __this));
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret4), ret4))->add_ValueChanged(uDelegate::New(::TYPES[74/*Uno.UX.ValueChangedHandler<string>*/], (void*)TextRenderer__OnValueChanged1_fn, __this));
    ::g::Fuse::Controls::Graphics::TextVisual__Attach_fn(__this);
}

// protected override sealed void Detach() :1026
void TextRenderer__Detach_fn(TextRenderer* __this)
{
    uStackFrame __("Fuse.Android.TextRenderer", "Detach()");
    ::g::Fuse::Controls::TextControl* ret5;
    ::g::Fuse::Controls::TextControl* ret6;
    ::g::Fuse::Controls::TextControl* ret7;
    ::g::Fuse::Controls::Graphics::TextVisual__Detach_fn(__this);
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret5), ret5))->remove_TextLayoutPropertyChanged(uDelegate::New(::TYPES[73/*Uno.EventHandler*/], (void*)TextRenderer__OnTextLayoutPropertyChanged1_fn, __this));
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret6), ret6))->remove_TextRenderPropertyChanged(uDelegate::New(::TYPES[73/*Uno.EventHandler*/], (void*)TextRenderer__OnTextRenderPropertyChanged1_fn, __this));
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret7), ret7))->remove_ValueChanged(uDelegate::New(::TYPES[74/*Uno.UX.ValueChangedHandler<string>*/], (void*)TextRenderer__OnValueChanged1_fn, __this));
    __this->DisposeTexture();
}

// private void DisposeTexture() :1097
void TextRenderer__DisposeTexture_fn(TextRenderer* __this)
{
    __this->DisposeTexture();
}

// private void Fuse.Resources.ISoftDisposable.SoftDispose() :1013
void TextRenderer__FuseResourcesISoftDisposableSoftDispose_fn(TextRenderer* __this)
{
    uStackFrame __("Fuse.Android.TextRenderer", "Fuse.Resources.ISoftDisposable.SoftDispose()");
    __this->DisposeTexture();
}

// public override sealed float2 GetMarginSize(Fuse.LayoutParams lp) :1067
void TextRenderer__GetMarginSize_fn(TextRenderer* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    uStackFrame __("Fuse.Android.TextRenderer", "GetMarginSize(Fuse.LayoutParams)");
    ::g::Fuse::LayoutParams lp_ = *lp;
    float wrapWidth = lp_.HasX() ? ::g::Uno::Math::Max1(lp_.X() * ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(__this->Viewport()), ::TYPES[24/*Fuse.IViewport*/])), 0.0f) : FLT_INF;
    __this->UpdateLayout1(wrapWidth);
    return *__retval = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2((float)uPtr(uPtr(__this->_textLayout)->Layout())->getWidth(), (float)uPtr(uPtr(__this->_textLayout)->Layout())->getHeight()), ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(__this->Viewport()), ::TYPES[24/*Fuse.IViewport*/]))), void();
}

// public override sealed Uno.Rect get_LocalRenderBounds() :1076
void TextRenderer__get_LocalRenderBounds_fn(TextRenderer* __this, ::g::Uno::Rect* __retval)
{
    uStackFrame __("Fuse.Android.TextRenderer", "get_LocalRenderBounds()");
    return *__retval = ::g::Uno::Rect__New2(::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Implicit1(uPtr(__this->_textLayout)->PixelBounds().Position()), ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(__this->Viewport()), ::TYPES[24/*Fuse.IViewport*/]))), ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Implicit1(uPtr(__this->_textLayout)->PixelBounds().Size()), ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(__this->Viewport()), ::TYPES[24/*Fuse.IViewport*/])))), void();
}

// public TextRenderer New() :1008
void TextRenderer__New1_fn(TextRenderer** __retval)
{
    *__retval = TextRenderer::New1();
}

// private void OnBitmapDraw(Fuse.DrawContext dc) :1194
void TextRenderer__OnBitmapDraw_fn(TextRenderer* __this, ::g::Fuse::DrawContext* dc)
{
    __this->OnBitmapDraw(dc);
}

// protected override sealed void OnDraw(Fuse.DrawContext dc) :1209
void TextRenderer__OnDraw_fn(TextRenderer* __this, ::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Android.TextRenderer", "OnDraw(Fuse.DrawContext)");
    __this->PrepareDraw();
    __this->OnBitmapDraw(dc);
}

// private void OnTextLayoutPropertyChanged(object sender, Uno.EventArgs args) :1035
void TextRenderer__OnTextLayoutPropertyChanged1_fn(TextRenderer* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnTextLayoutPropertyChanged1(sender, args);
}

// private void OnTextRenderPropertyChanged(object sender, Uno.EventArgs args) :1041
void TextRenderer__OnTextRenderPropertyChanged1_fn(TextRenderer* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnTextRenderPropertyChanged1(sender, args);
}

// private void OnValueChanged(object sender, Uno.UX.ValueChangedArgs<string> args) :1046
void TextRenderer__OnValueChanged1_fn(TextRenderer* __this, uObject* sender, ::g::Uno::UX::ValueChangedArgs* args)
{
    __this->OnValueChanged1(sender, args);
}

// private void PrepareDraw() :1105
void TextRenderer__PrepareDraw_fn(TextRenderer* __this)
{
    __this->PrepareDraw();
}

// private void SetTexture(OpenGL.GLTextureHandle newTexture) :1088
void TextRenderer__SetTexture_fn(TextRenderer* __this, uint32_t* newTexture)
{
    __this->SetTexture(*newTexture);
}

// private void UpdateLayout(float wrapWidth) :1052
void TextRenderer__UpdateLayout1_fn(TextRenderer* __this, float* wrapWidth)
{
    __this->UpdateLayout1(*wrapWidth);
}

// private OpenGL.GLTextureHandle UpdateTexture(Android.android.text.StaticLayout layout, float4 renderColor, Uno.Recti pixelBounds) :1140
void TextRenderer__UpdateTexture_fn(TextRenderer* __this, ::g::Android::android::text::StaticLayout* layout, ::g::Uno::Float4* renderColor, ::g::Uno::Recti* pixelBounds, uint32_t* __retval)
{
    *__retval = __this->UpdateTexture(layout, *renderColor, *pixelBounds);
}

// public TextRenderer() [instance] :1008
void TextRenderer::ctor_4()
{
    uStackFrame __("Fuse.Android.TextRenderer", ".ctor()");
    _textLayout = ::g::Fuse::Android::TextControlLayout::New1();
    _emitNewTexture = true;
    _texture = ::g::OpenGL::GLTextureHandle::Zero();
    ctor_3();
    ::g::Fuse::Resources::DisposalManager::Add1((uObject*)this);
}

// private void DisposeTexture() [instance] :1097
void TextRenderer::DisposeTexture()
{
    uStackFrame __("Fuse.Android.TextRenderer", "DisposeTexture()");
    SetTexture(::g::OpenGL::GLTextureHandle::Zero());
    _textureVersion = 0ULL;
    _wantedVersion = 0ULL;
    _emitNewTexture = true;
}

// private void OnBitmapDraw(Fuse.DrawContext dc) [instance] :1194
void TextRenderer::OnBitmapDraw(::g::Fuse::DrawContext* dc)
{
    uStackFrame __("Fuse.Android.TextRenderer", "OnBitmapDraw(Fuse.DrawContext)");

    if ((_textureVersion != _wantedVersion) || ::g::OpenGL::GLTextureHandle::op_Equality(_texture, ::g::OpenGL::GLTextureHandle::Zero()))
        return;

    ::g::Uno::Int2 pixelSize = uPtr(_textLayout)->PixelBounds().Size();
    ::g::Uno::Float2 pointSize = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Implicit1(pixelSize), ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(Viewport()), ::TYPES[24/*Fuse.IViewport*/])));
    ::g::Uno::Float4x4 m = uPtr(dc)->GetLocalToClipTransform(this);
    uPtr(::g::Fuse::Android::Blitter::Singleton())->Blit(::g::Uno::Graphics::Texture2D::New2(_texture, pixelSize, 1, 3), ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Implicit1(uPtr(_textLayout)->PixelBounds().Position()), ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(Viewport()), ::TYPES[24/*Fuse.IViewport*/]))), pointSize, m);
    ::g::OpenGL::GL::BindTexture(3553, ::g::OpenGL::GLTextureHandle::Zero());
}

// private void OnTextLayoutPropertyChanged(object sender, Uno.EventArgs args) [instance] :1035
void TextRenderer::OnTextLayoutPropertyChanged1(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Android.TextRenderer", "OnTextLayoutPropertyChanged(object,Uno.EventArgs)");
    _layoutValid = false;
    _emitNewTexture = true;
}

// private void OnTextRenderPropertyChanged(object sender, Uno.EventArgs args) [instance] :1041
void TextRenderer::OnTextRenderPropertyChanged1(uObject* sender, ::g::Uno::EventArgs* args)
{
    uStackFrame __("Fuse.Android.TextRenderer", "OnTextRenderPropertyChanged(object,Uno.EventArgs)");
    _emitNewTexture = true;
}

// private void OnValueChanged(object sender, Uno.UX.ValueChangedArgs<string> args) [instance] :1046
void TextRenderer::OnValueChanged1(uObject* sender, ::g::Uno::UX::ValueChangedArgs* args)
{
    uStackFrame __("Fuse.Android.TextRenderer", "OnValueChanged(object,Uno.UX.ValueChangedArgs<string>)");
    _layoutValid = false;
    _emitNewTexture = true;
}

// private void PrepareDraw() [instance] :1105
void TextRenderer::PrepareDraw()
{
    uStackFrame __("Fuse.Android.TextRenderer", "PrepareDraw()");
    ::g::Fuse::Controls::TextControl* ret8;
    ::g::Fuse::Controls::TextControl* ret9;
    UpdateLayout1(ActualSize().X * ::g::Fuse::IViewport::PointDensity(uInterface(uPtr(Viewport()), ::TYPES[24/*Fuse.IViewport*/])));

    if (!_emitNewTexture)
        return;

    _wantedVersion++;
    ::g::Uno::Recti pixelBounds = uPtr(_textLayout)->PixelBounds();

    if ((pixelBounds.Size().X <= 0) || (pixelBounds.Size().Y <= 0))
    {
        SetTexture(::g::OpenGL::GLTextureHandle::Zero());
        return;
    }

    if (_renderThreaded)
    {
        TextRenderer__BackgroundRender* backgroundRender = TextRenderer__BackgroundRender::New1(this, _wantedVersion, uPtr(_textLayout)->Layout(), uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret8), ret8))->RenderColor(), pixelBounds);
        ::g::Fuse::GraphicsWorker::Dispatch(uDelegate::New(::TYPES[3/*Uno.Action*/], (void*)TextRenderer__BackgroundRender__UpdateTextureAsync_fn, backgroundRender));
    }
    else
    {
        SetTexture(UpdateTexture(uPtr(_textLayout)->Layout(), uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret9), ret9))->RenderColor(), pixelBounds));
        _textureVersion = _wantedVersion;
    }

    _emitNewTexture = false;
}

// private void SetTexture(OpenGL.GLTextureHandle newTexture) [instance] :1088
void TextRenderer::SetTexture(uint32_t newTexture)
{
    uStackFrame __("Fuse.Android.TextRenderer", "SetTexture(OpenGL.GLTextureHandle)");

    if (::g::OpenGL::GLTextureHandle::op_Inequality(_texture, ::g::OpenGL::GLTextureHandle::Zero()))
        ::g::OpenGL::GL::DeleteTexture(_texture);

    _texture = newTexture;
    InvalidateVisual();
}

// private void UpdateLayout(float wrapWidth) [instance] :1052
void TextRenderer::UpdateLayout1(float wrapWidth)
{
    uStackFrame __("Fuse.Android.TextRenderer", "UpdateLayout(float)");
    ::g::Fuse::Controls::TextControl* ret10;
    ::g::Fuse::Controls::TextControl* ret11;

    if (_layoutValid && (_wrapWidth == wrapWidth))
        return;

    uPtr(_textLayout)->Measure((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret10), ret10), wrapWidth);
    _renderThreaded = (uPtr(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret11), ret11))->RenderValue())->Length() > 50);
    _wrapWidth = wrapWidth;
    _layoutValid = true;
    _emitNewTexture = true;
    InvalidateRenderBounds();
}

// private OpenGL.GLTextureHandle UpdateTexture(Android.android.text.StaticLayout layout, float4 renderColor, Uno.Recti pixelBounds) [instance] :1140
uint32_t TextRenderer::UpdateTexture(::g::Android::android::text::StaticLayout* layout, ::g::Uno::Float4 renderColor, ::g::Uno::Recti pixelBounds)
{
    uStackFrame __("Fuse.Android.TextRenderer", "UpdateTexture(Android.android.text.StaticLayout,float4,Uno.Recti)");
    ::g::Android::android::graphics::Bitmap* bitmap = ::g::Android::android::graphics::Bitmap::createBitmap8(pixelBounds.Size().X, pixelBounds.Size().Y, ::g::Android::android::graphics::BitmapDLRConfig::ARGB_8888());
    ::g::Android::android::graphics::Canvas* canvas = ::g::Android::android::graphics::Canvas::New6(bitmap);
    canvas->translate((float)-pixelBounds.Position().X, (float)-pixelBounds.Position().Y);
    uPtr(bitmap)->eraseColor(::g::Fuse::Android::Helpers::EncodeColor(::g::Uno::Float4__New1(0.0f)));
    uPtr(uPtr(layout)->getPaint())->setColor(::g::Fuse::Android::Helpers::EncodeColor(renderColor));
    layout->j_draw(canvas);
    uint32_t texture = ::g::OpenGL::GL::CreateTexture();
    ::g::OpenGL::GL::BindTexture(3553, texture);
    ::g::Android::android::opengl::GLUtils::texImage2D(3553, 0, bitmap, 0);
    bitmap->recycle();
    return texture;
}

// public TextRenderer New() [static] :1008
TextRenderer* TextRenderer::New1()
{
    TextRenderer* obj1 = (TextRenderer*)uNew(TextRenderer_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\$.uno(290)
// -------------------------------------------------------------

// private sealed class InputDispatch.TouchListener :290
// {
InputDispatch__TouchListener_type* InputDispatch__TouchListener_typeof()
{
    static uSStrong<InputDispatch__TouchListener_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.InterfaceCount = 3;
    options.ObjectSize = sizeof(InputDispatch__TouchListener);
    options.TypeSize = sizeof(InputDispatch__TouchListener_type);
    type = (InputDispatch__TouchListener_type*)uClassType::New("Fuse.Android.InputDispatch.TouchListener", options);
    type->SetBase(::g::Android::java::lang::Object_typeof());
    type->fp_ctor_ = (void*)InputDispatch__TouchListener__New5_fn;
    type->interface2.fp_onTouch = (void(*)(uObject*, ::g::Android::android::view::View*, ::g::Android::android::view::MotionEvent*, bool*))InputDispatch__TouchListener__onTouch_fn;
    type->interface0.fp__GetJavaObject = (void(*)(uObject*, jobject*))::g::Android::Base::Wrappers::JWrapper___GetJavaObject_fn;
    type->interface0.fp__IsSubclassed = (void(*)(uObject*, bool*))::g::Android::Base::Wrappers::JWrapper___IsSubclassed_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))::g::Android::Base::Wrappers::JWrapper__UnoIDisposableDispose_fn;
    ::STRINGS[10] = uString::Const("com.Bindings.Binding_Fuse_Android_InputDispatch_TouchListener");
    ::STRINGS[1] = uString::Const("<init>");
    ::STRINGS[2] = uString::Const("(J)V");
    ::TYPES[8] = ::g::Uno::Bool_typeof();
    ::TYPES[9] = ::g::Android::Base::Wrappers::JWrapper_typeof();
    ::TYPES[10] = ::g::Android::Base::Primitives::ujclass_typeof();
    type->SetInterfaces(
        ::g::Android::Base::Wrappers::IJWrapper_typeof(), offsetof(InputDispatch__TouchListener_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(InputDispatch__TouchListener_type, interface1),
        ::g::Android::android::view::ViewDLROnTouchListener_typeof(), offsetof(InputDispatch__TouchListener_type, interface2));
    type->SetFields(5,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&::g::Fuse::Android::InputDispatch__TouchListener::_javaClass2_, uFieldFlagsStatic);
    return type;
}

// public generated TouchListener() :290
void InputDispatch__TouchListener__ctor_5_fn(InputDispatch__TouchListener* __this)
{
    __this->ctor_5();
}

// public generated TouchListener New() :290
void InputDispatch__TouchListener__New5_fn(InputDispatch__TouchListener** __retval)
{
    *__retval = InputDispatch__TouchListener::New5();
}

// public bool onTouch(Android.android.view.View view, Android.android.view.MotionEvent motionEvent) :294
void InputDispatch__TouchListener__onTouch_fn(InputDispatch__TouchListener* __this, ::g::Android::android::view::View* view, ::g::Android::android::view::MotionEvent* motionEvent, bool* __retval)
{
    *__retval = __this->onTouch(view, motionEvent);
}

jclass InputDispatch__TouchListener::_javaClass2_;

// public generated TouchListener() [instance] :290
void InputDispatch__TouchListener::ctor_5()
{
    uStackFrame __("Fuse.Android.InputDispatch.TouchListener", ".ctor()");

    if (!_subclassed)
    {
        _subclassed = true;
        _javaClassName = ::STRINGS[10/*"com.Binding...*/];
    }

    ctor_4(::g::Android::Base::JNI::GetDefaultObject(), ::g::Android::Base::JNI::GetDefaultType(), false, false);

    if (::g::Android::Base::Primitives::ujclass::op_Equality(InputDispatch__TouchListener::_javaClass2(), ::g::Android::Base::Primitives::ujclass::Null()))
    {
        InputDispatch__TouchListener::_javaClass2() = ::g::Android::Base::JNI::LocalToGlobalRef(::g::Android::Base::JNI::LoadClass3(::STRINGS[10/*"com.Binding...*/], false));
        JniHelper jni;
        BEGIN_REG_MTD(1);
        REG_MTD(0,"__n_onTouch","(JLandroid/view/View;Landroid/view/MotionEvent;JJ)Z",Binding_Fuse_Android_InputDispatch_TouchListener__onTouch22729);
        COMMIT_REG_MTD(InputDispatch__TouchListener::_javaClass2());
    }

    jclass tmpCls = ::g::Android::Base::JNI::LoadClass3(_javaClassName, false);
    jmethodID mtd = ::g::Android::Base::JNI::GetMethodID(tmpCls, ::STRINGS[1/*"<init>"*/], ::STRINGS[2/*"(J)V"*/]);
    jobject tmp = ::g::Android::Base::JNI::NewObject1(tmpCls, mtd, ::g::Android::Base::Primitives::ujvalue::op_Implicit7((jlong)this->__obj_weak));
    ::g::Android::Base::JNI::CheckException();
    _javaObject = ::g::Android::Base::JNI::LocalToGlobalRef1(tmp);
    ::g::Android::Base::JNI::DeleteLocalRef(tmpCls);
}

// public bool onTouch(Android.android.view.View view, Android.android.view.MotionEvent motionEvent) [instance] :294
bool InputDispatch__TouchListener::onTouch(::g::Android::android::view::View* view, ::g::Android::android::view::MotionEvent* motionEvent)
{
    uStackFrame __("Fuse.Android.InputDispatch.TouchListener", "onTouch(Android.android.view.View,Android.android.view.MotionEvent)");
    ::g::Fuse::Node* node = ::g::Fuse::Android::InputDispatch::GetNode(view);

    if (node == NULL)
        return false;

    ::g::Fuse::Android::InputDispatch::RaiseEvent(node, view, motionEvent);
    return false;
}

// public generated TouchListener New() [static] :290
InputDispatch__TouchListener* InputDispatch__TouchListener::New5()
{
    InputDispatch__TouchListener* obj1 = (InputDispatch__TouchListener*)uNew(InputDispatch__TouchListener_typeof());
    obj1->ctor_5();
    return obj1;
}
// }

// ..\..\ProgramData\Uno\Packages\Fuse.Android\0.24.7\$.uno(1262)
// --------------------------------------------------------------

// internal static extern class TypefaceCache :1262
// {
// static TypefaceCache() :1262
static void TypefaceCache__cctor__fn(uType* __type)
{
    TypefaceCache::_typefaces_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[81/*Uno.Collections.Dictionary<string, Android.android.graphics.Typeface>*/]));
}

uClassType* TypefaceCache_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Android.TypefaceCache", options);
    type->fp_cctor_ = TypefaceCache__cctor__fn;
    ::STRINGS[11] = uString::Const("/tempFont");
    ::TYPES[81] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Android::android::graphics::Typeface_typeof());
    ::TYPES[82] = ::g::Uno::UX::BundleFileSource_typeof();
    ::TYPES[83] = ::g::Fuse::Font_typeof();
    ::TYPES[84] = ::g::Uno::BundleFile_typeof();
    ::TYPES[85] = ::g::Uno::UX::FileSource_typeof();
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Android::android::graphics::Typeface_typeof()), (uintptr_t)&::g::Fuse::Android::TypefaceCache::_typefaces_, uFieldFlagsStatic);
    return type;
}

// public static Android.android.graphics.Typeface GetTypeface(Fuse.Font font) :1267
void TypefaceCache__GetTypeface_fn(::g::Fuse::Font* font, ::g::Android::android::graphics::Typeface** __retval)
{
    *__retval = TypefaceCache::GetTypeface(font);
}

// private static Android.android.graphics.Typeface GetTypefaceFromBundleFile(Uno.BundleFile file) :1275
void TypefaceCache__GetTypefaceFromBundleFile_fn(::g::Uno::BundleFile* file, ::g::Android::android::graphics::Typeface** __retval)
{
    *__retval = TypefaceCache::GetTypefaceFromBundleFile(file);
}

// private static Android.android.graphics.Typeface GetTypefaceFromFileSource(Uno.UX.FileSource fileSource) :1289
void TypefaceCache__GetTypefaceFromFileSource_fn(::g::Uno::UX::FileSource* fileSource, ::g::Android::android::graphics::Typeface** __retval)
{
    *__retval = TypefaceCache::GetTypefaceFromFileSource(fileSource);
}

uSStrong< ::g::Uno::Collections::Dictionary*> TypefaceCache::_typefaces_;

// public static Android.android.graphics.Typeface GetTypeface(Fuse.Font font) [static] :1267
::g::Android::android::graphics::Typeface* TypefaceCache::GetTypeface(::g::Fuse::Font* font)
{
    uStackFrame __("Fuse.Android.TypefaceCache", "GetTypeface(Fuse.Font)");
    TypefaceCache_typeof()->Init();

    if (uIs(uPtr(font)->File(), ::TYPES[82/*Uno.UX.BundleFileSource*/]))
        return TypefaceCache::GetTypefaceFromBundleFile(uPtr(uCast< ::g::Uno::UX::BundleFileSource*>(uPtr(font)->File(), ::TYPES[82/*Uno.UX.BundleFileSource*/]))->BundleFile);

    return TypefaceCache::GetTypefaceFromFileSource(uPtr(font)->File());
}

// private static Android.android.graphics.Typeface GetTypefaceFromBundleFile(Uno.BundleFile file) [static] :1275
::g::Android::android::graphics::Typeface* TypefaceCache::GetTypefaceFromBundleFile(::g::Uno::BundleFile* file)
{
    uStackFrame __("Fuse.Android.TypefaceCache", "GetTypefaceFromBundleFile(Uno.BundleFile)");
    TypefaceCache_typeof()->Init();
    bool ret1;
    ::g::Android::android::graphics::Typeface* ret2;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(TypefaceCache::_typefaces()), uPtr(file)->Name(), &ret1), ret1))
        return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(TypefaceCache::_typefaces()), uPtr(file)->Name(), &ret2), ret2);

    ::g::Android::android::content::res::AssetManager* assetManager = uPtr(::g::Android::android::app::Activity::GetAppActivity())->getAssets();
    ::g::Android::android::graphics::Typeface* typeface = ::g::Android::android::graphics::Typeface::createFromAsset(assetManager, ::g::Android::java::lang::String::op_Implicit1(uPtr(file)->Name()));
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(TypefaceCache::_typefaces()), file->Name(), typeface);
    return typeface;
}

// private static Android.android.graphics.Typeface GetTypefaceFromFileSource(Uno.UX.FileSource fileSource) [static] :1289
::g::Android::android::graphics::Typeface* TypefaceCache::GetTypefaceFromFileSource(::g::Uno::UX::FileSource* fileSource)
{
    uStackFrame __("Fuse.Android.TypefaceCache", "GetTypefaceFromFileSource(Uno.UX.FileSource)");
    TypefaceCache_typeof()->Init();
    bool ret3;
    ::g::Android::android::graphics::Typeface* ret4;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(TypefaceCache::_typefaces()), uPtr(fileSource)->Name, &ret3), ret3))
        return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(TypefaceCache::_typefaces()), uPtr(fileSource)->Name, &ret4), ret4);

    uArray* data = uPtr(fileSource)->ReadAllBytes();
    uString* path = ::g::Uno::String::op_Addition2(::g::Uno::IO::Directory::GetUserDirectory(1), ::STRINGS[11/*"/tempFont"*/]);
    ::g::Uno::IO::File::WriteAllBytes(path, data);
    ::g::Android::android::graphics::Typeface* typeface = ::g::Android::android::graphics::Typeface::createFromFile1(::g::Android::java::lang::String::op_Implicit1(path));
    ::g::Uno::IO::File::Delete(path);
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(TypefaceCache::_typefaces()), fileSource->Name, typeface);
    return typeface;
}
// }

}}} // ::g::Fuse::Android
