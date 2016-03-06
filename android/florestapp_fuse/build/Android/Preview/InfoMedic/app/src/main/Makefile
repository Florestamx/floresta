# This file was generated based on 'C:\ProgramData\Uno\Packages\UnoCore\0.24.5\Targets\CPlusPlus\Android@(Project.Name)\app\src\main\Makefile'.
# WARNING: Changes might be lost if you edit this file directly.

CC = arm-linux-androideabi-gcc
CXX = arm-linux-androideabi-g++
STRIP = arm-linux-androideabi-strip
UNO = C:/Program\ Files\ (x86)/Fuse/uno.exe
NDK_DIR = C:/Users/mmoraf/AppData/Local/Fusetools/Fuse/Android/AndroidNDK
SYSROOT_DIR = $(NDK_DIR)/platforms/android-9/arch-arm
SONAME = libInfoMedic.so
ABI = armeabi-v7a

CFLAGS = -O3 -g -DNDEBUG -DDUK_F_32BIT_PTRS -DDUK_F_USE_REPL_ALL
INCLUDE_DIRS = -Iinclude -IC:/ProgramData/Uno/Packages/Fuse.Scripting.V8/0.24.7 -IC:/ProgramData/Uno/Packages/UnoCore/0.24.5/Targets/CPlusPlus/Prebuilt/Android/include
LD_DIRS = -LC:/ProgramData/Uno/Packages/Fuse.Scripting.V8/0.24.7/lib/Android -LC:/ProgramData/Uno/Packages/UnoCore/0.24.5/Targets/CPlusPlus/Prebuilt/Android/lib/armeabi-v7a -LC:/Users/mmoraf/AppData/Local/Fusetools/Fuse/Android/AndroidNDK/sources/cxx-stl/stlport/libs/armeabi-v7a
LD_LIBS = -landroid -lEGL -lGLESv2 -llog -lstlport_shared -lV8Simple -lXli -lXliFont -lXliGL -lXliImage -lXliMain -lXliPlatform -lz
STRIP_FLAGS = 

COMMON_FLAGS = \
	$(CFLAGS) \
	$(INCLUDE_DIRS) \
	--sysroot=$(SYSROOT_DIR) \
	-DANDROID \
	-fdata-sections \
	-ffunction-sections \
	-finline-limit=64 \
	-fno-strict-aliasing \
	-fomit-frame-pointer \
	-fpic \
	-fsigned-char \
	-funwind-tables \
	-isystem $(SYSROOT_DIR)/usr/include \
	-march=armv7-a \
	-mfloat-abi=softfp \
	-mfpu=vfpv3-d16 \
	-mthumb \
	-no-canonical-prefixes \
	-Wa,--noexecstack \
	-Wno-psabi

CXX_FLAGS = \
	$(COMMON_FLAGS) \
	-fexceptions \
	-frtti \
	-isystem C:/Users/mmoraf/AppData/Local/Fusetools/Fuse/Android/AndroidNDK/sources/cxx-stl/stlport/stlport \
	-Wno-invalid-offsetof \
	-std=c++11

CC_FLAGS = \
	$(COMMON_FLAGS) \
	-std=c99

LD_FLAGS = \
	$(CXX_FLAGS) \
	$(LD_DIRS) \
	$(LD_LIBS) \
	-Wl,--fix-cortex-a8 \
	-Wl,--gc-sections \
	-Wl,--no-undefined \
	-Wl,-z,noexecstack \
	-Wl,-z,now \
	-Wl,-z,relro

STATIC_LIBS = \
	C:/ProgramData/Uno/Packages/UnoCore/0.24.5/Targets/CPlusPlus/Prebuilt/Android/lib/armeabi-v7a/libXli.a \
	C:/ProgramData/Uno/Packages/UnoCore/0.24.5/Targets/CPlusPlus/Prebuilt/Android/lib/armeabi-v7a/libXliFont.a \
	C:/ProgramData/Uno/Packages/UnoCore/0.24.5/Targets/CPlusPlus/Prebuilt/Android/lib/armeabi-v7a/libXliGL.a \
	C:/ProgramData/Uno/Packages/UnoCore/0.24.5/Targets/CPlusPlus/Prebuilt/Android/lib/armeabi-v7a/libXliImage.a \
	C:/ProgramData/Uno/Packages/UnoCore/0.24.5/Targets/CPlusPlus/Prebuilt/Android/lib/armeabi-v7a/libXliMain.a \
	C:/ProgramData/Uno/Packages/UnoCore/0.24.5/Targets/CPlusPlus/Prebuilt/Android/lib/armeabi-v7a/libXliPlatform.a

all: libs/$(ABI)/$(SONAME)
all: libs/$(ABI)/libV8Simple.so
all: libs/$(ABI)/libstlport_shared.so
all: libs/$(ABI)/gdbserver
all: libs/$(ABI)/gdb.setup

libs/$(ABI)/gdbserver: | libs/$(ABI)
	$(UNO) cp $(NDK_DIR)/prebuilt/android-arm/gdbserver/gdbserver libs/$(ABI)

libs/$(ABI)/gdb.setup: gdb.setup | libs/$(ABI)
	$(UNO) cp gdb.setup libs/$(ABI)

libs/$(ABI)/$(SONAME): .uno/_root.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/_root.InfoMedic_bundle.cpp.o
libs/$(ABI)/$(SONAME): .uno/_root.InfoMedic_FuseControlsPageControl_FuseNode_Active_Property.cpp.o
libs/$(ABI)/$(SONAME): .uno/_root.InfoMedic_FuseControlsTextControl_string_Value_Property.cpp.o
libs/$(ABI)/$(SONAME): .uno/_root.InfoMedic_FuseNode_bool_IsEnabled_Property.cpp.o
libs/$(ABI)/$(SONAME): .uno/_root.MainView.cpp.o
libs/$(ABI)/$(SONAME): .uno/_root.MainView.Template.cpp.o
libs/$(ABI)/$(SONAME): .uno/_root.MainView.Template1.cpp.o
libs/$(ABI)/$(SONAME): .uno/Android.android.animation.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Android.android.app.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Android.android.content.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Android.android.content.res.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Android.android.graphics.drawable.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Android.android.graphics.drawable.shapes.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Android.android.graphics.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Android.android.location.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Android.android.media.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Android.android.net.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Android.android.net.http.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Android.android.opengl.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Android.android.os.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Android.android.test.mock.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Android.android.text.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Android.android.util.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Android.android.view.accessibility.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Android.android.view.animation.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Android.android.view.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Android.android.view.inputmethod.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Android.android.webkit.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Android.android.widget.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Android.Base.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Android.Base.Primitives.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Android.Base.Types.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Android.Base.Wrappers.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Android.com.fuse.ExperimentalHttp.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Android.com.fuse.Native.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Android.Fallbacks.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Android.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Android.java.io.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Android.java.lang.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Android.java.lang.reflect.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Android.java.net.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Android.java.util.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Android.Runtime.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/BootstrapperImpl_Android.cpp.o
libs/$(ABI)/$(SONAME): .uno/duktape.c.o
libs/$(ABI)/$(SONAME): .uno/Experimental.Cache.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Experimental.Http.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Experimental.Http.Internal.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Experimental.Physics.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Experimental.TextureLoader.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Android.Controls.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Android.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Android.NativeViews.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Animations.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.BasicTheme.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Camera.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Controls.FallbackTextEdit.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Controls.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Controls.Graphics.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Controls.Internal.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Designer.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Desktop.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Drawing.Batching.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Drawing.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Drawing.Internal.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Drawing.Meshes.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Drawing.Primitives.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Drawing.Tesselation.Collections.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Drawing.Tesselation.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Effects.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Elements.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Elements.Internal.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Entities.Designer.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Entities.Filters.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Entities.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Entities.Internal.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Entities.Primitives.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Entities.Processing.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.GeoLocation.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Gestures.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Gestures.Internal.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Input.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Input.UX.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Internal.Drawing.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Internal.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.iOS.Controls.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.iOS.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.iOS.NativeViews.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Layouts.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Navigation.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Physics.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Preview.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Reactive.FuseJS.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Reactive.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Resources.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Scripting.Duktape.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Scripting.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Scripting.V8.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Scripting.V8.Simple.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Shapes.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Storage.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Themes.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Triggers.Actions.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Triggers.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Vibration.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Video.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Fuse.Video.Graphics.Android.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Java.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/OpenGL.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Outracks.Simulator.Bytecode.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Outracks.Simulator.ByteFileSource.cpp.o
libs/$(ABI)/$(SONAME): .uno/Outracks.Simulator.FileCache.cpp.o
libs/$(ABI)/$(SONAME): .uno/Outracks.Simulator.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Outracks.Simulator.GeneratedApplication.cpp.o
libs/$(ABI)/$(SONAME): .uno/Outracks.Simulator.Protocol.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Outracks.Simulator.Reflection.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Outracks.Simulator.Reflection.Native.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Outracks.Simulator.Runtime.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Outracks.Simulator.Runtime.SimulatedObjectTypeRegistry.cpp.o
libs/$(ABI)/$(SONAME): .uno/Outracks.Simulator.Runtime.UxFactory.cpp.o
libs/$(ABI)/$(SONAME): .uno/Outracks.Simulator.Runtime.UxProperty-1.cpp.o
libs/$(ABI)/$(SONAME): .uno/Outracks.Simulator.Runtime.UxTemplate.cpp.o
libs/$(ABI)/$(SONAME): .uno/Outracks.UnoCore.Utilities.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Collections.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Compiler.ExportTargetInterop.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Compiler.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Compiler.ImportServices.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Compiler.ShaderGenerator.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Content.Fonts.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Content.Images.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Content.Models.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Content.Splines.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Diagnostics.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Geometry.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Graphics.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.IO.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Net.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Net.Http.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Net.Http.Implementation.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Net.Sockets.Berkeley.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Net.Sockets.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Platform.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Platform.iOS.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Platform2.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Platform2.Implementation.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Reflection.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Runtime.Implementation.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Runtime.Implementation.Internal.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Testing.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Text.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Threading.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Time.Calendars.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Time.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.Time.Text.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno.UX.g.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno/_invoke.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno/_main.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno/Activity/AApplication.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno/Activity/EntryPoints.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno/Activity/Platform2.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno/Base64.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno/Graphics/GLHelper.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno/JNIHelper.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno/Memory.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno/ObjectModel.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno/Reflection.cpp.o
libs/$(ABI)/$(SONAME): .uno/Uno/Support.cpp.o
libs/$(ABI)/$(SONAME): .uno/V8Proxy.cpp.o
libs/$(ABI)/$(SONAME): $(STATIC_LIBS) Makefile link.x | libs/$(ABI)
	$(CXX) $(LD_FLAGS) -shared -Wl,-soname,$(SONAME) -o .uno/$(SONAME) link.x $(STATIC_LIBS)
	$(STRIP) $(STRIP_FLAGS) -o libs/$(ABI)/$(SONAME) .uno/$(SONAME)

libs/$(ABI)/libV8Simple.so: C:/ProgramData/Uno/Packages/Fuse.Scripting.V8/0.24.7/lib/Android/libV8Simple.so | libs/$(ABI)
	$(STRIP) $(STRIP_FLAGS) -o libs/$(ABI)/libV8Simple.so C:/ProgramData/Uno/Packages/Fuse.Scripting.V8/0.24.7/lib/Android/libV8Simple.so

libs/$(ABI)/libstlport_shared.so: C:/Users/mmoraf/AppData/Local/Fusetools/Fuse/Android/AndroidNDK/sources/cxx-stl/stlport/libs/armeabi-v7a/libstlport_shared.so | libs/$(ABI)
	$(STRIP) $(STRIP_FLAGS) -o libs/$(ABI)/libstlport_shared.so C:/Users/mmoraf/AppData/Local/Fusetools/Fuse/Android/AndroidNDK/sources/cxx-stl/stlport/libs/armeabi-v7a/libstlport_shared.so

.uno/_root.g.cpp.o: include/_root.FuseAndroid_bundle.h
.uno/_root.g.cpp.o: include/_root.FuseBasicTheme_bundle.h
.uno/_root.g.cpp.o: include/_root.FuseBasicTheme_FuseAnimationsChange1_float4_Value_Property.h
.uno/_root.g.cpp.o: include/_root.FuseBasicTheme_FuseControlsButton_string_Text_Property.h
.uno/_root.g.cpp.o: include/_root.FuseBasicTheme_FuseControlsTextControl_float_FontSize_Property.h
.uno/_root.g.cpp.o: include/_root.FuseBasicTheme_FuseControlsTextControl_float_LineSpacing_Property.h
.uno/_root.g.cpp.o: include/_root.FuseBasicTheme_FuseControlsTextControl_float4_TextColor_Property.h
.uno/_root.g.cpp.o: include/_root.FuseBasicTheme_FuseControlsTextControl_FuseElementsTextAl-caf616dd.h
.uno/_root.g.cpp.o: include/_root.FuseBasicTheme_FuseControlsTextControl_FuseElementsTextWr-746d7e4e.h
.uno/_root.g.cpp.o: include/_root.FuseBasicTheme_FuseControlsTextControl_FuseFont_Font_Property.h
.uno/_root.g.cpp.o: include/_root.FuseBasicTheme_FuseControlsTextControl_string_Value_Property.h
.uno/_root.g.cpp.o: include/_root.FuseBasicTheme_FuseControlsTextEdit_float4_PlaceholderCol-a5e732f7.h
.uno/_root.g.cpp.o: include/_root.FuseBasicTheme_FuseControlsTextEdit_string_PlaceholderTex-b681a73c.h
.uno/_root.g.cpp.o: include/_root.FuseBasicTheme_FuseDrawingSolidColor_float4_Color_Property.h
.uno/_root.g.cpp.o: include/_root.FuseBasicTheme_FuseDrawingStroke_float_Width_Property.h
.uno/_root.g.cpp.o: include/_root.FuseBasicTheme_FuseEffectsDropShadow_float4_Color_Property.h
.uno/_root.g.cpp.o: include/_root.FuseBasicTheme_FuseElementsElement_float_Height_Property.h
.uno/_root.g.cpp.o: include/_root.FuseBasicTheme_FuseElementsElement_float_Opacity_Property.h
.uno/_root.g.cpp.o: include/_root.FuseBasicTheme_FuseElementsElement_float_Width_Property.h
.uno/_root.g.cpp.o: include/_root.FuseBasicTheme_FuseInputFocus_bool_FocusIsFocusable_Property.h
.uno/_root.g.cpp.o: include/_root.FuseBasicTheme_FuseTranslation_float_X_Property.h
.uno/_root.g.cpp.o: include/_root.FuseBasicTheme_FuseTriggersActionsTriggerAction_bool_IsAc-7430db5a.h
.uno/_root.g.cpp.o: include/_root.FuseBasicTheme_FuseTriggersWhileBool_bool_Value_Property.h
.uno/_root.g.cpp.o: include/_root.FuseControls_bundle.h
.uno/_root.g.cpp.o: include/_root.FuseControls_FuseDrawingSolidColor_float4_Color_Property.h
.uno/_root.g.cpp.o: include/_root.FuseControls_FuseNode_bool_IsEnabled_Property.h
.uno/_root.g.cpp.o: include/_root.FuseCore_bundle.h
.uno/_root.g.cpp.o: include/_root.FuseDrawing_bundle.h
.uno/_root.g.cpp.o: include/_root.FuseDrawingPolygons_bundle.h
.uno/_root.g.cpp.o: include/_root.FuseDrawingPrimitives_bundle.h
.uno/_root.g.cpp.o: include/_root.FuseEffects_bundle.h
.uno/_root.g.cpp.o: include/_root.FuseElements_bundle.h
.uno/_root.g.cpp.o: include/_root.FuseEntities_bundle.h
.uno/_root.g.cpp.o: include/_root.FuseiOS_bundle.h
.uno/_root.g.cpp.o: include/_root.FuseReactive_bundle.h
.uno/_root.g.cpp.o: include/_root.FuseThemes_bundle.h
.uno/_root.g.cpp.o: include/_root.FuseThemes_FuseControlsScrollView_bool_KeepFocusInView_Property.h
.uno/_root.g.cpp.o: include/_root.FuseThemes_FuseControlsScrollView_bool_UserScroll_Property.h
.uno/_root.g.cpp.o: include/_root.FuseThemes_FuseGesturesScroller_bool_UserScroll_Property.h
.uno/_root.g.cpp.o: include/_root.FuseThemes_FuseTriggersWhileBool_bool_Value_Property.h
.uno/_root.g.cpp.o: include/_root.FuseVideo_bundle.h
.uno/_root.g.cpp.o: include/_root.HashableWeakReference.h
.uno/_root.g.cpp.o: include/_root.OutracksSimulatorClientUno_bundle.h
.uno/_root.g.cpp.o: include/_root.UnoCore_bundle.h
.uno/_root.g.cpp.o: include/_root.WeakDictionary-2.h
.uno/_root.g.cpp.o: include/Fuse.Animations.Change-1.h
.uno/_root.g.cpp.o: include/Fuse.Controls.Button.h
.uno/_root.g.cpp.o: include/Fuse.Controls.ScrollView.h
.uno/_root.g.cpp.o: include/Fuse.Controls.TextControl.h
.uno/_root.g.cpp.o: include/Fuse.Controls.TextEdit.h
.uno/_root.g.cpp.o: include/Fuse.Drawing.SolidColor.h
.uno/_root.g.cpp.o: include/Fuse.Drawing.Stroke.h
.uno/_root.g.cpp.o: include/Fuse.Effects.DropShadow.h
.uno/_root.g.cpp.o: include/Fuse.Elements.Element.h
.uno/_root.g.cpp.o: include/Fuse.Gestures.Scroller.h
.uno/_root.g.cpp.o: include/Fuse.Input.Focus.h
.uno/_root.g.cpp.o: include/Fuse.Node.h
.uno/_root.g.cpp.o: include/Fuse.Translation.h
.uno/_root.g.cpp.o: include/Fuse.Triggers.Actions.TriggerAction.h
.uno/_root.g.cpp.o: include/Fuse.Triggers.WhileBool.h
.uno/_root.g.cpp.o: include/Uno.Bool.h
.uno/_root.g.cpp.o: include/Uno.BundleFile.h
.uno/_root.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/_root.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/_root.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
.uno/_root.g.cpp.o: include/Uno.Int.h
.uno/_root.g.cpp.o: include/Uno.Object.h
.uno/_root.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h
.uno/_root.g.cpp.o: include/Uno.String.h
.uno/_root.g.cpp.o: include/Uno.UX.ValueChangedHandler-1.h
.uno/_root.g.cpp.o: include/Uno.WeakReference-1.h
.uno/_root.g.cpp.o: jni/_root.g.cpp flags.txt | .uno
	echo _root.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/_root.g.cpp.o -c jni/_root.g.cpp

.uno/_root.InfoMedic_bundle.cpp.o: include/_root.InfoMedic_bundle.h
.uno/_root.InfoMedic_bundle.cpp.o: include/Uno.BundleFile.h
.uno/_root.InfoMedic_bundle.cpp.o: include/Uno.String.h
.uno/_root.InfoMedic_bundle.cpp.o: jni/_root.InfoMedic_bundle.cpp flags.txt | .uno
	echo _root.InfoMedic_bundle.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/_root.InfoMedic_bundle.cpp.o -c jni/_root.InfoMedic_bundle.cpp

.uno/_root.InfoMedic_FuseControlsPageControl_FuseNode_Active_Property.cpp.o: include/_root.InfoMedic_FuseControlsPageControl_FuseNode_Active_Property.h
.uno/_root.InfoMedic_FuseControlsPageControl_FuseNode_Active_Property.cpp.o: include/Fuse.Controls.PageControl.h
.uno/_root.InfoMedic_FuseControlsPageControl_FuseNode_Active_Property.cpp.o: include/Uno.Object.h
.uno/_root.InfoMedic_FuseControlsPageControl_FuseNode_Active_Property.cpp.o: jni/_root.InfoMedic_FuseControlsPageControl_FuseNode_Active_Property.cpp flags.txt | .uno
	echo _root.InfoMedic_FuseControlsPageControl_FuseNode_Active_Property.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/_root.InfoMedic_FuseControlsPageControl_FuseNode_Active_Property.cpp.o -c jni/_root.InfoMedic_FuseControlsPageControl_FuseNode_Active_Property.cpp

.uno/_root.InfoMedic_FuseControlsTextControl_string_Value_Property.cpp.o: include/_root.InfoMedic_FuseControlsTextControl_string_Value_Property.h
.uno/_root.InfoMedic_FuseControlsTextControl_string_Value_Property.cpp.o: include/Fuse.Controls.TextControl.h
.uno/_root.InfoMedic_FuseControlsTextControl_string_Value_Property.cpp.o: include/Uno.Object.h
.uno/_root.InfoMedic_FuseControlsTextControl_string_Value_Property.cpp.o: include/Uno.UX.ValueChangedHandler-1.h
.uno/_root.InfoMedic_FuseControlsTextControl_string_Value_Property.cpp.o: jni/_root.InfoMedic_FuseControlsTextControl_string_Value_Property.cpp flags.txt | .uno
	echo _root.InfoMedic_FuseControlsTextControl_string_Value_Property.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/_root.InfoMedic_FuseControlsTextControl_string_Value_Property.cpp.o -c jni/_root.InfoMedic_FuseControlsTextControl_string_Value_Property.cpp

.uno/_root.InfoMedic_FuseNode_bool_IsEnabled_Property.cpp.o: include/_root.InfoMedic_FuseNode_bool_IsEnabled_Property.h
.uno/_root.InfoMedic_FuseNode_bool_IsEnabled_Property.cpp.o: include/Fuse.Node.h
.uno/_root.InfoMedic_FuseNode_bool_IsEnabled_Property.cpp.o: include/Uno.Object.h
.uno/_root.InfoMedic_FuseNode_bool_IsEnabled_Property.cpp.o: jni/_root.InfoMedic_FuseNode_bool_IsEnabled_Property.cpp flags.txt | .uno
	echo _root.InfoMedic_FuseNode_bool_IsEnabled_Property.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/_root.InfoMedic_FuseNode_bool_IsEnabled_Property.cpp.o -c jni/_root.InfoMedic_FuseNode_bool_IsEnabled_Property.cpp

.uno/_root.MainView.cpp.o: include/_root.InfoMedic_bundle.h
.uno/_root.MainView.cpp.o: include/_root.InfoMedic_FuseControlsPageControl_FuseNode_Active_Property.h
.uno/_root.MainView.cpp.o: include/_root.InfoMedic_FuseControlsTextControl_string_Value_Property.h
.uno/_root.MainView.cpp.o: include/_root.InfoMedic_FuseNode_bool_IsEnabled_Property.h
.uno/_root.MainView.cpp.o: include/_root.MainView.h
.uno/_root.MainView.cpp.o: include/_root.MainView.Template.h
.uno/_root.MainView.cpp.o: include/_root.MainView.Template1.h
.uno/_root.MainView.cpp.o: include/Fuse.AppBase.h
.uno/_root.MainView.cpp.o: include/Fuse.BasicTheme.BasicTheme.h
.uno/_root.MainView.cpp.o: include/Fuse.Behavior.h
.uno/_root.MainView.cpp.o: include/Fuse.Controls.BottomBarBackground.h
.uno/_root.MainView.cpp.o: include/Fuse.Controls.Button.h
.uno/_root.MainView.cpp.o: include/Fuse.Controls.DockPanel.h
.uno/_root.MainView.cpp.o: include/Fuse.Controls.Grid.h
.uno/_root.MainView.cpp.o: include/Fuse.Controls.Image.h
.uno/_root.MainView.cpp.o: include/Fuse.Controls.Page.h
.uno/_root.MainView.cpp.o: include/Fuse.Controls.PageControl.h
.uno/_root.MainView.cpp.o: include/Fuse.Controls.ParentControl.h
.uno/_root.MainView.cpp.o: include/Fuse.Controls.StackPanel.h
.uno/_root.MainView.cpp.o: include/Fuse.Controls.StatusBarBackground.h
.uno/_root.MainView.cpp.o: include/Fuse.Controls.Text.h
.uno/_root.MainView.cpp.o: include/Fuse.Controls.TextControl.h
.uno/_root.MainView.cpp.o: include/Fuse.Controls.TextEdit.h
.uno/_root.MainView.cpp.o: include/Fuse.Controls.TextInput.h
.uno/_root.MainView.cpp.o: include/Fuse.Elements.Alignment.h
.uno/_root.MainView.cpp.o: include/Fuse.Elements.Element.h
.uno/_root.MainView.cpp.o: include/Fuse.Gestures.Clicked.h
.uno/_root.MainView.cpp.o: include/Fuse.Gestures.ClickedHandler.h
.uno/_root.MainView.cpp.o: include/Fuse.iOS.StatusBarConfig.h
.uno/_root.MainView.cpp.o: include/Fuse.Layouts.Dock.h
.uno/_root.MainView.cpp.o: include/Fuse.Node.h
.uno/_root.MainView.cpp.o: include/Fuse.Reactive.DataBinding-1.h
.uno/_root.MainView.cpp.o: include/Fuse.Reactive.EventBinding.h
.uno/_root.MainView.cpp.o: include/Fuse.Reactive.JavaScript.h
.uno/_root.MainView.cpp.o: include/Fuse.Style.h
.uno/_root.MainView.cpp.o: include/Fuse.Theme.h
.uno/_root.MainView.cpp.o: include/Uno.Application.h
.uno/_root.MainView.cpp.o: include/Uno.Bool.h
.uno/_root.MainView.cpp.o: include/Uno.BundleFile.h
.uno/_root.MainView.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/_root.MainView.cpp.o: include/Uno.Collections.IList-1.h
.uno/_root.MainView.cpp.o: include/Uno.Float.h
.uno/_root.MainView.cpp.o: include/Uno.Float4.h
.uno/_root.MainView.cpp.o: include/Uno.Int.h
.uno/_root.MainView.cpp.o: include/Uno.Object.h
.uno/_root.MainView.cpp.o: include/Uno.Platform.iOS.StatusBarStyle.h
.uno/_root.MainView.cpp.o: include/Uno.String.h
.uno/_root.MainView.cpp.o: include/Uno.UX.BundleFileSource.h
.uno/_root.MainView.cpp.o: include/Uno.UX.FileSource.h
.uno/_root.MainView.cpp.o: include/Uno.UX.ITemplate.h
.uno/_root.MainView.cpp.o: include/Uno.UX.Property-1.h
.uno/_root.MainView.cpp.o: include/Uno.UX.Resource.h
.uno/_root.MainView.cpp.o: include/Uno.UX.Template-1.h
.uno/_root.MainView.cpp.o: jni/_root.MainView.cpp flags.txt | .uno
	echo _root.MainView.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/_root.MainView.cpp.o -c jni/_root.MainView.cpp

.uno/_root.MainView.Template.cpp.o: include/_root.MainView.h
.uno/_root.MainView.Template.cpp.o: include/_root.MainView.Template.h
.uno/_root.MainView.Template.cpp.o: include/Fuse.Controls.TextControl.h
.uno/_root.MainView.Template.cpp.o: include/Fuse.StyleProperty-2.h
.uno/_root.MainView.Template.cpp.o: include/Uno.Bool.h
.uno/_root.MainView.Template.cpp.o: include/Uno.Float.h
.uno/_root.MainView.Template.cpp.o: include/Uno.Float4.h
.uno/_root.MainView.Template.cpp.o: jni/_root.MainView.Template.cpp flags.txt | .uno
	echo _root.MainView.Template.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/_root.MainView.Template.cpp.o -c jni/_root.MainView.Template.cpp

.uno/_root.MainView.Template1.cpp.o: include/_root.MainView.h
.uno/_root.MainView.Template1.cpp.o: include/_root.MainView.Template1.h
.uno/_root.MainView.Template1.cpp.o: include/Fuse.Controls.TextControl.h
.uno/_root.MainView.Template1.cpp.o: include/Fuse.Controls.TextEdit.h
.uno/_root.MainView.Template1.cpp.o: include/Fuse.StyleProperty-2.h
.uno/_root.MainView.Template1.cpp.o: include/Uno.Bool.h
.uno/_root.MainView.Template1.cpp.o: include/Uno.Float.h
.uno/_root.MainView.Template1.cpp.o: include/Uno.Float4.h
.uno/_root.MainView.Template1.cpp.o: jni/_root.MainView.Template1.cpp flags.txt | .uno
	echo _root.MainView.Template1.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/_root.MainView.Template1.cpp.o -c jni/_root.MainView.Template1.cpp

.uno/Android.android.animation.g.cpp.o: include/Android.android.animation.Animator.h
.uno/Android.android.animation.g.cpp.o: include/Android.android.animation.LayoutTransition.h
.uno/Android.android.animation.g.cpp.o: include/Android.android.animation.TimeAnimator.h
.uno/Android.android.animation.g.cpp.o: include/Android.android.animation.TimeAnimatorDLRTimeListener.h
.uno/Android.android.animation.g.cpp.o: include/Android.android.animation.TimeInterpolator.h
.uno/Android.android.animation.g.cpp.o: include/Android.android.animation.ValueAnimator.h
.uno/Android.android.animation.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
.uno/Android.android.animation.g.cpp.o: include/Android.Base.JNI.h
.uno/Android.android.animation.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
.uno/Android.android.animation.g.cpp.o: include/Android.Base.Primitives.ujclass.h
.uno/Android.android.animation.g.cpp.o: include/Android.Base.Primitives.ujobject.h
.uno/Android.android.animation.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Android.android.animation.g.cpp.o: include/Android.Fallbacks.Android_android_animation_Animator.h
.uno/Android.android.animation.g.cpp.o: include/Android.Fallbacks.Android_android_animation_TimeAnimatorDLRTimeListener.h
.uno/Android.android.animation.g.cpp.o: include/Android.Fallbacks.Android_android_animation_TimeInterpolator.h
.uno/Android.android.animation.g.cpp.o: include/Android.java.lang.String.h
.uno/Android.android.animation.g.cpp.o: include/Uno.Bool.h
.uno/Android.android.animation.g.cpp.o: include/Uno.Exception.h
.uno/Android.android.animation.g.cpp.o: include/Uno.Float.h
.uno/Android.android.animation.g.cpp.o: include/Uno.Long.h
.uno/Android.android.animation.g.cpp.o: include/Uno.Type.h
.uno/Android.android.animation.g.cpp.o: jni/Android.android.animation.g.cpp flags.txt | .uno
	echo Android.android.animation.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Android.android.animation.g.cpp.o -c jni/Android.android.animation.g.cpp

.uno/Android.android.app.g.cpp.o: include/Android.android.app.Activity.h
.uno/Android.android.app.g.cpp.o: include/Android.android.app.Fragment.h
.uno/Android.android.app.g.cpp.o: include/Android.android.app.TaskStackBuilder.h
.uno/Android.android.app.g.cpp.o: include/Android.android.content.Intent.h
.uno/Android.android.app.g.cpp.o: include/Android.android.view.ContextMenu.h
.uno/Android.android.app.g.cpp.o: include/Android.android.view.ContextMenuDLRContextMenuInfo.h
.uno/Android.android.app.g.cpp.o: include/Android.android.view.View.h
.uno/Android.android.app.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
.uno/Android.android.app.g.cpp.o: include/Android.Base.JNI.h
.uno/Android.android.app.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
.uno/Android.android.app.g.cpp.o: include/Android.Base.Primitives.ujclass.h
.uno/Android.android.app.g.cpp.o: include/Android.Base.Primitives.ujobject.h
.uno/Android.android.app.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Android.android.app.g.cpp.o: include/Android.java.lang.Object.h
.uno/Android.android.app.g.cpp.o: include/Android.java.lang.Runnable.h
.uno/Android.android.app.g.cpp.o: include/Android.java.lang.String.h
.uno/Android.android.app.g.cpp.o: include/Uno.Bool.h
.uno/Android.android.app.g.cpp.o: include/Uno.Exception.h
.uno/Android.android.app.g.cpp.o: include/Uno.Int.h
.uno/Android.android.app.g.cpp.o: include/Uno.Type.h
.uno/Android.android.app.g.cpp.o: jni/Android.android.app.g.cpp flags.txt | .uno
	echo Android.android.app.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Android.android.app.g.cpp.o -c jni/Android.android.app.g.cpp

.uno/Android.android.content.g.cpp.o: include/Android.android.content.ClipData.h
.uno/Android.android.content.g.cpp.o: include/Android.android.content.ComponentName.h
.uno/Android.android.content.g.cpp.o: include/Android.android.content.Context.h
.uno/Android.android.content.g.cpp.o: include/Android.android.content.ContextWrapper.h
.uno/Android.android.content.g.cpp.o: include/Android.android.content.Intent.h
.uno/Android.android.content.g.cpp.o: include/Android.android.content.res.AssetManager.h
.uno/Android.android.content.g.cpp.o: include/Android.android.content.res.Resources.h
.uno/Android.android.content.g.cpp.o: include/Android.android.net.Uri.h
.uno/Android.android.content.g.cpp.o: include/Android.android.os.Parcel.h
.uno/Android.android.content.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
.uno/Android.android.content.g.cpp.o: include/Android.Base.JNI.h
.uno/Android.android.content.g.cpp.o: include/Android.Base.Primitives.jfieldID.h
.uno/Android.android.content.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
.uno/Android.android.content.g.cpp.o: include/Android.Base.Primitives.ujclass.h
.uno/Android.android.content.g.cpp.o: include/Android.Base.Primitives.ujobject.h
.uno/Android.android.content.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Android.android.content.g.cpp.o: include/Android.Fallbacks.Android_android_content_Context.h
.uno/Android.android.content.g.cpp.o: include/Android.java.lang.Object.h
.uno/Android.android.content.g.cpp.o: include/Android.java.lang.String.h
.uno/Android.android.content.g.cpp.o: include/Uno.Bool.h
.uno/Android.android.content.g.cpp.o: include/Uno.Exception.h
.uno/Android.android.content.g.cpp.o: include/Uno.Int.h
.uno/Android.android.content.g.cpp.o: include/Uno.Type.h
.uno/Android.android.content.g.cpp.o: jni/Android.android.content.g.cpp flags.txt | .uno
	echo Android.android.content.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Android.android.content.g.cpp.o -c jni/Android.android.content.g.cpp

.uno/Android.android.content.res.g.cpp.o: include/Android.android.content.res.AssetFileDescriptor.h
.uno/Android.android.content.res.g.cpp.o: include/Android.android.content.res.AssetManager.h
.uno/Android.android.content.res.g.cpp.o: include/Android.android.content.res.ColorStateList.h
.uno/Android.android.content.res.g.cpp.o: include/Android.android.content.res.Configuration.h
.uno/Android.android.content.res.g.cpp.o: include/Android.android.content.res.Resources.h
.uno/Android.android.content.res.g.cpp.o: include/Android.android.content.res.TypedArray.h
.uno/Android.android.content.res.g.cpp.o: include/Android.android.graphics.drawable.Drawable.h
.uno/Android.android.content.res.g.cpp.o: include/Android.android.os.Parcel.h
.uno/Android.android.content.res.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
.uno/Android.android.content.res.g.cpp.o: include/Android.Base.JNI.h
.uno/Android.android.content.res.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
.uno/Android.android.content.res.g.cpp.o: include/Android.Base.Primitives.ujclass.h
.uno/Android.android.content.res.g.cpp.o: include/Android.Base.Primitives.ujobject.h
.uno/Android.android.content.res.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Android.android.content.res.g.cpp.o: include/Android.Fallbacks.Android_android_graphics_drawable_Drawable.h
.uno/Android.android.content.res.g.cpp.o: include/Android.Fallbacks.Android_java_io_InputStream.h
.uno/Android.android.content.res.g.cpp.o: include/Android.java.io.FileDescriptor.h
.uno/Android.android.content.res.g.cpp.o: include/Android.java.io.InputStream.h
.uno/Android.android.content.res.g.cpp.o: include/Android.java.lang.Object.h
.uno/Android.android.content.res.g.cpp.o: include/Android.java.lang.String.h
.uno/Android.android.content.res.g.cpp.o: include/Uno.Bool.h
.uno/Android.android.content.res.g.cpp.o: include/Uno.Exception.h
.uno/Android.android.content.res.g.cpp.o: include/Uno.Int.h
.uno/Android.android.content.res.g.cpp.o: include/Uno.Long.h
.uno/Android.android.content.res.g.cpp.o: jni/Android.android.content.res.g.cpp flags.txt | .uno
	echo Android.android.content.res.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Android.android.content.res.g.cpp.o -c jni/Android.android.content.res.g.cpp

.uno/Android.android.graphics.drawable.g.cpp.o: include/Android.android.graphics.drawable.Drawable.h
.uno/Android.android.graphics.drawable.g.cpp.o: include/Android.android.graphics.drawable.LayerDrawable.h
.uno/Android.android.graphics.drawable.g.cpp.o: include/Android.android.graphics.drawable.ShapeDrawable.h
.uno/Android.android.graphics.drawable.g.cpp.o: include/Android.android.graphics.drawable.ShapeDrawableDLRShaderFactory.h
.uno/Android.android.graphics.drawable.g.cpp.o: include/Android.android.graphics.drawable.shapes.Shape.h
.uno/Android.android.graphics.drawable.g.cpp.o: include/Android.android.graphics.Paint.h
.uno/Android.android.graphics.drawable.g.cpp.o: include/Android.android.graphics.PorterDuffDLRMode.h
.uno/Android.android.graphics.drawable.g.cpp.o: include/Android.android.graphics.Shader.h
.uno/Android.android.graphics.drawable.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
.uno/Android.android.graphics.drawable.g.cpp.o: include/Android.Base.JNI.h
.uno/Android.android.graphics.drawable.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
.uno/Android.android.graphics.drawable.g.cpp.o: include/Android.Base.Primitives.ujclass.h
.uno/Android.android.graphics.drawable.g.cpp.o: include/Android.Base.Primitives.ujobject.h
.uno/Android.android.graphics.drawable.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Android.android.graphics.drawable.g.cpp.o: include/Android.Fallbacks.Android_android_graphics_drawable_Drawable.h
.uno/Android.android.graphics.drawable.g.cpp.o: include/Android.Fallbacks.Android_android_graphics_drawable_ShapeDrawab-1918c93c.h
.uno/Android.android.graphics.drawable.g.cpp.o: include/Android.Runtime.ObjectArray-1.h
.uno/Android.android.graphics.drawable.g.cpp.o: include/Uno.Bool.h
.uno/Android.android.graphics.drawable.g.cpp.o: include/Uno.Exception.h
.uno/Android.android.graphics.drawable.g.cpp.o: include/Uno.Int.h
.uno/Android.android.graphics.drawable.g.cpp.o: include/Uno.Type.h
.uno/Android.android.graphics.drawable.g.cpp.o: jni/Android.android.graphics.drawable.g.cpp flags.txt | .uno
	echo Android.android.graphics.drawable.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Android.android.graphics.drawable.g.cpp.o -c jni/Android.android.graphics.drawable.g.cpp

.uno/Android.android.graphics.drawable.shapes.g.cpp.o: include/Android.android.graphics.drawable.shapes.ArcShape.h
.uno/Android.android.graphics.drawable.shapes.g.cpp.o: include/Android.android.graphics.drawable.shapes.RectShape.h
.uno/Android.android.graphics.drawable.shapes.g.cpp.o: include/Android.android.graphics.drawable.shapes.RoundRectShape.h
.uno/Android.android.graphics.drawable.shapes.g.cpp.o: include/Android.android.graphics.drawable.shapes.Shape.h
.uno/Android.android.graphics.drawable.shapes.g.cpp.o: include/Android.android.graphics.RectF.h
.uno/Android.android.graphics.drawable.shapes.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
.uno/Android.android.graphics.drawable.shapes.g.cpp.o: include/Android.Base.JNI.h
.uno/Android.android.graphics.drawable.shapes.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
.uno/Android.android.graphics.drawable.shapes.g.cpp.o: include/Android.Base.Primitives.ujclass.h
.uno/Android.android.graphics.drawable.shapes.g.cpp.o: include/Android.Base.Primitives.ujobject.h
.uno/Android.android.graphics.drawable.shapes.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Android.android.graphics.drawable.shapes.g.cpp.o: include/Android.Fallbacks.Android_android_graphics_drawable_shapes_Shape.h
.uno/Android.android.graphics.drawable.shapes.g.cpp.o: include/Android.Runtime.FloatArray.h
.uno/Android.android.graphics.drawable.shapes.g.cpp.o: include/Uno.Bool.h
.uno/Android.android.graphics.drawable.shapes.g.cpp.o: include/Uno.Exception.h
.uno/Android.android.graphics.drawable.shapes.g.cpp.o: include/Uno.Float.h
.uno/Android.android.graphics.drawable.shapes.g.cpp.o: include/Uno.Type.h
.uno/Android.android.graphics.drawable.shapes.g.cpp.o: jni/Android.android.graphics.drawable.shapes.g.cpp flags.txt | .uno
	echo Android.android.graphics.drawable.shapes.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Android.android.graphics.drawable.shapes.g.cpp.o -c jni/Android.android.graphics.drawable.shapes.g.cpp

.uno/Android.android.graphics.g.cpp.o: include/Android.android.content.res.AssetManager.h
.uno/Android.android.graphics.g.cpp.o: include/Android.android.graphics.Bitmap.h
.uno/Android.android.graphics.g.cpp.o: include/Android.android.graphics.BitmapDLRConfig.h
.uno/Android.android.graphics.g.cpp.o: include/Android.android.graphics.BitmapFactory.h
.uno/Android.android.graphics.g.cpp.o: include/Android.android.graphics.Canvas.h
.uno/Android.android.graphics.g.cpp.o: include/Android.android.graphics.Color.h
.uno/Android.android.graphics.g.cpp.o: include/Android.android.graphics.LinearGradient.h
.uno/Android.android.graphics.g.cpp.o: include/Android.android.graphics.Matrix.h
.uno/Android.android.graphics.g.cpp.o: include/Android.android.graphics.Paint.h
.uno/Android.android.graphics.g.cpp.o: include/Android.android.graphics.PaintDLRStyle.h
.uno/Android.android.graphics.g.cpp.o: include/Android.android.graphics.Point.h
.uno/Android.android.graphics.g.cpp.o: include/Android.android.graphics.PorterDuffDLRMode.h
.uno/Android.android.graphics.g.cpp.o: include/Android.android.graphics.Rect.h
.uno/Android.android.graphics.g.cpp.o: include/Android.android.graphics.RectF.h
.uno/Android.android.graphics.g.cpp.o: include/Android.android.graphics.Region.h
.uno/Android.android.graphics.g.cpp.o: include/Android.android.graphics.Shader.h
.uno/Android.android.graphics.g.cpp.o: include/Android.android.graphics.ShaderDLRTileMode.h
.uno/Android.android.graphics.g.cpp.o: include/Android.android.graphics.SurfaceTexture.h
.uno/Android.android.graphics.g.cpp.o: include/Android.android.graphics.SurfaceTextureDLROnFrameAvailableListener.h
.uno/Android.android.graphics.g.cpp.o: include/Android.android.graphics.Typeface.h
.uno/Android.android.graphics.g.cpp.o: include/Android.android.os.Parcel.h
.uno/Android.android.graphics.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
.uno/Android.android.graphics.g.cpp.o: include/Android.Base.JNI.h
.uno/Android.android.graphics.g.cpp.o: include/Android.Base.Primitives.jfieldID.h
.uno/Android.android.graphics.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
.uno/Android.android.graphics.g.cpp.o: include/Android.Base.Primitives.ujclass.h
.uno/Android.android.graphics.g.cpp.o: include/Android.Base.Primitives.ujobject.h
.uno/Android.android.graphics.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Android.android.graphics.g.cpp.o: include/Android.Fallbacks.Android_android_graphics_SurfaceTextureDLROnF-45d51137.h
.uno/Android.android.graphics.g.cpp.o: include/Android.java.io.InputStream.h
.uno/Android.android.graphics.g.cpp.o: include/Android.java.lang.Object.h
.uno/Android.android.graphics.g.cpp.o: include/Android.java.lang.String.h
.uno/Android.android.graphics.g.cpp.o: include/Android.Runtime.FloatArray.h
.uno/Android.android.graphics.g.cpp.o: include/Android.Runtime.IntArray.h
.uno/Android.android.graphics.g.cpp.o: include/Uno.Bool.h
.uno/Android.android.graphics.g.cpp.o: include/Uno.Exception.h
.uno/Android.android.graphics.g.cpp.o: include/Uno.Float.h
.uno/Android.android.graphics.g.cpp.o: include/Uno.Int.h
.uno/Android.android.graphics.g.cpp.o: include/Uno.Type.h
.uno/Android.android.graphics.g.cpp.o: jni/Android.android.graphics.g.cpp flags.txt | .uno
	echo Android.android.graphics.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Android.android.graphics.g.cpp.o -c jni/Android.android.graphics.g.cpp

.uno/Android.android.location.g.cpp.o: include/Android.android.location.Location.h
.uno/Android.android.location.g.cpp.o: include/Android.android.location.LocationListener.h
.uno/Android.android.location.g.cpp.o: include/Android.android.location.LocationManager.h
.uno/Android.android.location.g.cpp.o: include/Android.android.os.Bundle.h
.uno/Android.android.location.g.cpp.o: include/Android.android.os.Looper.h
.uno/Android.android.location.g.cpp.o: include/Android.android.os.Parcel.h
.uno/Android.android.location.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
.uno/Android.android.location.g.cpp.o: include/Android.Base.JNI.h
.uno/Android.android.location.g.cpp.o: include/Android.Base.Primitives.jfieldID.h
.uno/Android.android.location.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
.uno/Android.android.location.g.cpp.o: include/Android.Base.Primitives.ujclass.h
.uno/Android.android.location.g.cpp.o: include/Android.Base.Primitives.ujobject.h
.uno/Android.android.location.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Android.android.location.g.cpp.o: include/Android.Fallbacks.Android_android_location_LocationListener.h
.uno/Android.android.location.g.cpp.o: include/Android.Fallbacks.Android_java_util_List.h
.uno/Android.android.location.g.cpp.o: include/Android.java.lang.String.h
.uno/Android.android.location.g.cpp.o: include/Android.java.util.List.h
.uno/Android.android.location.g.cpp.o: include/Uno.Bool.h
.uno/Android.android.location.g.cpp.o: include/Uno.Double.h
.uno/Android.android.location.g.cpp.o: include/Uno.Exception.h
.uno/Android.android.location.g.cpp.o: include/Uno.Float.h
.uno/Android.android.location.g.cpp.o: include/Uno.Int.h
.uno/Android.android.location.g.cpp.o: include/Uno.Long.h
.uno/Android.android.location.g.cpp.o: jni/Android.android.location.g.cpp flags.txt | .uno
	echo Android.android.location.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Android.android.location.g.cpp.o -c jni/Android.android.location.g.cpp

.uno/Android.android.media.g.cpp.o: include/Android.android.media.AudioManager.h
.uno/Android.android.media.g.cpp.o: include/Android.android.media.AudioManagerDLROnAudioFocusChangeListener.h
.uno/Android.android.media.g.cpp.o: include/Android.android.media.MediaPlayer.h
.uno/Android.android.media.g.cpp.o: include/Android.android.media.MediaPlayerDLROnBufferingUpdateListener.h
.uno/Android.android.media.g.cpp.o: include/Android.android.media.MediaPlayerDLROnCompletionListener.h
.uno/Android.android.media.g.cpp.o: include/Android.android.media.MediaPlayerDLROnErrorListener.h
.uno/Android.android.media.g.cpp.o: include/Android.android.media.MediaPlayerDLROnPreparedListener.h
.uno/Android.android.media.g.cpp.o: include/Android.android.media.MediaPlayerDLROnSeekCompleteListener.h
.uno/Android.android.media.g.cpp.o: include/Android.android.media.MediaPlayerDLROnVideoSizeChangedListener.h
.uno/Android.android.media.g.cpp.o: include/Android.android.view.Surface.h
.uno/Android.android.media.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
.uno/Android.android.media.g.cpp.o: include/Android.Base.JNI.h
.uno/Android.android.media.g.cpp.o: include/Android.Base.Primitives.jfieldID.h
.uno/Android.android.media.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
.uno/Android.android.media.g.cpp.o: include/Android.Base.Primitives.ujclass.h
.uno/Android.android.media.g.cpp.o: include/Android.Base.Primitives.ujobject.h
.uno/Android.android.media.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Android.android.media.g.cpp.o: include/Android.Fallbacks.Android_android_media_AudioManagerDLROnAudioF-b4dcb473.h
.uno/Android.android.media.g.cpp.o: include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnBufferi-a11a3e5b.h
.uno/Android.android.media.g.cpp.o: include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnComplet-64af01f3.h
.uno/Android.android.media.g.cpp.o: include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnErrorListener.h
.uno/Android.android.media.g.cpp.o: include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnPreparedListener.h
.uno/Android.android.media.g.cpp.o: include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnSeekCom-79a19ba7.h
.uno/Android.android.media.g.cpp.o: include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnVideoSi-169f5c77.h
.uno/Android.android.media.g.cpp.o: include/Android.java.io.FileDescriptor.h
.uno/Android.android.media.g.cpp.o: include/Android.java.lang.String.h
.uno/Android.android.media.g.cpp.o: include/Uno.Bool.h
.uno/Android.android.media.g.cpp.o: include/Uno.Exception.h
.uno/Android.android.media.g.cpp.o: include/Uno.Float.h
.uno/Android.android.media.g.cpp.o: include/Uno.Int.h
.uno/Android.android.media.g.cpp.o: include/Uno.Long.h
.uno/Android.android.media.g.cpp.o: include/Uno.Type.h
.uno/Android.android.media.g.cpp.o: jni/Android.android.media.g.cpp flags.txt | .uno
	echo Android.android.media.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Android.android.media.g.cpp.o -c jni/Android.android.media.g.cpp

.uno/Android.android.net.g.cpp.o: include/Android.android.net.Uri.h
.uno/Android.android.net.g.cpp.o: include/Android.android.os.Parcel.h
.uno/Android.android.net.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
.uno/Android.android.net.g.cpp.o: include/Android.Base.JNI.h
.uno/Android.android.net.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
.uno/Android.android.net.g.cpp.o: include/Android.Base.Primitives.ujclass.h
.uno/Android.android.net.g.cpp.o: include/Android.Base.Primitives.ujobject.h
.uno/Android.android.net.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Android.android.net.g.cpp.o: include/Android.Fallbacks.Android_android_net_Uri.h
.uno/Android.android.net.g.cpp.o: include/Android.java.lang.Object.h
.uno/Android.android.net.g.cpp.o: include/Android.java.lang.String.h
.uno/Android.android.net.g.cpp.o: include/Uno.Bool.h
.uno/Android.android.net.g.cpp.o: include/Uno.Exception.h
.uno/Android.android.net.g.cpp.o: include/Uno.Int.h
.uno/Android.android.net.g.cpp.o: jni/Android.android.net.g.cpp flags.txt | .uno
	echo Android.android.net.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Android.android.net.g.cpp.o -c jni/Android.android.net.g.cpp

.uno/Android.android.net.http.g.cpp.o: include/Android.android.net.http.SslError.h
.uno/Android.android.net.http.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
.uno/Android.android.net.http.g.cpp.o: include/Android.Base.JNI.h
.uno/Android.android.net.http.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
.uno/Android.android.net.http.g.cpp.o: include/Android.Base.Primitives.ujclass.h
.uno/Android.android.net.http.g.cpp.o: include/Android.Base.Primitives.ujobject.h
.uno/Android.android.net.http.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Android.android.net.http.g.cpp.o: include/Android.java.lang.String.h
.uno/Android.android.net.http.g.cpp.o: include/Uno.Bool.h
.uno/Android.android.net.http.g.cpp.o: include/Uno.Exception.h
.uno/Android.android.net.http.g.cpp.o: jni/Android.android.net.http.g.cpp flags.txt | .uno
	echo Android.android.net.http.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Android.android.net.http.g.cpp.o -c jni/Android.android.net.http.g.cpp

.uno/Android.android.opengl.g.cpp.o: include/Android.android.graphics.Bitmap.h
.uno/Android.android.opengl.g.cpp.o: include/Android.android.opengl.GLUtils.h
.uno/Android.android.opengl.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
.uno/Android.android.opengl.g.cpp.o: include/Android.Base.JNI.h
.uno/Android.android.opengl.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
.uno/Android.android.opengl.g.cpp.o: include/Android.Base.Primitives.ujclass.h
.uno/Android.android.opengl.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Android.android.opengl.g.cpp.o: include/Uno.Exception.h
.uno/Android.android.opengl.g.cpp.o: include/Uno.Int.h
.uno/Android.android.opengl.g.cpp.o: jni/Android.android.opengl.g.cpp flags.txt | .uno
	echo Android.android.opengl.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Android.android.opengl.g.cpp.o -c jni/Android.android.opengl.g.cpp

.uno/Android.android.os.g.cpp.o: include/Android.android.os.Build.h
.uno/Android.android.os.g.cpp.o: include/Android.android.os.BuildDLRVERSION.h
.uno/Android.android.os.g.cpp.o: include/Android.android.os.Bundle.h
.uno/Android.android.os.g.cpp.o: include/Android.android.os.Handler.h
.uno/Android.android.os.g.cpp.o: include/Android.android.os.IBinder.h
.uno/Android.android.os.g.cpp.o: include/Android.android.os.IBinderDLRDeathRecipient.h
.uno/Android.android.os.g.cpp.o: include/Android.android.os.IInterface.h
.uno/Android.android.os.g.cpp.o: include/Android.android.os.Looper.h
.uno/Android.android.os.g.cpp.o: include/Android.android.os.Message.h
.uno/Android.android.os.g.cpp.o: include/Android.android.os.Parcel.h
.uno/Android.android.os.g.cpp.o: include/Android.android.os.Parcelable.h
.uno/Android.android.os.g.cpp.o: include/Android.android.os.Vibrator.h
.uno/Android.android.os.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
.uno/Android.android.os.g.cpp.o: include/Android.Base.JNI.h
.uno/Android.android.os.g.cpp.o: include/Android.Base.Primitives.jfieldID.h
.uno/Android.android.os.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
.uno/Android.android.os.g.cpp.o: include/Android.Base.Primitives.ujclass.h
.uno/Android.android.os.g.cpp.o: include/Android.Base.Primitives.ujobject.h
.uno/Android.android.os.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Android.android.os.g.cpp.o: include/Android.Fallbacks.Android_android_os_IBinder.h
.uno/Android.android.os.g.cpp.o: include/Android.Fallbacks.Android_android_os_IBinderDLRDeathRecipient.h
.uno/Android.android.os.g.cpp.o: include/Android.Fallbacks.Android_android_os_IInterface.h
.uno/Android.android.os.g.cpp.o: include/Android.Fallbacks.Android_android_os_Parcelable.h
.uno/Android.android.os.g.cpp.o: include/Android.Fallbacks.Android_android_os_Vibrator.h
.uno/Android.android.os.g.cpp.o: include/Android.java.io.FileDescriptor.h
.uno/Android.android.os.g.cpp.o: include/Android.java.lang.Runnable.h
.uno/Android.android.os.g.cpp.o: include/Android.java.lang.String.h
.uno/Android.android.os.g.cpp.o: include/Android.Runtime.ObjectArray-1.h
.uno/Android.android.os.g.cpp.o: include/Uno.Bool.h
.uno/Android.android.os.g.cpp.o: include/Uno.Exception.h
.uno/Android.android.os.g.cpp.o: include/Uno.Int.h
.uno/Android.android.os.g.cpp.o: include/Uno.Long.h
.uno/Android.android.os.g.cpp.o: include/Uno.Type.h
.uno/Android.android.os.g.cpp.o: jni/Android.android.os.g.cpp flags.txt | .uno
	echo Android.android.os.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Android.android.os.g.cpp.o -c jni/Android.android.os.g.cpp

.uno/Android.android.test.mock.g.cpp.o: include/Android.android.content.res.Resources.h
.uno/Android.android.test.mock.g.cpp.o: include/Android.android.test.mock.MockContext.h
.uno/Android.android.test.mock.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
.uno/Android.android.test.mock.g.cpp.o: include/Android.Base.JNI.h
.uno/Android.android.test.mock.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
.uno/Android.android.test.mock.g.cpp.o: include/Android.Base.Primitives.ujclass.h
.uno/Android.android.test.mock.g.cpp.o: include/Android.Base.Primitives.ujobject.h
.uno/Android.android.test.mock.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Android.android.test.mock.g.cpp.o: include/Android.java.lang.Object.h
.uno/Android.android.test.mock.g.cpp.o: include/Android.java.lang.String.h
.uno/Android.android.test.mock.g.cpp.o: include/Uno.Bool.h
.uno/Android.android.test.mock.g.cpp.o: include/Uno.Exception.h
.uno/Android.android.test.mock.g.cpp.o: jni/Android.android.test.mock.g.cpp flags.txt | .uno
	echo Android.android.test.mock.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Android.android.test.mock.g.cpp.o -c jni/Android.android.test.mock.g.cpp

.uno/Android.android.text.g.cpp.o: include/Android.android.graphics.Canvas.h
.uno/Android.android.text.g.cpp.o: include/Android.android.text.Editable.h
.uno/Android.android.text.g.cpp.o: include/Android.android.text.GetChars.h
.uno/Android.android.text.g.cpp.o: include/Android.android.text.InputFilter.h
.uno/Android.android.text.g.cpp.o: include/Android.android.text.Layout.h
.uno/Android.android.text.g.cpp.o: include/Android.android.text.LayoutDLRAlignment.h
.uno/Android.android.text.g.cpp.o: include/Android.android.text.Spannable.h
.uno/Android.android.text.g.cpp.o: include/Android.android.text.Spanned.h
.uno/Android.android.text.g.cpp.o: include/Android.android.text.StaticLayout.h
.uno/Android.android.text.g.cpp.o: include/Android.android.text.TextPaint.h
.uno/Android.android.text.g.cpp.o: include/Android.android.text.TextUtilsDLRTruncateAt.h
.uno/Android.android.text.g.cpp.o: include/Android.android.text.TextWatcher.h
.uno/Android.android.text.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
.uno/Android.android.text.g.cpp.o: include/Android.Base.JNI.h
.uno/Android.android.text.g.cpp.o: include/Android.Base.Primitives.jfieldID.h
.uno/Android.android.text.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
.uno/Android.android.text.g.cpp.o: include/Android.Base.Primitives.ujclass.h
.uno/Android.android.text.g.cpp.o: include/Android.Base.Primitives.ujobject.h
.uno/Android.android.text.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Android.android.text.g.cpp.o: include/Android.Fallbacks.Android_android_text_Editable.h
.uno/Android.android.text.g.cpp.o: include/Android.Fallbacks.Android_android_text_GetChars.h
.uno/Android.android.text.g.cpp.o: include/Android.Fallbacks.Android_android_text_InputFilter.h
.uno/Android.android.text.g.cpp.o: include/Android.Fallbacks.Android_android_text_Layout.h
.uno/Android.android.text.g.cpp.o: include/Android.Fallbacks.Android_android_text_Spannable.h
.uno/Android.android.text.g.cpp.o: include/Android.Fallbacks.Android_android_text_Spanned.h
.uno/Android.android.text.g.cpp.o: include/Android.Fallbacks.Android_android_text_TextWatcher.h
.uno/Android.android.text.g.cpp.o: include/Android.java.lang.CharSequence.h
.uno/Android.android.text.g.cpp.o: include/Android.java.lang.Class.h
.uno/Android.android.text.g.cpp.o: include/Android.java.lang.Object.h
.uno/Android.android.text.g.cpp.o: include/Android.Runtime.CharArray.h
.uno/Android.android.text.g.cpp.o: include/Android.Runtime.ObjectArray-1.h
.uno/Android.android.text.g.cpp.o: include/Uno.Bool.h
.uno/Android.android.text.g.cpp.o: include/Uno.Char.h
.uno/Android.android.text.g.cpp.o: include/Uno.Exception.h
.uno/Android.android.text.g.cpp.o: include/Uno.Float.h
.uno/Android.android.text.g.cpp.o: include/Uno.Int.h
.uno/Android.android.text.g.cpp.o: include/Uno.Type.h
.uno/Android.android.text.g.cpp.o: jni/Android.android.text.g.cpp flags.txt | .uno
	echo Android.android.text.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Android.android.text.g.cpp.o -c jni/Android.android.text.g.cpp

.uno/Android.android.util.g.cpp.o: include/Android.android.util.AttributeSet.h
.uno/Android.android.util.g.cpp.o: include/Android.android.util.Property.h
.uno/Android.android.util.g.cpp.o: include/Android.android.util.SparseArray.h
.uno/Android.android.util.g.cpp.o: include/Android.android.util.TypedValue.h
.uno/Android.android.util.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
.uno/Android.android.util.g.cpp.o: include/Android.Base.JNI.h
.uno/Android.android.util.g.cpp.o: include/Android.Base.Primitives.jfieldID.h
.uno/Android.android.util.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
.uno/Android.android.util.g.cpp.o: include/Android.Base.Primitives.ujclass.h
.uno/Android.android.util.g.cpp.o: include/Android.Base.Primitives.ujobject.h
.uno/Android.android.util.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Android.android.util.g.cpp.o: include/Android.Fallbacks.Android_android_util_AttributeSet.h
.uno/Android.android.util.g.cpp.o: include/Android.Fallbacks.Android_android_util_Property.h
.uno/Android.android.util.g.cpp.o: include/Android.java.lang.String.h
.uno/Android.android.util.g.cpp.o: include/Android.Runtime.ObjectArray-1.h
.uno/Android.android.util.g.cpp.o: include/Uno.Bool.h
.uno/Android.android.util.g.cpp.o: include/Uno.Exception.h
.uno/Android.android.util.g.cpp.o: include/Uno.Float.h
.uno/Android.android.util.g.cpp.o: include/Uno.Int.h
.uno/Android.android.util.g.cpp.o: jni/Android.android.util.g.cpp flags.txt | .uno
	echo Android.android.util.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Android.android.util.g.cpp.o -c jni/Android.android.util.g.cpp

.uno/Android.android.view.accessibility.g.cpp.o: include/Android.android.os.Parcel.h
.uno/Android.android.view.accessibility.g.cpp.o: include/Android.android.view.accessibility.AccessibilityEvent.h
.uno/Android.android.view.accessibility.g.cpp.o: include/Android.android.view.accessibility.AccessibilityNodeInfo.h
.uno/Android.android.view.accessibility.g.cpp.o: include/Android.android.view.accessibility.AccessibilityNodeProvider.h
.uno/Android.android.view.accessibility.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
.uno/Android.android.view.accessibility.g.cpp.o: include/Android.Base.JNI.h
.uno/Android.android.view.accessibility.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
.uno/Android.android.view.accessibility.g.cpp.o: include/Android.Base.Primitives.ujclass.h
.uno/Android.android.view.accessibility.g.cpp.o: include/Android.Base.Primitives.ujobject.h
.uno/Android.android.view.accessibility.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Android.android.view.accessibility.g.cpp.o: include/Android.Fallbacks.Android_android_view_accessibility_Accessibil-d7e100f2.h
.uno/Android.android.view.accessibility.g.cpp.o: include/Android.java.lang.Object.h
.uno/Android.android.view.accessibility.g.cpp.o: include/Android.java.lang.String.h
.uno/Android.android.view.accessibility.g.cpp.o: include/Uno.Bool.h
.uno/Android.android.view.accessibility.g.cpp.o: include/Uno.Exception.h
.uno/Android.android.view.accessibility.g.cpp.o: include/Uno.Int.h
.uno/Android.android.view.accessibility.g.cpp.o: jni/Android.android.view.accessibility.g.cpp flags.txt | .uno
	echo Android.android.view.accessibility.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Android.android.view.accessibility.g.cpp.o -c jni/Android.android.view.accessibility.g.cpp

.uno/Android.android.view.animation.g.cpp.o: include/Android.android.view.animation.Animation.h
.uno/Android.android.view.animation.g.cpp.o: include/Android.android.view.animation.AnimationDLRAnimationListener.h
.uno/Android.android.view.animation.g.cpp.o: include/Android.android.view.animation.Interpolator.h
.uno/Android.android.view.animation.g.cpp.o: include/Android.android.view.animation.LayoutAnimationController.h
.uno/Android.android.view.animation.g.cpp.o: include/Android.android.view.animation.Transformation.h
.uno/Android.android.view.animation.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
.uno/Android.android.view.animation.g.cpp.o: include/Android.Base.JNI.h
.uno/Android.android.view.animation.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
.uno/Android.android.view.animation.g.cpp.o: include/Android.Base.Primitives.ujclass.h
.uno/Android.android.view.animation.g.cpp.o: include/Android.Base.Primitives.ujobject.h
.uno/Android.android.view.animation.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Android.android.view.animation.g.cpp.o: include/Android.Fallbacks.Android_android_view_animation_Animation.h
.uno/Android.android.view.animation.g.cpp.o: include/Android.Fallbacks.Android_android_view_animation_AnimationDLRAn-50875199.h
.uno/Android.android.view.animation.g.cpp.o: include/Android.Fallbacks.Android_android_view_animation_Interpolator.h
.uno/Android.android.view.animation.g.cpp.o: include/Android.java.lang.String.h
.uno/Android.android.view.animation.g.cpp.o: include/Uno.Bool.h
.uno/Android.android.view.animation.g.cpp.o: include/Uno.Exception.h
.uno/Android.android.view.animation.g.cpp.o: jni/Android.android.view.animation.g.cpp flags.txt | .uno
	echo Android.android.view.animation.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Android.android.view.animation.g.cpp.o -c jni/Android.android.view.animation.g.cpp

.uno/Android.android.view.g.cpp.o: include/Android.android.animation.LayoutTransition.h
.uno/Android.android.view.g.cpp.o: include/Android.android.content.ClipData.h
.uno/Android.android.view.g.cpp.o: include/Android.android.content.ComponentName.h
.uno/Android.android.view.g.cpp.o: include/Android.android.content.Context.h
.uno/Android.android.view.g.cpp.o: include/Android.android.content.Intent.h
.uno/Android.android.view.g.cpp.o: include/Android.android.content.res.Configuration.h
.uno/Android.android.view.g.cpp.o: include/Android.android.content.res.Resources.h
.uno/Android.android.view.g.cpp.o: include/Android.android.content.res.TypedArray.h
.uno/Android.android.view.g.cpp.o: include/Android.android.graphics.Bitmap.h
.uno/Android.android.view.g.cpp.o: include/Android.android.graphics.Canvas.h
.uno/Android.android.view.g.cpp.o: include/Android.android.graphics.drawable.Drawable.h
.uno/Android.android.view.g.cpp.o: include/Android.android.graphics.Matrix.h
.uno/Android.android.view.g.cpp.o: include/Android.android.graphics.Paint.h
.uno/Android.android.view.g.cpp.o: include/Android.android.graphics.Point.h
.uno/Android.android.view.g.cpp.o: include/Android.android.graphics.Rect.h
.uno/Android.android.view.g.cpp.o: include/Android.android.graphics.Region.h
.uno/Android.android.view.g.cpp.o: include/Android.android.graphics.SurfaceTexture.h
.uno/Android.android.view.g.cpp.o: include/Android.android.os.Bundle.h
.uno/Android.android.view.g.cpp.o: include/Android.android.os.Handler.h
.uno/Android.android.view.g.cpp.o: include/Android.android.os.IBinder.h
.uno/Android.android.view.g.cpp.o: include/Android.android.os.Parcel.h
.uno/Android.android.view.g.cpp.o: include/Android.android.os.Parcelable.h
.uno/Android.android.view.g.cpp.o: include/Android.android.util.AttributeSet.h
.uno/Android.android.view.g.cpp.o: include/Android.android.util.Property.h
.uno/Android.android.view.g.cpp.o: include/Android.android.util.SparseArray.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.accessibility.AccessibilityEvent.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.accessibility.AccessibilityNodeInfo.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.accessibility.AccessibilityNodeProvider.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.ActionMode.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.ActionModeDLRCallback.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.ActionProvider.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.animation.Animation.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.animation.AnimationDLRAnimationListener.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.animation.LayoutAnimationController.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.animation.Transformation.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.Choreographer.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.ChoreographerDLRFrameCallback.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.ContextMenu.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.ContextMenuDLRContextMenuInfo.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.ContextThemeWrapper.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.Display.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.DragEvent.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.Gravity.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.InputEvent.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.inputmethod.EditorInfo.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.inputmethod.InputConnection.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.KeyEvent.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.KeyEventDLRDispatcherState.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.Menu.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.MenuItem.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.MenuItemDLROnActionExpandListener.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.MenuItemDLROnMenuItemClickListener.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.MotionEvent.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.SubMenu.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.Surface.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.SurfaceHolder.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.SurfaceHolderDLRCallback.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.SurfaceHolderDLRCallback2.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.SurfaceView.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.TextureView.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.TextureViewDLRSurfaceTextureListener.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.TouchDelegate.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.View.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.ViewDLRAccessibilityDelegate.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.ViewDLRDragShadowBuilder.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.ViewDLRMeasureSpec.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.ViewDLROnAttachStateChangeListener.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.ViewDLROnClickListener.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.ViewDLROnCreateContextMenuListener.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.ViewDLROnDragListener.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.ViewDLROnFocusChangeListener.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.ViewDLROnGenericMotionListener.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.ViewDLROnHoverListener.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.ViewDLROnKeyListener.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.ViewDLROnLayoutChangeListener.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.ViewDLROnLongClickListener.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.ViewDLROnSystemUiVisibilityChangeListener.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.ViewDLROnTouchListener.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.ViewGroup.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.ViewGroupDLRLayoutParams.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.ViewGroupDLRMarginLayoutParams.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.ViewGroupDLROnHierarchyChangeListener.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.ViewGroupOverlay.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.ViewOverlay.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.ViewParent.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.ViewPropertyAnimator.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.ViewTreeObserver.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.WindowId.h
.uno/Android.android.view.g.cpp.o: include/Android.android.view.WindowManagerDLRLayoutParams.h
.uno/Android.android.view.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
.uno/Android.android.view.g.cpp.o: include/Android.Base.JNI.h
.uno/Android.android.view.g.cpp.o: include/Android.Base.Primitives.jfieldID.h
.uno/Android.android.view.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
.uno/Android.android.view.g.cpp.o: include/Android.Base.Primitives.ujclass.h
.uno/Android.android.view.g.cpp.o: include/Android.Base.Primitives.ujobject.h
.uno/Android.android.view.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_content_Context.h
.uno/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_graphics_drawable_Drawable.h
.uno/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_os_IBinder.h
.uno/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_os_Parcelable.h
.uno/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_util_Property.h
.uno/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_accessibility_Accessibil-d7e100f2.h
.uno/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_ActionMode.h
.uno/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_ActionModeDLRCallback.h
.uno/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_ActionProvider.h
.uno/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_animation_Animation.h
.uno/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_animation_AnimationDLRAn-50875199.h
.uno/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_ChoreographerDLRFrameCallback.h
.uno/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_ContextMenu.h
.uno/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_ContextMenuDLRContextMenuInfo.h
.uno/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_InputEvent.h
.uno/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_inputmethod_InputConnection.h
.uno/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_Menu.h
.uno/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_MenuItem.h
.uno/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_MenuItemDLROnActionExpandListener.h
.uno/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_MenuItemDLROnMenuItemCli-b952820b.h
.uno/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_SubMenu.h
.uno/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_SurfaceHolder.h
.uno/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_SurfaceHolderDLRCallback.h
.uno/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_SurfaceHolderDLRCallback2.h
.uno/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_TextureViewDLRSurfaceTex-57881719.h
.uno/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnAttachStateChan-cad4f1be.h
.uno/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnClickListener.h
.uno/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnCreateContextMe-448f6a4b.h
.uno/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnDragListener.h
.uno/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnFocusChangeListener.h
.uno/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnGenericMotionListener.h
.uno/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnHoverListener.h
.uno/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnKeyListener.h
.uno/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnLayoutChangeListener.h
.uno/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnLongClickListener.h
.uno/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnSystemUiVisibil-1e6ae627.h
.uno/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnTouchListener.h
.uno/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewGroup.h
.uno/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewGroupDLROnHierarchyC-cdf1f397.h
.uno/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewParent.h
.uno/Android.android.view.g.cpp.o: include/Android.Fallbacks.Android_java_lang_CharSequence.h
.uno/Android.android.view.g.cpp.o: include/Android.java.lang.CharSequence.h
.uno/Android.android.view.g.cpp.o: include/Android.java.lang.Object.h
.uno/Android.android.view.g.cpp.o: include/Android.java.lang.Runnable.h
.uno/Android.android.view.g.cpp.o: include/Android.java.lang.String.h
.uno/Android.android.view.g.cpp.o: include/Android.java.util.ArrayList.h
.uno/Android.android.view.g.cpp.o: include/Android.Runtime.IntArray.h
.uno/Android.android.view.g.cpp.o: include/Android.Runtime.ObjectArray-1.h
.uno/Android.android.view.g.cpp.o: include/Uno.Bool.h
.uno/Android.android.view.g.cpp.o: include/Uno.Char.h
.uno/Android.android.view.g.cpp.o: include/Uno.Exception.h
.uno/Android.android.view.g.cpp.o: include/Uno.Float.h
.uno/Android.android.view.g.cpp.o: include/Uno.Int.h
.uno/Android.android.view.g.cpp.o: include/Uno.Long.h
.uno/Android.android.view.g.cpp.o: include/Uno.Type.h
.uno/Android.android.view.g.cpp.o: jni/Android.android.view.g.cpp flags.txt | .uno
	echo Android.android.view.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Android.android.view.g.cpp.o -c jni/Android.android.view.g.cpp

.uno/Android.android.view.inputmethod.g.cpp.o: include/Android.android.os.Bundle.h
.uno/Android.android.view.inputmethod.g.cpp.o: include/Android.android.os.IBinder.h
.uno/Android.android.view.inputmethod.g.cpp.o: include/Android.android.os.Parcel.h
.uno/Android.android.view.inputmethod.g.cpp.o: include/Android.android.view.inputmethod.CompletionInfo.h
.uno/Android.android.view.inputmethod.g.cpp.o: include/Android.android.view.inputmethod.CorrectionInfo.h
.uno/Android.android.view.inputmethod.g.cpp.o: include/Android.android.view.inputmethod.EditorInfo.h
.uno/Android.android.view.inputmethod.g.cpp.o: include/Android.android.view.inputmethod.ExtractedText.h
.uno/Android.android.view.inputmethod.g.cpp.o: include/Android.android.view.inputmethod.ExtractedTextRequest.h
.uno/Android.android.view.inputmethod.g.cpp.o: include/Android.android.view.inputmethod.InputConnection.h
.uno/Android.android.view.inputmethod.g.cpp.o: include/Android.android.view.inputmethod.InputMethodManager.h
.uno/Android.android.view.inputmethod.g.cpp.o: include/Android.android.view.KeyEvent.h
.uno/Android.android.view.inputmethod.g.cpp.o: include/Android.android.view.View.h
.uno/Android.android.view.inputmethod.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
.uno/Android.android.view.inputmethod.g.cpp.o: include/Android.Base.JNI.h
.uno/Android.android.view.inputmethod.g.cpp.o: include/Android.Base.Primitives.jfieldID.h
.uno/Android.android.view.inputmethod.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
.uno/Android.android.view.inputmethod.g.cpp.o: include/Android.Base.Primitives.ujclass.h
.uno/Android.android.view.inputmethod.g.cpp.o: include/Android.Base.Primitives.ujobject.h
.uno/Android.android.view.inputmethod.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Android.android.view.inputmethod.g.cpp.o: include/Android.Fallbacks.Android_android_view_inputmethod_InputConnection.h
.uno/Android.android.view.inputmethod.g.cpp.o: include/Android.java.lang.CharSequence.h
.uno/Android.android.view.inputmethod.g.cpp.o: include/Android.java.lang.String.h
.uno/Android.android.view.inputmethod.g.cpp.o: include/Uno.Bool.h
.uno/Android.android.view.inputmethod.g.cpp.o: include/Uno.Exception.h
.uno/Android.android.view.inputmethod.g.cpp.o: include/Uno.Int.h
.uno/Android.android.view.inputmethod.g.cpp.o: jni/Android.android.view.inputmethod.g.cpp flags.txt | .uno
	echo Android.android.view.inputmethod.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Android.android.view.inputmethod.g.cpp.o -c jni/Android.android.view.inputmethod.g.cpp

.uno/Android.android.webkit.g.cpp.o: include/Android.android.content.Context.h
.uno/Android.android.webkit.g.cpp.o: include/Android.android.graphics.Bitmap.h
.uno/Android.android.webkit.g.cpp.o: include/Android.android.graphics.Paint.h
.uno/Android.android.webkit.g.cpp.o: include/Android.android.graphics.Rect.h
.uno/Android.android.webkit.g.cpp.o: include/Android.android.net.http.SslError.h
.uno/Android.android.webkit.g.cpp.o: include/Android.android.os.Bundle.h
.uno/Android.android.webkit.g.cpp.o: include/Android.android.os.Message.h
.uno/Android.android.webkit.g.cpp.o: include/Android.android.view.accessibility.AccessibilityEvent.h
.uno/Android.android.webkit.g.cpp.o: include/Android.android.view.accessibility.AccessibilityNodeInfo.h
.uno/Android.android.webkit.g.cpp.o: include/Android.android.view.accessibility.AccessibilityNodeProvider.h
.uno/Android.android.webkit.g.cpp.o: include/Android.android.view.inputmethod.EditorInfo.h
.uno/Android.android.webkit.g.cpp.o: include/Android.android.view.inputmethod.InputConnection.h
.uno/Android.android.webkit.g.cpp.o: include/Android.android.view.KeyEvent.h
.uno/Android.android.webkit.g.cpp.o: include/Android.android.view.MotionEvent.h
.uno/Android.android.webkit.g.cpp.o: include/Android.android.view.View.h
.uno/Android.android.webkit.g.cpp.o: include/Android.android.view.ViewGroupDLRLayoutParams.h
.uno/Android.android.webkit.g.cpp.o: include/Android.android.webkit.ConsoleMessage.h
.uno/Android.android.webkit.g.cpp.o: include/Android.android.webkit.GeolocationPermissionsDLRCallback.h
.uno/Android.android.webkit.g.cpp.o: include/Android.android.webkit.HttpAuthHandler.h
.uno/Android.android.webkit.g.cpp.o: include/Android.android.webkit.JsPromptResult.h
.uno/Android.android.webkit.g.cpp.o: include/Android.android.webkit.JsResult.h
.uno/Android.android.webkit.g.cpp.o: include/Android.android.webkit.SslErrorHandler.h
.uno/Android.android.webkit.g.cpp.o: include/Android.android.webkit.ValueCallback.h
.uno/Android.android.webkit.g.cpp.o: include/Android.android.webkit.WebChromeClient.h
.uno/Android.android.webkit.g.cpp.o: include/Android.android.webkit.WebChromeClientDLRCustomViewCallback.h
.uno/Android.android.webkit.g.cpp.o: include/Android.android.webkit.WebResourceResponse.h
.uno/Android.android.webkit.g.cpp.o: include/Android.android.webkit.WebSettings.h
.uno/Android.android.webkit.g.cpp.o: include/Android.android.webkit.WebStorageDLRQuotaUpdater.h
.uno/Android.android.webkit.g.cpp.o: include/Android.android.webkit.WebView.h
.uno/Android.android.webkit.g.cpp.o: include/Android.android.webkit.WebViewClient.h
.uno/Android.android.webkit.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
.uno/Android.android.webkit.g.cpp.o: include/Android.Base.JNI.h
.uno/Android.android.webkit.g.cpp.o: include/Android.Base.Primitives.jfieldID.h
.uno/Android.android.webkit.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
.uno/Android.android.webkit.g.cpp.o: include/Android.Base.Primitives.ujclass.h
.uno/Android.android.webkit.g.cpp.o: include/Android.Base.Primitives.ujobject.h
.uno/Android.android.webkit.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Android.android.webkit.g.cpp.o: include/Android.Fallbacks.Android_android_view_accessibility_Accessibil-d7e100f2.h
.uno/Android.android.webkit.g.cpp.o: include/Android.Fallbacks.Android_android_view_inputmethod_InputConnection.h
.uno/Android.android.webkit.g.cpp.o: include/Android.Fallbacks.Android_android_webkit_GeolocationPermissions-b666dc8a.h
.uno/Android.android.webkit.g.cpp.o: include/Android.Fallbacks.Android_android_webkit_ValueCallback.h
.uno/Android.android.webkit.g.cpp.o: include/Android.Fallbacks.Android_android_webkit_WebChromeClientDLRCust-ce52e805.h
.uno/Android.android.webkit.g.cpp.o: include/Android.Fallbacks.Android_android_webkit_WebSettings.h
.uno/Android.android.webkit.g.cpp.o: include/Android.Fallbacks.Android_android_webkit_WebStorageDLRQuotaUpdater.h
.uno/Android.android.webkit.g.cpp.o: include/Android.java.lang.Object.h
.uno/Android.android.webkit.g.cpp.o: include/Android.java.lang.String.h
.uno/Android.android.webkit.g.cpp.o: include/Uno.Bool.h
.uno/Android.android.webkit.g.cpp.o: include/Uno.Exception.h
.uno/Android.android.webkit.g.cpp.o: include/Uno.Float.h
.uno/Android.android.webkit.g.cpp.o: include/Uno.Int.h
.uno/Android.android.webkit.g.cpp.o: include/Uno.Long.h
.uno/Android.android.webkit.g.cpp.o: include/Uno.Type.h
.uno/Android.android.webkit.g.cpp.o: jni/Android.android.webkit.g.cpp flags.txt | .uno
	echo Android.android.webkit.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Android.android.webkit.g.cpp.o -c jni/Android.android.webkit.g.cpp

.uno/Android.android.widget.g.cpp.o: include/Android.android.content.Context.h
.uno/Android.android.widget.g.cpp.o: include/Android.android.content.res.ColorStateList.h
.uno/Android.android.widget.g.cpp.o: include/Android.android.graphics.Bitmap.h
.uno/Android.android.widget.g.cpp.o: include/Android.android.graphics.Canvas.h
.uno/Android.android.widget.g.cpp.o: include/Android.android.graphics.drawable.Drawable.h
.uno/Android.android.widget.g.cpp.o: include/Android.android.graphics.Matrix.h
.uno/Android.android.widget.g.cpp.o: include/Android.android.graphics.Rect.h
.uno/Android.android.widget.g.cpp.o: include/Android.android.graphics.Region.h
.uno/Android.android.widget.g.cpp.o: include/Android.android.graphics.Typeface.h
.uno/Android.android.widget.g.cpp.o: include/Android.android.os.Bundle.h
.uno/Android.android.widget.g.cpp.o: include/Android.android.os.Parcelable.h
.uno/Android.android.widget.g.cpp.o: include/Android.android.text.TextUtilsDLRTruncateAt.h
.uno/Android.android.widget.g.cpp.o: include/Android.android.text.TextWatcher.h
.uno/Android.android.widget.g.cpp.o: include/Android.android.util.AttributeSet.h
.uno/Android.android.widget.g.cpp.o: include/Android.android.view.accessibility.AccessibilityEvent.h
.uno/Android.android.widget.g.cpp.o: include/Android.android.view.accessibility.AccessibilityNodeInfo.h
.uno/Android.android.widget.g.cpp.o: include/Android.android.view.animation.Interpolator.h
.uno/Android.android.widget.g.cpp.o: include/Android.android.view.DragEvent.h
.uno/Android.android.widget.g.cpp.o: include/Android.android.view.inputmethod.EditorInfo.h
.uno/Android.android.widget.g.cpp.o: include/Android.android.view.inputmethod.InputConnection.h
.uno/Android.android.widget.g.cpp.o: include/Android.android.view.KeyEvent.h
.uno/Android.android.widget.g.cpp.o: include/Android.android.view.MotionEvent.h
.uno/Android.android.widget.g.cpp.o: include/Android.android.view.View.h
.uno/Android.android.widget.g.cpp.o: include/Android.android.view.ViewGroupDLRLayoutParams.h
.uno/Android.android.widget.g.cpp.o: include/Android.android.widget.AbsoluteLayout.h
.uno/Android.android.widget.g.cpp.o: include/Android.android.widget.AbsSeekBar.h
.uno/Android.android.widget.g.cpp.o: include/Android.android.widget.Button.h
.uno/Android.android.widget.g.cpp.o: include/Android.android.widget.CompoundButton.h
.uno/Android.android.widget.g.cpp.o: include/Android.android.widget.CompoundButtonDLROnCheckedChangeListener.h
.uno/Android.android.widget.g.cpp.o: include/Android.android.widget.EditText.h
.uno/Android.android.widget.g.cpp.o: include/Android.android.widget.FrameLayout.h
.uno/Android.android.widget.g.cpp.o: include/Android.android.widget.FrameLayoutDLRLayoutParams.h
.uno/Android.android.widget.g.cpp.o: include/Android.android.widget.HorizontalScrollView.h
.uno/Android.android.widget.g.cpp.o: include/Android.android.widget.ImageView.h
.uno/Android.android.widget.g.cpp.o: include/Android.android.widget.ImageViewDLRScaleType.h
.uno/Android.android.widget.g.cpp.o: include/Android.android.widget.ProgressBar.h
.uno/Android.android.widget.g.cpp.o: include/Android.android.widget.RelativeLayout.h
.uno/Android.android.widget.g.cpp.o: include/Android.android.widget.RelativeLayoutDLRLayoutParams.h
.uno/Android.android.widget.g.cpp.o: include/Android.android.widget.ScrollView.h
.uno/Android.android.widget.g.cpp.o: include/Android.android.widget.SeekBar.h
.uno/Android.android.widget.g.cpp.o: include/Android.android.widget.SeekBarDLROnSeekBarChangeListener.h
.uno/Android.android.widget.g.cpp.o: include/Android.android.widget.Switch.h
.uno/Android.android.widget.g.cpp.o: include/Android.android.widget.TextView.h
.uno/Android.android.widget.g.cpp.o: include/Android.android.widget.TextViewDLROnEditorActionListener.h
.uno/Android.android.widget.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
.uno/Android.android.widget.g.cpp.o: include/Android.Base.JNI.h
.uno/Android.android.widget.g.cpp.o: include/Android.Base.Primitives.jfieldID.h
.uno/Android.android.widget.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
.uno/Android.android.widget.g.cpp.o: include/Android.Base.Primitives.ujclass.h
.uno/Android.android.widget.g.cpp.o: include/Android.Base.Primitives.ujobject.h
.uno/Android.android.widget.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Android.android.widget.g.cpp.o: include/Android.Fallbacks.Android_android_graphics_drawable_Drawable.h
.uno/Android.android.widget.g.cpp.o: include/Android.Fallbacks.Android_android_os_Parcelable.h
.uno/Android.android.widget.g.cpp.o: include/Android.Fallbacks.Android_android_view_animation_Interpolator.h
.uno/Android.android.widget.g.cpp.o: include/Android.Fallbacks.Android_android_view_inputmethod_InputConnection.h
.uno/Android.android.widget.g.cpp.o: include/Android.Fallbacks.Android_android_widget_AbsSeekBar.h
.uno/Android.android.widget.g.cpp.o: include/Android.Fallbacks.Android_android_widget_CompoundButton.h
.uno/Android.android.widget.g.cpp.o: include/Android.Fallbacks.Android_android_widget_CompoundButtonDLROnChe-91091c48.h
.uno/Android.android.widget.g.cpp.o: include/Android.Fallbacks.Android_android_widget_SeekBarDLROnSeekBarCha-e452c5ca.h
.uno/Android.android.widget.g.cpp.o: include/Android.Fallbacks.Android_android_widget_TextViewDLROnEditorAct-1b5558e6.h
.uno/Android.android.widget.g.cpp.o: include/Android.java.lang.CharSequence.h
.uno/Android.android.widget.g.cpp.o: include/Android.java.util.ArrayList.h
.uno/Android.android.widget.g.cpp.o: include/Uno.Bool.h
.uno/Android.android.widget.g.cpp.o: include/Uno.Exception.h
.uno/Android.android.widget.g.cpp.o: include/Uno.Float.h
.uno/Android.android.widget.g.cpp.o: include/Uno.Int.h
.uno/Android.android.widget.g.cpp.o: include/Uno.Type.h
.uno/Android.android.widget.g.cpp.o: jni/Android.android.widget.g.cpp flags.txt | .uno
	echo Android.android.widget.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Android.android.widget.g.cpp.o -c jni/Android.android.widget.g.cpp

.uno/Android.Base.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
.uno/Android.Base.g.cpp.o: include/Android.Base.JNI.h
.uno/Android.Base.g.cpp.o: include/Android.Base.JNI.RefType.h
.uno/Android.Base.g.cpp.o: include/Android.Base.Permissions.h
.uno/Android.Base.g.cpp.o: include/Android.Base.PlatPermission.h
.uno/Android.Base.g.cpp.o: include/Android.Base.Primitives.ConstCharPtr.h
.uno/Android.Base.g.cpp.o: include/Android.Base.Primitives.JavaVMPtr.h
.uno/Android.Base.g.cpp.o: include/Android.Base.Primitives.jfieldID.h
.uno/Android.Base.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
.uno/Android.Base.g.cpp.o: include/Android.Base.Primitives.JNIEnvPtr.h
.uno/Android.Base.g.cpp.o: include/Android.Base.Primitives.ujclass.h
.uno/Android.Base.g.cpp.o: include/Android.Base.Primitives.ujlong.h
.uno/Android.Base.g.cpp.o: include/Android.Base.Primitives.ujobject.h
.uno/Android.Base.g.cpp.o: include/Android.Base.Primitives.ujvalue.h
.uno/Android.Base.g.cpp.o: include/Android.Base.Types.String.h
.uno/Android.Base.g.cpp.o: include/Android.Base.Versions.h
.uno/Android.Base.g.cpp.o: include/Android.Base.Wrappers.IJWrapper.h
.uno/Android.Base.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Android.Base.g.cpp.o: include/Uno.Bool.h
.uno/Android.Base.g.cpp.o: include/Uno.Char.h
.uno/Android.Base.g.cpp.o: include/Uno.Double.h
.uno/Android.Base.g.cpp.o: include/Uno.Exception.h
.uno/Android.Base.g.cpp.o: include/Uno.Float.h
.uno/Android.Base.g.cpp.o: include/Uno.Int.h
.uno/Android.Base.g.cpp.o: include/Uno.Long.h
.uno/Android.Base.g.cpp.o: include/Uno.SByte.h
.uno/Android.Base.g.cpp.o: include/Uno.Short.h
.uno/Android.Base.g.cpp.o: include/Uno.String.h
.uno/Android.Base.g.cpp.o: include/Uno.Type.h
.uno/Android.Base.g.cpp.o: jni/Android.Base.g.cpp flags.txt | .uno
	echo Android.Base.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Android.Base.g.cpp.o -c jni/Android.Base.g.cpp

.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.JNI.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.ConstCharPtr.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.JavaVMPtr.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.jfieldID.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.JNIEnvPtr.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.JNINativeMethod.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.jweak.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.ujboolean.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.ujbyte.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.ujchar.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.ujclass.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.ujdouble.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.ujfloat.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.ujint.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.ujlong.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.ujobject.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.ujshort.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.ujstring.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.ujvalue.h
.uno/Android.Base.Primitives.g.cpp.o: include/Android.Base.Primitives.uweakptr.h
.uno/Android.Base.Primitives.g.cpp.o: include/Uno.Bool.h
.uno/Android.Base.Primitives.g.cpp.o: include/Uno.Long.h
.uno/Android.Base.Primitives.g.cpp.o: jni/Android.Base.Primitives.g.cpp flags.txt | .uno
	echo Android.Base.Primitives.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Android.Base.Primitives.g.cpp.o -c jni/Android.Base.Primitives.g.cpp

.uno/Android.Base.Types.g.cpp.o: include/Android.Base.JNI.h
.uno/Android.Base.Types.g.cpp.o: include/Android.Base.Primitives.ConstCharPtr.h
.uno/Android.Base.Types.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
.uno/Android.Base.Types.g.cpp.o: include/Android.Base.Primitives.JNIEnvPtr.h
.uno/Android.Base.Types.g.cpp.o: include/Android.Base.Primitives.ujclass.h
.uno/Android.Base.Types.g.cpp.o: include/Android.Base.Primitives.ujobject.h
.uno/Android.Base.Types.g.cpp.o: include/Android.Base.Types.Arrays.h
.uno/Android.Base.Types.g.cpp.o: include/Android.Base.Types.Bridge.h
.uno/Android.Base.Types.g.cpp.o: include/Android.Base.Types.ByteBuffer.h
.uno/Android.Base.Types.g.cpp.o: include/Android.Base.Types.String.h
.uno/Android.Base.Types.g.cpp.o: include/Android.Base.Wrappers.IJWrapper.h
.uno/Android.Base.Types.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Android.Base.Types.g.cpp.o: include/Uno.Bool.h
.uno/Android.Base.Types.g.cpp.o: include/Uno.Byte.h
.uno/Android.Base.Types.g.cpp.o: include/Uno.Exception.h
.uno/Android.Base.Types.g.cpp.o: include/Uno.Float.h
.uno/Android.Base.Types.g.cpp.o: include/Uno.Int.h
.uno/Android.Base.Types.g.cpp.o: include/Uno.Long.h
.uno/Android.Base.Types.g.cpp.o: include/Uno.String.h
.uno/Android.Base.Types.g.cpp.o: include/Uno.Type.h
.uno/Android.Base.Types.g.cpp.o: jni/Android.Base.Types.g.cpp flags.txt | .uno
	echo Android.Base.Types.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Android.Base.Types.g.cpp.o -c jni/Android.Base.Types.g.cpp

.uno/Android.Base.Wrappers.g.cpp.o: include/Android.Base.JNI.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Android.Base.JNI.RefType.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Android.Base.Primitives.ujclass.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Android.Base.Primitives.ujobject.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Android.Base.Primitives.uweakptr.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Android.Base.Types.Bridge.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Android.Base.Wrappers.BindingSubclassAttribute.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Android.Base.Wrappers.IJWrapper.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Uno.Bool.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Uno.Int.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Uno.Object.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Uno.String.h
.uno/Android.Base.Wrappers.g.cpp.o: include/Uno.Type.h
.uno/Android.Base.Wrappers.g.cpp.o: jni/Android.Base.Wrappers.g.cpp flags.txt | .uno
	echo Android.Base.Wrappers.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Android.Base.Wrappers.g.cpp.o -c jni/Android.Base.Wrappers.g.cpp

.uno/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
.uno/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Android.Base.JNI.h
.uno/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
.uno/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Android.Base.Primitives.ujclass.h
.uno/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Android.Base.Primitives.ujobject.h
.uno/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Android.com.fuse.ExperimentalHttp.HttpRequest.h
.uno/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Uno.Bool.h
.uno/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Uno.Exception.h
.uno/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Uno.Int.h
.uno/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Uno.Long.h
.uno/Android.com.fuse.ExperimentalHttp.g.cpp.o: include/Uno.Type.h
.uno/Android.com.fuse.ExperimentalHttp.g.cpp.o: jni/Android.com.fuse.ExperimentalHttp.g.cpp flags.txt | .uno
	echo Android.com.fuse.ExperimentalHttp.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Android.com.fuse.ExperimentalHttp.g.cpp.o -c jni/Android.com.fuse.ExperimentalHttp.g.cpp

.uno/Android.com.fuse.Native.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
.uno/Android.com.fuse.Native.g.cpp.o: include/Android.Base.JNI.h
.uno/Android.com.fuse.Native.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
.uno/Android.com.fuse.Native.g.cpp.o: include/Android.Base.Primitives.ujclass.h
.uno/Android.com.fuse.Native.g.cpp.o: include/Android.Base.Primitives.ujobject.h
.uno/Android.com.fuse.Native.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Android.com.fuse.Native.g.cpp.o: include/Android.com.fuse.Native.Camera.h
.uno/Android.com.fuse.Native.g.cpp.o: include/Android.com.fuse.Native.CameraTask.h
.uno/Android.com.fuse.Native.g.cpp.o: include/Uno.Bool.h
.uno/Android.com.fuse.Native.g.cpp.o: include/Uno.Exception.h
.uno/Android.com.fuse.Native.g.cpp.o: include/Uno.Int.h
.uno/Android.com.fuse.Native.g.cpp.o: include/Uno.Type.h
.uno/Android.com.fuse.Native.g.cpp.o: jni/Android.com.fuse.Native.g.cpp flags.txt | .uno
	echo Android.com.fuse.Native.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Android.com.fuse.Native.g.cpp.o -c jni/Android.com.fuse.Native.g.cpp

.uno/Android.Fallbacks.g.cpp.o: include/Android.android.animation.TimeAnimator.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.android.content.ComponentName.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.android.content.Intent.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.android.content.res.Resources.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.android.graphics.Canvas.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.android.graphics.drawable.Drawable.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.android.graphics.Point.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.android.graphics.Rect.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.android.graphics.Shader.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.android.graphics.SurfaceTexture.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.android.location.Location.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.android.media.MediaPlayer.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.android.os.Bundle.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.android.os.IBinder.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.android.os.IBinderDLRDeathRecipient.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.android.os.IInterface.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.android.os.Parcel.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.android.text.Editable.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.android.text.InputFilter.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.android.text.Spanned.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.android.view.accessibility.AccessibilityEvent.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.android.view.ActionMode.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.android.view.ActionModeDLRCallback.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.android.view.ActionProvider.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.android.view.animation.Animation.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.android.view.ContextMenu.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.android.view.ContextMenuDLRContextMenuInfo.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.android.view.DragEvent.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.android.view.inputmethod.CompletionInfo.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.android.view.inputmethod.CorrectionInfo.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.android.view.inputmethod.ExtractedText.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.android.view.inputmethod.ExtractedTextRequest.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.android.view.KeyEvent.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.android.view.Menu.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.android.view.MenuItem.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.android.view.MenuItemDLROnActionExpandListener.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.android.view.MenuItemDLROnMenuItemClickListener.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.android.view.MotionEvent.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.android.view.SubMenu.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.android.view.Surface.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.android.view.SurfaceHolder.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.android.view.SurfaceHolderDLRCallback.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.android.view.View.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.android.view.ViewParent.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.android.widget.CompoundButton.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.android.widget.SeekBar.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.android.widget.TextView.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Base.JNI.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Base.Primitives.ujobject.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_animation_Animator.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_animation_TimeAnimatorDLRTimeListener.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_animation_TimeInterpolator.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_content_Context.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_graphics_drawable_Drawable.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_graphics_drawable_ShapeDrawab-1918c93c.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_graphics_drawable_shapes_Shape.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_graphics_SurfaceTextureDLROnF-45d51137.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_location_LocationListener.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_media_AudioManagerDLROnAudioF-b4dcb473.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnBufferi-a11a3e5b.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnComplet-64af01f3.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnErrorListener.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnPreparedListener.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnSeekCom-79a19ba7.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnVideoSi-169f5c77.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_net_Uri.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_os_IBinder.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_os_IBinderDLRDeathRecipient.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_os_IInterface.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_os_Parcelable.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_os_Vibrator.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_text_Editable.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_text_GetChars.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_text_InputFilter.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_text_Layout.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_text_Spannable.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_text_Spanned.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_text_TextWatcher.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_util_AttributeSet.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_util_Property.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_accessibility_Accessibil-d7e100f2.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_ActionMode.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_ActionModeDLRCallback.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_ActionProvider.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_animation_Animation.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_animation_AnimationDLRAn-50875199.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_animation_Interpolator.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_ChoreographerDLRFrameCallback.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_ContextMenu.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_ContextMenuDLRContextMenuInfo.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_InputEvent.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_inputmethod_InputConnection.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_Menu.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_MenuItem.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_MenuItemDLROnActionExpandListener.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_MenuItemDLROnMenuItemCli-b952820b.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_SubMenu.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_SurfaceHolder.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_SurfaceHolderDLRCallback.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_SurfaceHolderDLRCallback2.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_TextureViewDLRSurfaceTex-57881719.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnAttachStateChan-cad4f1be.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnClickListener.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnCreateContextMe-448f6a4b.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnDragListener.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnFocusChangeListener.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnGenericMotionListener.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnHoverListener.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnKeyListener.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnLayoutChangeListener.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnLongClickListener.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnSystemUiVisibil-1e6ae627.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnTouchListener.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewGroup.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewGroupDLROnHierarchyC-cdf1f397.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_view_ViewParent.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_webkit_GeolocationPermissions-b666dc8a.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_webkit_ValueCallback.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_webkit_WebChromeClientDLRCust-ce52e805.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_webkit_WebSettings.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_webkit_WebStorageDLRQuotaUpdater.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_widget_AbsSeekBar.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_widget_CompoundButton.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_widget_CompoundButtonDLROnChe-91091c48.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_widget_SeekBarDLROnSeekBarCha-e452c5ca.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_android_widget_TextViewDLROnEditorAct-1b5558e6.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_java_io_InputStream.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_java_lang_CharSequence.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_java_lang_Iterable.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_java_lang_Runnable.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_java_util_AbstractCollection.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_java_util_AbstractList.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_java_util_Collection.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_java_util_Iterator.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_java_util_List.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_java_util_ListIterator.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Fallbacks.Android_java_util_Observer.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.java.io.FileDescriptor.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.java.lang.CharSequence.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.java.lang.Class.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.java.lang.Object.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.java.lang.String.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.java.util.Collection.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.java.util.Iterator.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.java.util.List.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.java.util.ListIterator.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.java.util.Observable.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Runtime.CharArray.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Runtime.IntArray.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Runtime.JEnumerator.h
.uno/Android.Fallbacks.g.cpp.o: include/Android.Runtime.ObjectArray-1.h
.uno/Android.Fallbacks.g.cpp.o: include/Uno.Bool.h
.uno/Android.Fallbacks.g.cpp.o: include/Uno.Char.h
.uno/Android.Fallbacks.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Android.Fallbacks.g.cpp.o: include/Uno.Exception.h
.uno/Android.Fallbacks.g.cpp.o: include/Uno.Float.h
.uno/Android.Fallbacks.g.cpp.o: include/Uno.Int.h
.uno/Android.Fallbacks.g.cpp.o: include/Uno.Long.h
.uno/Android.Fallbacks.g.cpp.o: jni/Android.Fallbacks.g.cpp flags.txt | .uno
	echo Android.Fallbacks.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Android.Fallbacks.g.cpp.o -c jni/Android.Fallbacks.g.cpp

.uno/Android.g.cpp.o: include/Android.Bootstrapper.h
.uno/Android.g.cpp.o: include/BootstrapperImpl_Android.h
.uno/Android.g.cpp.o: jni/Android.g.cpp flags.txt | .uno
	echo Android.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Android.g.cpp.o -c jni/Android.g.cpp

.uno/Android.java.io.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
.uno/Android.java.io.g.cpp.o: include/Android.Base.JNI.h
.uno/Android.java.io.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
.uno/Android.java.io.g.cpp.o: include/Android.Base.Primitives.ujclass.h
.uno/Android.java.io.g.cpp.o: include/Android.Base.Primitives.ujobject.h
.uno/Android.java.io.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Android.java.io.g.cpp.o: include/Android.Fallbacks.Android_java_io_InputStream.h
.uno/Android.java.io.g.cpp.o: include/Android.java.io.FileDescriptor.h
.uno/Android.java.io.g.cpp.o: include/Android.java.io.InputStream.h
.uno/Android.java.io.g.cpp.o: include/Android.java.lang.String.h
.uno/Android.java.io.g.cpp.o: include/Uno.Bool.h
.uno/Android.java.io.g.cpp.o: include/Uno.Exception.h
.uno/Android.java.io.g.cpp.o: jni/Android.java.io.g.cpp flags.txt | .uno
	echo Android.java.io.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Android.java.io.g.cpp.o -c jni/Android.java.io.g.cpp

.uno/Android.java.lang.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
.uno/Android.java.lang.g.cpp.o: include/Android.Base.JNI.h
.uno/Android.java.lang.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
.uno/Android.java.lang.g.cpp.o: include/Android.Base.Primitives.JNIEnvPtr.h
.uno/Android.java.lang.g.cpp.o: include/Android.Base.Primitives.ujclass.h
.uno/Android.java.lang.g.cpp.o: include/Android.Base.Primitives.ujobject.h
.uno/Android.java.lang.g.cpp.o: include/Android.Base.Types.String.h
.uno/Android.java.lang.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Android.java.lang.g.cpp.o: include/Android.Fallbacks.Android_java_lang_CharSequence.h
.uno/Android.java.lang.g.cpp.o: include/Android.Fallbacks.Android_java_lang_Iterable.h
.uno/Android.java.lang.g.cpp.o: include/Android.Fallbacks.Android_java_lang_Runnable.h
.uno/Android.java.lang.g.cpp.o: include/Android.java.lang.CharSequence.h
.uno/Android.java.lang.g.cpp.o: include/Android.java.lang.Class.h
.uno/Android.java.lang.g.cpp.o: include/Android.java.lang.Iterable.h
.uno/Android.java.lang.g.cpp.o: include/Android.java.lang.Object.h
.uno/Android.java.lang.g.cpp.o: include/Android.java.lang.reflect.Field.h
.uno/Android.java.lang.g.cpp.o: include/Android.java.lang.Runnable.h
.uno/Android.java.lang.g.cpp.o: include/Android.java.lang.String.h
.uno/Android.java.lang.g.cpp.o: include/Android.java.lang.System.h
.uno/Android.java.lang.g.cpp.o: include/Android.java.lang.Thread.h
.uno/Android.java.lang.g.cpp.o: include/Android.java.util.Iterator.h
.uno/Android.java.lang.g.cpp.o: include/Uno.Bool.h
.uno/Android.java.lang.g.cpp.o: include/Uno.Char.h
.uno/Android.java.lang.g.cpp.o: include/Uno.Exception.h
.uno/Android.java.lang.g.cpp.o: include/Uno.Int.h
.uno/Android.java.lang.g.cpp.o: include/Uno.Long.h
.uno/Android.java.lang.g.cpp.o: include/Uno.Object.h
.uno/Android.java.lang.g.cpp.o: include/Uno.String.h
.uno/Android.java.lang.g.cpp.o: include/Uno.Type.h
.uno/Android.java.lang.g.cpp.o: jni/Android.java.lang.g.cpp flags.txt | .uno
	echo Android.java.lang.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Android.java.lang.g.cpp.o -c jni/Android.java.lang.g.cpp

.uno/Android.java.lang.reflect.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
.uno/Android.java.lang.reflect.g.cpp.o: include/Android.Base.JNI.h
.uno/Android.java.lang.reflect.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
.uno/Android.java.lang.reflect.g.cpp.o: include/Android.Base.Primitives.ujclass.h
.uno/Android.java.lang.reflect.g.cpp.o: include/Android.Base.Primitives.ujobject.h
.uno/Android.java.lang.reflect.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Android.java.lang.reflect.g.cpp.o: include/Android.java.lang.Object.h
.uno/Android.java.lang.reflect.g.cpp.o: include/Android.java.lang.reflect.AccessibleObject.h
.uno/Android.java.lang.reflect.g.cpp.o: include/Android.java.lang.reflect.Field.h
.uno/Android.java.lang.reflect.g.cpp.o: include/Android.java.lang.String.h
.uno/Android.java.lang.reflect.g.cpp.o: include/Uno.Bool.h
.uno/Android.java.lang.reflect.g.cpp.o: include/Uno.Exception.h
.uno/Android.java.lang.reflect.g.cpp.o: include/Uno.Int.h
.uno/Android.java.lang.reflect.g.cpp.o: jni/Android.java.lang.reflect.g.cpp flags.txt | .uno
	echo Android.java.lang.reflect.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Android.java.lang.reflect.g.cpp.o -c jni/Android.java.lang.reflect.g.cpp

.uno/Android.java.net.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
.uno/Android.java.net.g.cpp.o: include/Android.Base.JNI.h
.uno/Android.java.net.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
.uno/Android.java.net.g.cpp.o: include/Android.Base.Primitives.ujclass.h
.uno/Android.java.net.g.cpp.o: include/Android.Base.Primitives.ujobject.h
.uno/Android.java.net.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Android.java.net.g.cpp.o: include/Android.java.lang.Object.h
.uno/Android.java.net.g.cpp.o: include/Android.java.lang.String.h
.uno/Android.java.net.g.cpp.o: include/Android.java.net.URL.h
.uno/Android.java.net.g.cpp.o: include/Uno.Bool.h
.uno/Android.java.net.g.cpp.o: include/Uno.Exception.h
.uno/Android.java.net.g.cpp.o: include/Uno.Int.h
.uno/Android.java.net.g.cpp.o: include/Uno.Type.h
.uno/Android.java.net.g.cpp.o: jni/Android.java.net.g.cpp flags.txt | .uno
	echo Android.java.net.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Android.java.net.g.cpp.o -c jni/Android.java.net.g.cpp

.uno/Android.java.util.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
.uno/Android.java.util.g.cpp.o: include/Android.Base.JNI.h
.uno/Android.java.util.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
.uno/Android.java.util.g.cpp.o: include/Android.Base.Primitives.ujclass.h
.uno/Android.java.util.g.cpp.o: include/Android.Base.Primitives.ujobject.h
.uno/Android.java.util.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Android.java.util.g.cpp.o: include/Android.Fallbacks.Android_java_util_AbstractCollection.h
.uno/Android.java.util.g.cpp.o: include/Android.Fallbacks.Android_java_util_AbstractList.h
.uno/Android.java.util.g.cpp.o: include/Android.Fallbacks.Android_java_util_Collection.h
.uno/Android.java.util.g.cpp.o: include/Android.Fallbacks.Android_java_util_Iterator.h
.uno/Android.java.util.g.cpp.o: include/Android.Fallbacks.Android_java_util_List.h
.uno/Android.java.util.g.cpp.o: include/Android.Fallbacks.Android_java_util_ListIterator.h
.uno/Android.java.util.g.cpp.o: include/Android.Fallbacks.Android_java_util_Observer.h
.uno/Android.java.util.g.cpp.o: include/Android.java.lang.Object.h
.uno/Android.java.util.g.cpp.o: include/Android.java.lang.String.h
.uno/Android.java.util.g.cpp.o: include/Android.java.util.AbstractCollection.h
.uno/Android.java.util.g.cpp.o: include/Android.java.util.AbstractList.h
.uno/Android.java.util.g.cpp.o: include/Android.java.util.ArrayList.h
.uno/Android.java.util.g.cpp.o: include/Android.java.util.Collection.h
.uno/Android.java.util.g.cpp.o: include/Android.java.util.Iterator.h
.uno/Android.java.util.g.cpp.o: include/Android.java.util.List.h
.uno/Android.java.util.g.cpp.o: include/Android.java.util.ListIterator.h
.uno/Android.java.util.g.cpp.o: include/Android.java.util.Observable.h
.uno/Android.java.util.g.cpp.o: include/Android.java.util.Observer.h
.uno/Android.java.util.g.cpp.o: include/Android.Runtime.JEnumerator.h
.uno/Android.java.util.g.cpp.o: include/Android.Runtime.ObjectArray-1.h
.uno/Android.java.util.g.cpp.o: include/Uno.Bool.h
.uno/Android.java.util.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Android.java.util.g.cpp.o: include/Uno.Exception.h
.uno/Android.java.util.g.cpp.o: include/Uno.Int.h
.uno/Android.java.util.g.cpp.o: jni/Android.java.util.g.cpp flags.txt | .uno
	echo Android.java.util.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Android.java.util.g.cpp.o -c jni/Android.java.util.g.cpp

.uno/Android.Runtime.g.cpp.o: include/Android.android.app.Activity.h
.uno/Android.Runtime.g.cpp.o: include/Android.android.app.Fragment.h
.uno/Android.Runtime.g.cpp.o: include/Android.android.app.TaskStackBuilder.h
.uno/Android.Runtime.g.cpp.o: include/Android.android.content.Context.h
.uno/Android.Runtime.g.cpp.o: include/Android.android.content.Intent.h
.uno/Android.Runtime.g.cpp.o: include/Android.android.content.res.Configuration.h
.uno/Android.Runtime.g.cpp.o: include/Android.android.graphics.Bitmap.h
.uno/Android.Runtime.g.cpp.o: include/Android.android.graphics.Canvas.h
.uno/Android.Runtime.g.cpp.o: include/Android.android.os.Bundle.h
.uno/Android.Runtime.g.cpp.o: include/Android.android.util.AttributeSet.h
.uno/Android.Runtime.g.cpp.o: include/Android.android.view.ActionMode.h
.uno/Android.Runtime.g.cpp.o: include/Android.android.view.KeyEvent.h
.uno/Android.Runtime.g.cpp.o: include/Android.android.view.Menu.h
.uno/Android.Runtime.g.cpp.o: include/Android.android.view.MenuItem.h
.uno/Android.Runtime.g.cpp.o: include/Android.android.view.MotionEvent.h
.uno/Android.Runtime.g.cpp.o: include/Android.android.view.View.h
.uno/Android.Runtime.g.cpp.o: include/Android.android.view.WindowManagerDLRLayoutParams.h
.uno/Android.Runtime.g.cpp.o: include/Android.Base.AndroidBindingMacros.h
.uno/Android.Runtime.g.cpp.o: include/Android.Base.JNI.h
.uno/Android.Runtime.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
.uno/Android.Runtime.g.cpp.o: include/Android.Base.Primitives.JNINativeMethod.h
.uno/Android.Runtime.g.cpp.o: include/Android.Base.Primitives.ujclass.h
.uno/Android.Runtime.g.cpp.o: include/Android.Base.Primitives.ujlong.h
.uno/Android.Runtime.g.cpp.o: include/Android.Base.Primitives.ujobject.h
.uno/Android.Runtime.g.cpp.o: include/Android.Base.Primitives.ujvalue.h
.uno/Android.Runtime.g.cpp.o: include/Android.Base.Types.Arrays.h
.uno/Android.Runtime.g.cpp.o: include/Android.Base.Types.Bridge.h
.uno/Android.Runtime.g.cpp.o: include/Android.Base.Wrappers.IJWrapper.h
.uno/Android.Runtime.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Android.Runtime.g.cpp.o: include/Android.Bootstrapper.h
.uno/Android.Runtime.g.cpp.o: include/Android.java.lang.CharSequence.h
.uno/Android.Runtime.g.cpp.o: include/Android.java.lang.Iterable.h
.uno/Android.Runtime.g.cpp.o: include/Android.java.lang.Object.h
.uno/Android.Runtime.g.cpp.o: include/Android.java.lang.Runnable.h
.uno/Android.Runtime.g.cpp.o: include/Android.java.lang.String.h
.uno/Android.Runtime.g.cpp.o: include/Android.java.util.Iterator.h
.uno/Android.Runtime.g.cpp.o: include/Android.java.util.Observable.h
.uno/Android.Runtime.g.cpp.o: include/Android.java.util.Observer.h
.uno/Android.Runtime.g.cpp.o: include/Android.Runtime.BooleanArray.h
.uno/Android.Runtime.g.cpp.o: include/Android.Runtime.ByteArray.h
.uno/Android.Runtime.g.cpp.o: include/Android.Runtime.CharArray.h
.uno/Android.Runtime.g.cpp.o: include/Android.Runtime.DoubleArray.h
.uno/Android.Runtime.g.cpp.o: include/Android.Runtime.FloatArray.h
.uno/Android.Runtime.g.cpp.o: include/Android.Runtime.IntArray.h
.uno/Android.Runtime.g.cpp.o: include/Android.Runtime.JAEnumerator-1.h
.uno/Android.Runtime.g.cpp.o: include/Android.Runtime.JavaGetter-1.h
.uno/Android.Runtime.g.cpp.o: include/Android.Runtime.JEnumerator.h
.uno/Android.Runtime.g.cpp.o: include/Android.Runtime.JOAEnumerator-1.h
.uno/Android.Runtime.g.cpp.o: include/Android.Runtime.LongArray.h
.uno/Android.Runtime.g.cpp.o: include/Android.Runtime.NativeActivityHelper.h
.uno/Android.Runtime.g.cpp.o: include/Android.Runtime.ObjectArray-1.h
.uno/Android.Runtime.g.cpp.o: include/Android.Runtime.ObjectArrayAUX.h
.uno/Android.Runtime.g.cpp.o: include/Android.Runtime.RunnableAction.h
.uno/Android.Runtime.g.cpp.o: include/Android.Runtime.ShortArray.h
.uno/Android.Runtime.g.cpp.o: include/Android.Runtime.UnoHelper.h
.uno/Android.Runtime.g.cpp.o: include/Uno.Action.h
.uno/Android.Runtime.g.cpp.o: include/Uno.Bool.h
.uno/Android.Runtime.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Android.Runtime.g.cpp.o: include/Uno.Exception.h
.uno/Android.Runtime.g.cpp.o: include/Uno.Int.h
.uno/Android.Runtime.g.cpp.o: include/Uno.Object.h
.uno/Android.Runtime.g.cpp.o: include/Uno.String.h
.uno/Android.Runtime.g.cpp.o: include/Uno.Type.h
.uno/Android.Runtime.g.cpp.o: jni/Android.Runtime.g.cpp flags.txt | .uno
	echo Android.Runtime.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Android.Runtime.g.cpp.o -c jni/Android.Runtime.g.cpp

.uno/BootstrapperImpl_Android.cpp.o: include/BootstrapperImpl_Android.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Base.JNI.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Base.Types.Bridge.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.animation.Animator.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.animation.LayoutTransition.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.animation.TimeAnimator.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.animation.ValueAnimator.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.app.Activity.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.app.Fragment.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.app.TaskStackBuilder.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.content.ClipData.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.content.ComponentName.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.content.Context.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.content.ContextWrapper.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.content.Intent.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.content.res.AssetFileDescriptor.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.content.res.AssetManager.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.content.res.ColorStateList.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.content.res.Configuration.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.content.res.Resources.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.content.res.TypedArray.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.graphics.Bitmap.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.graphics.BitmapDLRConfig.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.graphics.BitmapFactory.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.graphics.Canvas.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.graphics.Color.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.graphics.drawable.Drawable.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.graphics.drawable.LayerDrawable.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.graphics.drawable.ShapeDrawable.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.graphics.drawable.ShapeDrawableDLRShaderFactory.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.graphics.drawable.shapes.ArcShape.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.graphics.drawable.shapes.RectShape.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.graphics.drawable.shapes.RoundRectShape.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.graphics.drawable.shapes.Shape.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.graphics.LinearGradient.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.graphics.Matrix.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.graphics.Paint.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.graphics.PaintDLRStyle.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.graphics.Point.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.graphics.PorterDuffDLRMode.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.graphics.Rect.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.graphics.RectF.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.graphics.Region.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.graphics.Shader.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.graphics.ShaderDLRTileMode.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.graphics.SurfaceTexture.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.graphics.Typeface.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.location.Location.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.location.LocationManager.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.media.AudioManager.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.media.MediaPlayer.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.net.http.SslError.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.net.Uri.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.opengl.GLUtils.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.os.Build.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.os.BuildDLRVERSION.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.os.Bundle.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.os.Handler.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.os.Looper.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.os.Message.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.os.Parcel.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.os.Vibrator.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.test.mock.MockContext.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.text.Layout.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.text.LayoutDLRAlignment.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.text.StaticLayout.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.text.TextPaint.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.text.TextUtilsDLRTruncateAt.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.util.Property.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.util.SparseArray.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.util.TypedValue.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.view.accessibility.AccessibilityEvent.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.view.accessibility.AccessibilityNodeInfo.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.view.accessibility.AccessibilityNodeProvider.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.view.ActionMode.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.view.ActionProvider.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.view.animation.Animation.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.view.animation.LayoutAnimationController.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.view.animation.Transformation.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.view.Choreographer.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.view.ContextThemeWrapper.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.view.Display.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.view.DragEvent.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.view.Gravity.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.view.InputEvent.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.view.inputmethod.CompletionInfo.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.view.inputmethod.CorrectionInfo.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.view.inputmethod.EditorInfo.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.view.inputmethod.ExtractedText.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.view.inputmethod.ExtractedTextRequest.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.view.inputmethod.InputMethodManager.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.view.KeyEvent.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.view.KeyEventDLRDispatcherState.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.view.MotionEvent.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.view.Surface.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.view.SurfaceView.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.view.TextureView.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.view.TouchDelegate.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.view.View.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.view.ViewDLRAccessibilityDelegate.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.view.ViewDLRDragShadowBuilder.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.view.ViewDLRMeasureSpec.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.view.ViewGroup.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.view.ViewGroupDLRLayoutParams.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.view.ViewGroupDLRMarginLayoutParams.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.view.ViewGroupOverlay.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.view.ViewOverlay.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.view.ViewPropertyAnimator.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.view.ViewTreeObserver.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.view.WindowId.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.view.WindowManagerDLRLayoutParams.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.webkit.ConsoleMessage.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.webkit.HttpAuthHandler.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.webkit.JsPromptResult.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.webkit.JsResult.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.webkit.SslErrorHandler.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.webkit.WebChromeClient.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.webkit.WebResourceResponse.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.webkit.WebSettings.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.webkit.WebView.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.webkit.WebViewClient.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.widget.AbsoluteLayout.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.widget.AbsSeekBar.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.widget.Button.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.widget.CompoundButton.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.widget.EditText.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.widget.FrameLayout.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.widget.FrameLayoutDLRLayoutParams.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.widget.HorizontalScrollView.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.widget.ImageView.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.widget.ImageViewDLRScaleType.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.widget.ProgressBar.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.widget.RelativeLayout.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.widget.RelativeLayoutDLRLayoutParams.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.widget.ScrollView.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.widget.SeekBar.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.widget.Switch.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.android.widget.TextView.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.com.fuse.ExperimentalHttp.HttpRequest.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.com.fuse.Native.Camera.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.com.fuse.Native.CameraTask.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_animation_Animator.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_animation_TimeAnimatorDLRTimeListener.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_animation_TimeInterpolator.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_content_Context.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_graphics_drawable_Drawable.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_graphics_drawable_ShapeDrawab-1918c93c.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_graphics_drawable_shapes_Shape.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_graphics_SurfaceTextureDLROnF-45d51137.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_location_LocationListener.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_media_AudioManagerDLROnAudioF-b4dcb473.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnBufferi-a11a3e5b.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnComplet-64af01f3.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnErrorListener.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnPreparedListener.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnSeekCom-79a19ba7.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnVideoSi-169f5c77.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_net_Uri.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_os_IBinder.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_os_IBinderDLRDeathRecipient.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_os_IInterface.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_os_Parcelable.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_os_Vibrator.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_text_Editable.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_text_GetChars.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_text_InputFilter.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_text_Layout.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_text_Spannable.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_text_Spanned.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_text_TextWatcher.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_util_AttributeSet.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_util_Property.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_accessibility_Accessibil-d7e100f2.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_ActionMode.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_ActionModeDLRCallback.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_ActionProvider.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_animation_Animation.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_animation_AnimationDLRAn-50875199.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_animation_Interpolator.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_ChoreographerDLRFrameCallback.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_ContextMenu.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_ContextMenuDLRContextMenuInfo.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_InputEvent.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_inputmethod_InputConnection.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_Menu.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_MenuItem.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_MenuItemDLROnActionExpandListener.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_MenuItemDLROnMenuItemCli-b952820b.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_SubMenu.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_SurfaceHolder.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_SurfaceHolderDLRCallback.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_SurfaceHolderDLRCallback2.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_TextureViewDLRSurfaceTex-57881719.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnAttachStateChan-cad4f1be.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnClickListener.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnCreateContextMe-448f6a4b.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnDragListener.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnFocusChangeListener.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnGenericMotionListener.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnHoverListener.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnKeyListener.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnLayoutChangeListener.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnLongClickListener.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnSystemUiVisibil-1e6ae627.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_ViewDLROnTouchListener.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_ViewGroup.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_ViewGroupDLROnHierarchyC-cdf1f397.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_view_ViewParent.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_webkit_GeolocationPermissions-b666dc8a.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_webkit_ValueCallback.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_webkit_WebChromeClientDLRCust-ce52e805.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_webkit_WebSettings.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_webkit_WebStorageDLRQuotaUpdater.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_widget_AbsSeekBar.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_widget_CompoundButton.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_widget_CompoundButtonDLROnChe-91091c48.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_widget_SeekBarDLROnSeekBarCha-e452c5ca.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_android_widget_TextViewDLROnEditorAct-1b5558e6.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_java_io_InputStream.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_java_lang_CharSequence.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_java_lang_Iterable.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_java_lang_Runnable.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_java_util_AbstractCollection.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_java_util_AbstractList.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_java_util_Collection.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_java_util_Iterator.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_java_util_List.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_java_util_ListIterator.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Fallbacks.Android_java_util_Observer.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.java.io.FileDescriptor.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.java.io.InputStream.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.java.lang.Class.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.java.lang.Object.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.java.lang.reflect.AccessibleObject.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.java.lang.reflect.Field.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.java.lang.String.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.java.lang.System.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.java.lang.Thread.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.java.net.URL.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.java.util.AbstractCollection.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.java.util.AbstractList.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.java.util.ArrayList.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.java.util.Observable.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Runtime.BooleanArray.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Runtime.ByteArray.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Runtime.CharArray.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Runtime.DoubleArray.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Runtime.FloatArray.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Runtime.IntArray.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Runtime.LongArray.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Runtime.RunnableAction.h
.uno/BootstrapperImpl_Android.cpp.o: include/Android.Runtime.ShortArray.h
.uno/BootstrapperImpl_Android.cpp.o: include/Fuse.Android.Controls.AndroidSeekBar.h
.uno/BootstrapperImpl_Android.cpp.o: include/Fuse.Android.Controls.CompoundButton.Listener.h
.uno/BootstrapperImpl_Android.cpp.o: include/Fuse.Android.Controls.EditorActionListener.h
.uno/BootstrapperImpl_Android.cpp.o: include/Fuse.Android.Controls.Image.ImageLoader.BitmapLoader.h
.uno/BootstrapperImpl_Android.cpp.o: include/Fuse.Android.Controls.JsResultHandler.h
.uno/BootstrapperImpl_Android.cpp.o: include/Fuse.Android.Controls.ProgressChangedListener.h
.uno/BootstrapperImpl_Android.cpp.o: include/Fuse.Android.Controls.ShaderFactory.h
.uno/BootstrapperImpl_Android.cpp.o: include/Fuse.Android.Controls.TextChangedListener.h
.uno/BootstrapperImpl_Android.cpp.o: include/Fuse.Android.Controls.WebChromeClient.h
.uno/BootstrapperImpl_Android.cpp.o: include/Fuse.Android.Controls.WebViewClient.h
.uno/BootstrapperImpl_Android.cpp.o: include/Fuse.Android.FocusChangedListener.h
.uno/BootstrapperImpl_Android.cpp.o: include/Fuse.Android.InputDispatch.TouchListener.h
.uno/BootstrapperImpl_Android.cpp.o: include/Fuse.Android.NativeViews.GLSurfaceTextureListener.h
.uno/BootstrapperImpl_Android.cpp.o: include/Fuse.Android.NativeViews.HorizontalScrollView.h
.uno/BootstrapperImpl_Android.cpp.o: include/Fuse.Android.NativeViews.SurfaceCallback.h
.uno/BootstrapperImpl_Android.cpp.o: include/Fuse.Android.NativeViews.VerticalScrollView.h
.uno/BootstrapperImpl_Android.cpp.o: include/Fuse.Android.RootViewContainer.h
.uno/BootstrapperImpl_Android.cpp.o: include/Fuse.App.FrameCallback.h
.uno/BootstrapperImpl_Android.cpp.o: include/Fuse.App.TimeListener.h
.uno/BootstrapperImpl_Android.cpp.o: include/Fuse.GeoLocation.LocationListenerBase.h
.uno/BootstrapperImpl_Android.cpp.o: include/Fuse.Video.Graphics.Android.BufferingEvent.h
.uno/BootstrapperImpl_Android.cpp.o: include/Fuse.Video.Graphics.Android.CompletionEvent.h
.uno/BootstrapperImpl_Android.cpp.o: include/Fuse.Video.Graphics.Android.ErrorEvent.h
.uno/BootstrapperImpl_Android.cpp.o: include/Fuse.Video.Graphics.Android.FrameAvailableEvent.h
.uno/BootstrapperImpl_Android.cpp.o: include/Fuse.Video.Graphics.Android.PreparedEvent.h
.uno/BootstrapperImpl_Android.cpp.o: include/Fuse.Video.Graphics.Android.SeekCompleteEvent.h
.uno/BootstrapperImpl_Android.cpp.o: include/Fuse.Video.Graphics.Android.VideoSizeChanged.h
.uno/BootstrapperImpl_Android.cpp.o: jni/BootstrapperImpl_Android.cpp flags.txt | .uno
	echo BootstrapperImpl_Android.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/BootstrapperImpl_Android.cpp.o -c jni/BootstrapperImpl_Android.cpp

.uno/duktape.c.o: include/duktape.h
.uno/duktape.c.o: jni/duktape.c flags.txt | .uno
	echo duktape.c
	$(CC) $(CC_FLAGS) -o .uno/duktape.c.o -c jni/duktape.c

.uno/Experimental.Cache.g.cpp.o: include/Experimental.Cache.CacheLoaded.h
.uno/Experimental.Cache.g.cpp.o: include/Experimental.Cache.ICache.h
.uno/Experimental.Cache.g.cpp.o: include/Experimental.Cache.ICacheReader.h
.uno/Experimental.Cache.g.cpp.o: include/Experimental.Cache.ICacheWriter.h
.uno/Experimental.Cache.g.cpp.o: include/Experimental.Cache.ProxyStream.h
.uno/Experimental.Cache.g.cpp.o: include/Uno.Bool.h
.uno/Experimental.Cache.g.cpp.o: include/Uno.Byte.h
.uno/Experimental.Cache.g.cpp.o: include/Uno.Int.h
.uno/Experimental.Cache.g.cpp.o: include/Uno.IO.SeekOrigin.h
.uno/Experimental.Cache.g.cpp.o: include/Uno.IO.Stream.h
.uno/Experimental.Cache.g.cpp.o: include/Uno.Long.h
.uno/Experimental.Cache.g.cpp.o: include/Uno.NotSupportedException.h
.uno/Experimental.Cache.g.cpp.o: include/Uno.String.h
.uno/Experimental.Cache.g.cpp.o: jni/Experimental.Cache.g.cpp flags.txt | .uno
	echo Experimental.Cache.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Experimental.Cache.g.cpp.o -c jni/Experimental.Cache.g.cpp

.uno/Experimental.Http.g.cpp.o: include/Experimental.Cache.CacheLoaded.h
.uno/Experimental.Http.g.cpp.o: include/Experimental.Cache.ICache.h
.uno/Experimental.Http.g.cpp.o: include/Experimental.Cache.ICacheReader.h
.uno/Experimental.Http.g.cpp.o: include/Experimental.Cache.ICacheWriter.h
.uno/Experimental.Http.g.cpp.o: include/Experimental.Http.BinaryLoader.h
.uno/Experimental.Http.g.cpp.o: include/Experimental.Http.HttpLoader.h
.uno/Experimental.Http.g.cpp.o: include/Experimental.Http.HttpResponseHeader.h
.uno/Experimental.Http.g.cpp.o: include/Experimental.Http.Internal.DateUtil.h
.uno/Experimental.Http.g.cpp.o: include/Experimental.Http.Loader.h
.uno/Experimental.Http.g.cpp.o: include/Experimental.Http.LoaderConst.h
.uno/Experimental.Http.g.cpp.o: include/Experimental.Http.TextLoader.h
.uno/Experimental.Http.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Action-1.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Action-2.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Bool.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Buffer.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Byte.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Char.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Collections.Dictionary-2.Enumerator.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Delegate.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Diagnostics.DebugMessageType.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Exception.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Int.h
.uno/Experimental.Http.g.cpp.o: include/Uno.IO.BinaryReader.h
.uno/Experimental.Http.g.cpp.o: include/Uno.IO.BinaryWriter.h
.uno/Experimental.Http.g.cpp.o: include/Uno.IO.Stream.h
.uno/Experimental.Http.g.cpp.o: include/Uno.IO.StreamReader.h
.uno/Experimental.Http.g.cpp.o: include/Uno.IO.StreamWriter.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Long.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Net.Http.HttpMessageHandler.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Net.Http.HttpMessageHandlerRequest.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Net.Http.HttpResponseType.h
.uno/Experimental.Http.g.cpp.o: include/Uno.String.h
.uno/Experimental.Http.g.cpp.o: include/Uno.Threading.IDispatcher.h
.uno/Experimental.Http.g.cpp.o: jni/Experimental.Http.g.cpp flags.txt | .uno
	echo Experimental.Http.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Experimental.Http.g.cpp.o -c jni/Experimental.Http.g.cpp

.uno/Experimental.Http.Internal.g.cpp.o: include/Experimental.Http.Internal.DateUtil.h
.uno/Experimental.Http.Internal.g.cpp.o: include/Uno.DateTime.h
.uno/Experimental.Http.Internal.g.cpp.o: include/Uno.Int.h
.uno/Experimental.Http.Internal.g.cpp.o: include/Uno.Time.ZonedDateTime.h
.uno/Experimental.Http.Internal.g.cpp.o: jni/Experimental.Http.Internal.g.cpp flags.txt | .uno
	echo Experimental.Http.Internal.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Experimental.Http.Internal.g.cpp.o -c jni/Experimental.Http.Internal.g.cpp

.uno/Experimental.Physics.g.cpp.o: include/Experimental.Physics.AdapterMultiplier-1.h
.uno/Experimental.Physics.g.cpp.o: include/Experimental.Physics.AngularAdapter-1.h
.uno/Experimental.Physics.g.cpp.o: include/Experimental.Physics.BasicBoundedRegion2D.h
.uno/Experimental.Physics.g.cpp.o: include/Experimental.Physics.BasicBoundedRegion2D.MoveMode.h
.uno/Experimental.Physics.g.cpp.o: include/Experimental.Physics.BoundedRegion2D.h
.uno/Experimental.Physics.g.cpp.o: include/Experimental.Physics.DestinationSimulation-1.h
.uno/Experimental.Physics.g.cpp.o: include/Experimental.Physics.DestinationSimulationFactory-1.h
.uno/Experimental.Physics.g.cpp.o: include/Experimental.Physics.DestinationSimulationType.h
.uno/Experimental.Physics.g.cpp.o: include/Experimental.Physics.ElasticForce-1.h
.uno/Experimental.Physics.g.cpp.o: include/Experimental.Physics.Friction-1.h
.uno/Experimental.Physics.g.cpp.o: include/Experimental.Physics.MotionSimulation-1.h
.uno/Experimental.Physics.g.cpp.o: include/Experimental.Physics.PointerVelocity-1.h
.uno/Experimental.Physics.g.cpp.o: include/Experimental.Physics.Simulation.h
.uno/Experimental.Physics.g.cpp.o: include/Experimental.Physics.SmoothSnap-1.h
.uno/Experimental.Physics.g.cpp.o: include/Fuse.Internal.Blender-1.h
.uno/Experimental.Physics.g.cpp.o: include/Fuse.Internal.BlenderMap.h
.uno/Experimental.Physics.g.cpp.o: include/Fuse.Internal.ScalarBlender-1.h
.uno/Experimental.Physics.g.cpp.o: include/Fuse.Internal.Statistics.h
.uno/Experimental.Physics.g.cpp.o: include/Uno.Bool.h
.uno/Experimental.Physics.g.cpp.o: include/Uno.Double.h
.uno/Experimental.Physics.g.cpp.o: include/Uno.Exception.h
.uno/Experimental.Physics.g.cpp.o: include/Uno.Float.h
.uno/Experimental.Physics.g.cpp.o: include/Uno.Int.h
.uno/Experimental.Physics.g.cpp.o: include/Uno.Math.h
.uno/Experimental.Physics.g.cpp.o: include/Uno.Object.h
.uno/Experimental.Physics.g.cpp.o: include/Uno.String.h
.uno/Experimental.Physics.g.cpp.o: include/Uno.Vector.h
.uno/Experimental.Physics.g.cpp.o: jni/Experimental.Physics.g.cpp flags.txt | .uno
	echo Experimental.Physics.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Experimental.Physics.g.cpp.o -c jni/Experimental.Physics.g.cpp

.uno/Experimental.TextureLoader.g.cpp.o: include/Experimental.TextureLoader.Callback.h
.uno/Experimental.TextureLoader.g.cpp.o: include/Experimental.TextureLoader.InvalidContentTypeException.h
.uno/Experimental.TextureLoader.g.cpp.o: include/Experimental.TextureLoader.TextureLoader.h
.uno/Experimental.TextureLoader.g.cpp.o: include/Experimental.TextureLoader.TextureLoaderImpl.h
.uno/Experimental.TextureLoader.g.cpp.o: include/Uno.Action-1.h
.uno/Experimental.TextureLoader.g.cpp.o: include/Uno.Bool.h
.uno/Experimental.TextureLoader.g.cpp.o: include/Uno.Buffer.h
.uno/Experimental.TextureLoader.g.cpp.o: include/Uno.Char.h
.uno/Experimental.TextureLoader.g.cpp.o: include/Uno.Exception.h
.uno/Experimental.TextureLoader.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Experimental.TextureLoader.g.cpp.o: include/Uno.Int.h
.uno/Experimental.TextureLoader.g.cpp.o: include/Uno.String.h
.uno/Experimental.TextureLoader.g.cpp.o: include/Uno/XliInterop.h
.uno/Experimental.TextureLoader.g.cpp.o: jni/Experimental.TextureLoader.g.cpp flags.txt | .uno
	echo Experimental.TextureLoader.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Experimental.TextureLoader.g.cpp.o -c jni/Experimental.TextureLoader.g.cpp

.uno/Fuse.Android.Controls.g.cpp.o: include/Android.android.app.Activity.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.android.content.Context.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.android.content.ContextWrapper.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.android.content.res.AssetManager.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.android.content.res.ColorStateList.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.android.content.res.Resources.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.android.graphics.Bitmap.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.android.graphics.BitmapFactory.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.android.graphics.drawable.Drawable.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.android.graphics.drawable.LayerDrawable.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.android.graphics.drawable.ShapeDrawable.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.android.graphics.drawable.ShapeDrawableDLRShaderFactory.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.android.graphics.drawable.shapes.ArcShape.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.android.graphics.drawable.shapes.RectShape.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.android.graphics.drawable.shapes.RoundRectShape.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.android.graphics.drawable.shapes.Shape.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.android.graphics.LinearGradient.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.android.graphics.Matrix.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.android.graphics.Paint.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.android.graphics.PaintDLRStyle.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.android.graphics.PorterDuffDLRMode.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.android.graphics.RectF.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.android.graphics.Shader.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.android.graphics.ShaderDLRTileMode.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.android.graphics.Typeface.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.android.os.BuildDLRVERSION.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.android.os.IBinder.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.android.text.Editable.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.android.text.Layout.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.android.text.StaticLayout.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.android.text.TextUtilsDLRTruncateAt.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.android.util.TypedValue.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.android.view.Gravity.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.android.view.inputmethod.InputMethodManager.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.android.view.KeyEvent.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.android.view.MotionEvent.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.android.view.View.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.android.view.ViewDLRMeasureSpec.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.android.view.ViewGroup.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.android.view.ViewGroupDLRLayoutParams.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.android.webkit.WebChromeClient.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.android.webkit.WebSettings.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.android.webkit.WebView.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.android.webkit.WebViewClient.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.android.widget.AbsSeekBar.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.android.widget.Button.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.android.widget.CompoundButton.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.android.widget.EditText.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.android.widget.FrameLayoutDLRLayoutParams.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.android.widget.ImageView.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.android.widget.ImageViewDLRScaleType.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.android.widget.ProgressBar.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.android.widget.RelativeLayout.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.android.widget.RelativeLayoutDLRLayoutParams.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.android.widget.SeekBar.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.android.widget.Switch.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.android.widget.TextView.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.Base.JNI.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.Base.Primitives.ujclass.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.Base.Primitives.ujlong.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.Base.Primitives.ujobject.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.Base.Primitives.ujvalue.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.Base.Versions.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.Fallbacks.Android_android_text_Editable.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.Fallbacks.Android_android_widget_CompoundButton.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.Fallbacks.Android_java_lang_CharSequence.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.java.io.InputStream.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.java.lang.CharSequence.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.java.lang.Class.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.java.lang.Object.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.java.lang.reflect.AccessibleObject.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.java.lang.reflect.Field.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.java.lang.Runnable.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.java.lang.String.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.java.lang.Thread.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.java.net.URL.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.java.util.Observable.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.java.util.Observer.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.Runtime.FloatArray.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.Runtime.IntArray.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.Runtime.ObjectArray-1.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Android.Runtime.UnoHelper.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.AndroidExtensions.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.AndroidSeekBar.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.BitmapFactory.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.Button.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.CheckBox.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.Circle.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.CompoundButton.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.CompoundButton.Listener.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.Control-1.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.EditorActionArgs.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.EditorActionHandler.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.EditorActionListener.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.Element.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.FocusManager.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.Image.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.Image.ImageLoader.BitmapLoader.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.Image.ImageLoader.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.JsResultHandler.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.MapView.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.PlainTextEdit.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.ProgressChangedHandler.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.ProgressChangedListener.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.RadioButton.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.Rectangle.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.SeekBar.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.ShaderFactory.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.Shape-1.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.Switch.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.TextChangedHandler.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.TextChangedListener.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.TextEdit.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.TextView.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.TextViewBase-1.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.ToggleButton.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.WebChromeClient.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.WebView.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Controls.WebViewClient.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.FocusChangedHandler.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.FocusChangedListener.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.Helpers.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.NativeViews.LeafNativeView.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.NativeViews.NativeView.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.TextControlLayout.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Android.TypefaceCache.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Behavior.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Controls.Control.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Controls.RangeControl.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Controls.TextControl.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Controls.TextInputActionStyle.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Controls.ToggleControl.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Drawing.Brush.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Drawing.GradientStop.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Drawing.LinearGradient.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Drawing.ResampleMode.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Drawing.SolidColor.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Drawing.StaticSolidColor.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Drawing.Stroke.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Elements.Alignment.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Elements.StretchDirection.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Elements.StretchMode.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Elements.StretchSizing.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Elements.TextAlignment.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Elements.TextWrapping.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.FastMatrix.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Font.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.HitTestContext.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Input.Focus.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Input.FocusGainedArgs.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Input.FocusGainedHandler.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Input.FocusLostArgs.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Input.FocusLostHandler.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Input.Pointer.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Internal.SizingContainer.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.InvalidateLayoutReason.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.IViewport.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.LayoutParams.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.NodeBounds.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.NodeEvent-2.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Resources.FileImageSource.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Resources.HttpImageSource.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.Resources.ImageSource.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.StyleProperty-2.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.Byte.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.Diagnostics.DebugMessageType.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.Func-2.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.IDisposable.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.IO.Directory.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.IO.File.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.IO.UserDirectory.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.Platform.TextInputHint.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.String.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.Type.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.UX.BundleFileSource.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.UX.ValueChangedArgs-1.h
.uno/Fuse.Android.Controls.g.cpp.o: include/Uno.UX.ValueChangedHandler-1.h
.uno/Fuse.Android.Controls.g.cpp.o: jni/Fuse.Android.Controls.g.cpp flags.txt | .uno
	echo Fuse.Android.Controls.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Android.Controls.g.cpp.o -c jni/Fuse.Android.Controls.g.cpp

.uno/Fuse.Android.g.cpp.o: include/_root.FuseAndroid_bundle.h
.uno/Fuse.Android.g.cpp.o: include/Android.android.app.Activity.h
.uno/Fuse.Android.g.cpp.o: include/Android.android.content.Context.h
.uno/Fuse.Android.g.cpp.o: include/Android.android.content.ContextWrapper.h
.uno/Fuse.Android.g.cpp.o: include/Android.android.content.res.AssetManager.h
.uno/Fuse.Android.g.cpp.o: include/Android.android.graphics.Bitmap.h
.uno/Fuse.Android.g.cpp.o: include/Android.android.graphics.BitmapDLRConfig.h
.uno/Fuse.Android.g.cpp.o: include/Android.android.graphics.Canvas.h
.uno/Fuse.Android.g.cpp.o: include/Android.android.graphics.Paint.h
.uno/Fuse.Android.g.cpp.o: include/Android.android.graphics.Rect.h
.uno/Fuse.Android.g.cpp.o: include/Android.android.graphics.Typeface.h
.uno/Fuse.Android.g.cpp.o: include/Android.android.opengl.GLUtils.h
.uno/Fuse.Android.g.cpp.o: include/Android.android.os.BuildDLRVERSION.h
.uno/Fuse.Android.g.cpp.o: include/Android.android.text.Layout.h
.uno/Fuse.Android.g.cpp.o: include/Android.android.text.LayoutDLRAlignment.h
.uno/Fuse.Android.g.cpp.o: include/Android.android.text.StaticLayout.h
.uno/Fuse.Android.g.cpp.o: include/Android.android.text.TextPaint.h
.uno/Fuse.Android.g.cpp.o: include/Android.android.text.TextUtilsDLRTruncateAt.h
.uno/Fuse.Android.g.cpp.o: include/Android.android.view.MotionEvent.h
.uno/Fuse.Android.g.cpp.o: include/Android.android.view.View.h
.uno/Fuse.Android.g.cpp.o: include/Android.android.view.ViewDLROnTouchListener.h
.uno/Fuse.Android.g.cpp.o: include/Android.android.view.ViewGroup.h
.uno/Fuse.Android.g.cpp.o: include/Android.android.view.ViewGroupDLRLayoutParams.h
.uno/Fuse.Android.g.cpp.o: include/Android.android.widget.RelativeLayout.h
.uno/Fuse.Android.g.cpp.o: include/Android.android.widget.RelativeLayoutDLRLayoutParams.h
.uno/Fuse.Android.g.cpp.o: include/Android.Base.JNI.h
.uno/Fuse.Android.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
.uno/Fuse.Android.g.cpp.o: include/Android.Base.Primitives.ujclass.h
.uno/Fuse.Android.g.cpp.o: include/Android.Base.Primitives.ujlong.h
.uno/Fuse.Android.g.cpp.o: include/Android.Base.Primitives.ujobject.h
.uno/Fuse.Android.g.cpp.o: include/Android.Base.Primitives.ujvalue.h
.uno/Fuse.Android.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Fuse.Android.g.cpp.o: include/Android.java.lang.CharSequence.h
.uno/Fuse.Android.g.cpp.o: include/Android.java.lang.Object.h
.uno/Fuse.Android.g.cpp.o: include/Android.java.lang.String.h
.uno/Fuse.Android.g.cpp.o: include/Android.Runtime.IntArray.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.AndroidExtensions.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.BindingView.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.Blitter.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.Controls.Button.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.Controls.Circle.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.Controls.Image.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.Controls.MapView.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.Controls.PlainTextEdit.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.Controls.Rectangle.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.Controls.SeekBar.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.Controls.Switch.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.Controls.TextEdit.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.Controls.TextView.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.Controls.WebView.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.FocusChangedHandler.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.FocusChangedListener.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.Helpers.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.InputDispatch.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.InputDispatch.TouchListener.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.NativeStyle.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.NativeStyle.Template.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.NativeStyle.Template.Template1.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.NativeStyle.Template.Template2.Factory.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.NativeStyle.Template.Template2.Factory1.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.NativeStyle.Template.Template2.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.NativeTemplate.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.NativeViews.ContentControl.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.NativeViews.NativeView.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.NativeViews.NativeViewHost.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.NativeViews.ParentControl.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.NativeViews.ScrollView.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.NativeViews.SurfaceView.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.NativeViews.TextureView.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.RootView.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.RootViewContainer.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.StatusBarConfig.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.TextControlLayout.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.TextRenderer.BackgroundRender.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.TextRenderer.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Android.TypefaceCache.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.AppBase.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Behavior.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Controls.Button.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Controls.Circle.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Controls.ContentControl.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Controls.Graphics.ControlVisual-1.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Controls.Graphics.Visual.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Controls.GraphicsView.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Controls.Image.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Controls.MapView.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Controls.NativeViewHost.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Controls.ParentControl.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Controls.PlainTextEdit.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Controls.Rectangle.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Controls.ScrollView.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Controls.Slider.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Controls.Switch.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Controls.TextBlock.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Controls.TextControl.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Controls.TextEdit.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Controls.WebView.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.DrawContext.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Elements.TextAlignment.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Elements.TextWrapping.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Font.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.GraphicsWorker.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Input.Pointer.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Input.PointerEventData.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Input.PointerMovedArgs.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Input.PointerPressedArgs.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Input.PointerReleasedArgs.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.IViewport.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.LayoutParams.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Resources.DisposalManager.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Style.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.StyleProperty-2.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.Themes.GraphicsStyle.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Android.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.Android.g.cpp.o: include/OpenGL.GL.h
.uno/Fuse.Android.g.cpp.o: include/OpenGL.GLTextureHandle.h
.uno/Fuse.Android.g.cpp.o: include/OpenGL.GLTextureTarget.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Application.h
.uno/Fuse.Android.g.cpp.o: include/Uno.ArgumentOutOfRangeException.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Buffer.h
.uno/Fuse.Android.g.cpp.o: include/Uno.BundleFile.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Byte.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Byte4.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Collections.HashSet-1.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Android.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Android.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Graphics.BlendOperand.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Graphics.Format.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Graphics.PolygonFace.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Graphics.VertexAttributeType.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Int2.h
.uno/Fuse.Android.g.cpp.o: include/Uno.IO.Directory.h
.uno/Fuse.Android.g.cpp.o: include/Uno.IO.File.h
.uno/Fuse.Android.g.cpp.o: include/Uno.IO.UserDirectory.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Long.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Platform.PointerType.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Platform.ViewNativeHandle.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Platform2.Application.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Rect.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Recti.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Runtime.Implementation.Internal.BufferConverters.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h
.uno/Fuse.Android.g.cpp.o: include/Uno.String.h
.uno/Fuse.Android.g.cpp.o: include/Uno.Type.h
.uno/Fuse.Android.g.cpp.o: include/Uno.ULong.h
.uno/Fuse.Android.g.cpp.o: include/Uno.UX.BundleFileSource.h
.uno/Fuse.Android.g.cpp.o: include/Uno.UX.Factory.h
.uno/Fuse.Android.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Fuse.Android.g.cpp.o: include/Uno.UX.Template-1.h
.uno/Fuse.Android.g.cpp.o: include/Uno.UX.ValueChangedArgs-1.h
.uno/Fuse.Android.g.cpp.o: include/Uno.UX.ValueChangedHandler-1.h
.uno/Fuse.Android.g.cpp.o: include/Uno/JNIHelper.h
.uno/Fuse.Android.g.cpp.o: jni/Fuse.Android.g.cpp flags.txt | .uno
	echo Fuse.Android.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Android.g.cpp.o -c jni/Fuse.Android.g.cpp

.uno/Fuse.Android.NativeViews.g.cpp.o: include/Android.android.app.Activity.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Android.android.content.Context.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Android.android.graphics.Color.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Android.android.graphics.SurfaceTexture.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Android.android.view.Surface.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Android.android.view.SurfaceHolder.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Android.android.view.SurfaceHolderDLRCallback.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Android.android.view.SurfaceView.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Android.android.view.TextureView.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Android.android.view.TextureViewDLRSurfaceTextureListener.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Android.android.view.View.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Android.android.view.ViewGroup.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Android.android.view.ViewGroupDLRLayoutParams.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Android.android.widget.FrameLayout.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Android.android.widget.FrameLayoutDLRLayoutParams.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Android.android.widget.RelativeLayout.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Android.android.widget.RelativeLayoutDLRLayoutParams.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Android.Base.JNI.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Android.Base.Primitives.ujclass.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Android.Base.Primitives.ujlong.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Android.Base.Primitives.ujobject.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Android.Base.Primitives.ujvalue.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Android.Fallbacks.Android_android_view_SurfaceHolder.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Android.java.lang.Object.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.Android.Controls.Element.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.Android.InputDispatch.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.Android.NativeViews.ContentControl.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.Android.NativeViews.GLSurfaceTextureListener.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.Android.NativeViews.GraphicsView.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.Android.NativeViews.HorizontalScrollView.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.Android.NativeViews.LeafNativeView.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.Android.NativeViews.NativeView.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.Android.NativeViews.NativeViewHost.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.Android.NativeViews.ParentControl.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.Android.NativeViews.ParentNativeView-1.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.Android.NativeViews.ScrollView.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.Android.NativeViews.SurfaceCallback.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.Android.NativeViews.SurfaceView.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.Android.NativeViews.TextureView.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.Android.NativeViews.VerticalScrollView.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.Android.RootView.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.Controls.Control.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.Controls.GraphicsView.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.Controls.ScrollPositionChangedArgs.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.Controls.ScrollPositionChangedHandler.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.Controls.ScrollView.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.DrawContext.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.Drawing.Brush.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.Drawing.SolidColor.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.Drawing.StaticSolidColor.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.Elements.Element.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.Gestures.ScrollDirections.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.IViewport.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.PlacedHandler.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.Properties.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.PropertyHandle.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.RootViewport.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.StyleProperty-2.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/OpenGL.GL.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Uno.Int2.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Uno.IntPtr.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Uno.Matrix.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Uno.Platform2.Display.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Uno.Quaternion.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Uno.Recti.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Uno.String.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Uno.Type.h
.uno/Fuse.Android.NativeViews.g.cpp.o: include/Uno.Vector.h
.uno/Fuse.Android.NativeViews.g.cpp.o: jni/Fuse.Android.NativeViews.g.cpp flags.txt | .uno
	echo Fuse.Android.NativeViews.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Android.NativeViews.g.cpp.o -c jni/Fuse.Android.NativeViews.g.cpp

.uno/Fuse.Animations.g.cpp.o: include/Experimental.Physics.DestinationSimulation-1.h
.uno/Fuse.Animations.g.cpp.o: include/Experimental.Physics.DestinationSimulationFactory-1.h
.uno/Fuse.Animations.g.cpp.o: include/Experimental.Physics.DestinationSimulationType.h
.uno/Fuse.Animations.g.cpp.o: include/Experimental.Physics.ElasticForce-1.h
.uno/Fuse.Animations.g.cpp.o: include/Experimental.Physics.MotionSimulation-1.h
.uno/Fuse.Animations.g.cpp.o: include/Experimental.Physics.Simulation.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.AnimationVariant.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Animator.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.AnimatorState.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.AnimatorVariant.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Attractor-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.AverageMasterProperty-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.AverageMasterTransform.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.AverageMixer.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Change-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.ContinuousTrackChangeState-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.ContinuousTrackProvider.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Converter-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.ConverterDouble.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.ConverterFloat.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.ConverterFloat2.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.ConverterFloat3.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.ConverterFloat4.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.CreateStateParams.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Cycle-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.CycleState-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.CycleWaveform.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.DiscreteKeyframeTrack.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.DiscreteMasterProperty-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.DiscreteMasterTransform.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.DiscreteMixer.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.DiscreteSingleTrack.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.DiscreteTrackChangeState-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.DiscreteTrackProvider.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Easing.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.EasingFunction.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.EasingFunctions.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.EasingTrack.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.FastMatrixTransform.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.IMixer.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.IMixerHandle-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.IMixerMaster.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.IResize.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.IResizeMode.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.ITrackProvider.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Keyframe.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.KeyframeInterpolation.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.KeyframeTrack.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.MasterBase-1.GFWResult.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.MasterBase-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.MasterProperty-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.MasterPropertyGet.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.MasterTransform.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Mixer.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.MixerBase.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.MixerHandle-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.MixOp.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Move.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Nothing.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.NothingAnimatorState.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.OpenAnimator.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.OpenAnimatorState.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Player.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.PlayerPart.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.PlayMode.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Resize.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.ResizeAnimatorState.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Rotate.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Scale.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.SeekDirection.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Skew.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.Spin.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.SpinState.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.SplineTrack.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.SplineTrack.PointInterpolater.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.TrackAnimator.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.TrackAnimatorState.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.TrackProvider.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.TransformAnimator-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.TransformAnimatorState-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.TransformPriority.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.TriggerAnimation.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.TriggerAnimationState.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Animations.TriggerAnimationState.SeekFlags.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.FastMatrix.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.IActualPlacement.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Internal.Blender-1.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Internal.BlenderMap.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.IScalingMode.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.ITransformMode.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.ITranslationMode.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.PlacedHandler.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Properties.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.PropertyHandle.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Rotation.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.ScalingModes.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Time.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Transform.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.TransformModeFlags.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.Translation.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.TranslationModes.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Animations.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Collections.ConcurrentCollection-1.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Diagnostics.DebugMessageType.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.IDisposable.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.String.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.Type.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.UX.Property-1.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.UX.ValueChangedArgs-1.h
.uno/Fuse.Animations.g.cpp.o: include/Uno.UX.ValueChangedHandler-1.h
.uno/Fuse.Animations.g.cpp.o: jni/Fuse.Animations.g.cpp flags.txt | .uno
	echo Fuse.Animations.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Animations.g.cpp.o -c jni/Fuse.Animations.g.cpp

.uno/Fuse.BasicTheme.g.cpp.o: include/_root.FuseBasicTheme_bundle.h
.uno/Fuse.BasicTheme.g.cpp.o: include/_root.FuseBasicTheme_FuseAnimationsChange1_float4_Value_Property.h
.uno/Fuse.BasicTheme.g.cpp.o: include/_root.FuseBasicTheme_FuseControlsButton_string_Text_Property.h
.uno/Fuse.BasicTheme.g.cpp.o: include/_root.FuseBasicTheme_FuseControlsTextControl_float_FontSize_Property.h
.uno/Fuse.BasicTheme.g.cpp.o: include/_root.FuseBasicTheme_FuseControlsTextControl_float_LineSpacing_Property.h
.uno/Fuse.BasicTheme.g.cpp.o: include/_root.FuseBasicTheme_FuseControlsTextControl_float4_TextColor_Property.h
.uno/Fuse.BasicTheme.g.cpp.o: include/_root.FuseBasicTheme_FuseControlsTextControl_FuseElementsTextAl-caf616dd.h
.uno/Fuse.BasicTheme.g.cpp.o: include/_root.FuseBasicTheme_FuseControlsTextControl_FuseElementsTextWr-746d7e4e.h
.uno/Fuse.BasicTheme.g.cpp.o: include/_root.FuseBasicTheme_FuseControlsTextControl_FuseFont_Font_Property.h
.uno/Fuse.BasicTheme.g.cpp.o: include/_root.FuseBasicTheme_FuseControlsTextControl_string_Value_Property.h
.uno/Fuse.BasicTheme.g.cpp.o: include/_root.FuseBasicTheme_FuseControlsTextEdit_float4_PlaceholderCol-a5e732f7.h
.uno/Fuse.BasicTheme.g.cpp.o: include/_root.FuseBasicTheme_FuseControlsTextEdit_string_PlaceholderTex-b681a73c.h
.uno/Fuse.BasicTheme.g.cpp.o: include/_root.FuseBasicTheme_FuseDrawingSolidColor_float4_Color_Property.h
.uno/Fuse.BasicTheme.g.cpp.o: include/_root.FuseBasicTheme_FuseDrawingStroke_float_Width_Property.h
.uno/Fuse.BasicTheme.g.cpp.o: include/_root.FuseBasicTheme_FuseEffectsDropShadow_float4_Color_Property.h
.uno/Fuse.BasicTheme.g.cpp.o: include/_root.FuseBasicTheme_FuseElementsElement_float_Height_Property.h
.uno/Fuse.BasicTheme.g.cpp.o: include/_root.FuseBasicTheme_FuseElementsElement_float_Opacity_Property.h
.uno/Fuse.BasicTheme.g.cpp.o: include/_root.FuseBasicTheme_FuseElementsElement_float_Width_Property.h
.uno/Fuse.BasicTheme.g.cpp.o: include/_root.FuseBasicTheme_FuseInputFocus_bool_FocusIsFocusable_Property.h
.uno/Fuse.BasicTheme.g.cpp.o: include/_root.FuseBasicTheme_FuseTranslation_float_X_Property.h
.uno/Fuse.BasicTheme.g.cpp.o: include/_root.FuseBasicTheme_FuseTriggersActionsTriggerAction_bool_IsAc-7430db5a.h
.uno/Fuse.BasicTheme.g.cpp.o: include/_root.FuseBasicTheme_FuseTriggersWhileBool_bool_Value_Property.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Animations.Animator.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Animations.Change-1.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Animations.Easing.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Animations.Move.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Animations.Nothing.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Animations.Scale.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Animations.TrackAnimator.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Animations.TransformAnimator-1.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.BasicTheme.BasicStyle.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.BasicTheme.BasicStyle.Template.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.BasicTheme.BasicStyle.Template.Template1.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.BasicTheme.BasicStyle.Template1.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.BasicTheme.BasicStyle.Template2.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.BasicTheme.BasicStyle.Template3.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.BasicTheme.BasicStyle.Template4.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.BasicTheme.BasicStyle.Template5.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.BasicTheme.BasicStyle.Template6.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.BasicTheme.BasicTheme.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.BasicTheme.ButtonText.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.BasicTheme.ColorScheme.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.BasicTheme.DefaultBasicTheme.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Behavior.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Controls.BackButton.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Controls.Button.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Controls.Circle.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Controls.DefaultSwitchBehavior.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Controls.DockPanel.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Controls.FillRule.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Controls.NavigationBar.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Controls.Panel.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Controls.ParentControl.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Controls.Path.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Controls.PlainTextEdit.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Controls.PropertyBinding-1.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Controls.Rectangle.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Controls.Shape.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Controls.Slider.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Controls.Switch.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Controls.Text.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Controls.TextControl.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Controls.TextEdit.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Controls.TextInput.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Drawing.Brush.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Drawing.SolidColor.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Drawing.Stroke.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Effects.DropShadow.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Effects.Effect.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Elements.Alignment.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Elements.Element.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Elements.HitTestMode.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Elements.SizeUnit.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Elements.TextAlignment.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Elements.TextWrapping.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Font.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Gestures.LinearRangeBehavior.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Gestures.Tapped.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Gestures.WhilePressed.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Input.Focus.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.ITranslationMode.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Layer.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.LayoutRole.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Layouts.Dock.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Resources.ResourceBinding-1.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Scaling.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Style.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.StyleProperty-2.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.StylePropertyWithUnit-3.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Theme.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Transform.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Translation.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.TranslationModes.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Triggers.Actions.GiveFocus.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Triggers.Actions.TriggerAction.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Triggers.ProgressAnimation.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Triggers.Trigger.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Triggers.WhileBool.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Triggers.WhileContainsText.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Triggers.WhileDisabled.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Triggers.WhileFalse.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Triggers.WhileFocused.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Triggers.WhileFocusWithin.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Fuse.Triggers.WhileInteracting.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Uno.BundleFile.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Uno.Color.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Uno.Double.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Uno.Float.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Uno.Int.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Uno.Object.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Uno.String.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Uno.UX.BundleFileSource.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Uno.UX.Property-1.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Uno.UX.Resource.h
.uno/Fuse.BasicTheme.g.cpp.o: include/Uno.UX.Template-1.h
.uno/Fuse.BasicTheme.g.cpp.o: jni/Fuse.BasicTheme.g.cpp flags.txt | .uno
	echo Fuse.BasicTheme.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.BasicTheme.g.cpp.o -c jni/Fuse.BasicTheme.g.cpp

.uno/Fuse.Camera.g.cpp.o: include/Android.Base.Types.String.h
.uno/Fuse.Camera.g.cpp.o: include/Android.Base.Wrappers.IJWrapper.h
.uno/Fuse.Camera.g.cpp.o: include/Android.com.fuse.Native.Camera.h
.uno/Fuse.Camera.g.cpp.o: include/Android.com.fuse.Native.CameraTask.h
.uno/Fuse.Camera.g.cpp.o: include/Fuse.Camera.AndroidCameraImpl.DispatchTakePicture.h
.uno/Fuse.Camera.g.cpp.o: include/Fuse.Camera.AndroidCameraImpl.h
.uno/Fuse.Camera.g.cpp.o: include/Fuse.Camera.AndroidCameraImpl.TakePictureTask.h
.uno/Fuse.Camera.g.cpp.o: include/Fuse.Camera.Camera.h
.uno/Fuse.Camera.g.cpp.o: include/Fuse.Camera.PictureResult.h
.uno/Fuse.Camera.g.cpp.o: include/Fuse.Camera.TakePictureHelpers.h
.uno/Fuse.Camera.g.cpp.o: include/Fuse.Camera.TakePictureOptions.h
.uno/Fuse.Camera.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Camera.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Camera.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Camera.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Camera.g.cpp.o: include/Uno.Int2.h
.uno/Fuse.Camera.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Camera.g.cpp.o: include/Uno.String.h
.uno/Fuse.Camera.g.cpp.o: include/Uno.Threading.Future-1.h
.uno/Fuse.Camera.g.cpp.o: include/Uno.Threading.Promise-1.h
.uno/Fuse.Camera.g.cpp.o: jni/Fuse.Camera.g.cpp flags.txt | .uno
	echo Fuse.Camera.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Camera.g.cpp.o -c jni/Fuse.Camera.g.cpp

.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Controls.FallbackTextEdit.LineCache.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Controls.FallbackTextEdit.LineCacheLine.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Controls.FallbackTextEdit.LineCachePasswordTransform.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Controls.FallbackTextEdit.LineCacheTransform.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Controls.FallbackTextEdit.TextEditVisual.DegreeSpan.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Controls.FallbackTextEdit.TextEditVisual.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Controls.FallbackTextEdit.TextEditVisual.SwipeGestureHelper.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Controls.FallbackTextEdit.TextPosition.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Controls.FallbackTextEdit.TextSpan.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Controls.FallbackTextEdit.TextWindow.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Controls.FallbackTextEdit.VisualTextTransform.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Controls.Graphics.DefaultTextVisual.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Controls.Graphics.Visual.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Controls.Internal.DefaultTextRenderer.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Controls.Internal.WordWrapInfo.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Controls.Internal.WordWrapper.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Controls.Internal.WrappedLine.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Controls.TextControl.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.DrawContext.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Drawing.Brush.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Drawing.Primitives.Rectangle.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Drawing.SolidColor.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Elements.Element.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Elements.Internal.ElementDraw.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Elements.TextAlignment.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Elements.TextWrapping.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Font.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.HitTestContext.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Input.Focus.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Input.FocusGainedArgs.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Input.FocusGainedHandler.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Input.FocusLostArgs.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Input.FocusLostHandler.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Input.Keyboard.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Input.KeyEventArgs.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Input.KeyPressedArgs.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Input.KeyPressedHandler.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Input.Pointer.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Input.PointerEventArgs.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Input.PointerMovedArgs.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Input.PointerMovedHandler.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Input.PointerPressedArgs.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Input.PointerPressedHandler.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Input.PointerReleasedArgs.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Input.PointerReleasedHandler.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Input.TextEnteredArgs.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Input.TextEnteredHandler.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Input.TextService.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Internal.RectExtensions.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.InvalidateLayoutReason.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.LayoutParams.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.NodeEvent-2.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.NodeEventArgs.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Fuse.Time.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Application.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Char.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Collections.EnumerableExtensions.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Platform.Key.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Platform.Window.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Rect.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.String.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.UX.ValueChangedArgs-1.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.UX.ValueChangedHandler-1.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: include/Uno.Vector.h
.uno/Fuse.Controls.FallbackTextEdit.g.cpp.o: jni/Fuse.Controls.FallbackTextEdit.g.cpp flags.txt | .uno
	echo Fuse.Controls.FallbackTextEdit.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Controls.FallbackTextEdit.g.cpp.o -c jni/Fuse.Controls.FallbackTextEdit.g.cpp

.uno/Fuse.Controls.g.cpp.o: include/_root.FuseControls_FuseDrawingSolidColor_float4_Color_Property.h
.uno/Fuse.Controls.g.cpp.o: include/_root.FuseControls_FuseNode_bool_IsEnabled_Property.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Animations.AnimationVariant.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Animations.Animator.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Animations.Change-1.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Animations.Easing.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Animations.Keyframe.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Animations.Move.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Animations.Scale.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Animations.TrackAnimator.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Animations.TransformAnimator-1.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.AppBase.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.BeginRemoveArgs.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Behavior.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.BackButton.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.BeginRemoveArgsImpl.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.BottomBarBackground.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.BottomFrameBackground.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.BufferedWebViewCall.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Button.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Circle.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ClientPanel.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ContentControl.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Control.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.DefaultSwitchBehavior.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.DockPanel.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.EdgeNavigator.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Ellipse.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.FallbackWebViewClient.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.FileVideoSource.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.FillRule.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.FitMode.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.GraphicsView.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Grid.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.HTML.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Image.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ISourceReceiver.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.IWebView.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.JavaScriptCall.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.KeyframeAccessors.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.LoadHtmlCall.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.MapView.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.MultiLayout.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.MultiLayoutPanel.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.NativeViewHost.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.NavigationBar.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Number.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Page.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.PageControl.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.PageControl.Template.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.PageIndicator.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.PageIndicator.Template.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.PageIndicatorDot.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.PageIndicatorDotFactory.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Panel.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ParentControl.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Path.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.PathScaleMode.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Placeholder.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.PlainTextEdit.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.PropertyBinding-1.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.RangeControl.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.RangeControl2D.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Rectangle.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.RegularPolygon.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ScrollPositionChangedArgs.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ScrollPositionChangedHandler.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ScrollPropertyChangedArgs.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ScrollPropertyChangedHandler.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ScrollView.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ScrollViewer.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Shape.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Slider.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.StackPanel.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Star.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.StatusBarBackground.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Switch.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Text.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.TextBlock.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.TextControl.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.TextEdit.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.TextInput.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.TextInputActionArgs.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.TextInputActionHandler.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.TextInputActionStyle.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.TextInputActionType.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Toggle.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.ToggleControl.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.TopFrameBackground.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.UrlVideoSource.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Video.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.VideoSource.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.Viewbox.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.WebView.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Controls.WrapPanel.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.DrawContext.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.Brush.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.DynamicBrush.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.PathGeometry.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.ResampleMode.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.SolidColor.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Drawing.Stroke.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Elements.Alignment.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Elements.AlignmentHelpers.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Elements.BoxSizing.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Elements.Element.BoxSizingMode.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Elements.Element.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Elements.ElementBatchEntry.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Elements.ElementBatcher.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Elements.HitTestMode.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Elements.LayoutMasterBoxSizing.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Elements.SizeUnit.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Elements.StretchDirection.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Elements.StretchMode.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Elements.StretchSizing.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Elements.TextAlignment.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Elements.TextWrapping.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Elements.Visibility.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.FastMatrix.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Font.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Fonts.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.FrustumViewport.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Gestures.Clicked.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Gestures.Clicker.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Gestures.ClickerEventHandler.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Gestures.ScrollDirections.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Gestures.Scroller.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Gestures.Tapped.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Gestures.TappedArgs.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Gestures.TappedHandler.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.HitTestContext.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.IFrustum.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Input.Focus.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Input.FocusDelegator.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Input.FocusLostArgs.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Input.FocusLostHandler.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Input.FocusNavigationDirection.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Input.Pointer.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Input.PointerEventArgs.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Input.PointerMovedArgs.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Input.PointerMovedHandler.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Input.PointerPressedArgs.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Input.PointerPressedHandler.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Input.PointerReleasedArgs.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Input.PointerReleasedHandler.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Internal.Drawing.SolidRectangle.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Internal.IImageContainerOwner.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Internal.ImageContainer.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Internal.SizingContainer.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.InvalidateLayoutReason.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.ITranslationMode.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Layer.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.LayoutDependent.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.LayoutParams.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.LayoutRole.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Layouts.Column.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Layouts.Dock.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Layouts.DockLayout.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Layouts.FlowDirection.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Layouts.GridLayout.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Layouts.Layout.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Layouts.Layouts.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Layouts.Orientation.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Layouts.Row.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Layouts.StackLayout.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Layouts.StackLayoutMode.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Layouts.WrapLayout.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.ActivatingAnimation.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.EdgeNavigation.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.EnteringAnimation.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.ExitingAnimation.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.GoBack.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.HistoryChangedHandler.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.INavigation.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.LinearNavigation.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.NavigatedHandler.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.Navigation.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.NavigationArgs.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.NavigationEdge.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.NavigationGotoMode.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.NavigationMode.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.NavigationPageCountHandler.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.NavigationPageProgressHandler.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.NavigationPageProperty.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.StructuredNavigation.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.SwipeDirection.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.SwipeEnds.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.SwipeNavigate.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Navigation.WhileCanGoBack.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.NodeBounds.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.NodeEvent-2.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.OrthographicFrustum.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.PlacedArgs.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.PlacedHandler.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Properties.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.PropertyHandle.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Reactive.Each.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Resources.ImageSource.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Resources.ImageSourceErrorArgs.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Resources.ImageSourceErrorHandler.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Resources.ImageSourceState.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Resources.MemoryPolicy.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Scripting.BoolChangedArgs.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Scripting.DoubleChangedArgs.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Scripting.StringChangedArgs.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Style.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.StyleProperty-2.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.StylePropertyWithUnit-3.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Transform.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Translation.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.TranslationModes.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Triggers.Actions.TriggerAction.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Triggers.IValue-1.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Triggers.Trigger.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Triggers.WhileFailed.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Triggers.WhileLoading.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.Triggers.WhileTrigger.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Controls.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Action-2.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Char.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Collections.ObservableList-1.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Comparison-1.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.EventHandler-1.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Func-2.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Geometry.Ray.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Platform.SystemUI.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Platform.SystemUIWillResizeEventArgs.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Platform.TextInputHint.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Predicate-1.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Rect.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.String.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.UX.Factory.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.UX.ITemplate.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.UX.Property-1.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.UX.Template-1.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.UX.ValueChangedArgs-1.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.UX.ValueChangedHandler-1.h
.uno/Fuse.Controls.g.cpp.o: include/Uno.Vector.h
.uno/Fuse.Controls.g.cpp.o: jni/Fuse.Controls.g.cpp flags.txt | .uno
	echo Fuse.Controls.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Controls.g.cpp.o -c jni/Fuse.Controls.g.cpp

.uno/Fuse.Controls.Graphics.g.cpp.o: include/_root.FuseControls_bundle.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Controls.FillRule.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Controls.FitMode.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Controls.Graphics.CircleVisual.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Controls.Graphics.ControlVisual-1.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Controls.Graphics.DefaultTextVisual.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Controls.Graphics.EllipseVisual.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Controls.Graphics.ImageElementDraw.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Controls.Graphics.ImageVisual.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Controls.Graphics.LinearSliderBehavior.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Controls.Graphics.PathShapeVisual-1.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Controls.Graphics.PathVisual.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Controls.Graphics.RectangleVisual.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Controls.Graphics.RegularPolygonVisual.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Controls.Graphics.ShapeVisual-1.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Controls.Graphics.StarVisual.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Controls.Graphics.TextVisual.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Controls.Graphics.Visual.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Controls.Internal.DefaultTextRenderer.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Controls.Internal.WordWrapInfo.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Controls.Internal.WordWrapper.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Controls.Internal.WrappedLine.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Controls.PathScaleMode.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Controls.Shape.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Controls.TextControl.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.DrawContext.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Drawing.Antialiasing.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Drawing.Brush.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Drawing.PathGeometry.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Drawing.PathGeometryExtensions.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Drawing.PathGeometryRenderer.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Drawing.Primitives.Circle.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Drawing.Primitives.Rectangle.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Drawing.Primitives.Wedge.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Drawing.RendererContext.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Drawing.ResampleMode.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Drawing.Stroke.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Drawing.WindingRules.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Elements.Element.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Elements.Internal.Scale9Rectangle.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Elements.StretchMode.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Elements.TextAlignment.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Elements.TextWrapping.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.FastMatrix.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Font.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.HitTestContext.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Internal.ImageContainer.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Internal.SizingContainer.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.InvalidateLayoutReason.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.IViewport.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.LayoutParams.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.NodeBounds.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Fuse.Resources.ImageSource.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.ArgumentException.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Buffer.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Char.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Content.Fonts.FontFace.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Graphics.BlendOperand.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Graphics.PolygonFace.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Graphics.SamplerState.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Graphics.VertexAttributeType.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Int2.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Matrix.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Predicate-1.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Rect.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Runtime.Implementation.Internal.BufferConverters.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.String.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Type.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.UX.ValueChangedArgs-1.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.UX.ValueChangedHandler-1.h
.uno/Fuse.Controls.Graphics.g.cpp.o: include/Uno.Vector.h
.uno/Fuse.Controls.Graphics.g.cpp.o: jni/Fuse.Controls.Graphics.g.cpp flags.txt | .uno
	echo Fuse.Controls.Graphics.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Controls.Graphics.g.cpp.o -c jni/Fuse.Controls.Graphics.g.cpp

.uno/Fuse.Controls.Internal.g.cpp.o: include/Fuse.Controls.Internal.DefaultTextRenderer.FontKey.h
.uno/Fuse.Controls.Internal.g.cpp.o: include/Fuse.Controls.Internal.DefaultTextRenderer.h
.uno/Fuse.Controls.Internal.g.cpp.o: include/Fuse.Controls.Internal.ProperTextTransform.h
.uno/Fuse.Controls.Internal.g.cpp.o: include/Fuse.Controls.Internal.WordWrapInfo.h
.uno/Fuse.Controls.Internal.g.cpp.o: include/Fuse.Controls.Internal.WordWrapper.h
.uno/Fuse.Controls.Internal.g.cpp.o: include/Fuse.Controls.Internal.WordWrapperWord.h
.uno/Fuse.Controls.Internal.g.cpp.o: include/Fuse.Controls.Internal.WrappedLine.h
.uno/Fuse.Controls.Internal.g.cpp.o: include/Fuse.DrawContext.h
.uno/Fuse.Controls.Internal.g.cpp.o: include/Fuse.Elements.TextAlignment.h
.uno/Fuse.Controls.Internal.g.cpp.o: include/Fuse.IViewport.h
.uno/Fuse.Controls.Internal.g.cpp.o: include/Uno.ArgumentException.h
.uno/Fuse.Controls.Internal.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Controls.Internal.g.cpp.o: include/Uno.Char.h
.uno/Fuse.Controls.Internal.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Controls.Internal.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Controls.Internal.g.cpp.o: include/Uno.Content.Fonts.BitmapFont.h
.uno/Fuse.Controls.Internal.g.cpp.o: include/Uno.Content.Fonts.FontFace.h
.uno/Fuse.Controls.Internal.g.cpp.o: include/Uno.Content.Fonts.FontFaceHelpers.h
.uno/Fuse.Controls.Internal.g.cpp.o: include/Uno.Content.Fonts.SpriteFontShader.h
.uno/Fuse.Controls.Internal.g.cpp.o: include/Uno.Content.Fonts.TextRenderer.h
.uno/Fuse.Controls.Internal.g.cpp.o: include/Uno.Content.Fonts.TextShader.h
.uno/Fuse.Controls.Internal.g.cpp.o: include/Uno.Content.Fonts.TextTransform.h
.uno/Fuse.Controls.Internal.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Controls.Internal.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Controls.Internal.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Controls.Internal.g.cpp.o: include/Uno.Graphics.PolygonFace.h
.uno/Fuse.Controls.Internal.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Controls.Internal.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Controls.Internal.g.cpp.o: include/Uno.Matrix.h
.uno/Fuse.Controls.Internal.g.cpp.o: include/Uno.String.h
.uno/Fuse.Controls.Internal.g.cpp.o: jni/Fuse.Controls.Internal.g.cpp flags.txt | .uno
	echo Fuse.Controls.Internal.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Controls.Internal.g.cpp.o -c jni/Fuse.Controls.Internal.g.cpp

.uno/Fuse.Designer.g.cpp.o: include/Fuse.Designer.AdvancedAttribute.h
.uno/Fuse.Designer.g.cpp.o: include/Fuse.Designer.ChildExtensionAttribute.h
.uno/Fuse.Designer.g.cpp.o: include/Fuse.Designer.ColorAttribute.h
.uno/Fuse.Designer.g.cpp.o: include/Fuse.Designer.ComponentOfAttribute.h
.uno/Fuse.Designer.g.cpp.o: include/Fuse.Designer.DefaultComponentAttribute.h
.uno/Fuse.Designer.g.cpp.o: include/Fuse.Designer.DefaultInstanceAttribute.h
.uno/Fuse.Designer.g.cpp.o: include/Fuse.Designer.DesignerNameAttribute.h
.uno/Fuse.Designer.g.cpp.o: include/Fuse.Designer.DragDropPriorityAttribute.h
.uno/Fuse.Designer.g.cpp.o: include/Fuse.Designer.ExtensionAttribute.h
.uno/Fuse.Designer.g.cpp.o: include/Fuse.Designer.GroupAttribute.h
.uno/Fuse.Designer.g.cpp.o: include/Fuse.Designer.HideAttribute.h
.uno/Fuse.Designer.g.cpp.o: include/Fuse.Designer.HidesAttribute.h
.uno/Fuse.Designer.g.cpp.o: include/Fuse.Designer.IconAttribute.h
.uno/Fuse.Designer.g.cpp.o: include/Fuse.Designer.InlineAttribute.h
.uno/Fuse.Designer.g.cpp.o: include/Fuse.Designer.IntervalAttribute.h
.uno/Fuse.Designer.g.cpp.o: include/Fuse.Designer.OptionalHideAttribute.h
.uno/Fuse.Designer.g.cpp.o: include/Fuse.Designer.PriorityAttribute.h
.uno/Fuse.Designer.g.cpp.o: include/Fuse.Designer.RangeAttribute.h
.uno/Fuse.Designer.g.cpp.o: include/Fuse.Designer.RecursionSafeAttribute.h
.uno/Fuse.Designer.g.cpp.o: include/Fuse.Designer.RequiredComponentAttribute.h
.uno/Fuse.Designer.g.cpp.o: include/Fuse.Designer.SpawnableAttribute.h
.uno/Fuse.Designer.g.cpp.o: include/Fuse.Designer.SpawnsAttribute.h
.uno/Fuse.Designer.g.cpp.o: include/Fuse.Designer.ThicknessAttribute.h
.uno/Fuse.Designer.g.cpp.o: include/Fuse.Designer.TransitionAttribute.h
.uno/Fuse.Designer.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Designer.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Designer.g.cpp.o: include/Uno.String.h
.uno/Fuse.Designer.g.cpp.o: jni/Fuse.Designer.g.cpp flags.txt | .uno
	echo Fuse.Designer.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Designer.g.cpp.o -c jni/Fuse.Designer.g.cpp

.uno/Fuse.Desktop.g.cpp.o: include/Fuse.AppBase.h
.uno/Fuse.Desktop.g.cpp.o: include/Fuse.Controls.FallbackTextEdit.TextEditVisual.h
.uno/Fuse.Desktop.g.cpp.o: include/Fuse.Controls.Graphics.DefaultTextVisual.h
.uno/Fuse.Desktop.g.cpp.o: include/Fuse.Controls.ParentControl.h
.uno/Fuse.Desktop.g.cpp.o: include/Fuse.Controls.PlainTextEdit.h
.uno/Fuse.Desktop.g.cpp.o: include/Fuse.Controls.TextBlock.h
.uno/Fuse.Desktop.g.cpp.o: include/Fuse.Desktop.DesktopRootViewport.h
.uno/Fuse.Desktop.g.cpp.o: include/Fuse.Desktop.NativeStyle.h
.uno/Fuse.Desktop.g.cpp.o: include/Fuse.Desktop.NativeStyle.Template.h
.uno/Fuse.Desktop.g.cpp.o: include/Fuse.Desktop.NativeStyle.Template1.Factory.h
.uno/Fuse.Desktop.g.cpp.o: include/Fuse.Desktop.NativeStyle.Template1.h
.uno/Fuse.Desktop.g.cpp.o: include/Fuse.DrawContext.h
.uno/Fuse.Desktop.g.cpp.o: include/Fuse.Input.Pointer.h
.uno/Fuse.Desktop.g.cpp.o: include/Fuse.Input.PointerEventData.h
.uno/Fuse.Desktop.g.cpp.o: include/Fuse.Input.PointerMovedArgs.h
.uno/Fuse.Desktop.g.cpp.o: include/Fuse.Input.PointerPressedArgs.h
.uno/Fuse.Desktop.g.cpp.o: include/Fuse.Input.PointerReleasedArgs.h
.uno/Fuse.Desktop.g.cpp.o: include/Fuse.Input.PointerWheelMovedArgs.h
.uno/Fuse.Desktop.g.cpp.o: include/Fuse.KeyboardBootstrapper.h
.uno/Fuse.Desktop.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Desktop.g.cpp.o: include/Fuse.NodeEventArgs.h
.uno/Fuse.Desktop.g.cpp.o: include/Fuse.StyleProperty-2.h
.uno/Fuse.Desktop.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Desktop.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Fuse.Desktop.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Desktop.g.cpp.o: include/Uno.EventHandler-1.h
.uno/Fuse.Desktop.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Desktop.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Desktop.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Desktop.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Desktop.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Desktop.g.cpp.o: include/Uno.Platform.KeyEventArgs.h
.uno/Fuse.Desktop.g.cpp.o: include/Uno.Platform.PointerEventArgs.h
.uno/Fuse.Desktop.g.cpp.o: include/Uno.Platform.PointerType.h
.uno/Fuse.Desktop.g.cpp.o: include/Uno.Platform.TextInputEventArgs.h
.uno/Fuse.Desktop.g.cpp.o: include/Uno.Platform.WheelDeltaMode.h
.uno/Fuse.Desktop.g.cpp.o: include/Uno.Platform.Window.h
.uno/Fuse.Desktop.g.cpp.o: include/Uno.String.h
.uno/Fuse.Desktop.g.cpp.o: include/Uno.UX.Factory.h
.uno/Fuse.Desktop.g.cpp.o: include/Uno.UX.Template-1.h
.uno/Fuse.Desktop.g.cpp.o: jni/Fuse.Desktop.g.cpp flags.txt | .uno
	echo Fuse.Desktop.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Desktop.g.cpp.o -c jni/Fuse.Desktop.g.cpp

.uno/Fuse.Drawing.Batching.g.cpp.o: include/Fuse.Drawing.Batching.Batch.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Fuse.Drawing.Batching.BatchHelpers.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Fuse.Drawing.Batching.BatchIndexBuffer.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Fuse.Drawing.Batching.BatchVertexBuffer.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Fuse.Drawing.Batching.Entry.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Fuse.Drawing.Batching.MeshBatcher.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Buffer.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Byte.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Byte2.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Byte4.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Collections.EnumerableExtensions.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Content.Models.IndexArray.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Content.Models.ModelMesh.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Content.Models.VertexAttributeArray.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Func-2.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Graphics.DeviceBuffer.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Graphics.IndexBuffer.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Graphics.IndexType.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Graphics.IndexTypeHelpers.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Graphics.PrimitiveType.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Graphics.VertexAttributeType.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Graphics.VertexAttributeTypeHelpers.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Int2.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Int3.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Int4.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.SByte.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.SByte2.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.SByte4.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Short.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Short2.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.Short4.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.String.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.UInt.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.UShort.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.UShort2.h
.uno/Fuse.Drawing.Batching.g.cpp.o: include/Uno.UShort4.h
.uno/Fuse.Drawing.Batching.g.cpp.o: jni/Fuse.Drawing.Batching.g.cpp flags.txt | .uno
	echo Fuse.Drawing.Batching.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Drawing.Batching.g.cpp.o -c jni/Fuse.Drawing.Batching.g.cpp

.uno/Fuse.Drawing.g.cpp.o: include/_root.FuseDrawing_bundle.h
.uno/Fuse.Drawing.g.cpp.o: include/_root.FuseDrawingPolygons_bundle.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.DrawContext.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.Antialiasing.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.BezierOp.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.BlendMode.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.BlendModeHelpers.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.Border.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.Brush.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.Brushes.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.ButtCap.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.Cache-1.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.ClosePath.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.Colors.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.Contour.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.ContourEnumerable.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.ContourEnumerator.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.ContourTerminator.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.CurveTo.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.DynamicBrush.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.EllipseFactory.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.GradientStop.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.HorizontalLineTo.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.ImageFill.DrawParams.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.ImageFill.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.ISolidColor.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.LinearGradient.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.LinearGradientDrawable.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.LineCap.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.LineCapImpl.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.LineJoin.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.LineJoinImpl.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.LineTo.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.MiterJoin.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.MoveTo.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.NonConsecutiveEnumerable.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.NonConsecutiveEnumerator.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.NonConsecutiveExtension.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.PathGeometry.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.PathGeometryExtensions.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.PathGeometryParser.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.PathGeometryRenderer.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.Polygon.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.PolygonDrawable.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.PolygonFiller.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.RectangleFactory.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.RegularPolygonFactory.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.RendererContext.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.ResampleMode.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.RoundCap.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.SmoothCurveTo.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.SolidColor.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.StarFactory.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.StaticBrush.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.StaticSolidColor.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.Stroke.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.StrokeAdjustment.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.StrokeAlignment.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.Tesselation.Face.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.Tesselation.HalfEdge.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.Tesselation.Mesh.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.Tesselation.MeshBuilder.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.Tesselation.Vertex.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.Token.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.Util.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.VerticalLineTo.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Drawing.WindingRules.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Elements.Alignment.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Elements.StretchDirection.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Elements.StretchMode.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.FramebufferPool.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Internal.ImageContainer.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Internal.SizingContainer.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Resources.ImageSource.h
.uno/Fuse.Drawing.g.cpp.o: include/Fuse.Resources.MemoryPolicy.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Buffer.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Char.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Collections.Dictionary-2.Enumerator.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Collections.Dictionary-2.ValueCollection.Enumerator.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Collections.Dictionary-2.ValueCollection.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Collections.EmptyEnumerable-1.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Collections.EnumerableExtensions.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Collections.ObservableList-1.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Color.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Content.Models.IndexArray.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Content.Models.ModelMesh.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Content.Models.VertexAttributeArray.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Float2x2.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Func-2.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Func-3.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Geometry.Collision2D.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Geometry.CubicBezier.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Geometry.Triangle2D.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Graphics.BlendOperand.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Graphics.DeviceBuffer.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Graphics.Format.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Graphics.Framebuffer.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Graphics.PolygonFace.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Graphics.PolygonWinding.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Graphics.PrimitiveType.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Graphics.VertexAttributeType.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Int2.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.InvalidOperationException.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.NotImplementedException.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Predicate-1.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Rect.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Runtime.Implementation.Internal.BufferConverters.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.String.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.UInt.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Fuse.Drawing.g.cpp.o: include/Uno.Vector.h
.uno/Fuse.Drawing.g.cpp.o: jni/Fuse.Drawing.g.cpp flags.txt | .uno
	echo Fuse.Drawing.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Drawing.g.cpp.o -c jni/Fuse.Drawing.g.cpp

.uno/Fuse.Drawing.Internal.g.cpp.o: include/Fuse.Drawing.Internal.Float2Buffer.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Fuse.Drawing.Internal.Float3Buffer.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Fuse.Drawing.Internal.FloatBuffer.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Fuse.Drawing.Internal.MultiBuffer.Field.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Fuse.Drawing.Internal.MultiBuffer.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Fuse.Drawing.Internal.MultiBuffer.Setter.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Fuse.Drawing.Internal.TypedBuffer.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Fuse.Drawing.Internal.UShortBuffer.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Buffer.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Byte.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Graphics.DeviceBuffer.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Graphics.IndexBuffer.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Graphics.VertexAttributeType.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Uno.Short.h
.uno/Fuse.Drawing.Internal.g.cpp.o: include/Uno.UShort.h
.uno/Fuse.Drawing.Internal.g.cpp.o: jni/Fuse.Drawing.Internal.g.cpp flags.txt | .uno
	echo Fuse.Drawing.Internal.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Drawing.Internal.g.cpp.o -c jni/Fuse.Drawing.Internal.g.cpp

.uno/Fuse.Drawing.Meshes.g.cpp.o: include/Fuse.Drawing.Meshes.MeshGenerator.h
.uno/Fuse.Drawing.Meshes.g.cpp.o: include/Fuse.Drawing.Meshes.MeshTools.h
.uno/Fuse.Drawing.Meshes.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Drawing.Meshes.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Drawing.Meshes.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.Drawing.Meshes.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Fuse.Drawing.Meshes.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.Drawing.Meshes.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
.uno/Fuse.Drawing.Meshes.g.cpp.o: include/Uno.Content.Models.IndexArray.h
.uno/Fuse.Drawing.Meshes.g.cpp.o: include/Uno.Content.Models.ModelMesh.h
.uno/Fuse.Drawing.Meshes.g.cpp.o: include/Uno.Content.Models.VertexAttributeArray.h
.uno/Fuse.Drawing.Meshes.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Drawing.Meshes.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Drawing.Meshes.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Drawing.Meshes.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Drawing.Meshes.g.cpp.o: include/Uno.Graphics.PrimitiveType.h
.uno/Fuse.Drawing.Meshes.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Drawing.Meshes.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Drawing.Meshes.g.cpp.o: include/Uno.Quaternion.h
.uno/Fuse.Drawing.Meshes.g.cpp.o: include/Uno.String.h
.uno/Fuse.Drawing.Meshes.g.cpp.o: include/Uno.UShort.h
.uno/Fuse.Drawing.Meshes.g.cpp.o: include/Uno.Vector.h
.uno/Fuse.Drawing.Meshes.g.cpp.o: jni/Fuse.Drawing.Meshes.g.cpp flags.txt | .uno
	echo Fuse.Drawing.Meshes.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Drawing.Meshes.g.cpp.o -c jni/Fuse.Drawing.Meshes.g.cpp

.uno/Fuse.Drawing.Primitives.g.cpp.o: include/_root.FuseDrawingPrimitives_bundle.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.DrawContext.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.BlendMode.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.BlendModeHelpers.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Brush.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.DynamicBrush.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.ImageFill.DrawParams.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.ImageFill.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Internal.Float2Buffer.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Internal.FloatBuffer.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Internal.TypedBuffer.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Internal.UShortBuffer.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.LinearGradient.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitives.Circle.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitives.ConcaveWedgeCoverage.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitives.ConvexWedgeCoverage.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitives.Coverage.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitives.FillCoverage.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitives.LimitCoverage.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitives.OneLimitCoverage.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitives.Rectangle.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitives.StrokeCoverage.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitives.Wedge.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Primitives.WedgeCoverage.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.SolidColor.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.StaticSolidColor.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Drawing.Stroke.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Elements.Element.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Buffer.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Graphics.BlendOperand.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Graphics.DeviceBuffer.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Graphics.Framebuffer.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Graphics.IndexBuffer.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Graphics.IndexType.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Graphics.PolygonFace.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Graphics.VertexAttributeType.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Int2.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.String.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.UShort.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: include/Uno.Vector.h
.uno/Fuse.Drawing.Primitives.g.cpp.o: jni/Fuse.Drawing.Primitives.g.cpp flags.txt | .uno
	echo Fuse.Drawing.Primitives.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Drawing.Primitives.g.cpp.o -c jni/Fuse.Drawing.Primitives.g.cpp

.uno/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Fuse.Drawing.Tesselation.Collections.ActiveRegionDict.h
.uno/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Fuse.Drawing.Tesselation.Collections.Dict-1.h
.uno/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Fuse.Drawing.Tesselation.Collections.DictNode-1.h
.uno/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Fuse.Drawing.Tesselation.Collections.DictNodeEnumerable-1.h
.uno/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Fuse.Drawing.Tesselation.Collections.LinkedListEnumerable-1.h
.uno/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Fuse.Drawing.Tesselation.Collections.LinkedListEnumerator-1.h
.uno/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Fuse.Drawing.Tesselation.Collections.PriorityQueue-1.h
.uno/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Fuse.Drawing.Tesselation.Collections.VertexQueue.h
.uno/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Fuse.Drawing.Tesselation.Geom.h
.uno/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Fuse.Drawing.Tesselation.HalfEdge.h
.uno/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Fuse.Drawing.Tesselation.Mesh.h
.uno/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Fuse.Drawing.Tesselation.Sweep.h
.uno/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Fuse.Drawing.Tesselation.Vertex.h
.uno/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Uno.ArgumentException.h
.uno/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Uno.Collections.EnumerableExtensions.h
.uno/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Uno.Func-2.h
.uno/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Drawing.Tesselation.Collections.g.cpp.o: include/Uno.String.h
.uno/Fuse.Drawing.Tesselation.Collections.g.cpp.o: jni/Fuse.Drawing.Tesselation.Collections.g.cpp flags.txt | .uno
	echo Fuse.Drawing.Tesselation.Collections.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Drawing.Tesselation.Collections.g.cpp.o -c jni/Fuse.Drawing.Tesselation.Collections.g.cpp

.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Fuse.Drawing.Contour.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Fuse.Drawing.Tesselation.ActiveRegion.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Fuse.Drawing.Tesselation.Collections.ActiveRegionDict.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Fuse.Drawing.Tesselation.Collections.Dict-1.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Fuse.Drawing.Tesselation.Collections.DictNode-1.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Fuse.Drawing.Tesselation.Collections.PriorityQueue-1.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Fuse.Drawing.Tesselation.Collections.VertexQueue.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Fuse.Drawing.Tesselation.EdgeLoopEnumerable.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Fuse.Drawing.Tesselation.EdgesEnumerable.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Fuse.Drawing.Tesselation.Face.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Fuse.Drawing.Tesselation.FacesEnumerable.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Fuse.Drawing.Tesselation.Geom.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Fuse.Drawing.Tesselation.HalfEdge.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Fuse.Drawing.Tesselation.Mesh.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Fuse.Drawing.Tesselation.MeshBuilder.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Fuse.Drawing.Tesselation.OriginEnumerable.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Fuse.Drawing.Tesselation.Sweep.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Fuse.Drawing.Tesselation.Vertex.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Fuse.Drawing.Tesselation.VerticesEnumerable.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Uno.Collections.EnumerableExtensions.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Uno.Func-2.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Uno.Geometry.Triangle2D.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Uno.Predicate-1.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: include/Uno.String.h
.uno/Fuse.Drawing.Tesselation.g.cpp.o: jni/Fuse.Drawing.Tesselation.g.cpp flags.txt | .uno
	echo Fuse.Drawing.Tesselation.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Drawing.Tesselation.g.cpp.o -c jni/Fuse.Drawing.Tesselation.g.cpp

.uno/Fuse.Effects.g.cpp.o: include/_root.FuseEffects_bundle.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.DrawContext.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Effects.BasicEffect.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Effects.Blur.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Effects.Desaturate.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Effects.DropShadow.Blitter.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Effects.DropShadow.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Effects.Effect.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Effects.EffectHelpers.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Effects.EffectType.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Effects.Halftone.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Effects.Mask.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Effects.Mask.MaskMode.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Elements.Element.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Elements.StretchMode.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.FramebufferPool.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Internal.ImageContainer.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.IViewport.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Effects.g.cpp.o: include/Fuse.Resources.ImageSource.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Buffer.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Float2x2.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Graphics.BlendOperand.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Graphics.Format.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Graphics.Framebuffer.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Graphics.IndexBuffer.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Graphics.IndexType.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Graphics.PolygonFace.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Graphics.SamplerState.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Graphics.VertexAttributeType.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Int2.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Matrix.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Rect.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Runtime.Implementation.Internal.BufferConverters.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.UShort.h
.uno/Fuse.Effects.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Fuse.Effects.g.cpp.o: jni/Fuse.Effects.g.cpp flags.txt | .uno
	echo Fuse.Effects.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Effects.g.cpp.o -c jni/Fuse.Effects.g.cpp

.uno/Fuse.Elements.g.cpp.o: include/_root.FuseControls_bundle.h
.uno/Fuse.Elements.g.cpp.o: include/_root.FuseElements_bundle.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Animations.IResizeMode.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.CacheFramebuffer.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.DrawContext.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Effects.Effect.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Effects.EffectType.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Alignment.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.AlignmentHelpers.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.BoxPlacement.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.BoxSizing.ConstraintFlags.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.BoxSizing.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Cache.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.CacheHelper.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.CacheTile.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.CachingMode.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.DisplayHelpers.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Element.BoxSizingMode.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Element.GMSCacheItem.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Element.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.ElementAtlas.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.ElementAtlasFramebuffer.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.ElementAtlasFramebufferPool.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.ElementAtlasFramebufferPoolEntry.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.ElementAtlasFramebufferPoolImpl.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.ElementBatch.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.ElementBatchEntry.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.ElementBatcher.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.FillAspectBoxSizing.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.HitTestMode.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.IElementBatchDrawable.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.InteractiveTransform.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.ITransformOrigin.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.LayoutMasterBoxSizing.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.LayoutMasterBoxSizing.LayoutMasterData.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.LayoutMasterMode.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.LimitBoxSizing.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.NoImplicitMaxBoxSizing.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.PreplacementArgs.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.PreplacementHandler.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.SimpleAlignment.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.SingleNodeDrawable.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.SizeUnit.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.StandardBoxSizing.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.StretchDirection.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.StretchMode.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.StretchSizing.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.TextAlignment.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.TextureAtlas.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.TextWrapping.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.TransformOrigins.AnchorOrigin.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.TransformOrigins.BoxCenter.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.TransformOrigins.CenterOrigin.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.TransformOrigins.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.TransformOrigins.TopLeftOrigin.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.TranslationModes.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.TranslationModes.OffsetMode.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.TranslationModes.PositionOffsetMode.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.TranslationModes.RelativeResizeChangeMode.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.TranslationModes.SizeFactorMode.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.TranslationModes.TransformOriginOffsetMode.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Viewport.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Elements.Visibility.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.FastMatrix.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.FixedViewport.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.FramebufferPool.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.FrustumViewport.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.HitTestContext.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.IFrustum.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.InvalidateLayoutReason.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.IScalingMode.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.ITranslationMode.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.IViewport.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.LayoutDependent.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.LayoutParams.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.NodeBounds.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.OrthographicFrustum.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.PerspectiveFrustum.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.PlacedArgs.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.PlacedHandler.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Properties.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.PropertyHandle.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Resources.DisposalManager.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.RootViewport.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Scaling.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.StyleProperty-2.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.StylePropertyWithUnit-3.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Transform.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.TransformModeFlags.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.Translation.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Elements.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Action-2.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Buffer.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Collections.LinkedList-1.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Collections.LinkedListNode-1.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Collections.ObservableList-1.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Diagnostics.DebugMessageType.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Func-2.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Geometry.Ray.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Graphics.BlendOperand.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Graphics.DeviceBuffer.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Graphics.Format.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Graphics.Framebuffer.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Graphics.FramebufferFlags.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Graphics.IndexBuffer.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Graphics.IndexType.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Graphics.PolygonFace.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Graphics.RenderTarget.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Graphics.VertexAttributeType.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Int2.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Matrix.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Platform2.Display.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Rect.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Recti.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Runtime.Implementation.Internal.BufferConverters.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.String.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.UShort.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.UX.ValueChangedArgs-1.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.UX.ValueChangedHandler-1.h
.uno/Fuse.Elements.g.cpp.o: include/Uno.Vector.h
.uno/Fuse.Elements.g.cpp.o: jni/Fuse.Elements.g.cpp flags.txt | .uno
	echo Fuse.Elements.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Elements.g.cpp.o -c jni/Fuse.Elements.g.cpp

.uno/Fuse.Elements.Internal.g.cpp.o: include/_root.FuseControls_bundle.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/_root.FuseElements_bundle.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Fuse.DrawContext.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Fuse.Elements.Element.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Fuse.Elements.Internal.ElementDraw.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Fuse.Elements.Internal.Scale9Rectangle.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Fuse.IViewport.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.Buffer.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.Graphics.BlendOperand.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.Graphics.IndexBuffer.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.Graphics.IndexType.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.Graphics.PolygonFace.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.Graphics.VertexAttributeType.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.Matrix.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.Runtime.Implementation.Internal.BufferConverters.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h
.uno/Fuse.Elements.Internal.g.cpp.o: include/Uno.UShort.h
.uno/Fuse.Elements.Internal.g.cpp.o: jni/Fuse.Elements.Internal.g.cpp flags.txt | .uno
	echo Fuse.Elements.Internal.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Elements.Internal.g.cpp.o -c jni/Fuse.Elements.Internal.g.cpp

.uno/Fuse.Entities.Designer.g.cpp.o: include/Fuse.Entities.Designer.AnimationHelpers.h
.uno/Fuse.Entities.Designer.g.cpp.o: include/Fuse.Entities.Designer.PreloadedResources.h
.uno/Fuse.Entities.Designer.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Entities.Designer.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Entities.Designer.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Entities.Designer.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Entities.Designer.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Entities.Designer.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Entities.Designer.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Entities.Designer.g.cpp.o: include/Uno.String.h
.uno/Fuse.Entities.Designer.g.cpp.o: jni/Fuse.Entities.Designer.g.cpp flags.txt | .uno
	echo Fuse.Entities.Designer.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Entities.Designer.g.cpp.o -c jni/Fuse.Entities.Designer.g.cpp

.uno/Fuse.Entities.Filters.g.cpp.o: include/_root.FuseEffects_bundle.h
.uno/Fuse.Entities.Filters.g.cpp.o: include/_root.FuseEntities_bundle.h
.uno/Fuse.Entities.Filters.g.cpp.o: include/Fuse.DrawContext.h
.uno/Fuse.Entities.Filters.g.cpp.o: include/Fuse.Entities.Filters.Blitter.h
.uno/Fuse.Entities.Filters.g.cpp.o: include/Fuse.Entities.Filters.Blur.h
.uno/Fuse.Entities.Filters.g.cpp.o: include/Fuse.Entities.Filters.FindEdges.h
.uno/Fuse.Entities.Filters.g.cpp.o: include/Fuse.FramebufferPool.h
.uno/Fuse.Entities.Filters.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Entities.Filters.g.cpp.o: include/Uno.Buffer.h
.uno/Fuse.Entities.Filters.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Entities.Filters.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Entities.Filters.g.cpp.o: include/Uno.Graphics.BlendOperand.h
.uno/Fuse.Entities.Filters.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Fuse.Entities.Filters.g.cpp.o: include/Uno.Graphics.Format.h
.uno/Fuse.Entities.Filters.g.cpp.o: include/Uno.Graphics.Framebuffer.h
.uno/Fuse.Entities.Filters.g.cpp.o: include/Uno.Graphics.IndexBuffer.h
.uno/Fuse.Entities.Filters.g.cpp.o: include/Uno.Graphics.IndexType.h
.uno/Fuse.Entities.Filters.g.cpp.o: include/Uno.Graphics.PolygonFace.h
.uno/Fuse.Entities.Filters.g.cpp.o: include/Uno.Graphics.RenderTarget.h
.uno/Fuse.Entities.Filters.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Fuse.Entities.Filters.g.cpp.o: include/Uno.Graphics.VertexAttributeType.h
.uno/Fuse.Entities.Filters.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Fuse.Entities.Filters.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Entities.Filters.g.cpp.o: include/Uno.Int2.h
.uno/Fuse.Entities.Filters.g.cpp.o: include/Uno.Runtime.Implementation.Internal.BufferConverters.h
.uno/Fuse.Entities.Filters.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h
.uno/Fuse.Entities.Filters.g.cpp.o: include/Uno.UShort.h
.uno/Fuse.Entities.Filters.g.cpp.o: jni/Fuse.Entities.Filters.g.cpp flags.txt | .uno
	echo Fuse.Entities.Filters.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Entities.Filters.g.cpp.o -c jni/Fuse.Entities.Filters.g.cpp

.uno/Fuse.Entities.g.cpp.o: include/_root.FuseEntities_bundle.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.DrawArgs.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.DrawContext.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.DrawHandler.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Drawing.Batching.Batch.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Drawing.Batching.BatchHelpers.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Drawing.Batching.BatchVertexBuffer.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Drawing.Batching.MeshBatcher.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Entities.Component.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Entities.DefaultMaterial.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Entities.DirectArrayMeshIntersecter.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Entities.DirectionalLight.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Entities.Entity.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Entities.Entry.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Entities.EnvironmentLight.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Entities.Frustum.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Entities.ILightVisitor.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Entities.IndexedArrayMeshIntersecter.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Entities.Internal.SceneGraphBuilder.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Entities.Internal.SceneGraphBuilderVisitor.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Entities.Light.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Entities.Material.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Entities.Mesh.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Entities.MeshBatchingEngine.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Entities.MeshHitTestMode.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Entities.MeshRenderer.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Entities.ModelMeshCollision.Direct.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Entities.ModelMeshCollision.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Entities.ModelMeshCollision.Indexed.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Entities.ModelMeshHelpers.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Entities.NodeExtensions.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Entities.PointLight.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Entities.Raycasting.EntityVisitor.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Entities.Raycasting.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Entities.RenderNode.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Entities.RenderToTexture.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Entities.Scene.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Entities.SkinnedMeshRenderer.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Entities.Skinner.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Entities.SpotLight.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Entities.Transform3D.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Entities.TriangleMeshIntersecter.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Entities.VisitAction-1.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Entities.VisitPredicate-1.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Entities.VisitType-1.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.FastMatrix.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.FramebufferPool.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.FrustumViewport.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.HitTestContext.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.HitTestHandler.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.IFrustum.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.InvalidateLayoutReason.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.IViewport.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.LayoutParams.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.NodeBounds.h
.uno/Fuse.Entities.g.cpp.o: include/Fuse.Transform.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Application.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Buffer.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Collections.Dictionary-2.Enumerator.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Collections.EnumerableExtensions.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Collections.ObservableList-1.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Content.Models.IndexArray.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Content.Models.Model.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Content.Models.ModelDrawable.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Content.Models.ModelMaterial.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Content.Models.ModelMesh.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Content.Models.VertexAttributeArray.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.EventHandler-1.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Geometry.Box.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Geometry.Collision.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Geometry.Frustum.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Geometry.Plane.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Geometry.Ray.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Geometry.Sphere.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Geometry.Triangle.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Graphics.BlendOperand.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Graphics.Format.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Graphics.Framebuffer.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Graphics.FramebufferFlags.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Graphics.IndexBuffer.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Graphics.IndexType.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Graphics.PolygonFace.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Graphics.SamplerState.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Graphics.VertexAttributeType.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Matrix.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Platform.ClosingEventArgs.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Platform.Window.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Platform2.Display.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Predicate-1.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Quaternion.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Rect.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Runtime.Implementation.Internal.BufferConverters.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.String.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.UShort.h
.uno/Fuse.Entities.g.cpp.o: include/Uno.Vector.h
.uno/Fuse.Entities.g.cpp.o: jni/Fuse.Entities.g.cpp flags.txt | .uno
	echo Fuse.Entities.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Entities.g.cpp.o -c jni/Fuse.Entities.g.cpp

.uno/Fuse.Entities.Internal.g.cpp.o: include/Fuse.Entities.Component.h
.uno/Fuse.Entities.Internal.g.cpp.o: include/Fuse.Entities.DefaultMaterial.h
.uno/Fuse.Entities.Internal.g.cpp.o: include/Fuse.Entities.Entity.h
.uno/Fuse.Entities.Internal.g.cpp.o: include/Fuse.Entities.Internal.SceneGraphBuilder.h
.uno/Fuse.Entities.Internal.g.cpp.o: include/Fuse.Entities.Internal.SceneGraphBuilderVisitor.h
.uno/Fuse.Entities.Internal.g.cpp.o: include/Fuse.Entities.Material.h
.uno/Fuse.Entities.Internal.g.cpp.o: include/Fuse.Entities.Mesh.h
.uno/Fuse.Entities.Internal.g.cpp.o: include/Fuse.Entities.MeshRenderer.h
.uno/Fuse.Entities.Internal.g.cpp.o: include/Fuse.Entities.Transform3D.h
.uno/Fuse.Entities.Internal.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Entities.Internal.g.cpp.o: include/Fuse.Transform.h
.uno/Fuse.Entities.Internal.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Entities.Internal.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Fuse.Entities.Internal.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.Entities.Internal.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Fuse.Entities.Internal.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.Entities.Internal.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Entities.Internal.g.cpp.o: include/Uno.Collections.IListExtensions.h
.uno/Fuse.Entities.Internal.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Entities.Internal.g.cpp.o: include/Uno.Content.Models.Model.h
.uno/Fuse.Entities.Internal.g.cpp.o: include/Uno.Content.Models.ModelDrawable.h
.uno/Fuse.Entities.Internal.g.cpp.o: include/Uno.Content.Models.ModelNode.h
.uno/Fuse.Entities.Internal.g.cpp.o: include/Uno.Content.Models.ModelParameter-1.h
.uno/Fuse.Entities.Internal.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Entities.Internal.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Entities.Internal.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Entities.Internal.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.Entities.Internal.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Entities.Internal.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Entities.Internal.g.cpp.o: include/Uno.Matrix.h
.uno/Fuse.Entities.Internal.g.cpp.o: include/Uno.Quaternion.h
.uno/Fuse.Entities.Internal.g.cpp.o: jni/Fuse.Entities.Internal.g.cpp flags.txt | .uno
	echo Fuse.Entities.Internal.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Entities.Internal.g.cpp.o -c jni/Fuse.Entities.Internal.g.cpp

.uno/Fuse.Entities.Primitives.g.cpp.o: include/Fuse.Drawing.Meshes.MeshGenerator.h
.uno/Fuse.Entities.Primitives.g.cpp.o: include/Fuse.Entities.Mesh.h
.uno/Fuse.Entities.Primitives.g.cpp.o: include/Fuse.Entities.MeshHitTestMode.h
.uno/Fuse.Entities.Primitives.g.cpp.o: include/Fuse.Entities.Primitives.ConeRenderer.h
.uno/Fuse.Entities.Primitives.g.cpp.o: include/Fuse.Entities.Primitives.CubeRenderer.h
.uno/Fuse.Entities.Primitives.g.cpp.o: include/Fuse.Entities.Primitives.CylinderRenderer.h
.uno/Fuse.Entities.Primitives.g.cpp.o: include/Fuse.Entities.Primitives.SphereRenderer.h
.uno/Fuse.Entities.Primitives.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Entities.Primitives.g.cpp.o: include/Uno.Content.Models.ModelMesh.h
.uno/Fuse.Entities.Primitives.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Entities.Primitives.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Entities.Primitives.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Entities.Primitives.g.cpp.o: jni/Fuse.Entities.Primitives.g.cpp flags.txt | .uno
	echo Fuse.Entities.Primitives.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Entities.Primitives.g.cpp.o -c jni/Fuse.Entities.Primitives.g.cpp

.uno/Fuse.Entities.Processing.g.cpp.o: include/Fuse.Drawing.LineCap.h
.uno/Fuse.Entities.Processing.g.cpp.o: include/Fuse.Drawing.Polygon.h
.uno/Fuse.Entities.Processing.g.cpp.o: include/Fuse.Entities.Processing.Extrude.h
.uno/Fuse.Entities.Processing.g.cpp.o: include/Fuse.Entities.Processing.Stroke.h
.uno/Fuse.Entities.Processing.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Entities.Processing.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Entities.Processing.g.cpp.o: include/Uno.Content.Models.ModelMesh.h
.uno/Fuse.Entities.Processing.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Entities.Processing.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Entities.Processing.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Entities.Processing.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Entities.Processing.g.cpp.o: jni/Fuse.Entities.Processing.g.cpp flags.txt | .uno
	echo Fuse.Entities.Processing.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Entities.Processing.g.cpp.o -c jni/Fuse.Entities.Processing.g.cpp

.uno/Fuse.g.cpp.o: include/_root.FuseCore_bundle.h
.uno/Fuse.g.cpp.o: include/Android.android.animation.Animator.h
.uno/Fuse.g.cpp.o: include/Android.android.animation.TimeAnimator.h
.uno/Fuse.g.cpp.o: include/Android.android.animation.TimeAnimatorDLRTimeListener.h
.uno/Fuse.g.cpp.o: include/Android.android.animation.ValueAnimator.h
.uno/Fuse.g.cpp.o: include/Android.android.app.Activity.h
.uno/Fuse.g.cpp.o: include/Android.android.content.Intent.h
.uno/Fuse.g.cpp.o: include/Android.android.net.Uri.h
.uno/Fuse.g.cpp.o: include/Android.android.os.BuildDLRVERSION.h
.uno/Fuse.g.cpp.o: include/Android.android.view.Choreographer.h
.uno/Fuse.g.cpp.o: include/Android.android.view.ChoreographerDLRFrameCallback.h
.uno/Fuse.g.cpp.o: include/Android.Base.JNI.h
.uno/Fuse.g.cpp.o: include/Android.Base.Permissions.h
.uno/Fuse.g.cpp.o: include/Android.Base.PlatPermission.h
.uno/Fuse.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
.uno/Fuse.g.cpp.o: include/Android.Base.Primitives.ujclass.h
.uno/Fuse.g.cpp.o: include/Android.Base.Primitives.ujlong.h
.uno/Fuse.g.cpp.o: include/Android.Base.Primitives.ujobject.h
.uno/Fuse.g.cpp.o: include/Android.Base.Primitives.ujvalue.h
.uno/Fuse.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Fuse.g.cpp.o: include/Android.java.lang.String.h
.uno/Fuse.g.cpp.o: include/Android.java.lang.System.h
.uno/Fuse.g.cpp.o: include/Fuse.Android.NativeStyle.h
.uno/Fuse.g.cpp.o: include/Fuse.App.FrameCallback.h
.uno/Fuse.g.cpp.o: include/Fuse.App.h
.uno/Fuse.g.cpp.o: include/Fuse.App.TimeListener.h
.uno/Fuse.g.cpp.o: include/Fuse.AppBase.h
.uno/Fuse.g.cpp.o: include/Fuse.BeginRemoveArgs.h
.uno/Fuse.g.cpp.o: include/Fuse.BeginRemoveHandler.h
.uno/Fuse.g.cpp.o: include/Fuse.Behavior.h
.uno/Fuse.g.cpp.o: include/Fuse.Behavior.RootStatus.h
.uno/Fuse.g.cpp.o: include/Fuse.CacheFramebuffer.h
.uno/Fuse.g.cpp.o: include/Fuse.Controls.ContentControl.h
.uno/Fuse.g.cpp.o: include/Fuse.Controls.GraphicsView.h
.uno/Fuse.g.cpp.o: include/Fuse.DataContextChangedArgs.h
.uno/Fuse.g.cpp.o: include/Fuse.DataContextChangedHandler.h
.uno/Fuse.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.g.cpp.o: include/Fuse.DrawArgs.h
.uno/Fuse.g.cpp.o: include/Fuse.DrawContext.h
.uno/Fuse.g.cpp.o: include/Fuse.DrawHandler.h
.uno/Fuse.g.cpp.o: include/Fuse.DrawHelpers.h
.uno/Fuse.g.cpp.o: include/Fuse.FastMatrix.h
.uno/Fuse.g.cpp.o: include/Fuse.FixedViewport.h
.uno/Fuse.g.cpp.o: include/Fuse.Font.h
.uno/Fuse.g.cpp.o: include/Fuse.Fonts.h
.uno/Fuse.g.cpp.o: include/Fuse.FramebufferPool.h
.uno/Fuse.g.cpp.o: include/Fuse.FramebufferPoolImpl.h
.uno/Fuse.g.cpp.o: include/Fuse.FrustumViewport.h
.uno/Fuse.g.cpp.o: include/Fuse.GraphicsTheme.h
.uno/Fuse.g.cpp.o: include/Fuse.GraphicsWorker.h
.uno/Fuse.g.cpp.o: include/Fuse.HitTestCallback.h
.uno/Fuse.g.cpp.o: include/Fuse.HitTestContext.h
.uno/Fuse.g.cpp.o: include/Fuse.HitTestHandler.h
.uno/Fuse.g.cpp.o: include/Fuse.HitTestResult.h
.uno/Fuse.g.cpp.o: include/Fuse.IActualPlacement.h
.uno/Fuse.g.cpp.o: include/Fuse.IDataContext.h
.uno/Fuse.g.cpp.o: include/Fuse.IFlush.h
.uno/Fuse.g.cpp.o: include/Fuse.IFrustum.h
.uno/Fuse.g.cpp.o: include/Fuse.Input.Focus.h
.uno/Fuse.g.cpp.o: include/Fuse.Input.FocusNavigationDirection.h
.uno/Fuse.g.cpp.o: include/Fuse.Input.Keyboard.h
.uno/Fuse.g.cpp.o: include/Fuse.Input.TextService.h
.uno/Fuse.g.cpp.o: include/Fuse.Internal.FrustumMatrix.h
.uno/Fuse.g.cpp.o: include/Fuse.Internal.SimpleLock.h
.uno/Fuse.g.cpp.o: include/Fuse.InvalidateLayoutReason.h
.uno/Fuse.g.cpp.o: include/Fuse.IObjectContainer.h
.uno/Fuse.g.cpp.o: include/Fuse.IOutput-1.h
.uno/Fuse.g.cpp.o: include/Fuse.IScalingMode.h
.uno/Fuse.g.cpp.o: include/Fuse.ITransformMode.h
.uno/Fuse.g.cpp.o: include/Fuse.ITranslationMode.h
.uno/Fuse.g.cpp.o: include/Fuse.IViewport.h
.uno/Fuse.g.cpp.o: include/Fuse.KeyboardBootstrapper.h
.uno/Fuse.g.cpp.o: include/Fuse.Launcher.h
.uno/Fuse.g.cpp.o: include/Fuse.Layer.h
.uno/Fuse.g.cpp.o: include/Fuse.LayoutDependent.h
.uno/Fuse.g.cpp.o: include/Fuse.LayoutParams.Flags.h
.uno/Fuse.g.cpp.o: include/Fuse.LayoutParams.h
.uno/Fuse.g.cpp.o: include/Fuse.LayoutRole.h
.uno/Fuse.g.cpp.o: include/Fuse.MarginBoxDependent.h
.uno/Fuse.g.cpp.o: include/Fuse.MobileBootstrapping.h
.uno/Fuse.g.cpp.o: include/Fuse.NativeTheme.h
.uno/Fuse.g.cpp.o: include/Fuse.NativeWithFallbackTheme.CreateTheme.h
.uno/Fuse.g.cpp.o: include/Fuse.NativeWithFallbackTheme.h
.uno/Fuse.g.cpp.o: include/Fuse.Node.CancelInteractionsType.h
.uno/Fuse.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.g.cpp.o: include/Fuse.Node.HitTestRecord.h
.uno/Fuse.g.cpp.o: include/Fuse.Node.InteractionItem.h
.uno/Fuse.g.cpp.o: include/Fuse.Node.NodeBits.h
.uno/Fuse.g.cpp.o: include/Fuse.Node.RootStage.h
.uno/Fuse.g.cpp.o: include/Fuse.NodeBounds.h
.uno/Fuse.g.cpp.o: include/Fuse.NodeEvent-2.h
.uno/Fuse.g.cpp.o: include/Fuse.NodeEventArgs.h
.uno/Fuse.g.cpp.o: include/Fuse.NodeEventHandler.h
.uno/Fuse.g.cpp.o: include/Fuse.NodeEventMode.h
.uno/Fuse.g.cpp.o: include/Fuse.NodeListCache.h
.uno/Fuse.g.cpp.o: include/Fuse.OrthographicFrustum.h
.uno/Fuse.g.cpp.o: include/Fuse.PerspectiveFrustum.h
.uno/Fuse.g.cpp.o: include/Fuse.PlacedArgs.h
.uno/Fuse.g.cpp.o: include/Fuse.PlacedHandler.h
.uno/Fuse.g.cpp.o: include/Fuse.Preview.SelectionManager.h
.uno/Fuse.g.cpp.o: include/Fuse.Properties.h
.uno/Fuse.g.cpp.o: include/Fuse.PropertyHandle.h
.uno/Fuse.g.cpp.o: include/Fuse.PropertyState.h
.uno/Fuse.g.cpp.o: include/Fuse.RenderTargetEntry.h
.uno/Fuse.g.cpp.o: include/Fuse.RequestBringIntoViewArgs.h
.uno/Fuse.g.cpp.o: include/Fuse.RequestBringIntoViewHandler.h
.uno/Fuse.g.cpp.o: include/Fuse.RequiresRootedException.h
.uno/Fuse.g.cpp.o: include/Fuse.Resources.DisposalManager.h
.uno/Fuse.g.cpp.o: include/Fuse.Resources.DisposalRequest.h
.uno/Fuse.g.cpp.o: include/Fuse.Resources.ResourceRegistry.h
.uno/Fuse.g.cpp.o: include/Fuse.RootViewport.h
.uno/Fuse.g.cpp.o: include/Fuse.Rotation.h
.uno/Fuse.g.cpp.o: include/Fuse.Scaling.h
.uno/Fuse.g.cpp.o: include/Fuse.ScalingModes.h
.uno/Fuse.g.cpp.o: include/Fuse.ScalingModes.IdentityMode.h
.uno/Fuse.g.cpp.o: include/Fuse.Scripting.IEventSerializer.h
.uno/Fuse.g.cpp.o: include/Fuse.Scripting.NameRegistry.h
.uno/Fuse.g.cpp.o: include/Fuse.Shear.h
.uno/Fuse.g.cpp.o: include/Fuse.Stage.h
.uno/Fuse.g.cpp.o: include/Fuse.Style.h
.uno/Fuse.g.cpp.o: include/Fuse.StyleProperty.h
.uno/Fuse.g.cpp.o: include/Fuse.StyleProperty-2.h
.uno/Fuse.g.cpp.o: include/Fuse.StylePropertyWithUnit-3.h
.uno/Fuse.g.cpp.o: include/Fuse.Theme.h
.uno/Fuse.g.cpp.o: include/Fuse.Time.h
.uno/Fuse.g.cpp.o: include/Fuse.Timer.h
.uno/Fuse.g.cpp.o: include/Fuse.Transform.h
.uno/Fuse.g.cpp.o: include/Fuse.TransformModeFlags.h
.uno/Fuse.g.cpp.o: include/Fuse.Translation.h
.uno/Fuse.g.cpp.o: include/Fuse.TranslationModes.h
.uno/Fuse.g.cpp.o: include/Fuse.TranslationModes.LocalMode.h
.uno/Fuse.g.cpp.o: include/Fuse.TranslationModes.ParentSizeMode.h
.uno/Fuse.g.cpp.o: include/Fuse.TranslationModes.SizeMode.h
.uno/Fuse.g.cpp.o: include/Fuse.UnhandledExceptionArgs.h
.uno/Fuse.g.cpp.o: include/Fuse.UnhandledExceptionHandler.h
.uno/Fuse.g.cpp.o: include/Fuse.UpdateDispatcher.h
.uno/Fuse.g.cpp.o: include/Fuse.UpdateListener.h
.uno/Fuse.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.g.cpp.o: include/Fuse.UserEvent.h
.uno/Fuse.g.cpp.o: include/Fuse.UserEventArgs.h
.uno/Fuse.g.cpp.o: include/Fuse.UserEventDispatch.h
.uno/Fuse.g.cpp.o: include/Fuse.UserEventHandler.h
.uno/Fuse.g.cpp.o: include/OpenGL.GL.h
.uno/Fuse.g.cpp.o: include/OpenGL.GLClearBufferMask.h
.uno/Fuse.g.cpp.o: include/OpenGL.GLEnableCap.h
.uno/Fuse.g.cpp.o: include/OpenGL.GLError.h
.uno/Fuse.g.cpp.o: include/OpenGL.GLFramebufferHandle.h
.uno/Fuse.g.cpp.o: include/OpenGL.GLFramebufferTarget.h
.uno/Fuse.g.cpp.o: include/OpenGL.GLInteger4Name.h
.uno/Fuse.g.cpp.o: include/Uno.Action.h
.uno/Fuse.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.g.cpp.o: include/Uno.Action-2.h
.uno/Fuse.g.cpp.o: include/Uno.AggregateException.h
.uno/Fuse.g.cpp.o: include/Uno.Application.h
.uno/Fuse.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.g.cpp.o: include/Uno.Buffer.h
.uno/Fuse.g.cpp.o: include/Uno.BundleFile.h
.uno/Fuse.g.cpp.o: include/Uno.Byte.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.ConcurrentCollection-1.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.Dictionary-2.Enumerator.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.HashSet-1.Enumerator.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.HashSet-1.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.IListExtensions.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.ObservableList-1.h
.uno/Fuse.g.cpp.o: include/Uno.Collections.ReadOnlyCollection-1.h
.uno/Fuse.g.cpp.o: include/Uno.Content.Fonts.FontFace.h
.uno/Fuse.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.g.cpp.o: include/Uno.Diagnostics.Clock.h
.uno/Fuse.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Fuse.g.cpp.o: include/Uno.Diagnostics.DebugMessageType.h
.uno/Fuse.g.cpp.o: include/Uno.Double.h
.uno/Fuse.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.g.cpp.o: include/Uno.EventHandler-1.h
.uno/Fuse.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.g.cpp.o: include/Uno.Float.h
.uno/Fuse.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.g.cpp.o: include/Uno.Func-2.h
.uno/Fuse.g.cpp.o: include/Uno.Geometry.Collision.h
.uno/Fuse.g.cpp.o: include/Uno.Geometry.Ray.h
.uno/Fuse.g.cpp.o: include/Uno.Graphics.BlendOperand.h
.uno/Fuse.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Fuse.g.cpp.o: include/Uno.Graphics.Format.h
.uno/Fuse.g.cpp.o: include/Uno.Graphics.Framebuffer.h
.uno/Fuse.g.cpp.o: include/Uno.Graphics.FramebufferFlags.h
.uno/Fuse.g.cpp.o: include/Uno.Graphics.GraphicsContext.h
.uno/Fuse.g.cpp.o: include/Uno.Graphics.PolygonFace.h
.uno/Fuse.g.cpp.o: include/Uno.Graphics.PrimitiveType.h
.uno/Fuse.g.cpp.o: include/Uno.Graphics.RenderTarget.h
.uno/Fuse.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Fuse.g.cpp.o: include/Uno.Graphics.VertexAttributeType.h
.uno/Fuse.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Fuse.g.cpp.o: include/Uno.IDisposable.h
.uno/Fuse.g.cpp.o: include/Uno.Int.h
.uno/Fuse.g.cpp.o: include/Uno.Int2.h
.uno/Fuse.g.cpp.o: include/Uno.Long.h
.uno/Fuse.g.cpp.o: include/Uno.Math.h
.uno/Fuse.g.cpp.o: include/Uno.Matrix.h
.uno/Fuse.g.cpp.o: include/Uno.Net.Http.Uri.h
.uno/Fuse.g.cpp.o: include/Uno.Object.h
.uno/Fuse.g.cpp.o: include/Uno.Platform.Key.h
.uno/Fuse.g.cpp.o: include/Uno.Platform.KeyEventArgs.h
.uno/Fuse.g.cpp.o: include/Uno.Platform.TextInputEventArgs.h
.uno/Fuse.g.cpp.o: include/Uno.Platform.Window.h
.uno/Fuse.g.cpp.o: include/Uno.Platform2.Application.h
.uno/Fuse.g.cpp.o: include/Uno.Platform2.ApplicationState.h
.uno/Fuse.g.cpp.o: include/Uno.Platform2.ApplicationStateTransitionHandler.h
.uno/Fuse.g.cpp.o: include/Uno.Platform2.Display.h
.uno/Fuse.g.cpp.o: include/Uno.Predicate-1.h
.uno/Fuse.g.cpp.o: include/Uno.Quaternion.h
.uno/Fuse.g.cpp.o: include/Uno.Rect.h
.uno/Fuse.g.cpp.o: include/Uno.Recti.h
.uno/Fuse.g.cpp.o: include/Uno.Runtime.Implementation.GraphicsContextHandle.h
.uno/Fuse.g.cpp.o: include/Uno.Runtime.Implementation.GraphicsContextImpl.h
.uno/Fuse.g.cpp.o: include/Uno.Runtime.Implementation.Internal.BufferConverters.h
.uno/Fuse.g.cpp.o: include/Uno.Runtime.Implementation.Internal.WindowHelpers.h
.uno/Fuse.g.cpp.o: include/Uno.Runtime.Implementation.PlatformWindowHandle.h
.uno/Fuse.g.cpp.o: include/Uno.Runtime.Implementation.PlatformWindowImpl.h
.uno/Fuse.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h
.uno/Fuse.g.cpp.o: include/Uno.String.h
.uno/Fuse.g.cpp.o: include/Uno.Text.StringBuilder.h
.uno/Fuse.g.cpp.o: include/Uno.Threading.ConcurrentQueue-1.h
.uno/Fuse.g.cpp.o: include/Uno.Threading.IDispatcher.h
.uno/Fuse.g.cpp.o: include/Uno.Threading.Thread.h
.uno/Fuse.g.cpp.o: include/Uno.Type.h
.uno/Fuse.g.cpp.o: include/Uno.UInt.h
.uno/Fuse.g.cpp.o: include/Uno.UX.BundleFileSource.h
.uno/Fuse.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Fuse.g.cpp.o: include/Uno.UX.Resource.h
.uno/Fuse.g.cpp.o: include/Uno.Vector.h
.uno/Fuse.g.cpp.o: jni/Fuse.g.cpp flags.txt | .uno
	echo Fuse.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.g.cpp.o -c jni/Fuse.g.cpp

.uno/Fuse.GeoLocation.g.cpp.o: include/Android.android.app.Activity.h
.uno/Fuse.GeoLocation.g.cpp.o: include/Android.android.content.Context.h
.uno/Fuse.GeoLocation.g.cpp.o: include/Android.android.location.Location.h
.uno/Fuse.GeoLocation.g.cpp.o: include/Android.android.location.LocationManager.h
.uno/Fuse.GeoLocation.g.cpp.o: include/Android.android.os.Bundle.h
.uno/Fuse.GeoLocation.g.cpp.o: include/Android.android.os.Handler.h
.uno/Fuse.GeoLocation.g.cpp.o: include/Android.android.os.Looper.h
.uno/Fuse.GeoLocation.g.cpp.o: include/Android.Base.JNI.h
.uno/Fuse.GeoLocation.g.cpp.o: include/Android.Base.Permissions.h
.uno/Fuse.GeoLocation.g.cpp.o: include/Android.Base.PlatPermission.h
.uno/Fuse.GeoLocation.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
.uno/Fuse.GeoLocation.g.cpp.o: include/Android.Base.Primitives.ujclass.h
.uno/Fuse.GeoLocation.g.cpp.o: include/Android.Base.Primitives.ujlong.h
.uno/Fuse.GeoLocation.g.cpp.o: include/Android.Base.Primitives.ujobject.h
.uno/Fuse.GeoLocation.g.cpp.o: include/Android.Base.Primitives.ujvalue.h
.uno/Fuse.GeoLocation.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Fuse.GeoLocation.g.cpp.o: include/Android.java.lang.Object.h
.uno/Fuse.GeoLocation.g.cpp.o: include/Android.java.lang.Runnable.h
.uno/Fuse.GeoLocation.g.cpp.o: include/Android.java.lang.String.h
.uno/Fuse.GeoLocation.g.cpp.o: include/Android.java.util.List.h
.uno/Fuse.GeoLocation.g.cpp.o: include/Android.Runtime.UnoHelper.h
.uno/Fuse.GeoLocation.g.cpp.o: include/Fuse.GeoLocation.AndroidLocationProvider.h
.uno/Fuse.GeoLocation.g.cpp.o: include/Fuse.GeoLocation.GeoCoordinates.h
.uno/Fuse.GeoLocation.g.cpp.o: include/Fuse.GeoLocation.GeoLocationAuthorizationType.h
.uno/Fuse.GeoLocation.g.cpp.o: include/Fuse.GeoLocation.ILocationTracker.h
.uno/Fuse.GeoLocation.g.cpp.o: include/Fuse.GeoLocation.Location.h
.uno/Fuse.GeoLocation.g.cpp.o: include/Fuse.GeoLocation.LocationListenerBase.h
.uno/Fuse.GeoLocation.g.cpp.o: include/Fuse.GeoLocation.LocationTracker.h
.uno/Fuse.GeoLocation.g.cpp.o: include/Fuse.GeoLocation.PromiseListener.h
.uno/Fuse.GeoLocation.g.cpp.o: include/Fuse.GeoLocation.TimeoutListener.h
.uno/Fuse.GeoLocation.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.GeoLocation.g.cpp.o: include/Uno.Action.h
.uno/Fuse.GeoLocation.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.GeoLocation.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.GeoLocation.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.GeoLocation.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Fuse.GeoLocation.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.GeoLocation.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.GeoLocation.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.GeoLocation.g.cpp.o: include/Uno.DateTime.h
.uno/Fuse.GeoLocation.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.GeoLocation.g.cpp.o: include/Uno.Double.h
.uno/Fuse.GeoLocation.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.GeoLocation.g.cpp.o: include/Uno.Float.h
.uno/Fuse.GeoLocation.g.cpp.o: include/Uno.Int.h
.uno/Fuse.GeoLocation.g.cpp.o: include/Uno.Long.h
.uno/Fuse.GeoLocation.g.cpp.o: include/Uno.String.h
.uno/Fuse.GeoLocation.g.cpp.o: include/Uno.Threading.Future.h
.uno/Fuse.GeoLocation.g.cpp.o: include/Uno.Threading.Future-1.h
.uno/Fuse.GeoLocation.g.cpp.o: include/Uno.Threading.FutureState.h
.uno/Fuse.GeoLocation.g.cpp.o: include/Uno.Threading.IDispatcher.h
.uno/Fuse.GeoLocation.g.cpp.o: include/Uno.Threading.Promise-1.h
.uno/Fuse.GeoLocation.g.cpp.o: include/Uno.Time.CalendarSystem.h
.uno/Fuse.GeoLocation.g.cpp.o: include/Uno.Time.Duration.h
.uno/Fuse.GeoLocation.g.cpp.o: include/Uno.Time.Instant.h
.uno/Fuse.GeoLocation.g.cpp.o: include/Uno.Time.LocalDateTime.h
.uno/Fuse.GeoLocation.g.cpp.o: include/Uno.Time.ZonedDateTime.h
.uno/Fuse.GeoLocation.g.cpp.o: include/Uno.Type.h
.uno/Fuse.GeoLocation.g.cpp.o: jni/Fuse.GeoLocation.g.cpp flags.txt | .uno
	echo Fuse.GeoLocation.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.GeoLocation.g.cpp.o -c jni/Fuse.GeoLocation.g.cpp

.uno/Fuse.Gestures.g.cpp.o: include/Experimental.Physics.BasicBoundedRegion2D.h
.uno/Fuse.Gestures.g.cpp.o: include/Experimental.Physics.BoundedRegion2D.h
.uno/Fuse.Gestures.g.cpp.o: include/Experimental.Physics.DestinationSimulation-1.h
.uno/Fuse.Gestures.g.cpp.o: include/Experimental.Physics.ElasticForce-1.h
.uno/Fuse.Gestures.g.cpp.o: include/Experimental.Physics.Friction-1.h
.uno/Fuse.Gestures.g.cpp.o: include/Experimental.Physics.MotionSimulation-1.h
.uno/Fuse.Gestures.g.cpp.o: include/Experimental.Physics.PointerVelocity-1.h
.uno/Fuse.Gestures.g.cpp.o: include/Experimental.Physics.Simulation.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Behavior.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Controls.RangeControl.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Controls.RangeControl2D.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Controls.ScrollView.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Elements.Element.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Elements.InteractiveTransform.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Entities.Transform3D.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.FastMatrix.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.CircularRangeBehavior.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Clicked.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.ClickedArgs.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.ClickedHandler.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Clicker.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.ClickerEventHandler.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.ClickerTrigger.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.DegreeSpan.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.double2.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.DoubleClicked.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.DoubleTapped.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.DoubleTappedArgs.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.DoubleTappedHandler.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Edge.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.EdgeSwipeAnimation.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Internal.EdgeSwiper.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Internal.Swiper.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Internal.SwipeRegion.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Internal.SwipeRegionArea.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Internal.TwoFinger.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Internal.TwoFingerEventHandler.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Internal.TwoFingerRotateHandler.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Internal.TwoFingerTranslateHandler.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Internal.TwoFingerZoomHandler.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.ISizeConstraint.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.KeepFocusInView.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.KeepInView.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.KeepInViewCommon.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.LinearRangeBehavior.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.LongPressed.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.LongPressedArgs.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.LongPressedHandler.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.PanGesture.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Pressed.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Released.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.RotateGesture.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.ScrollableGoto.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.ScrollDirections.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Scroller.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Scroller.MoveUserFlags.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.SetSwipeActive.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Swiped.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.SwipedHow.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.SwipeDirection.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.SwipeGesture.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.SwipeGestureHelper.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.SwipeType.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.SwipingAnimation.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Tapped.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.TappedArgs.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.TappedHandler.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.ToggleSwipeActive.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Trackball.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.Trackball.MoveMode.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.TransformGesture.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.WhileClickerTrigger.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.WhileHovering.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.WhilePressed.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.WhileSwipeActive.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Gestures.ZoomGesture.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.Focus.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.FocusGainedArgs.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.FocusGainedHandler.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.FocusLostArgs.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.FocusLostHandler.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.Pointer.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.PointerEnteredArgs.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.PointerEnteredHandler.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.PointerEventArgs.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.PointerLeftArgs.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.PointerLeftHandler.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.PointerMovedArgs.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.PointerMovedHandler.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.PointerPressedArgs.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.PointerPressedHandler.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.PointerReleasedArgs.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.PointerReleasedHandler.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Input.PointerWheelMovedHandler.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.IViewport.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.NodeEvent-2.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.PlacedHandler.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Properties.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.PropertyHandle.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.RequestBringIntoViewArgs.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.RequestBringIntoViewHandler.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Time.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Transform.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.Triggers.Trigger.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Gestures.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Action-2.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Diagnostics.Clock.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Matrix.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Platform.PointerType.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Quaternion.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Rect.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.String.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.UX.ValueChangedArgs-1.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.UX.ValueChangedHandler-1.h
.uno/Fuse.Gestures.g.cpp.o: include/Uno.Vector.h
.uno/Fuse.Gestures.g.cpp.o: jni/Fuse.Gestures.g.cpp flags.txt | .uno
	echo Fuse.Gestures.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Gestures.g.cpp.o -c jni/Fuse.Gestures.g.cpp

.uno/Fuse.Gestures.Internal.g.cpp.o: include/Experimental.Physics.DestinationSimulation-1.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Experimental.Physics.MotionSimulation-1.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Experimental.Physics.PointerVelocity-1.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Experimental.Physics.Simulation.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Experimental.Physics.SmoothSnap-1.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Elements.Element.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Gestures.DegreeSpan.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Gestures.Edge.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Gestures.Internal.EdgeSwiper.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Gestures.Internal.Swiper.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Gestures.Internal.SwipeRegion.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Gestures.Internal.SwipeRegionArea.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Gestures.Internal.TwoFinger.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Gestures.Internal.TwoFinger.Point.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Gestures.Internal.TwoFingerEventHandler.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Gestures.Internal.TwoFingerRotateHandler.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Gestures.Internal.TwoFingerTranslateHandler.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Gestures.Internal.TwoFingerZoomHandler.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Gestures.SwipeGestureHelper.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Input.Keyboard.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Input.Pointer.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Input.PointerEventArgs.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Input.PointerMovedArgs.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Input.PointerMovedHandler.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Input.PointerPressedArgs.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Input.PointerPressedHandler.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Input.PointerReleasedArgs.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Input.PointerReleasedHandler.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Internal.VectorUtil.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.NodeEvent-2.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Properties.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.PropertyHandle.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.Time.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Action-2.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Diagnostics.Clock.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Matrix.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Platform.Key.h
.uno/Fuse.Gestures.Internal.g.cpp.o: include/Uno.Vector.h
.uno/Fuse.Gestures.Internal.g.cpp.o: jni/Fuse.Gestures.Internal.g.cpp flags.txt | .uno
	echo Fuse.Gestures.Internal.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Gestures.Internal.g.cpp.o -c jni/Fuse.Gestures.Internal.g.cpp

.uno/Fuse.Input.g.cpp.o: include/Fuse.AppBase.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.HitTestCallback.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.HitTestContext.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.HitTestResult.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.Capturer.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.CustomPointerEventArgs.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.Focus.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.FocusDelegator.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.FocusGained.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.FocusGainedArgs.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.FocusGainedHandler.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.FocusLost.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.FocusLostArgs.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.FocusLostHandler.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.FocusNavigationDirection.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.FocusPredictStrategy.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.HitTestHelpers.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.IPointerEventResponder.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.IsFocusableChangedArgs.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.IsFocusableChangedEvent.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.IsFocusableChangedHandler.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.Keyboard.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.KeyEventArgs.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.KeyPressed.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.KeyPressedArgs.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.KeyPressedHandler.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.KeyReleased.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.KeyReleasedArgs.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.KeyReleasedHandler.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.Pointer.DefaultPointerEventResponder.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.Pointer.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.Pointer.PELHolder.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.Pointer.PELStatus.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.Pointer.PointerRecord.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerEntered.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerEnteredArgs.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerEnteredHandler.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerEventArgs.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerEventData.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerLeft.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerLeftArgs.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerLeftHandler.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerMoved.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerMovedArgs.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerMovedHandler.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerPressed.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerPressedArgs.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerPressedHandler.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerReleased.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerReleasedArgs.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerReleasedHandler.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerWheelMoved.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerWheelMovedArgs.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.PointerWheelMovedHandler.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.SelectionQuery.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.TextEntered.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.TextEnteredArgs.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.TextEnteredHandler.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.TextService.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Input.TraverseNodeExtensions.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.NodeEvent-2.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.NodeEventArgs.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.NodeEventMode.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Properties.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.PropertyHandle.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.Scripting.IEventSerializer.h
.uno/Fuse.Input.g.cpp.o: include/Fuse.StyleProperty-2.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Action-2.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Application.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Collections.Dictionary-2.Enumerator.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Collections.EnumerableExtensions.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Diagnostics.Clock.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Diagnostics.DebugMessageType.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Input.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Input.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Platform.Key.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Platform.PointerType.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Platform.WheelDeltaMode.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Predicate-1.h
.uno/Fuse.Input.g.cpp.o: include/Uno.String.h
.uno/Fuse.Input.g.cpp.o: include/Uno.Vector.h
.uno/Fuse.Input.g.cpp.o: jni/Fuse.Input.g.cpp flags.txt | .uno
	echo Fuse.Input.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Input.g.cpp.o -c jni/Fuse.Input.g.cpp

.uno/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.Focus.h
.uno/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.FocusGainedArgs.h
.uno/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.FocusGainedHandler.h
.uno/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.FocusLostArgs.h
.uno/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.FocusLostHandler.h
.uno/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.Keyboard.h
.uno/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.KeyPressedArgs.h
.uno/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.KeyPressedHandler.h
.uno/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.KeyReleasedArgs.h
.uno/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.KeyReleasedHandler.h
.uno/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.Pointer.h
.uno/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.PointerEnteredArgs.h
.uno/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.PointerEnteredHandler.h
.uno/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.PointerLeftArgs.h
.uno/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.PointerLeftHandler.h
.uno/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.PointerMovedArgs.h
.uno/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.PointerMovedHandler.h
.uno/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.PointerPressedArgs.h
.uno/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.PointerPressedHandler.h
.uno/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.PointerReleasedArgs.h
.uno/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.PointerReleasedHandler.h
.uno/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.PointerWheelMovedArgs.h
.uno/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.PointerWheelMovedHandler.h
.uno/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.UX.AttachedFocusMembers.h
.uno/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.UX.AttachedKeyboardMembers.h
.uno/Fuse.Input.UX.g.cpp.o: include/Fuse.Input.UX.AttachedPointerMembers.h
.uno/Fuse.Input.UX.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Input.UX.g.cpp.o: include/Fuse.NodeEvent-2.h
.uno/Fuse.Input.UX.g.cpp.o: jni/Fuse.Input.UX.g.cpp flags.txt | .uno
	echo Fuse.Input.UX.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Input.UX.g.cpp.o -c jni/Fuse.Input.UX.g.cpp

.uno/Fuse.Internal.Drawing.g.cpp.o: include/_root.FuseControls_bundle.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.DrawContext.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.Drawing.BlendMode.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.Drawing.BlendModeHelpers.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.Drawing.Brush.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.Drawing.DynamicBrush.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.Drawing.ImageFill.DrawParams.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.Drawing.ImageFill.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.Drawing.LinearGradient.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.Drawing.SolidColor.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.Drawing.StaticSolidColor.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.Elements.Element.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.Internal.Drawing.SolidRectangle.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.IViewport.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Buffer.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Graphics.BlendOperand.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Graphics.Framebuffer.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Graphics.PolygonFace.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Graphics.VertexAttributeType.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Matrix.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Runtime.Implementation.Internal.BufferConverters.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h
.uno/Fuse.Internal.Drawing.g.cpp.o: include/Uno.Vector.h
.uno/Fuse.Internal.Drawing.g.cpp.o: jni/Fuse.Internal.Drawing.g.cpp flags.txt | .uno
	echo Fuse.Internal.Drawing.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Internal.Drawing.g.cpp.o -c jni/Fuse.Internal.Drawing.g.cpp

.uno/Fuse.Internal.g.cpp.o: include/Fuse.Drawing.ResampleMode.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Elements.Alignment.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Elements.AlignmentHelpers.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Elements.StretchDirection.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Elements.StretchMode.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Elements.StretchSizing.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.Blender-1.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.BlenderMap.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.DoubleBlender.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.Float2Blender.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.Float3Blender.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.Float4Blender.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.FloatBlender.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.FrustumMatrix.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.FuseConfig.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.IImageContainerOwner.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.ImageContainer.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.RectExtensions.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.ScalarBlender-1.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.SimpleLock.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.SizingContainer.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.Statistics.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Internal.VectorUtil.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.LayoutParams.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Resources.FileImageSource.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Resources.HttpImageSource.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Resources.ImageSource.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Resources.ImageSourceErrorArgs.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Resources.ImageSourceErrorHandler.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Resources.MemoryPolicy.h
.uno/Fuse.Internal.g.cpp.o: include/Fuse.Resources.MultiDensityImageSource.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Collections.ObservableList-1.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Int2.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Matrix.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Rect.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.String.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Threading.Mutex.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Type.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Fuse.Internal.g.cpp.o: include/Uno.Vector.h
.uno/Fuse.Internal.g.cpp.o: jni/Fuse.Internal.g.cpp flags.txt | .uno
	echo Fuse.Internal.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Internal.g.cpp.o -c jni/Fuse.Internal.g.cpp

.uno/Fuse.iOS.Controls.g.cpp.o: include/Fuse.Controls.Control.h
.uno/Fuse.iOS.Controls.g.cpp.o: include/Fuse.iOS.Controls.Button.h
.uno/Fuse.iOS.Controls.g.cpp.o: include/Fuse.iOS.Controls.Circle.h
.uno/Fuse.iOS.Controls.g.cpp.o: include/Fuse.iOS.Controls.Control-1.h
.uno/Fuse.iOS.Controls.g.cpp.o: include/Fuse.iOS.Controls.ControlProperties.h
.uno/Fuse.iOS.Controls.g.cpp.o: include/Fuse.iOS.Controls.Element.h
.uno/Fuse.iOS.Controls.g.cpp.o: include/Fuse.iOS.Controls.Image.h
.uno/Fuse.iOS.Controls.g.cpp.o: include/Fuse.iOS.Controls.MapView.h
.uno/Fuse.iOS.Controls.g.cpp.o: include/Fuse.iOS.Controls.Rectangle.h
.uno/Fuse.iOS.Controls.g.cpp.o: include/Fuse.iOS.Controls.Shape-1.h
.uno/Fuse.iOS.Controls.g.cpp.o: include/Fuse.iOS.Controls.Slider.h
.uno/Fuse.iOS.Controls.g.cpp.o: include/Fuse.iOS.Controls.Switch.h
.uno/Fuse.iOS.Controls.g.cpp.o: include/Fuse.iOS.Controls.TextBlock.h
.uno/Fuse.iOS.Controls.g.cpp.o: include/Fuse.iOS.Controls.TextInput.h
.uno/Fuse.iOS.Controls.g.cpp.o: include/Fuse.iOS.Controls.WebView.h
.uno/Fuse.iOS.Controls.g.cpp.o: include/Fuse.iOS.NativeViews.NativeView.h
.uno/Fuse.iOS.Controls.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.iOS.Controls.g.cpp.o: include/Fuse.StyleProperty-2.h
.uno/Fuse.iOS.Controls.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.iOS.Controls.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.iOS.Controls.g.cpp.o: include/Uno.Float.h
.uno/Fuse.iOS.Controls.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.iOS.Controls.g.cpp.o: jni/Fuse.iOS.Controls.g.cpp flags.txt | .uno
	echo Fuse.iOS.Controls.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.iOS.Controls.g.cpp.o -c jni/Fuse.iOS.Controls.g.cpp

.uno/Fuse.iOS.g.cpp.o: include/_root.FuseiOS_bundle.h
.uno/Fuse.iOS.g.cpp.o: include/Fuse.Behavior.h
.uno/Fuse.iOS.g.cpp.o: include/Fuse.Controls.Button.h
.uno/Fuse.iOS.g.cpp.o: include/Fuse.Controls.Circle.h
.uno/Fuse.iOS.g.cpp.o: include/Fuse.Controls.ContentControl.h
.uno/Fuse.iOS.g.cpp.o: include/Fuse.Controls.Control.h
.uno/Fuse.iOS.g.cpp.o: include/Fuse.Controls.GraphicsView.h
.uno/Fuse.iOS.g.cpp.o: include/Fuse.Controls.Image.h
.uno/Fuse.iOS.g.cpp.o: include/Fuse.Controls.NativeViewHost.h
.uno/Fuse.iOS.g.cpp.o: include/Fuse.Controls.ParentControl.h
.uno/Fuse.iOS.g.cpp.o: include/Fuse.Controls.PlainTextEdit.h
.uno/Fuse.iOS.g.cpp.o: include/Fuse.Controls.Rectangle.h
.uno/Fuse.iOS.g.cpp.o: include/Fuse.Controls.ScrollView.h
.uno/Fuse.iOS.g.cpp.o: include/Fuse.Controls.Slider.h
.uno/Fuse.iOS.g.cpp.o: include/Fuse.Controls.Switch.h
.uno/Fuse.iOS.g.cpp.o: include/Fuse.Controls.TextBlock.h
.uno/Fuse.iOS.g.cpp.o: include/Fuse.Controls.TextEdit.h
.uno/Fuse.iOS.g.cpp.o: include/Fuse.Controls.WebView.h
.uno/Fuse.iOS.g.cpp.o: include/Fuse.DrawContext.h
.uno/Fuse.iOS.g.cpp.o: include/Fuse.iOS.Blitter.h
.uno/Fuse.iOS.g.cpp.o: include/Fuse.iOS.Controls.Button.h
.uno/Fuse.iOS.g.cpp.o: include/Fuse.iOS.Controls.Circle.h
.uno/Fuse.iOS.g.cpp.o: include/Fuse.iOS.Controls.Image.h
.uno/Fuse.iOS.g.cpp.o: include/Fuse.iOS.Controls.Rectangle.h
.uno/Fuse.iOS.g.cpp.o: include/Fuse.iOS.Controls.Slider.h
.uno/Fuse.iOS.g.cpp.o: include/Fuse.iOS.Controls.Switch.h
.uno/Fuse.iOS.g.cpp.o: include/Fuse.iOS.Controls.TextBlock.h
.uno/Fuse.iOS.g.cpp.o: include/Fuse.iOS.Controls.TextInput.h
.uno/Fuse.iOS.g.cpp.o: include/Fuse.iOS.Controls.WebView.h
.uno/Fuse.iOS.g.cpp.o: include/Fuse.iOS.NativeStyle.h
.uno/Fuse.iOS.g.cpp.o: include/Fuse.iOS.NativeStyle.Template.h
.uno/Fuse.iOS.g.cpp.o: include/Fuse.iOS.NativeStyle.Template.Template1.h
.uno/Fuse.iOS.g.cpp.o: include/Fuse.iOS.NativeStyle.Template.Template2.Factory.h
.uno/Fuse.iOS.g.cpp.o: include/Fuse.iOS.NativeStyle.Template.Template2.Factory1.h
.uno/Fuse.iOS.g.cpp.o: include/Fuse.iOS.NativeStyle.Template.Template2.h
.uno/Fuse.iOS.g.cpp.o: include/Fuse.iOS.NativeTemplate.h
.uno/Fuse.iOS.g.cpp.o: include/Fuse.iOS.NativeViews.ContentControl.h
.uno/Fuse.iOS.g.cpp.o: include/Fuse.iOS.NativeViews.GenericNativeView.h
.uno/Fuse.iOS.g.cpp.o: include/Fuse.iOS.NativeViews.GraphicsView.h
.uno/Fuse.iOS.g.cpp.o: include/Fuse.iOS.NativeViews.NativeViewHost.h
.uno/Fuse.iOS.g.cpp.o: include/Fuse.iOS.NativeViews.ParentControl.h
.uno/Fuse.iOS.g.cpp.o: include/Fuse.iOS.NativeViews.ScrollView.h
.uno/Fuse.iOS.g.cpp.o: include/Fuse.iOS.StatusBarConfig.h
.uno/Fuse.iOS.g.cpp.o: include/Fuse.iOS.TextRenderer.h
.uno/Fuse.iOS.g.cpp.o: include/Fuse.LayoutParams.h
.uno/Fuse.iOS.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.iOS.g.cpp.o: include/Fuse.Style.h
.uno/Fuse.iOS.g.cpp.o: include/Fuse.StyleProperty-2.h
.uno/Fuse.iOS.g.cpp.o: include/Fuse.Themes.GraphicsStyle.h
.uno/Fuse.iOS.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.iOS.g.cpp.o: include/Uno.Buffer.h
.uno/Fuse.iOS.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Fuse.iOS.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.iOS.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.iOS.g.cpp.o: include/Uno.Float.h
.uno/Fuse.iOS.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.iOS.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.iOS.g.cpp.o: include/Uno.Graphics.BlendOperand.h
.uno/Fuse.iOS.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Fuse.iOS.g.cpp.o: include/Uno.Graphics.PolygonFace.h
.uno/Fuse.iOS.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Fuse.iOS.g.cpp.o: include/Uno.Graphics.VertexAttributeType.h
.uno/Fuse.iOS.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Fuse.iOS.g.cpp.o: include/Uno.Int.h
.uno/Fuse.iOS.g.cpp.o: include/Uno.Object.h
.uno/Fuse.iOS.g.cpp.o: include/Uno.Platform.iOS.StatusBarAnimation.h
.uno/Fuse.iOS.g.cpp.o: include/Uno.Platform.iOS.StatusBarStyle.h
.uno/Fuse.iOS.g.cpp.o: include/Uno.Runtime.Implementation.Internal.BufferConverters.h
.uno/Fuse.iOS.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h
.uno/Fuse.iOS.g.cpp.o: include/Uno.String.h
.uno/Fuse.iOS.g.cpp.o: include/Uno.UX.Factory.h
.uno/Fuse.iOS.g.cpp.o: include/Uno.UX.Template-1.h
.uno/Fuse.iOS.g.cpp.o: jni/Fuse.iOS.g.cpp flags.txt | .uno
	echo Fuse.iOS.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.iOS.g.cpp.o -c jni/Fuse.iOS.g.cpp

.uno/Fuse.iOS.NativeViews.g.cpp.o: include/Fuse.iOS.NativeViews.ContentControl.h
.uno/Fuse.iOS.NativeViews.g.cpp.o: include/Fuse.iOS.NativeViews.GenericNativeView.h
.uno/Fuse.iOS.NativeViews.g.cpp.o: include/Fuse.iOS.NativeViews.GraphicsView.h
.uno/Fuse.iOS.NativeViews.g.cpp.o: include/Fuse.iOS.NativeViews.LeafNativeView.h
.uno/Fuse.iOS.NativeViews.g.cpp.o: include/Fuse.iOS.NativeViews.NativeView.h
.uno/Fuse.iOS.NativeViews.g.cpp.o: include/Fuse.iOS.NativeViews.NativeViewHost.h
.uno/Fuse.iOS.NativeViews.g.cpp.o: include/Fuse.iOS.NativeViews.ParentControl.h
.uno/Fuse.iOS.NativeViews.g.cpp.o: include/Fuse.iOS.NativeViews.ParentNativeView-1.h
.uno/Fuse.iOS.NativeViews.g.cpp.o: include/Fuse.iOS.NativeViews.ScrollView.h
.uno/Fuse.iOS.NativeViews.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.iOS.NativeViews.g.cpp.o: jni/Fuse.iOS.NativeViews.g.cpp flags.txt | .uno
	echo Fuse.iOS.NativeViews.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.iOS.NativeViews.g.cpp.o -c jni/Fuse.iOS.NativeViews.g.cpp

.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Controls.ParentControl.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Elements.Alignment.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Elements.AlignmentHelpers.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Elements.Element.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Elements.SimpleAlignment.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.InvalidateLayoutReason.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layer.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.LayoutDependent.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.LayoutParams.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.LayoutRole.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.CircleLayout.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.Column.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.ColumnLayout.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.ColumnLayoutSizing.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.DefaultLayout.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.DefinitionBase.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.DefinitionBase.ParseDataItem.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.Dock.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.DockLayout.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.FlowDirection.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.GridLayout.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.Layout.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.Layouts.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.Metric.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.Orientation.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.Row.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.StackLayout.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.StackLayoutMode.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Layouts.WrapLayout.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.Properties.h
.uno/Fuse.Layouts.g.cpp.o: include/Fuse.PropertyHandle.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Char.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Collections.IListExtensions.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Collections.ObservableList-1.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Diagnostics.DebugMessageType.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.String.h
.uno/Fuse.Layouts.g.cpp.o: include/Uno.Vector.h
.uno/Fuse.Layouts.g.cpp.o: jni/Fuse.Layouts.g.cpp flags.txt | .uno
	echo Fuse.Layouts.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Layouts.g.cpp.o -c jni/Fuse.Layouts.g.cpp

.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Animations.AnimationVariant.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Animations.Easing.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Animations.EasingFunction.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Animations.EasingFunctions.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Behavior.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Elements.Element.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Gestures.DegreeSpan.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Gestures.Edge.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Gestures.Internal.EdgeSwiper.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Gestures.SwipeGestureHelper.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Input.Pointer.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Input.PointerEventArgs.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Input.PointerMovedArgs.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Input.PointerMovedHandler.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Input.PointerPressedArgs.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Input.PointerPressedHandler.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Input.PointerReleasedArgs.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Input.PointerReleasedHandler.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.LayoutRole.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.ActivatingAnimation.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.BackForwardNavigationTriggerAction.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.DeactivatingAnimation.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.DefaultNavigationAnimator.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.DefaultNavigationAnimatorPlayer.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.DirectNavigation.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.EdgeNavigation.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.EndSeekArgs.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.EnterExitAnimation.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.EnteringAnimation.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.ExitingAnimation.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.GoBack.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.GoForward.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.HierarchicalNavigation.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.HistoryChangedHandler.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.IBaseNavigation.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.INavigation.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.INavigationAnimator.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.INavigationAnimatorPlayer.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.INavigationPanel.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.IPageResourceBinding.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.ISeekable.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.LinearNavigation.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigatedArgs.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigatedHandler.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigateTo.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigateToggle.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.Navigation.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigationAnimation.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigationArgs.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigationDirection.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigationEdge.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigationGotoMode.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigationHandler.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigationMode.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigationPageCountHandler.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigationPageProgressHandler.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigationPageProperty.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigationState.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigationStateArgs.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigationStateHandler.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigationTriggerAction.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavigationTween.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.NavTriggerUtil.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.PageResourceBinding-1.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.PlayerFactory.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.ProgressSpan.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.ProgressTimer.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.SeekNavigationAnimatorPlayer.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.SnapTo.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.StructuredNavigation.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.StructuredNavigation.NavigationStructure.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.SwipeDirection.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.SwipeEnds.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.SwipeNavigate.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.UpdateSeekArgs.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.WhileActive.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.WhileCanGoBack.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.WhileCanGoForward.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.WhileHistoryTrigger.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.WhileInactive.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.WhileInEnterState.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.WhileInExitState.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.WhileNavigating.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Navigation.WhileNavigationTrigger.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.NodeEvent-2.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.PlacedHandler.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Properties.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.PropertyHandle.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Resources.ResourceRegistry.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Scripting.IEventSerializer.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Time.h
.uno/Fuse.Navigation.g.cpp.o: include/Fuse.Triggers.Trigger.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Action-2.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Collections.Dictionary-2.Enumerator.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Diagnostics.DebugMessageType.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.EventHandler-1.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Func-1.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.NotImplementedException.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.Predicate-1.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.String.h
.uno/Fuse.Navigation.g.cpp.o: include/Uno.UX.Property-1.h
.uno/Fuse.Navigation.g.cpp.o: jni/Fuse.Navigation.g.cpp flags.txt | .uno
	echo Fuse.Navigation.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Navigation.g.cpp.o -c jni/Fuse.Navigation.g.cpp

.uno/Fuse.Physics.g.cpp.o: include/Fuse.Animations.AnimationVariant.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Behavior.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Elements.Element.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Input.Pointer.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Input.PointerEnteredHandler.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Input.PointerEventArgs.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Input.PointerLeftHandler.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Input.PointerMovedArgs.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Input.PointerMovedHandler.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Input.PointerPressedArgs.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Input.PointerPressedHandler.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Input.PointerReleasedArgs.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Input.PointerReleasedHandler.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Input.PointerWheelMovedHandler.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.NodeEventArgs.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Physics.Body.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Physics.Draggable.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Physics.EnteredForceField.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Physics.ExitedForceField.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Physics.ForceField.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Physics.ForceFieldEventArgs.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Physics.ForceFieldEventHandler.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Physics.ForceFieldEventTrigger.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Physics.ForceFieldTrigger.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Physics.InForceFieldAnimation.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Physics.IRule.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Physics.PointAttractor.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Physics.Spring.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Physics.WhileDragging.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Physics.World.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Properties.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.PropertyHandle.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Scripting.IEventSerializer.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Time.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Transform.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Translation.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.Triggers.Trigger.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Physics.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.Physics.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Physics.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Physics.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Fuse.Physics.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.Physics.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Fuse.Physics.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.Physics.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Physics.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
.uno/Fuse.Physics.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Physics.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Physics.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Physics.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Physics.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Physics.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Physics.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Physics.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.Physics.g.cpp.o: include/Uno.Geometry.Box.h
.uno/Fuse.Physics.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Physics.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Physics.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Physics.g.cpp.o: include/Uno.String.h
.uno/Fuse.Physics.g.cpp.o: include/Uno.Vector.h
.uno/Fuse.Physics.g.cpp.o: jni/Fuse.Physics.g.cpp flags.txt | .uno
	echo Fuse.Physics.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Physics.g.cpp.o -c jni/Fuse.Physics.g.cpp

.uno/Fuse.Preview.g.cpp.o: include/Fuse.Preview.ISelection.h
.uno/Fuse.Preview.g.cpp.o: include/Fuse.Preview.SelectionManager.h
.uno/Fuse.Preview.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Preview.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Preview.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Preview.g.cpp.o: include/Uno.EventHandler-1.h
.uno/Fuse.Preview.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Preview.g.cpp.o: include/Uno.String.h
.uno/Fuse.Preview.g.cpp.o: jni/Fuse.Preview.g.cpp flags.txt | .uno
	echo Fuse.Preview.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Preview.g.cpp.o -c jni/Fuse.Preview.g.cpp

.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/_root.FuseReactive_bundle.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Camera.Camera.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Camera.PictureResult.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Camera.TakePictureOptions.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.GeoLocation.GeoCoordinates.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.GeoLocation.GeoLocationAuthorizationType.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.GeoLocation.Location.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.GeoLocation.LocationTracker.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Launcher.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.Console.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.DebugLog.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.Base64.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.Builtins.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.Camera.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.Email.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.Environment.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.FileReaderImpl.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.FunctionClosure.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.GeoLocation.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.Globals.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.Http.FuseJSHttpClient.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.Http.FuseJSHttpRequest.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.Http.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.InterApp.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.Lifecycle.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.Maps.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.Phone.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.RaiseEvent.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.Storage.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.TimerManager.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.TimerManager.Timer.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.TimerModule.CallbackClosure.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.TimerModule.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.UserEvents.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.FuseJS.Vibration.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Reactive.Marshal.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.Callback.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.Context.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.Error.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.FileModule.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.Function.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.FutureFactory-1.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.IModule.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.JSCallback.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.NativeCallback.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.NativeEvent.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.NativeFunction.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.NativeMember.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.NativeModule.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.NativePromise-2.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.NativeProperty-2.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.Object.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.ResultConverter-2.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.ResultFactory-1.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.Value.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Scripting.ValueConverter-2.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Storage.ApplicationDir.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.UserEventDispatch.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Fuse.Vibration.Vibration.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Action-2.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Action-4.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.BundleFile.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Byte.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Diagnostics.Clock.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.EventHandler-1.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Func-1.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Func-2.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Func-3.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.IO.File.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.IO.Path.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Long.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Net.Http.HttpMessageHandler.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Net.Http.HttpMessageHandlerRequest.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Net.Http.HttpRequestState.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Net.Http.HttpResponseType.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Net.Http.HttpStatusReasonPhrase.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Net.Http.Uri.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Platform2.Application.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Platform2.ApplicationState.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Platform2.ApplicationStateTransitionHandler.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Predicate-1.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.String.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Text.Ascii.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Text.Base64.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Text.Utf8.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Threading.Future-1.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.Threading.IDispatcher.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.UX.BundleFileSource.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: include/Uno.UX.Resource.h
.uno/Fuse.Reactive.FuseJS.g.cpp.o: jni/Fuse.Reactive.FuseJS.g.cpp flags.txt | .uno
	echo Fuse.Reactive.FuseJS.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Reactive.FuseJS.g.cpp.o -c jni/Fuse.Reactive.FuseJS.g.cpp

.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Behavior.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.DataContextChangedHandler.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Drawing.Brush.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Drawing.SolidColor.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.IDataContext.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.IObjectContainer.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.AsyncArray.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.AsyncFunction.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.AsyncObject.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Binding.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.CallEventHandler.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.CascadingPathSubscription.BindAttempt.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.CascadingPathSubscription.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Case.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Console.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.DataBinding-1.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.DataToResourceBinding-1.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.DebugLog.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Dispatcher.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Dispatcher.UIThreadDispatcher.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Each.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.EnumArray.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.EnumObservable.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.EventBinding.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.FileSourceTell.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.FuseJS.Builtins.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.IAsyncArray.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.InternalPathSubscription.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.IObserver.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.JavaScript.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.JSFileSource.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Marshal.Float2Enum.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Marshal.Float3Enum.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Marshal.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Marshal.VectorEnum.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Match.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Observable.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.ObservableSubscription.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.ScriptEventArgs.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.Select.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.TellObject.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.ThreadWorker.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.WhileCount.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Reactive.WhileEmpty.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Resources.ResourceRegistry.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.Array.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.Callback.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.Context.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.Function.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.IScriptEvent.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.NameRegistry.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.Object.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Scripting.V8.Context.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.Triggers.WhileFailed.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Reactive.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Action-2.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Application.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Char.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Collections.ObservableList-1.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Color.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Diagnostics.DebugMessageType.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Enum.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.EventHandler-1.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Func-2.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.IDisposable.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.IO.File.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.IO.Stream.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Platform.Window.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Predicate-1.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.String.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Testing.Assert.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Text.StringBuilder.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Threading.ConcurrentQueue-1.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Threading.IDispatcher.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Threading.IDispatcherExtensions.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Threading.LockGuard.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Threading.Mutex.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Threading.Thread.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.Type.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.UInt.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.UX.Factory.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.UX.Property-1.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.UX.Resource.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.UX.ValueChangedArgs-1.h
.uno/Fuse.Reactive.g.cpp.o: include/Uno.UX.ValueChangedHandler-1.h
.uno/Fuse.Reactive.g.cpp.o: jni/Fuse.Reactive.g.cpp flags.txt | .uno
	echo Fuse.Reactive.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Reactive.g.cpp.o -c jni/Fuse.Reactive.g.cpp

.uno/Fuse.Resources.g.cpp.o: include/Experimental.Http.HttpLoader.h
.uno/Fuse.Resources.g.cpp.o: include/Experimental.Http.HttpResponseHeader.h
.uno/Fuse.Resources.g.cpp.o: include/Experimental.TextureLoader.TextureLoader.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.AppBase.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.GraphicsWorker.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.DisposalManager.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.DisposalPolicy.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.DisposalRequest.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.DoubleResourceConverter.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ExpirationDisposalPolicy.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.FileImageSource.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.FileImageSourceCache.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.FileImageSourceImpl.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.FileResource.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.FloatResourceConverter.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.GenericResourceConverter-1.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.HttpImageSource.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.HttpImageSourceCache.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.HttpImageSourceImpl.BackgroundLoad.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.HttpImageSourceImpl.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.IDeferredDisposable.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ImageSource.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ImageSourceErrorArgs.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ImageSourceErrorHandler.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ImageSourceState.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.IMemoryResource.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.IntResourceConverter.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.IResourceConverter-1.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ISoftDisposable.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.LoadingImageSource.CleanupReason.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.LoadingImageSource.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.MemoryPolicy.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.MultiDensityImageSource.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.NumericResourceConverter-1.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.PolicyDeferredDisposable.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ProxyImageSource.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ResourceBinding-1.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ResourceBool.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ResourceConverters.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ResourceFloat.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ResourceFloat2.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ResourceFloat3.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ResourceFloat4.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ResourceObject.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ResourceRegistry.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ResourceSetter-1.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.ResourceString.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.RetainDisposalPolicy.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Resources.TextureImageSource.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Scripting.IEventSerializer.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.Time.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Resources.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Action-2.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Buffer.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Byte.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Collections.ObservableList-1.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.EventHandler-1.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Int2.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.IO.Stream.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Predicate-1.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.String.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.Type.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.UX.Property-1.h
.uno/Fuse.Resources.g.cpp.o: include/Uno.WeakReference-1.h
.uno/Fuse.Resources.g.cpp.o: jni/Fuse.Resources.g.cpp flags.txt | .uno
	echo Fuse.Resources.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Resources.g.cpp.o -c jni/Fuse.Resources.g.cpp

.uno/Fuse.Scripting.Duktape.g.cpp.o: include/duktape_helpers.h
.uno/Fuse.Scripting.Duktape.g.cpp.o: include/Fuse.Scripting.Callback.h
.uno/Fuse.Scripting.Duktape.g.cpp.o: include/Fuse.Scripting.Duktape.callback.h
.uno/Fuse.Scripting.Duktape.g.cpp.o: include/Fuse.Scripting.Duktape.CallbackClosure.h
.uno/Fuse.Scripting.Duktape.g.cpp.o: include/Fuse.Scripting.Duktape.CompileFlag.h
.uno/Fuse.Scripting.Duktape.g.cpp.o: include/Fuse.Scripting.Duktape.Context.h
.uno/Fuse.Scripting.Duktape.g.cpp.o: include/Fuse.Scripting.Duktape.duktape.h
.uno/Fuse.Scripting.Duktape.g.cpp.o: include/Fuse.Scripting.Duktape.EnumFlags.h
.uno/Fuse.Scripting.Duktape.g.cpp.o: include/Fuse.Scripting.Duktape.JSArray.h
.uno/Fuse.Scripting.Duktape.g.cpp.o: include/Fuse.Scripting.Duktape.JSFunction.h
.uno/Fuse.Scripting.Duktape.g.cpp.o: include/Fuse.Scripting.Duktape.JSObject.h
.uno/Fuse.Scripting.Duktape.g.cpp.o: include/Fuse.Scripting.Duktape.JSONObject.h
.uno/Fuse.Scripting.Duktape.g.cpp.o: include/Fuse.Scripting.Function.h
.uno/Fuse.Scripting.Duktape.g.cpp.o: include/Fuse.Scripting.Object.h
.uno/Fuse.Scripting.Duktape.g.cpp.o: include/Fuse.Scripting.ScriptException.h
.uno/Fuse.Scripting.Duktape.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Scripting.Duktape.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Scripting.Duktape.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Scripting.Duktape.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Scripting.Duktape.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Scripting.Duktape.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Scripting.Duktape.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Scripting.Duktape.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Scripting.Duktape.g.cpp.o: include/Uno.IntPtr.h
.uno/Fuse.Scripting.Duktape.g.cpp.o: include/Uno.Long.h
.uno/Fuse.Scripting.Duktape.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Scripting.Duktape.g.cpp.o: include/Uno.String.h
.uno/Fuse.Scripting.Duktape.g.cpp.o: include/Uno.Threading.IDispatcher.h
.uno/Fuse.Scripting.Duktape.g.cpp.o: include/Uno.UInt.h
.uno/Fuse.Scripting.Duktape.g.cpp.o: jni/Fuse.Scripting.Duktape.g.cpp flags.txt | .uno
	echo Fuse.Scripting.Duktape.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Scripting.Duktape.g.cpp.o -c jni/Fuse.Scripting.Duktape.g.cpp

.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Array.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.BoolChangedArgs.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Callback.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Context.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.DoubleChangedArgs.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Error.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.FactoryClosure-1.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.FileModule.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Function.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.FutureFactory-1.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.IEventSerializer.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.IModule.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.INameListener.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.INameScope.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.IScriptEvent.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.JSCallback.ActionClosure.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.JSCallback.ActionClosure-1.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.JSCallback.ActionClosure-2.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.JSCallback.FuncClosure-1.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.JSCallback.FuncClosure-2.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.JSCallback.FuncClosure-3.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.JSCallback.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.JSCallback.NumberConverter.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.NameRegistry.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.NativeCallback.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.NativeEvent.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.NativeFunction.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.NativeFunction.NativeFunctionClosure.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.NativeMember.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.NativeModule.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.NativePromise-2.ContextClosure.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.NativePromise-2.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.NativePromise-2.PromiseClosure.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.NativeProperty-2.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.NodeCallback.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Object.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.ResultConverter-2.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.ResultFactory-1.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.ScriptException.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.StringChangedArgs.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.Value.h
.uno/Fuse.Scripting.g.cpp.o: include/Fuse.Scripting.ValueConverter-2.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Action-2.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.ArgumentException.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Char.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Collections.Dictionary-2.ValueCollection.Enumerator.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Collections.Dictionary-2.ValueCollection.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Collections.Queue-1.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Func-1.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Func-2.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Func-3.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Long.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Predicate-1.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Short.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.String.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Text.StringBuilder.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Threading.Future-1.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Threading.IDispatcher.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Threading.IDispatcherExtensions.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Threading.Promise-1.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Threading.Thread.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.Type.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.UInt.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Fuse.Scripting.g.cpp.o: include/Uno.UX.Resource.h
.uno/Fuse.Scripting.g.cpp.o: jni/Fuse.Scripting.g.cpp flags.txt | .uno
	echo Fuse.Scripting.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Scripting.g.cpp.o -c jni/Fuse.Scripting.g.cpp

.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.Callback.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.Function.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.Object.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.ScriptException.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Array.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Context.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Debugger.Connected.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Debugger.ConnectedMessageHandler.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Debugger.Connecting.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Debugger.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Debugger.State.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Function.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Marshaller.CallbackWrapper.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Marshaller.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Object.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Simple.Array.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Simple.Bool.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Simple.Context.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Simple.DelegateCallback.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Simple.DelegateMessageHandler.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Simple.DelegateScriptExceptionHandler.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Simple.DllDirectory.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Simple.Double.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Simple.Function.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Simple.Int.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Simple.MessageHandler.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Simple.Object.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Simple.ScriptException.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Simple.ScriptExceptionHandler.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Simple.String.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Simple.Type.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Simple.UniqueValueVector.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Simple.Value.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Fuse.Scripting.V8.Simple.ValueVector.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Byte.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Char.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Diagnostics.DebugMessageType.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Func-2.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.IO.Stream.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.IO.StreamReader.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.IO.StreamWriter.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.IO.TextReader.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.IO.TextWriter.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Net.EndPoint.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Net.IPAddress.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Net.IPEndPoint.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Net.Sockets.AddressFamily.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Net.Sockets.NetworkStream.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Net.Sockets.ProtocolType.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Net.Sockets.Socket.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Net.Sockets.SocketShutdown.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Net.Sockets.SocketType.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.String.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Text.Utf8.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Threading.IDispatcher.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Threading.Thread.h
.uno/Fuse.Scripting.V8.g.cpp.o: include/Uno.Type.h
.uno/Fuse.Scripting.V8.g.cpp.o: jni/Fuse.Scripting.V8.g.cpp flags.txt | .uno
	echo Fuse.Scripting.V8.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Scripting.V8.g.cpp.o -c jni/Fuse.Scripting.V8.g.cpp

.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.Array.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.ArrayImpl.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.Bool.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.BoolImpl.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.Callback.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.CallbackImpl.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.Context.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.ContextImpl.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.DelegateCallback.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.DelegateMessageHandler.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.DelegateScriptExceptionHandler.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.DllDirectory.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.Double.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.DoubleImpl.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.Function.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.FunctionImpl.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.Int.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.IntImpl.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.MessageHandler.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.MessageHandlerImpl.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.MultiMap-1.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.Object.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.ObjectImpl.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.ScriptException.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.ScriptExceptionHandler.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.ScriptExceptionHandlerImpl.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.ScriptExceptionImpl.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.String.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.StringExtensions.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.StringImpl.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.Type.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.UniqueValueVector.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.UniqueValueVectorImpl.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.Value.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.ValueExtensions.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.ValueImpl.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Fuse.Scripting.V8.Simple.ValueVector.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Uno.Func-2.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/Uno.String.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: include/V8Proxy.h
.uno/Fuse.Scripting.V8.Simple.g.cpp.o: jni/Fuse.Scripting.V8.Simple.g.cpp flags.txt | .uno
	echo Fuse.Scripting.V8.Simple.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Scripting.V8.Simple.g.cpp.o -c jni/Fuse.Scripting.V8.Simple.g.cpp

.uno/Fuse.Shapes.g.cpp.o: include/Fuse.DrawContext.h
.uno/Fuse.Shapes.g.cpp.o: include/Fuse.Drawing.Antialiasing.h
.uno/Fuse.Shapes.g.cpp.o: include/Fuse.Drawing.Brush.h
.uno/Fuse.Shapes.g.cpp.o: include/Fuse.Drawing.DynamicBrush.h
.uno/Fuse.Shapes.g.cpp.o: include/Fuse.Drawing.PathGeometry.h
.uno/Fuse.Shapes.g.cpp.o: include/Fuse.Drawing.PathGeometryExtensions.h
.uno/Fuse.Shapes.g.cpp.o: include/Fuse.Drawing.PathGeometryRenderer.h
.uno/Fuse.Shapes.g.cpp.o: include/Fuse.Drawing.Primitives.Circle.h
.uno/Fuse.Shapes.g.cpp.o: include/Fuse.Drawing.Primitives.Rectangle.h
.uno/Fuse.Shapes.g.cpp.o: include/Fuse.Drawing.Primitives.Wedge.h
.uno/Fuse.Shapes.g.cpp.o: include/Fuse.Drawing.Stroke.h
.uno/Fuse.Shapes.g.cpp.o: include/Fuse.Drawing.WindingRules.h
.uno/Fuse.Shapes.g.cpp.o: include/Fuse.Elements.Alignment.h
.uno/Fuse.Shapes.g.cpp.o: include/Fuse.Elements.Element.h
.uno/Fuse.Shapes.g.cpp.o: include/Fuse.Elements.StretchDirection.h
.uno/Fuse.Shapes.g.cpp.o: include/Fuse.Elements.StretchMode.h
.uno/Fuse.Shapes.g.cpp.o: include/Fuse.HitTestContext.h
.uno/Fuse.Shapes.g.cpp.o: include/Fuse.Internal.SizingContainer.h
.uno/Fuse.Shapes.g.cpp.o: include/Fuse.InvalidateLayoutReason.h
.uno/Fuse.Shapes.g.cpp.o: include/Fuse.IViewport.h
.uno/Fuse.Shapes.g.cpp.o: include/Fuse.LayoutParams.h
.uno/Fuse.Shapes.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Shapes.g.cpp.o: include/Fuse.NodeBounds.h
.uno/Fuse.Shapes.g.cpp.o: include/Fuse.Shapes.Circle.h
.uno/Fuse.Shapes.g.cpp.o: include/Fuse.Shapes.Ellipse.h
.uno/Fuse.Shapes.g.cpp.o: include/Fuse.Shapes.FillRule.h
.uno/Fuse.Shapes.g.cpp.o: include/Fuse.Shapes.FitMode.h
.uno/Fuse.Shapes.g.cpp.o: include/Fuse.Shapes.GeometryCache.h
.uno/Fuse.Shapes.g.cpp.o: include/Fuse.Shapes.GeometryCacheEntry.h
.uno/Fuse.Shapes.g.cpp.o: include/Fuse.Shapes.Path.h
.uno/Fuse.Shapes.g.cpp.o: include/Fuse.Shapes.PathScaleMode.h
.uno/Fuse.Shapes.g.cpp.o: include/Fuse.Shapes.PathShape.h
.uno/Fuse.Shapes.g.cpp.o: include/Fuse.Shapes.Rectangle.h
.uno/Fuse.Shapes.g.cpp.o: include/Fuse.Shapes.RegularPolygon.h
.uno/Fuse.Shapes.g.cpp.o: include/Fuse.Shapes.Shape.h
.uno/Fuse.Shapes.g.cpp.o: include/Fuse.Shapes.Star.h
.uno/Fuse.Shapes.g.cpp.o: include/Fuse.StyleProperty-2.h
.uno/Fuse.Shapes.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Shapes.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.Shapes.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Shapes.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Shapes.g.cpp.o: include/Uno.Action-2.h
.uno/Fuse.Shapes.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Shapes.g.cpp.o: include/Uno.Collections.Dictionary-2.Enumerator.h
.uno/Fuse.Shapes.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Shapes.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Fuse.Shapes.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.Shapes.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Fuse.Shapes.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.Shapes.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Shapes.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
.uno/Fuse.Shapes.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Shapes.g.cpp.o: include/Uno.Collections.ObservableList-1.h
.uno/Fuse.Shapes.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Shapes.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Shapes.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Shapes.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Shapes.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.Shapes.g.cpp.o: include/Uno.Func-2.h
.uno/Fuse.Shapes.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Shapes.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Shapes.g.cpp.o: include/Uno.Matrix.h
.uno/Fuse.Shapes.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Shapes.g.cpp.o: include/Uno.Predicate-1.h
.uno/Fuse.Shapes.g.cpp.o: include/Uno.Rect.h
.uno/Fuse.Shapes.g.cpp.o: include/Uno.String.h
.uno/Fuse.Shapes.g.cpp.o: include/Uno.Vector.h
.uno/Fuse.Shapes.g.cpp.o: jni/Fuse.Shapes.g.cpp flags.txt | .uno
	echo Fuse.Shapes.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Shapes.g.cpp.o -c jni/Fuse.Shapes.g.cpp

.uno/Fuse.Storage.g.cpp.o: include/Fuse.Storage.ApplicationDir.h
.uno/Fuse.Storage.g.cpp.o: include/Fuse.Storage.ApplicationDir.ReadClosure.h
.uno/Fuse.Storage.g.cpp.o: include/Fuse.Storage.ApplicationDir.WriteClosure.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.Func-1.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.IDisposable.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.IO.Directory.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.IO.File.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.IO.FileMode.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.IO.Path.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.IO.Stream.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.IO.UserDirectory.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.String.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.Threading.Future-1.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.Threading.IDispatcher.h
.uno/Fuse.Storage.g.cpp.o: include/Uno.Threading.Promise-1.h
.uno/Fuse.Storage.g.cpp.o: jni/Fuse.Storage.g.cpp flags.txt | .uno
	echo Fuse.Storage.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Storage.g.cpp.o -c jni/Fuse.Storage.g.cpp

.uno/Fuse.Themes.g.cpp.o: include/_root.FuseThemes_bundle.h
.uno/Fuse.Themes.g.cpp.o: include/_root.FuseThemes_FuseControlsScrollView_bool_KeepFocusInView_Property.h
.uno/Fuse.Themes.g.cpp.o: include/_root.FuseThemes_FuseControlsScrollView_bool_UserScroll_Property.h
.uno/Fuse.Themes.g.cpp.o: include/_root.FuseThemes_FuseGesturesScroller_bool_UserScroll_Property.h
.uno/Fuse.Themes.g.cpp.o: include/_root.FuseThemes_FuseTriggersWhileBool_bool_Value_Property.h
.uno/Fuse.Themes.g.cpp.o: include/Fuse.Behavior.h
.uno/Fuse.Themes.g.cpp.o: include/Fuse.Controls.Circle.h
.uno/Fuse.Themes.g.cpp.o: include/Fuse.Controls.Ellipse.h
.uno/Fuse.Themes.g.cpp.o: include/Fuse.Controls.Graphics.CircleVisual.h
.uno/Fuse.Themes.g.cpp.o: include/Fuse.Controls.Graphics.EllipseVisual.h
.uno/Fuse.Themes.g.cpp.o: include/Fuse.Controls.Graphics.ImageVisual.h
.uno/Fuse.Themes.g.cpp.o: include/Fuse.Controls.Graphics.PathVisual.h
.uno/Fuse.Themes.g.cpp.o: include/Fuse.Controls.Graphics.RectangleVisual.h
.uno/Fuse.Themes.g.cpp.o: include/Fuse.Controls.Graphics.RegularPolygonVisual.h
.uno/Fuse.Themes.g.cpp.o: include/Fuse.Controls.Graphics.StarVisual.h
.uno/Fuse.Themes.g.cpp.o: include/Fuse.Controls.Image.h
.uno/Fuse.Themes.g.cpp.o: include/Fuse.Controls.ParentControl.h
.uno/Fuse.Themes.g.cpp.o: include/Fuse.Controls.Path.h
.uno/Fuse.Themes.g.cpp.o: include/Fuse.Controls.PropertyBinding-1.h
.uno/Fuse.Themes.g.cpp.o: include/Fuse.Controls.Rectangle.h
.uno/Fuse.Themes.g.cpp.o: include/Fuse.Controls.RegularPolygon.h
.uno/Fuse.Themes.g.cpp.o: include/Fuse.Controls.ScrollView.h
.uno/Fuse.Themes.g.cpp.o: include/Fuse.Controls.Star.h
.uno/Fuse.Themes.g.cpp.o: include/Fuse.Controls.TextControl.h
.uno/Fuse.Themes.g.cpp.o: include/Fuse.Controls.Video.h
.uno/Fuse.Themes.g.cpp.o: include/Fuse.Font.h
.uno/Fuse.Themes.g.cpp.o: include/Fuse.Gestures.KeepFocusInView.h
.uno/Fuse.Themes.g.cpp.o: include/Fuse.Gestures.Scroller.h
.uno/Fuse.Themes.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Themes.g.cpp.o: include/Fuse.StyleProperty-2.h
.uno/Fuse.Themes.g.cpp.o: include/Fuse.Themes.GraphicsStyle.h
.uno/Fuse.Themes.g.cpp.o: include/Fuse.Themes.GraphicsStyle.Template.h
.uno/Fuse.Themes.g.cpp.o: include/Fuse.Themes.GraphicsStyle.Template1.h
.uno/Fuse.Themes.g.cpp.o: include/Fuse.Themes.GraphicsStyle.Template2.h
.uno/Fuse.Themes.g.cpp.o: include/Fuse.Themes.GraphicsStyle.Template3.h
.uno/Fuse.Themes.g.cpp.o: include/Fuse.Themes.GraphicsStyle.Template4.h
.uno/Fuse.Themes.g.cpp.o: include/Fuse.Themes.GraphicsStyle.Template5.h
.uno/Fuse.Themes.g.cpp.o: include/Fuse.Themes.GraphicsStyle.Template6.h
.uno/Fuse.Themes.g.cpp.o: include/Fuse.Themes.GraphicsStyle.Template7.h
.uno/Fuse.Themes.g.cpp.o: include/Fuse.Themes.GraphicsStyle.Template8.h
.uno/Fuse.Themes.g.cpp.o: include/Fuse.Themes.GraphicsStyle.Template9.h
.uno/Fuse.Themes.g.cpp.o: include/Fuse.Triggers.Trigger.h
.uno/Fuse.Themes.g.cpp.o: include/Fuse.Triggers.WhileBool.h
.uno/Fuse.Themes.g.cpp.o: include/Fuse.Triggers.WhileTrue.h
.uno/Fuse.Themes.g.cpp.o: include/Fuse.Video.VideoVisual.h
.uno/Fuse.Themes.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Themes.g.cpp.o: include/Uno.BundleFile.h
.uno/Fuse.Themes.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Fuse.Themes.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Themes.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Themes.g.cpp.o: include/Uno.String.h
.uno/Fuse.Themes.g.cpp.o: include/Uno.UX.BundleFileSource.h
.uno/Fuse.Themes.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Fuse.Themes.g.cpp.o: include/Uno.UX.Property-1.h
.uno/Fuse.Themes.g.cpp.o: include/Uno.UX.Resource.h
.uno/Fuse.Themes.g.cpp.o: include/Uno.UX.Template-1.h
.uno/Fuse.Themes.g.cpp.o: jni/Fuse.Themes.g.cpp flags.txt | .uno
	echo Fuse.Themes.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Themes.g.cpp.o -c jni/Fuse.Themes.g.cpp

.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Controls.HTML.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Controls.IWebView.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Controls.Panel.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Controls.ParentControl.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Elements.Element.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Input.Focus.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Internal.Blender-1.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Internal.BlenderMap.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Launcher.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Node.CancelInteractionsType.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.NodeEvent-2.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.NodeEventArgs.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.NodeEventHandler.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.NodeEventMode.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Scripting.IEventSerializer.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Time.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.BringIntoView.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.BringToFront.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.Call.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.Callback.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.CancelInteractions.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.Collapse.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.DebugAction.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.DebugFrame.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.DebugProperty-1.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.DebugTime.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.EvaluateJS.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.GiveFocus.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.Hide.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.ICollapse.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.IHide.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.IShow.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.ITaggedDebugProperty.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.JSEventArgs.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.JSEventHandler.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.LaunchEmail.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.LaunchMaps.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.LaunchUri.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.LoadHtml.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.LoadUrl.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.Pause.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.PlaybackAction.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.PlayTo.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.Pulse.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.PulseBackward.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.PulseForward.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.RaiseUserEvent.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.ReleaseFocus.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.Reload.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.Resume.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.SendToBack.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.Set-1.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.Show.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.Stop.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.StopLoading.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.TransitionLayout.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.TransitionState.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.TransitionStateType.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.TriggerAction.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.TriggerDirection.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.UserEventArg.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Actions.WebViewNavAction.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.IPlayback.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.IPulseTrigger.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.LayoutTransition.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.LayoutTransitionedArgs.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.LayoutTransitionedHandler.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.StateGroup.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.Triggers.Timeline.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Fuse.UserEvent.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Diagnostics.DebugMessageType.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Matrix.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Net.Http.Uri.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.String.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.UX.Expression-1.h
.uno/Fuse.Triggers.Actions.g.cpp.o: include/Uno.UX.Property-1.h
.uno/Fuse.Triggers.Actions.g.cpp.o: jni/Fuse.Triggers.Actions.g.cpp flags.txt | .uno
	echo Fuse.Triggers.Actions.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Triggers.Actions.g.cpp.o -c jni/Fuse.Triggers.Actions.g.cpp

.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Animations.AnimationVariant.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Animations.Animator.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Animations.IResizeMode.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Animations.Nothing.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Animations.PlayMode.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Animations.TrackAnimator.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Animations.TriggerAnimation.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Animations.TriggerAnimationState.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Animations.TriggerAnimationState.SeekFlags.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.BeginRemoveArgs.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.BeginRemoveHandler.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Behavior.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Controls.IWebView.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Controls.ScrollPositionChangedHandler.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Controls.ScrollView.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Controls.TextEdit.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Controls.TextInputActionArgs.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Controls.TextInputActionHandler.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Controls.TextInputActionType.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Controls.WebView.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Diagnostics.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Elements.Element.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Elements.PreplacementArgs.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Elements.PreplacementHandler.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Gestures.ScrollDirections.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Input.Focus.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Input.FocusGainedArgs.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Input.FocusGainedHandler.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Input.FocusLostArgs.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Input.FocusLostHandler.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Input.Keyboard.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Input.KeyEventArgs.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Input.KeyPressedArgs.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Input.KeyPressedHandler.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.IObjectContainer.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.IScalingMode.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.ITranslationMode.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.IViewport.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.NodeEvent-2.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.NodeEventArgs.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.NodeEventHandler.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.PlacedArgs.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.PlacedHandler.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Properties.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.PropertyHandle.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.RootViewport.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Scaling.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Transform.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.TransformModeFlags.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Translation.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.Actions.Callback.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.Actions.TriggerAction.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.Actions.TriggerDirection.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.AddingAnimation.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.Android.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.ContainingText.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.IMediaPlayback.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.InteractionCompleted.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.iOS.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.IPlayback.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.IProgress.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.IPulseTrigger.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.IValue-1.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.IVisibility.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.KeyPressHandler.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.LayoutAnimation.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.LayoutAnimationType.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.LayoutTransition.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.LayoutTransition.PositionChangeMode.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.LayoutTransition.ResizeChangeMode.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.LayoutTransition.ScaleChangeMode.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.LayoutTransition.WorldPositionChangeMode.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.LayoutTransitioned.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.LayoutTransitionedArgs.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.LayoutTransitionedHandler.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.OnBackButton.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.OnKeyPress.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.OnUserEvent.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.OnUserEventFilter.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.PageBeginLoading.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.PageLoaded.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.ProgressAnimation.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.PullToReload.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.RangeAnimation.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.RemovingAnimation.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.ScrollingAnimation.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.ScrollingAnimationRange.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.State.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.StateGroup.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.StateTransition.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.TextInputActionTriggered.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.Timeline.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.Timeline.State.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.Trigger.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.TriggerBypassMode.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileBool.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileCompleted.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileContainsText.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileDisabled.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileEnabled.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileEnabledDisabledTrigger.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileFailed.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileFalse.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileFloat.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileFloat.Range.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileFocused.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileFocusWithin.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileInteracting.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileKeyboardVisible.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileKeyboardVisible.RelativeToKeyboardMode.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileLoading.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileNotFocused.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhilePageLoading.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhilePaused.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhilePlaying.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileScrollable.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileTrigger.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileTrue.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileValue-1.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileValueStatic.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileVisible.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileWindowAspect.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileWindowLandscape.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileWindowPortrait.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WhileWindowSize.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.Triggers.WindowSizeTrigger.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.UserEvent.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.UserEventArgs.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.UserEventDispatch.h
.uno/Fuse.Triggers.g.cpp.o: include/Fuse.UserEventHandler.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Action-1.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Collections.ObservableList-1.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.EventHandler-1.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Matrix.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Platform.Key.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Platform.SystemUI.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Platform.SystemUIWillResizeEventArgs.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Platform2.Display.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Predicate-1.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.Rect.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.String.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.UX.ValueChangedArgs-1.h
.uno/Fuse.Triggers.g.cpp.o: include/Uno.UX.ValueChangedHandler-1.h
.uno/Fuse.Triggers.g.cpp.o: jni/Fuse.Triggers.g.cpp flags.txt | .uno
	echo Fuse.Triggers.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Triggers.g.cpp.o -c jni/Fuse.Triggers.g.cpp

.uno/Fuse.Vibration.g.cpp.o: include/Android.android.app.Activity.h
.uno/Fuse.Vibration.g.cpp.o: include/Android.android.content.Context.h
.uno/Fuse.Vibration.g.cpp.o: include/Android.android.os.Vibrator.h
.uno/Fuse.Vibration.g.cpp.o: include/Android.Base.Permissions.h
.uno/Fuse.Vibration.g.cpp.o: include/Android.Base.PlatPermission.h
.uno/Fuse.Vibration.g.cpp.o: include/Android.java.lang.Object.h
.uno/Fuse.Vibration.g.cpp.o: include/Android.java.lang.String.h
.uno/Fuse.Vibration.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Vibration.g.cpp.o: include/Fuse.Vibration.Vibrate.h
.uno/Fuse.Vibration.g.cpp.o: include/Fuse.Vibration.Vibration.h
.uno/Fuse.Vibration.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Vibration.g.cpp.o: include/Uno.Long.h
.uno/Fuse.Vibration.g.cpp.o: jni/Fuse.Vibration.g.cpp flags.txt | .uno
	echo Fuse.Vibration.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Vibration.g.cpp.o -c jni/Fuse.Vibration.g.cpp

.uno/Fuse.Video.g.cpp.o: include/_root.FuseVideo_bundle.h
.uno/Fuse.Video.g.cpp.o: include/Fuse.Controls.Graphics.Visual.h
.uno/Fuse.Video.g.cpp.o: include/Fuse.DrawContext.h
.uno/Fuse.Video.g.cpp.o: include/Fuse.Elements.Alignment.h
.uno/Fuse.Video.g.cpp.o: include/Fuse.Elements.StretchDirection.h
.uno/Fuse.Video.g.cpp.o: include/Fuse.Elements.StretchMode.h
.uno/Fuse.Video.g.cpp.o: include/Fuse.Elements.StretchSizing.h
.uno/Fuse.Video.g.cpp.o: include/Fuse.HitTestContext.h
.uno/Fuse.Video.g.cpp.o: include/Fuse.Internal.SizingContainer.h
.uno/Fuse.Video.g.cpp.o: include/Fuse.InvalidateLayoutReason.h
.uno/Fuse.Video.g.cpp.o: include/Fuse.IViewport.h
.uno/Fuse.Video.g.cpp.o: include/Fuse.LayoutParams.h
.uno/Fuse.Video.g.cpp.o: include/Fuse.Node.h
.uno/Fuse.Video.g.cpp.o: include/Fuse.Triggers.IMediaPlayback.h
.uno/Fuse.Video.g.cpp.o: include/Fuse.Triggers.WhileCompleted.h
.uno/Fuse.Video.g.cpp.o: include/Fuse.Triggers.WhileFailed.h
.uno/Fuse.Video.g.cpp.o: include/Fuse.Triggers.WhileLoading.h
.uno/Fuse.Video.g.cpp.o: include/Fuse.Triggers.WhilePaused.h
.uno/Fuse.Video.g.cpp.o: include/Fuse.Triggers.WhilePlaying.h
.uno/Fuse.Video.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Fuse.Video.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Fuse.Video.g.cpp.o: include/Fuse.Video.CancellationTokenSource.h
.uno/Fuse.Video.g.cpp.o: include/Fuse.Video.Graphics.Android.AndroidVideoLoader.h
.uno/Fuse.Video.g.cpp.o: include/Fuse.Video.IVideoPlayer.h
.uno/Fuse.Video.g.cpp.o: include/Fuse.Video.LoadedHandler.h
.uno/Fuse.Video.g.cpp.o: include/Fuse.Video.LoadFailed.h
.uno/Fuse.Video.g.cpp.o: include/Fuse.Video.LoadResult.h
.uno/Fuse.Video.g.cpp.o: include/Fuse.Video.LoadSucceded.h
.uno/Fuse.Video.g.cpp.o: include/Fuse.Video.Scale9Rectangle.h
.uno/Fuse.Video.g.cpp.o: include/Fuse.Video.VideoContainer.h
.uno/Fuse.Video.g.cpp.o: include/Fuse.Video.VideoDiskCache.h
.uno/Fuse.Video.g.cpp.o: include/Fuse.Video.VideoDrawElement.h
.uno/Fuse.Video.g.cpp.o: include/Fuse.Video.VideoLoader.h
.uno/Fuse.Video.g.cpp.o: include/Fuse.Video.VideoVisual.h
.uno/Fuse.Video.g.cpp.o: include/Uno.Action.h
.uno/Fuse.Video.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Fuse.Video.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Video.g.cpp.o: include/Uno.Buffer.h
.uno/Fuse.Video.g.cpp.o: include/Uno.Byte.h
.uno/Fuse.Video.g.cpp.o: include/Uno.Char.h
.uno/Fuse.Video.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Fuse.Video.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Video.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Video.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Video.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.Video.g.cpp.o: include/Uno.EventHandler-1.h
.uno/Fuse.Video.g.cpp.o: include/Uno.Exception.h
.uno/Fuse.Video.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Video.g.cpp.o: include/Uno.Float2.h
.uno/Fuse.Video.g.cpp.o: include/Uno.Float3.h
.uno/Fuse.Video.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Video.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.Video.g.cpp.o: include/Uno.Graphics.BlendOperand.h
.uno/Fuse.Video.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Fuse.Video.g.cpp.o: include/Uno.Graphics.IndexBuffer.h
.uno/Fuse.Video.g.cpp.o: include/Uno.Graphics.IndexType.h
.uno/Fuse.Video.g.cpp.o: include/Uno.Graphics.PolygonFace.h
.uno/Fuse.Video.g.cpp.o: include/Uno.Graphics.VertexAttributeType.h
.uno/Fuse.Video.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Fuse.Video.g.cpp.o: include/Uno.Graphics.VideoTexture.h
.uno/Fuse.Video.g.cpp.o: include/Uno.IDisposable.h
.uno/Fuse.Video.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Video.g.cpp.o: include/Uno.Int2.h
.uno/Fuse.Video.g.cpp.o: include/Uno.IO.Directory.h
.uno/Fuse.Video.g.cpp.o: include/Uno.IO.File.h
.uno/Fuse.Video.g.cpp.o: include/Uno.IO.UserDirectory.h
.uno/Fuse.Video.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Video.g.cpp.o: include/Uno.Matrix.h
.uno/Fuse.Video.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Video.g.cpp.o: include/Uno.Runtime.Implementation.Internal.BufferConverters.h
.uno/Fuse.Video.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h
.uno/Fuse.Video.g.cpp.o: include/Uno.String.h
.uno/Fuse.Video.g.cpp.o: include/Uno.UShort.h
.uno/Fuse.Video.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Fuse.Video.g.cpp.o: include/Uno.UX.ValueChangedArgs-1.h
.uno/Fuse.Video.g.cpp.o: include/Uno.UX.ValueChangedHandler-1.h
.uno/Fuse.Video.g.cpp.o: jni/Fuse.Video.g.cpp flags.txt | .uno
	echo Fuse.Video.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Video.g.cpp.o -c jni/Fuse.Video.g.cpp

.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Android.android.app.Activity.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Android.android.content.Context.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Android.android.content.ContextWrapper.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Android.android.content.res.AssetFileDescriptor.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Android.android.content.res.AssetManager.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Android.android.graphics.SurfaceTexture.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Android.android.media.AudioManager.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Android.android.media.AudioManagerDLROnAudioFocusChangeListener.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Android.android.media.MediaPlayer.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Android.android.view.Surface.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Android.Base.JNI.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Android.Base.Primitives.ujclass.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Android.Base.Primitives.ujlong.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Android.Base.Primitives.ujobject.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Android.Base.Primitives.ujvalue.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Android.java.io.FileDescriptor.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Android.java.lang.Object.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Android.java.lang.String.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Android.Runtime.FloatArray.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Fuse.Video.Graphics.Android.AndroidAudioHelpers.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Fuse.Video.Graphics.Android.AndroidVideoLoader.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Fuse.Video.Graphics.Android.BufferingArgs.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Fuse.Video.Graphics.Android.BufferingEvent.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Fuse.Video.Graphics.Android.CompletionEvent.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Fuse.Video.Graphics.Android.ErrorEvent.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Fuse.Video.Graphics.Android.ErrorEventArgs.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Fuse.Video.Graphics.Android.ErrorEventHandler.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Fuse.Video.Graphics.Android.FrameAvailableEvent.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Fuse.Video.Graphics.Android.PreparedEvent.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Fuse.Video.Graphics.Android.SeekCompleteEvent.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Fuse.Video.Graphics.Android.VideoPlayer.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Fuse.Video.Graphics.Android.VideoSizeChanged.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Fuse.Video.Graphics.Android.VideoSizeChangedArgs.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Fuse.Video.Graphics.Android.VideoSurface.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Fuse.Video.IVideoPlayer.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Fuse.Video.LoadedHandler.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Fuse.Video.LoadFailed.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Fuse.Video.LoadResult.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Fuse.Video.LoadSucceded.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Fuse.Video.VideoDiskCache.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/OpenGL.GL.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/OpenGL.GLTextureHandle.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Uno.Bool.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Uno.BundleFile.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Uno.Delegate.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Uno.Double.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Uno.EventArgs.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Uno.EventHandler.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Uno.EventHandler-1.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Uno.Float.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Uno.Float4.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Uno.Float4x4.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Uno.Graphics.VideoTexture.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Uno.Int.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Uno.Int2.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Uno.Long.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Uno.Math.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Uno.Object.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Uno.Platform2.Application.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Uno.Platform2.ApplicationState.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Uno.Platform2.ApplicationStateTransitionHandler.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Uno.String.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Uno.Text.StringBuilder.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Uno.Type.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Uno.UX.BundleFileSource.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Fuse.Video.Graphics.Android.g.cpp.o: jni/Fuse.Video.Graphics.Android.g.cpp flags.txt | .uno
	echo Fuse.Video.Graphics.Android.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Fuse.Video.Graphics.Android.g.cpp.o -c jni/Fuse.Video.Graphics.Android.g.cpp

.uno/Java.g.cpp.o: include/Java.Object.h
.uno/Java.g.cpp.o: jni/Java.g.cpp flags.txt | .uno
	echo Java.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Java.g.cpp.o -c jni/Java.g.cpp

.uno/OpenGL.g.cpp.o: include/OpenGL.GL.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLBlendEquation.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLBlendingFactor.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLBufferHandle.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLBufferTarget.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLBufferUsage.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLClearBufferMask.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLCullFaceMode.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLDataType.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLDepthFunction.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLEnableCap.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLError.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLFramebufferAttachment.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLFramebufferHandle.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLFramebufferStatus.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLFramebufferTarget.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLFrontFaceDirection.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLIndexType.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLInteger4Name.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLIntegerName.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLPixelFormat.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLPixelType.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLPrimitiveType.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLProgramHandle.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLProgramParameter.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLRenderbufferHandle.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLRenderbufferStorage.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLRenderbufferTarget.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLShaderHandle.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLShaderParameter.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLShaderType.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLTextureHandle.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLTextureParameterName.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLTextureParameterValue.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLTextureTarget.h
.uno/OpenGL.g.cpp.o: include/OpenGL.GLTextureUnit.h
.uno/OpenGL.g.cpp.o: include/Uno.Bool.h
.uno/OpenGL.g.cpp.o: include/Uno.Buffer.h
.uno/OpenGL.g.cpp.o: include/Uno.Float.h
.uno/OpenGL.g.cpp.o: include/Uno.Float2.h
.uno/OpenGL.g.cpp.o: include/Uno.Float2x2.h
.uno/OpenGL.g.cpp.o: include/Uno.Float3.h
.uno/OpenGL.g.cpp.o: include/Uno.Float4.h
.uno/OpenGL.g.cpp.o: include/Uno.Float4x4.h
.uno/OpenGL.g.cpp.o: include/Uno.Int.h
.uno/OpenGL.g.cpp.o: include/Uno.Int4.h
.uno/OpenGL.g.cpp.o: include/Uno.String.h
.uno/OpenGL.g.cpp.o: include/Uno/XliInterop.h
.uno/OpenGL.g.cpp.o: jni/OpenGL.g.cpp flags.txt | .uno
	echo OpenGL.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/OpenGL.g.cpp.o -c jni/OpenGL.g.cpp

.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.AddEventHandler.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.BindVariable.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.BlobLiteral.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.BooleanLiteral.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.CallDynamicMethod.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.CallLambda.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.CallStaticMethod.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.EnumLiteral.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.Expression.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.Instantiate.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.IsType.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.Lambda.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.Literal.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.LogicalOr.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.MethodGroup.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.NamespaceName.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.NoOperation.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.NumberLiteral.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.NumberType.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.Optional.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.Optional-1.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.OptionalExtensions.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.Parameter.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.ProjectBytecode.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.ReadProperty.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.ReadStaticField.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.ReadVariable.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.RemoveEventHandler.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.Return.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.Signature.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.Statement.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.StaticMemberName.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.StringLiteral.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.TypeMemberName.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.TypeName.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.Variable.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Bytecode.WriteProperty.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Closure.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.ImmutableList-1.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.IndentString.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.InvalidDataException.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.List.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.NonExhaustiveMatch.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.Serialization.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Outracks.Simulator.StringSplitting.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.Action-1.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.Action-2.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.Bool.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.Byte.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.Char.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.Collections.EnumerableExtensions.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.Double.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.Exception.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.Func-1.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.Func-2.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.Int.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.InvalidOperationException.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.IO.BinaryReader.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.IO.BinaryWriter.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.Object.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.String.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: include/Uno.Text.StringBuilder.h
.uno/Outracks.Simulator.Bytecode.g.cpp.o: jni/Outracks.Simulator.Bytecode.g.cpp flags.txt | .uno
	echo Outracks.Simulator.Bytecode.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Outracks.Simulator.Bytecode.g.cpp.o -c jni/Outracks.Simulator.Bytecode.g.cpp

.uno/Outracks.Simulator.ByteFileSource.cpp.o: include/Outracks.Simulator.ArrayStream.h
.uno/Outracks.Simulator.ByteFileSource.cpp.o: include/Outracks.Simulator.ByteFileSource.h
.uno/Outracks.Simulator.ByteFileSource.cpp.o: include/Uno.Byte.h
.uno/Outracks.Simulator.ByteFileSource.cpp.o: include/Uno.IO.Stream.h
.uno/Outracks.Simulator.ByteFileSource.cpp.o: include/Uno.String.h
.uno/Outracks.Simulator.ByteFileSource.cpp.o: jni/Outracks.Simulator.ByteFileSource.cpp flags.txt | .uno
	echo Outracks.Simulator.ByteFileSource.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Outracks.Simulator.ByteFileSource.cpp.o -c jni/Outracks.Simulator.ByteFileSource.cpp

.uno/Outracks.Simulator.FileCache.cpp.o: include/Outracks.Simulator.ByteFileSource.h
.uno/Outracks.Simulator.FileCache.cpp.o: include/Outracks.Simulator.FileCache.h
.uno/Outracks.Simulator.FileCache.cpp.o: include/Uno.Bool.h
.uno/Outracks.Simulator.FileCache.cpp.o: include/Uno.Byte.h
.uno/Outracks.Simulator.FileCache.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Outracks.Simulator.FileCache.cpp.o: include/Uno.String.h
.uno/Outracks.Simulator.FileCache.cpp.o: jni/Outracks.Simulator.FileCache.cpp flags.txt | .uno
	echo Outracks.Simulator.FileCache.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Outracks.Simulator.FileCache.cpp.o -c jni/Outracks.Simulator.FileCache.cpp

.uno/Outracks.Simulator.g.cpp.o: include/_root.OutracksSimulatorClientUno_bundle.h
.uno/Outracks.Simulator.g.cpp.o: include/Android.android.os.Build.h
.uno/Outracks.Simulator.g.cpp.o: include/Android.java.lang.String.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.App.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.AppBase.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.BasicTheme.BasicStyle.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.BasicTheme.BasicTheme.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Behavior.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Controls.Button.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Controls.Control.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Controls.Image.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Controls.Panel.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Controls.ParentControl.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Controls.ScrollView.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Controls.StackPanel.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Controls.Text.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Controls.TextControl.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Controls.TextInput.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.DrawContext.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Drawing.Brush.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Drawing.GradientStop.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Drawing.LinearGradient.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Elements.Alignment.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Elements.Element.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Elements.TextAlignment.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Elements.TextWrapping.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Elements.Visibility.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Font.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Gestures.Clicked.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Gestures.ClickedArgs.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Gestures.ClickedHandler.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Gestures.ScrollDirections.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.HitTestCallback.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.HitTestContext.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.HitTestResult.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Input.Pointer.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Input.PointerEventArgs.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Input.PointerMovedArgs.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Input.PointerPressedArgs.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Input.PointerReleasedArgs.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Input.PointerWheelMovedArgs.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Layouts.Orientation.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Node.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.NodeEventArgs.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Preview.ISelection.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Preview.SelectionManager.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Theme.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.Time.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.UnhandledExceptionArgs.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.UnhandledExceptionHandler.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.UpdateManager.h
.uno/Outracks.Simulator.g.cpp.o: include/Fuse.UpdateStage.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.AggregateConnectError.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Application.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Apply-1.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.ApplyFirst-2.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.ApplySecond-2.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.ArrayStream.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Bytecode.Lambda.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Bytecode.Optional.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Bytecode.Optional-1.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.BytecodeCache.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.ChangeIp.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Closure.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.ConcurrentQueue-1.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Connected.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Connecting.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.ConnectingToHost.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.ConnectingToProxy.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.ConnectionLost.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.ConnectToSimulator.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Context.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.DeviceInfo.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.DialogButton.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.DummyApplication.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.EnumerableHitTestExtension.CollectHitNodesClosure.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.EnumerableHitTestExtension.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Exceptions.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.FailedToConnect.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.FailedToConnectToEndPoint.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.FailedToConnectToProxy.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.FailedToConnectToSimulator.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.FakeApp.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Faulted.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Flasher.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Forget-2.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Forget-3.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.ForgetAction-2.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.GetSimulatorEndpoint.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.GoOffline.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Idle.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.IEquatable-1.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.ImmutableList-1.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.IndentString.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.InputMode.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.InvalidDataException.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.ISimulatorClient.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.List.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.LoadingScreen.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.ModalDialog.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.NonExhaustiveMatch.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.OfflineSimulatorClient.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Protocol.DebugLog.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Protocol.Error.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Protocol.ExceptionInfo.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Protocol.Execute.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Protocol.MessageFromClient.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Protocol.MessageToClient.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Protocol.RegisterName.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Protocol.Reify.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Protocol.SetSelection.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Protocol.UnhandledException.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.ProxyClient.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Reifying.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Running.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Runtime.IReflection.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Runtime.ObjectTagRegistry.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Runtime.Selection.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Runtime.VirtualMachine.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Serialization.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.ShowingModalDialog.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.ShowingPrompt.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.SimulatorClient.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.State.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.StringSplitting.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Task-1.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Tasks.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.TaskThread-1.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.Uninitialized.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.UserAppState.h
.uno/Outracks.Simulator.g.cpp.o: include/Outracks.Simulator.WaitForFirstResult-1.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Action.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Action-1.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Action-2.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.AggregateException.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Application.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Array.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Bool.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.BundleFile.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Byte.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Char.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Collections.EnumerableExtensions.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Collections.IListExtensions.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Collections.Queue-1.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Collections.ReadOnlyCollection-1.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Color.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Diagnostics.DebugMessageType.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Diagnostics.LogHandler.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Double.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Exception.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Float.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Float2.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Float3.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Float4.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Func-1.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Func-2.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.IDisposable.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Int.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.IO.BinaryReader.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.IO.BinaryWriter.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.IO.Directory.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.IO.EndOfStreamException.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.IO.File.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.IO.FileMode.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.IO.SeekOrigin.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.IO.Stream.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.IO.StreamReader.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.IO.StreamWriter.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.IO.TextReader.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.IO.TextWriter.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.IO.UserDirectory.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Long.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Math.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Net.EndPoint.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Net.IPAddress.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Net.IPEndPoint.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Net.Sockets.AddressFamily.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Net.Sockets.NetworkStream.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Net.Sockets.ProtocolType.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Net.Sockets.SelectMode.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Net.Sockets.Socket.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Net.Sockets.SocketShutdown.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Net.Sockets.SocketType.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.NotImplementedException.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Object.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Platform.Window.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Runtime.Implementation.Internal.WindowHelpers.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Runtime.Implementation.PlatformWindowHandle.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Runtime.Implementation.PlatformWindowImpl.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.String.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Text.StringBuilder.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Threading.Mutex.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Threading.Thread.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.Type.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.UInt.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.UX.BundleFileSource.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Outracks.Simulator.g.cpp.o: include/Uno.UX.Resource.h
.uno/Outracks.Simulator.g.cpp.o: jni/Outracks.Simulator.g.cpp flags.txt | .uno
	echo Outracks.Simulator.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Outracks.Simulator.g.cpp.o -c jni/Outracks.Simulator.g.cpp

.uno/Outracks.Simulator.GeneratedApplication.cpp.o: include/Outracks.Simulator.GeneratedApplication.h
.uno/Outracks.Simulator.GeneratedApplication.cpp.o: include/Outracks.Simulator.Reflection.Native.ITypeMap.h
.uno/Outracks.Simulator.GeneratedApplication.cpp.o: include/Outracks.Simulator.Reflection.Native.NativeReflection.h
.uno/Outracks.Simulator.GeneratedApplication.cpp.o: include/Outracks.Simulator.Reflection.Native.SimpleTypeMap.h
.uno/Outracks.Simulator.GeneratedApplication.cpp.o: include/Outracks.Simulator.Runtime.IReflection.h
.uno/Outracks.Simulator.GeneratedApplication.cpp.o: include/Uno.Int.h
.uno/Outracks.Simulator.GeneratedApplication.cpp.o: include/Uno.Net.IPAddress.h
.uno/Outracks.Simulator.GeneratedApplication.cpp.o: include/Uno.Net.IPEndPoint.h
.uno/Outracks.Simulator.GeneratedApplication.cpp.o: include/Uno.String.h
.uno/Outracks.Simulator.GeneratedApplication.cpp.o: jni/Outracks.Simulator.GeneratedApplication.cpp flags.txt | .uno
	echo Outracks.Simulator.GeneratedApplication.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Outracks.Simulator.GeneratedApplication.cpp.o -c jni/Outracks.Simulator.GeneratedApplication.cpp

.uno/Outracks.Simulator.Protocol.g.cpp.o: include/Outracks.Simulator.Bytecode.Lambda.h
.uno/Outracks.Simulator.Protocol.g.cpp.o: include/Outracks.Simulator.Bytecode.TypeName.h
.uno/Outracks.Simulator.Protocol.g.cpp.o: include/Outracks.Simulator.Closure.h
.uno/Outracks.Simulator.Protocol.g.cpp.o: include/Outracks.Simulator.ImmutableList-1.h
.uno/Outracks.Simulator.Protocol.g.cpp.o: include/Outracks.Simulator.InvalidDataException.h
.uno/Outracks.Simulator.Protocol.g.cpp.o: include/Outracks.Simulator.List.h
.uno/Outracks.Simulator.Protocol.g.cpp.o: include/Outracks.Simulator.NonExhaustiveMatch.h
.uno/Outracks.Simulator.Protocol.g.cpp.o: include/Outracks.Simulator.Protocol.DebugLog.h
.uno/Outracks.Simulator.Protocol.g.cpp.o: include/Outracks.Simulator.Protocol.Error.h
.uno/Outracks.Simulator.Protocol.g.cpp.o: include/Outracks.Simulator.Protocol.ExceptionInfo.h
.uno/Outracks.Simulator.Protocol.g.cpp.o: include/Outracks.Simulator.Protocol.Execute.h
.uno/Outracks.Simulator.Protocol.g.cpp.o: include/Outracks.Simulator.Protocol.MessageFromClient.h
.uno/Outracks.Simulator.Protocol.g.cpp.o: include/Outracks.Simulator.Protocol.MessageToClient.h
.uno/Outracks.Simulator.Protocol.g.cpp.o: include/Outracks.Simulator.Protocol.RegisterName.h
.uno/Outracks.Simulator.Protocol.g.cpp.o: include/Outracks.Simulator.Protocol.Reify.h
.uno/Outracks.Simulator.Protocol.g.cpp.o: include/Outracks.Simulator.Protocol.SetSelection.h
.uno/Outracks.Simulator.Protocol.g.cpp.o: include/Outracks.Simulator.Protocol.UnhandledException.h
.uno/Outracks.Simulator.Protocol.g.cpp.o: include/Uno.Action-1.h
.uno/Outracks.Simulator.Protocol.g.cpp.o: include/Uno.Action-2.h
.uno/Outracks.Simulator.Protocol.g.cpp.o: include/Uno.Bool.h
.uno/Outracks.Simulator.Protocol.g.cpp.o: include/Uno.Char.h
.uno/Outracks.Simulator.Protocol.g.cpp.o: include/Uno.Exception.h
.uno/Outracks.Simulator.Protocol.g.cpp.o: include/Uno.Func-2.h
.uno/Outracks.Simulator.Protocol.g.cpp.o: include/Uno.IO.BinaryReader.h
.uno/Outracks.Simulator.Protocol.g.cpp.o: include/Uno.IO.BinaryWriter.h
.uno/Outracks.Simulator.Protocol.g.cpp.o: include/Uno.String.h
.uno/Outracks.Simulator.Protocol.g.cpp.o: include/Uno.Type.h
.uno/Outracks.Simulator.Protocol.g.cpp.o: jni/Outracks.Simulator.Protocol.g.cpp flags.txt | .uno
	echo Outracks.Simulator.Protocol.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Outracks.Simulator.Protocol.g.cpp.o -c jni/Outracks.Simulator.Protocol.g.cpp

.uno/Outracks.Simulator.Reflection.g.cpp.o: include/Outracks.Simulator.Bytecode.Parameter.h
.uno/Outracks.Simulator.Reflection.g.cpp.o: include/Outracks.Simulator.Bytecode.Signature.h
.uno/Outracks.Simulator.Reflection.g.cpp.o: include/Outracks.Simulator.Bytecode.TypeMemberName.h
.uno/Outracks.Simulator.Reflection.g.cpp.o: include/Outracks.Simulator.Bytecode.TypeName.h
.uno/Outracks.Simulator.Reflection.g.cpp.o: include/Outracks.Simulator.ImmutableList-1.h
.uno/Outracks.Simulator.Reflection.g.cpp.o: include/Outracks.Simulator.Reflection.DelegateReflection.h
.uno/Outracks.Simulator.Reflection.g.cpp.o: include/Uno.Action-3.h
.uno/Outracks.Simulator.Reflection.g.cpp.o: include/Uno.Bool.h
.uno/Outracks.Simulator.Reflection.g.cpp.o: include/Uno.Collections.EnumerableExtensions.h
.uno/Outracks.Simulator.Reflection.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Outracks.Simulator.Reflection.g.cpp.o: include/Uno.Func-2.h
.uno/Outracks.Simulator.Reflection.g.cpp.o: include/Uno.Func-3.h
.uno/Outracks.Simulator.Reflection.g.cpp.o: include/Uno.Func-4.h
.uno/Outracks.Simulator.Reflection.g.cpp.o: include/Uno.Func-5.h
.uno/Outracks.Simulator.Reflection.g.cpp.o: include/Uno.String.h
.uno/Outracks.Simulator.Reflection.g.cpp.o: jni/Outracks.Simulator.Reflection.g.cpp flags.txt | .uno
	echo Outracks.Simulator.Reflection.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Outracks.Simulator.Reflection.g.cpp.o -c jni/Outracks.Simulator.Reflection.g.cpp

.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.Bytecode.Parameter.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.Bytecode.Signature.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.Bytecode.TypeMemberName.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.Bytecode.TypeName.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.ImmutableList-1.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.Reflection.Native.CppEvent.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.Reflection.Native.CppProperty.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.Reflection.Native.IEvent.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.Reflection.Native.IProperty.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.Reflection.Native.ITypeMap.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.Reflection.Native.NativeReflection.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.Reflection.Native.Property-1.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.Reflection.Native.ReflectionCache.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.Reflection.Native.ReflectionExtensions.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.Reflection.Native.ReflectionHelpers.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.Reflection.Native.SimpleTypeMap.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.Reflection.Native.TryInvokeExtension.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.Runtime.MemberNotFound.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.Runtime.TypeNotFound.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Outracks.Simulator.Runtime.UnambiguousMethodNotFound.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Bool.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Byte.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Byte2.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Byte4.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Char.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Collections.EnumerableExtensions.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Delegate.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Double.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Enum.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Exception.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Float.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Float2.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Float2x2.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Float3.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Float3x3.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Float4.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Float4x4.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Func-2.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Graphics.TextureCube.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Int.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Int2.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Int3.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Int4.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.InvalidOperationException.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Long.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Object.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Reflection.CppField.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Reflection.CppFunction.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Reflection.CppReflection.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Reflection.IField.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Reflection.IFunction.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.SByte.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.SByte2.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.SByte4.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Short.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Short2.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Short4.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.String.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.Type.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.UInt.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.ULong.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.UShort.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.UShort2.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: include/Uno.UShort4.h
.uno/Outracks.Simulator.Reflection.Native.g.cpp.o: jni/Outracks.Simulator.Reflection.Native.g.cpp flags.txt | .uno
	echo Outracks.Simulator.Reflection.Native.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Outracks.Simulator.Reflection.Native.g.cpp.o -c jni/Outracks.Simulator.Reflection.Native.g.cpp

.uno/Outracks.Simulator.Runtime.g.cpp.o: include/_root.HashableWeakReference.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/_root.WeakDictionary-2.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.AddEventHandler.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.BindVariable.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.BlobLiteral.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.BooleanLiteral.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.CallDynamicMethod.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.CallLambda.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.CallStaticMethod.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.EnumLiteral.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.Expression.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.Instantiate.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.IsType.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.Lambda.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.Literal.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.LogicalOr.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.MethodGroup.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.NumberLiteral.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.NumberType.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.Optional.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.Optional-1.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.Parameter.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.ReadProperty.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.ReadStaticField.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.ReadVariable.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.RemoveEventHandler.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.Return.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.Signature.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.Statement.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.StaticMemberName.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.StringLiteral.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.TypeMemberName.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.TypeName.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.Variable.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Bytecode.WriteProperty.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Context.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.ImmutableList-1.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Runtime.Environment.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Runtime.IReflection.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Runtime.LambdaClosure.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Runtime.LazyProperty-1.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Runtime.LazyPropertyStorage-1.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Runtime.MemberNotFound.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Runtime.ObjectPropertyRegistry.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Runtime.ObjectTagRegistry.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Runtime.ScopeClosure.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Runtime.Selection.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Runtime.TypeNotFound.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Runtime.UnambiguousMethodNotFound.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Runtime.VariableNotBound.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Outracks.Simulator.Runtime.VirtualMachine.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Action.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Action-1.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Action-2.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Action-3.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.ArgumentException.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Bool.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Byte.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Delegate.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Diagnostics.DebugMessageType.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Double.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Exception.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Float.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Func-1.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Func-2.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Func-3.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Func-4.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Int.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Object.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.SByte.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.Short.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.String.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.UInt.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.UShort.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.UX.ValueChangedArgs-1.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.UX.ValueChangedHandler-1.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: include/Uno.WeakReference-1.h
.uno/Outracks.Simulator.Runtime.g.cpp.o: jni/Outracks.Simulator.Runtime.g.cpp flags.txt | .uno
	echo Outracks.Simulator.Runtime.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Outracks.Simulator.Runtime.g.cpp.o -c jni/Outracks.Simulator.Runtime.g.cpp

.uno/Outracks.Simulator.Runtime.SimulatedObjectTypeRegistry.cpp.o: include/_root.WeakDictionary-2.h
.uno/Outracks.Simulator.Runtime.SimulatedObjectTypeRegistry.cpp.o: include/Outracks.Simulator.Bytecode.TypeName.h
.uno/Outracks.Simulator.Runtime.SimulatedObjectTypeRegistry.cpp.o: include/Outracks.Simulator.Runtime.SimulatedObjectTypeRegistry.h
.uno/Outracks.Simulator.Runtime.SimulatedObjectTypeRegistry.cpp.o: include/Uno.Bool.h
.uno/Outracks.Simulator.Runtime.SimulatedObjectTypeRegistry.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Outracks.Simulator.Runtime.SimulatedObjectTypeRegistry.cpp.o: include/Uno.String.h
.uno/Outracks.Simulator.Runtime.SimulatedObjectTypeRegistry.cpp.o: jni/Outracks.Simulator.Runtime.SimulatedObjectTypeRegistry.cpp flags.txt | .uno
	echo Outracks.Simulator.Runtime.SimulatedObjectTypeRegistry.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Outracks.Simulator.Runtime.SimulatedObjectTypeRegistry.cpp.o -c jni/Outracks.Simulator.Runtime.SimulatedObjectTypeRegistry.cpp

.uno/Outracks.Simulator.Runtime.UxFactory.cpp.o: include/Outracks.Simulator.Runtime.UxFactory.h
.uno/Outracks.Simulator.Runtime.UxFactory.cpp.o: include/Uno.Bool.h
.uno/Outracks.Simulator.Runtime.UxFactory.cpp.o: include/Uno.Func-1.h
.uno/Outracks.Simulator.Runtime.UxFactory.cpp.o: include/Uno.Object.h
.uno/Outracks.Simulator.Runtime.UxFactory.cpp.o: include/Uno.String.h
.uno/Outracks.Simulator.Runtime.UxFactory.cpp.o: jni/Outracks.Simulator.Runtime.UxFactory.cpp flags.txt | .uno
	echo Outracks.Simulator.Runtime.UxFactory.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Outracks.Simulator.Runtime.UxFactory.cpp.o -c jni/Outracks.Simulator.Runtime.UxFactory.cpp

.uno/Outracks.Simulator.Runtime.UxProperty-1.cpp.o: include/Outracks.Simulator.Runtime.UxProperty-1.h
.uno/Outracks.Simulator.Runtime.UxProperty-1.cpp.o: include/Uno.Action-1.h
.uno/Outracks.Simulator.Runtime.UxProperty-1.cpp.o: include/Uno.Action-2.h
.uno/Outracks.Simulator.Runtime.UxProperty-1.cpp.o: include/Uno.Bool.h
.uno/Outracks.Simulator.Runtime.UxProperty-1.cpp.o: include/Uno.Delegate.h
.uno/Outracks.Simulator.Runtime.UxProperty-1.cpp.o: include/Uno.Func-1.h
.uno/Outracks.Simulator.Runtime.UxProperty-1.cpp.o: include/Uno.UX.ValueChangedHandler-1.h
.uno/Outracks.Simulator.Runtime.UxProperty-1.cpp.o: jni/Outracks.Simulator.Runtime.UxProperty-1.cpp flags.txt | .uno
	echo Outracks.Simulator.Runtime.UxProperty-1.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Outracks.Simulator.Runtime.UxProperty-1.cpp.o -c jni/Outracks.Simulator.Runtime.UxProperty-1.cpp

.uno/Outracks.Simulator.Runtime.UxTemplate.cpp.o: include/Outracks.Simulator.Runtime.UxTemplate.h
.uno/Outracks.Simulator.Runtime.UxTemplate.cpp.o: include/Uno.Bool.h
.uno/Outracks.Simulator.Runtime.UxTemplate.cpp.o: include/Uno.Func-2.h
.uno/Outracks.Simulator.Runtime.UxTemplate.cpp.o: jni/Outracks.Simulator.Runtime.UxTemplate.cpp flags.txt | .uno
	echo Outracks.Simulator.Runtime.UxTemplate.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Outracks.Simulator.Runtime.UxTemplate.cpp.o -c jni/Outracks.Simulator.Runtime.UxTemplate.cpp

.uno/Outracks.UnoCore.Utilities.g.cpp.o: include/Outracks.UnoCore.Utilities.VerySimpleEventQueue.h
.uno/Outracks.UnoCore.Utilities.g.cpp.o: include/Uno.Action.h
.uno/Outracks.UnoCore.Utilities.g.cpp.o: include/Uno.Bool.h
.uno/Outracks.UnoCore.Utilities.g.cpp.o: include/Uno.Delegate.h
.uno/Outracks.UnoCore.Utilities.g.cpp.o: jni/Outracks.UnoCore.Utilities.g.cpp flags.txt | .uno
	echo Outracks.UnoCore.Utilities.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Outracks.UnoCore.Utilities.g.cpp.o -c jni/Outracks.UnoCore.Utilities.g.cpp

.uno/Uno.Collections.g.cpp.o: include/Uno.Action-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Array.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.ConcurrentCollection-1.DeferLockImpl.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.ConcurrentCollection-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.ConcurrentCollection-1.ModItem.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Dictionary-2.Bucket.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Dictionary-2.BucketState.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Dictionary-2.Enumerator.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Dictionary-2.KeyCollection.Enumerator.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Dictionary-2.KeyCollection.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Dictionary-2.ValueCollection.Enumerator.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Dictionary-2.ValueCollection.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.EmptyEnumerable-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.EmptyEnumerator-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.EnumerableExtensions.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.EnumerableExtensions.LinkedList-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.HashSet-1.Enumerator.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.HashSet-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.ICollection-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.IDictionary-2.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.IListExtensions.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.LinkedList-1.Enumerator.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.LinkedList-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.LinkedListNode-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.ObservableList-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.OrderByCompare-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Queue-1.Enumerator.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Queue-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.ReadOnlyCollection-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.SelectEnumerable-2.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.SelectEnumerator-2.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Stack-1.Enumerator.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.Stack-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.UnionEnumerable-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.UnionEnumerator-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.WhereEnumerable-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Collections.WhereEnumerator-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Comparison-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Delegate.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Exception.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Func-2.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Func-3.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Generic.h
.uno/Uno.Collections.g.cpp.o: include/Uno.IDisposable.h
.uno/Uno.Collections.g.cpp.o: include/Uno.IndexOutOfRangeException.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Int.h
.uno/Uno.Collections.g.cpp.o: include/Uno.InvalidOperationException.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Math.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Object.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Predicate-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h
.uno/Uno.Collections.g.cpp.o: include/Uno.String.h
.uno/Uno.Collections.g.cpp.o: jni/Uno.Collections.g.cpp flags.txt | .uno
	echo Uno.Collections.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Collections.g.cpp.o -c jni/Uno.Collections.g.cpp

.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Android.Base.JNI.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Android.Base.Primitives.jmethodID.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Android.Base.Primitives.JNIEnvPtr.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Android.Base.Primitives.ujclass.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Android.Base.Primitives.ujlong.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Android.Base.Primitives.ujobject.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Android.Base.Primitives.ujvalue.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.Compiler.ExportTargetInterop.Foreign.Android.ExternBlockHost.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.Exception.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.Int.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.Long.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.Object.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: include/Uno.String.h
.uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o: jni/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp flags.txt | .uno
	echo Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp.o -c jni/Uno.Compiler.ExportTargetInterop.Foreign.Android.g.cpp

.uno/Uno.Compiler.ExportTargetInterop.g.cpp.o: include/Uno.Compiler.ExportTargetInterop.DontCopyStructAttribute.h
.uno/Uno.Compiler.ExportTargetInterop.g.cpp.o: include/Uno.Compiler.ExportTargetInterop.DontExportAttribute.h
.uno/Uno.Compiler.ExportTargetInterop.g.cpp.o: include/Uno.Compiler.ExportTargetInterop.OptionalAttribute.h
.uno/Uno.Compiler.ExportTargetInterop.g.cpp.o: include/Uno.Compiler.ExportTargetInterop.StaticAttribute.h
.uno/Uno.Compiler.ExportTargetInterop.g.cpp.o: include/Uno.Compiler.ExportTargetInterop.TargetSpecificImplementationAttribute.h
.uno/Uno.Compiler.ExportTargetInterop.g.cpp.o: include/Uno.Compiler.ExportTargetInterop.TargetSpecificTypeAttribute.h
.uno/Uno.Compiler.ExportTargetInterop.g.cpp.o: jni/Uno.Compiler.ExportTargetInterop.g.cpp flags.txt | .uno
	echo Uno.Compiler.ExportTargetInterop.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Compiler.ExportTargetInterop.g.cpp.o -c jni/Uno.Compiler.ExportTargetInterop.g.cpp

.uno/Uno.Compiler.g.cpp.o: include/Uno.Compiler.CallerFilePathAttribute.h
.uno/Uno.Compiler.g.cpp.o: include/Uno.Compiler.CallerLineNumberAttribute.h
.uno/Uno.Compiler.g.cpp.o: include/Uno.Compiler.CallerMemberNameAttribute.h
.uno/Uno.Compiler.g.cpp.o: include/Uno.Compiler.HideFromCodeCompleterAttribute.h
.uno/Uno.Compiler.g.cpp.o: include/Uno.Compiler.IgnoreMainClassAttribute.h
.uno/Uno.Compiler.g.cpp.o: include/Uno.Compiler.MainClassAttribute.h
.uno/Uno.Compiler.g.cpp.o: include/Uno.Compiler.UxGeneratedAttribute.h
.uno/Uno.Compiler.g.cpp.o: jni/Uno.Compiler.g.cpp flags.txt | .uno
	echo Uno.Compiler.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Compiler.g.cpp.o -c jni/Uno.Compiler.g.cpp

.uno/Uno.Compiler.ImportServices.g.cpp.o: include/Uno.Compiler.ImportServices.FilenameAttribute.h
.uno/Uno.Compiler.ImportServices.g.cpp.o: jni/Uno.Compiler.ImportServices.g.cpp flags.txt | .uno
	echo Uno.Compiler.ImportServices.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Compiler.ImportServices.g.cpp.o -c jni/Uno.Compiler.ImportServices.g.cpp

.uno/Uno.Compiler.ShaderGenerator.g.cpp.o: include/Uno.Compiler.ShaderGenerator.ShaderStageInlineAttribute.h
.uno/Uno.Compiler.ShaderGenerator.g.cpp.o: jni/Uno.Compiler.ShaderGenerator.g.cpp flags.txt | .uno
	echo Uno.Compiler.ShaderGenerator.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Compiler.ShaderGenerator.g.cpp.o -c jni/Uno.Compiler.ShaderGenerator.g.cpp

.uno/Uno.Content.Fonts.g.cpp.o: include/_root.UnoCore_bundle.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Application.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Buffer.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.BundleFile.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Byte.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Char.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Collections.Dictionary-2.Enumerator.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Content.Fonts.BitmapFont.CharPair.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Content.Fonts.BitmapFont.GlyphInfo.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Content.Fonts.BitmapFont.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Content.Fonts.CppFontFace.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Content.Fonts.CppFontFaceHandle.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Content.Fonts.DefaultTextTransform.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Content.Fonts.FontFace.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Content.Fonts.FontFaceHelpers.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Content.Fonts.RenderedGlyph.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Content.Fonts.SdfFontShader.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Content.Fonts.SpriteFontShader.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Content.Fonts.TextRenderer.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Content.Fonts.TextShader.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Content.Fonts.TextShaderData.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Content.Fonts.TextTransform.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Content.Images.Bitmap.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Double.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Exception.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Float.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Float2.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Float3.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Float4.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Float4x4.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Graphics.BlendOperand.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Graphics.DeviceBuffer.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Graphics.Format.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Graphics.FormatHelpers.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Graphics.GraphicsContext.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Graphics.IndexBuffer.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Graphics.IndexType.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Graphics.PolygonFace.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Graphics.SamplerState.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Graphics.VertexAttributeInfo.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Graphics.VertexAttributeType.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Int.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Int2.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Math.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Matrix.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Recti.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Runtime.Implementation.Internal.BufferReader.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.String.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.UInt.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.UShort.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno.UShort2.h
.uno/Uno.Content.Fonts.g.cpp.o: include/Uno/XliInterop.h
.uno/Uno.Content.Fonts.g.cpp.o: jni/Uno.Content.Fonts.g.cpp flags.txt | .uno
	echo Uno.Content.Fonts.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Content.Fonts.g.cpp.o -c jni/Uno.Content.Fonts.g.cpp

.uno/Uno.Content.Images.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Content.Images.g.cpp.o: include/Uno.Buffer.h
.uno/Uno.Content.Images.g.cpp.o: include/Uno.Content.Images.Bitmap.h
.uno/Uno.Content.Images.g.cpp.o: include/Uno.Exception.h
.uno/Uno.Content.Images.g.cpp.o: include/Uno.Graphics.Format.h
.uno/Uno.Content.Images.g.cpp.o: include/Uno.Graphics.FormatHelpers.h
.uno/Uno.Content.Images.g.cpp.o: include/Uno.Int.h
.uno/Uno.Content.Images.g.cpp.o: include/Uno.String.h
.uno/Uno.Content.Images.g.cpp.o: jni/Uno.Content.Images.g.cpp flags.txt | .uno
	echo Uno.Content.Images.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Content.Images.g.cpp.o -c jni/Uno.Content.Images.g.cpp

.uno/Uno.Content.Models.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Buffer.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Byte.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Byte4.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Collections.IEnumerator.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Content.Models.IndexArray.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Content.Models.Model.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Content.Models.ModelDrawable.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Content.Models.ModelMaterial.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Content.Models.ModelMesh.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Content.Models.ModelNode.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Content.Models.ModelParameter-1.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Content.Models.VertexAttributeArray.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Float.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Float2.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Float3.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Float4.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Graphics.IndexType.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Graphics.IndexTypeHelpers.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Graphics.PrimitiveType.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Graphics.VertexAttributeType.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Graphics.VertexAttributeTypeHelpers.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Int.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Runtime.Implementation.Internal.BufferConverters.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.SByte.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.SByte4.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Short.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Short2.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.Short4.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.String.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.UInt.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.UShort.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.UShort2.h
.uno/Uno.Content.Models.g.cpp.o: include/Uno.UShort4.h
.uno/Uno.Content.Models.g.cpp.o: jni/Uno.Content.Models.g.cpp flags.txt | .uno
	echo Uno.Content.Models.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Content.Models.g.cpp.o -c jni/Uno.Content.Models.g.cpp

.uno/Uno.Content.Splines.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Content.Splines.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Uno.Content.Splines.g.cpp.o: include/Uno.Content.Splines.KeyframedSpline-2.h
.uno/Uno.Content.Splines.g.cpp.o: include/Uno.Content.Splines.KeyframedSpline-2.Key.h
.uno/Uno.Content.Splines.g.cpp.o: include/Uno.Content.Splines.LinearSplineFloat.h
.uno/Uno.Content.Splines.g.cpp.o: include/Uno.Content.Splines.LinearSplineFloat2.h
.uno/Uno.Content.Splines.g.cpp.o: include/Uno.Content.Splines.LinearSplineFloat3.h
.uno/Uno.Content.Splines.g.cpp.o: include/Uno.Content.Splines.LinearSplineFloat4.h
.uno/Uno.Content.Splines.g.cpp.o: include/Uno.Content.Splines.LinearSplineFloat4x4.h
.uno/Uno.Content.Splines.g.cpp.o: include/Uno.Content.Splines.Spline-1.h
.uno/Uno.Content.Splines.g.cpp.o: include/Uno.Double.h
.uno/Uno.Content.Splines.g.cpp.o: include/Uno.Float.h
.uno/Uno.Content.Splines.g.cpp.o: include/Uno.Int.h
.uno/Uno.Content.Splines.g.cpp.o: include/Uno.Math.h
.uno/Uno.Content.Splines.g.cpp.o: jni/Uno.Content.Splines.g.cpp flags.txt | .uno
	echo Uno.Content.Splines.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Content.Splines.g.cpp.o -c jni/Uno.Content.Splines.g.cpp

.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Delegate.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Diagnostics.AllocateEvent.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Diagnostics.AlwaysProfileAttribute.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Diagnostics.AssertionHandler.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Diagnostics.Clock.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Diagnostics.DebugMessageType.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Diagnostics.EnterEvent.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Diagnostics.EventType.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Diagnostics.ExitEvent.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Diagnostics.FreeEvent.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Diagnostics.IdMap-1.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Diagnostics.LogHandler.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Diagnostics.NeverProfileAttribute.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Diagnostics.Profile.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Diagnostics.ProfileData.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Diagnostics.ProfileEvent.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Double.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Int.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Long.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Object.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Runtime.Implementation.ClockImpl.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.Runtime.Implementation.DebugImpl.h
.uno/Uno.Diagnostics.g.cpp.o: include/Uno.String.h
.uno/Uno.Diagnostics.g.cpp.o: jni/Uno.Diagnostics.g.cpp flags.txt | .uno
	echo Uno.Diagnostics.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Diagnostics.g.cpp.o -c jni/Uno.Diagnostics.g.cpp

.uno/Uno.g.cpp.o: include/Android.Bootstrapper.h
.uno/Uno.g.cpp.o: include/Uno.Action.h
.uno/Uno.g.cpp.o: include/Uno.Action-1.h
.uno/Uno.g.cpp.o: include/Uno.Action-2.h
.uno/Uno.g.cpp.o: include/Uno.Action-3.h
.uno/Uno.g.cpp.o: include/Uno.Action-4.h
.uno/Uno.g.cpp.o: include/Uno.AggregateException.h
.uno/Uno.g.cpp.o: include/Uno.Application.h
.uno/Uno.g.cpp.o: include/Uno.ArgumentException.h
.uno/Uno.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Uno.g.cpp.o: include/Uno.ArgumentOutOfRangeException.h
.uno/Uno.g.cpp.o: include/Uno.Array.h
.uno/Uno.g.cpp.o: include/Uno.Attribute.h
.uno/Uno.g.cpp.o: include/Uno.Bool.h
.uno/Uno.g.cpp.o: include/Uno.Buffer.h
.uno/Uno.g.cpp.o: include/Uno.BundleFile.h
.uno/Uno.g.cpp.o: include/Uno.Byte.h
.uno/Uno.g.cpp.o: include/Uno.Byte2.h
.uno/Uno.g.cpp.o: include/Uno.Byte4.h
.uno/Uno.g.cpp.o: include/Uno.Char.h
.uno/Uno.g.cpp.o: include/Uno.Collections.IList-1.h
.uno/Uno.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
.uno/Uno.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Uno.g.cpp.o: include/Uno.Collections.ReadOnlyCollection-1.h
.uno/Uno.g.cpp.o: include/Uno.Color.h
.uno/Uno.g.cpp.o: include/Uno.ColorHelper.h
.uno/Uno.g.cpp.o: include/Uno.Comparison-1.h
.uno/Uno.g.cpp.o: include/Uno.DateTime.h
.uno/Uno.g.cpp.o: include/Uno.Delegate.h
.uno/Uno.g.cpp.o: include/Uno.Double.h
.uno/Uno.g.cpp.o: include/Uno.Enum.h
.uno/Uno.g.cpp.o: include/Uno.EventArgs.h
.uno/Uno.g.cpp.o: include/Uno.EventHandler.h
.uno/Uno.g.cpp.o: include/Uno.EventHandler-1.h
.uno/Uno.g.cpp.o: include/Uno.Exception.h
.uno/Uno.g.cpp.o: include/Uno.FakeTime.h
.uno/Uno.g.cpp.o: include/Uno.FlagsAttribute.h
.uno/Uno.g.cpp.o: include/Uno.Float.h
.uno/Uno.g.cpp.o: include/Uno.Float2.h
.uno/Uno.g.cpp.o: include/Uno.Float2x2.h
.uno/Uno.g.cpp.o: include/Uno.Float3.h
.uno/Uno.g.cpp.o: include/Uno.Float3x3.h
.uno/Uno.g.cpp.o: include/Uno.Float4.h
.uno/Uno.g.cpp.o: include/Uno.Float4x4.h
.uno/Uno.g.cpp.o: include/Uno.FormatException.h
.uno/Uno.g.cpp.o: include/Uno.Func-1.h
.uno/Uno.g.cpp.o: include/Uno.Func-2.h
.uno/Uno.g.cpp.o: include/Uno.Func-3.h
.uno/Uno.g.cpp.o: include/Uno.Func-4.h
.uno/Uno.g.cpp.o: include/Uno.Func-5.h
.uno/Uno.g.cpp.o: include/Uno.GC.h
.uno/Uno.g.cpp.o: include/Uno.Generic.h
.uno/Uno.g.cpp.o: include/Uno.Graphics.GraphicsContext.h
.uno/Uno.g.cpp.o: include/Uno.IDisposable.h
.uno/Uno.g.cpp.o: include/Uno.IndexOutOfRangeException.h
.uno/Uno.g.cpp.o: include/Uno.Int.h
.uno/Uno.g.cpp.o: include/Uno.Int2.h
.uno/Uno.g.cpp.o: include/Uno.Int3.h
.uno/Uno.g.cpp.o: include/Uno.Int4.h
.uno/Uno.g.cpp.o: include/Uno.IntPtr.h
.uno/Uno.g.cpp.o: include/Uno.InvalidCastException.h
.uno/Uno.g.cpp.o: include/Uno.InvalidOperationException.h
.uno/Uno.g.cpp.o: include/Uno.IO.CppXliStream.h
.uno/Uno.g.cpp.o: include/Uno.IO.CppXliStreamHandle.h
.uno/Uno.g.cpp.o: include/Uno.IO.Stream.h
.uno/Uno.g.cpp.o: include/Uno.Long.h
.uno/Uno.g.cpp.o: include/Uno.Math.h
.uno/Uno.g.cpp.o: include/Uno.Matrix.h
.uno/Uno.g.cpp.o: include/Uno.NotImplementedException.h
.uno/Uno.g.cpp.o: include/Uno.NotSupportedException.h
.uno/Uno.g.cpp.o: include/Uno.NullReferenceException.h
.uno/Uno.g.cpp.o: include/Uno.Object.h
.uno/Uno.g.cpp.o: include/Uno.ObjectDisposedException.h
.uno/Uno.g.cpp.o: include/Uno.OverflowException.h
.uno/Uno.g.cpp.o: include/Uno.Platform.Window.h
.uno/Uno.g.cpp.o: include/Uno.Predicate-1.h
.uno/Uno.g.cpp.o: include/Uno.Quaternion.h
.uno/Uno.g.cpp.o: include/Uno.Rect.h
.uno/Uno.g.cpp.o: include/Uno.Recti.h
.uno/Uno.g.cpp.o: include/Uno.Runtime.Implementation.ArrayCopyImpl.h
.uno/Uno.g.cpp.o: include/Uno.Runtime.Implementation.ArraySortImpl.h
.uno/Uno.g.cpp.o: include/Uno.Runtime.Implementation.BufferImpl.h
.uno/Uno.g.cpp.o: include/Uno.Runtime.Implementation.GenericEqualsImpl.h
.uno/Uno.g.cpp.o: include/Uno.Runtime.Implementation.Internal.ArrayList-1.h
.uno/Uno.g.cpp.o: include/Uno.Runtime.Implementation.Internal.FormatStringToken.h
.uno/Uno.g.cpp.o: include/Uno.Runtime.Implementation.Internal.FormatStringTokenizer.h
.uno/Uno.g.cpp.o: include/Uno.Runtime.Implementation.TextEncodingImpl.h
.uno/Uno.g.cpp.o: include/Uno.SByte.h
.uno/Uno.g.cpp.o: include/Uno.SByte2.h
.uno/Uno.g.cpp.o: include/Uno.SByte4.h
.uno/Uno.g.cpp.o: include/Uno.Short.h
.uno/Uno.g.cpp.o: include/Uno.Short2.h
.uno/Uno.g.cpp.o: include/Uno.Short4.h
.uno/Uno.g.cpp.o: include/Uno.String.h
.uno/Uno.g.cpp.o: include/Uno.Text.StringBuilder.h
.uno/Uno.g.cpp.o: include/Uno.Time.DateTimeZone.h
.uno/Uno.g.cpp.o: include/Uno.Time.ZonedDateTime.h
.uno/Uno.g.cpp.o: include/Uno.Type.h
.uno/Uno.g.cpp.o: include/Uno.UInt.h
.uno/Uno.g.cpp.o: include/Uno.ULong.h
.uno/Uno.g.cpp.o: include/Uno.UShort.h
.uno/Uno.g.cpp.o: include/Uno.UShort2.h
.uno/Uno.g.cpp.o: include/Uno.UShort4.h
.uno/Uno.g.cpp.o: include/Uno.Vector.h
.uno/Uno.g.cpp.o: include/Uno.WeakReference-1.h
.uno/Uno.g.cpp.o: include/Uno.WeakReferenceAttribute.h
.uno/Uno.g.cpp.o: include/Uno/XliInterop.h
.uno/Uno.g.cpp.o: jni/Uno.g.cpp flags.txt | .uno
	echo Uno.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.g.cpp.o -c jni/Uno.g.cpp

.uno/Uno.Geometry.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Geometry.g.cpp.o: include/Uno.Collections.IEnumerable-1.h
.uno/Uno.Geometry.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Uno.Geometry.g.cpp.o: include/Uno.Float.h
.uno/Uno.Geometry.g.cpp.o: include/Uno.Float2.h
.uno/Uno.Geometry.g.cpp.o: include/Uno.Float3.h
.uno/Uno.Geometry.g.cpp.o: include/Uno.Float4.h
.uno/Uno.Geometry.g.cpp.o: include/Uno.Float4x4.h
.uno/Uno.Geometry.g.cpp.o: include/Uno.Geometry.Box.h
.uno/Uno.Geometry.g.cpp.o: include/Uno.Geometry.Collision.h
.uno/Uno.Geometry.g.cpp.o: include/Uno.Geometry.Collision2D.h
.uno/Uno.Geometry.g.cpp.o: include/Uno.Geometry.CubicBezier.h
.uno/Uno.Geometry.g.cpp.o: include/Uno.Geometry.Frustum.h
.uno/Uno.Geometry.g.cpp.o: include/Uno.Geometry.Plane.h
.uno/Uno.Geometry.g.cpp.o: include/Uno.Geometry.Ray.h
.uno/Uno.Geometry.g.cpp.o: include/Uno.Geometry.Sphere.h
.uno/Uno.Geometry.g.cpp.o: include/Uno.Geometry.Triangle.h
.uno/Uno.Geometry.g.cpp.o: include/Uno.Geometry.Triangle2D.h
.uno/Uno.Geometry.g.cpp.o: include/Uno.Geometry.Vertex.h
.uno/Uno.Geometry.g.cpp.o: include/Uno.Geometry.VertexEnumerable.h
.uno/Uno.Geometry.g.cpp.o: include/Uno.Geometry.VertexEnumerator.h
.uno/Uno.Geometry.g.cpp.o: include/Uno.Int.h
.uno/Uno.Geometry.g.cpp.o: include/Uno.Math.h
.uno/Uno.Geometry.g.cpp.o: include/Uno.Vector.h
.uno/Uno.Geometry.g.cpp.o: jni/Uno.Geometry.g.cpp flags.txt | .uno
	echo Uno.Geometry.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Geometry.g.cpp.o -c jni/Uno.Geometry.g.cpp

.uno/Uno.Graphics.g.cpp.o: include/OpenGL.GL.h
.uno/Uno.Graphics.g.cpp.o: include/OpenGL.GLBufferHandle.h
.uno/Uno.Graphics.g.cpp.o: include/OpenGL.GLBufferTarget.h
.uno/Uno.Graphics.g.cpp.o: include/OpenGL.GLBufferUsage.h
.uno/Uno.Graphics.g.cpp.o: include/OpenGL.GLClearBufferMask.h
.uno/Uno.Graphics.g.cpp.o: include/OpenGL.GLEnableCap.h
.uno/Uno.Graphics.g.cpp.o: include/OpenGL.GLFramebufferHandle.h
.uno/Uno.Graphics.g.cpp.o: include/OpenGL.GLFramebufferTarget.h
.uno/Uno.Graphics.g.cpp.o: include/OpenGL.GLIntegerName.h
.uno/Uno.Graphics.g.cpp.o: include/OpenGL.GLRenderbufferHandle.h
.uno/Uno.Graphics.g.cpp.o: include/OpenGL.GLTextureHandle.h
.uno/Uno.Graphics.g.cpp.o: include/OpenGL.GLTextureParameterName.h
.uno/Uno.Graphics.g.cpp.o: include/OpenGL.GLTextureParameterValue.h
.uno/Uno.Graphics.g.cpp.o: include/OpenGL.GLTextureTarget.h
.uno/Uno.Graphics.g.cpp.o: include/OpenGL.GLTextureUnit.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Buffer.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Float.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Float4.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.FormatException.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.BlendEquation.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.BlendOperand.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.CompareFunc.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.CubeFace.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.DeviceBuffer.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.Format.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.FormatHelpers.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.Framebuffer.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.FramebufferFlags.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.GraphicsContext.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.IndexBuffer.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.IndexType.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.IndexTypeHelpers.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.PolygonFace.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.PolygonWinding.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.PrimitiveType.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.RenderTarget.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.SamplerState.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.TextureAddressMode.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.TextureCube.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.TextureFilter.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.TextureHelpers.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.VertexAttributeInfo.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.VertexAttributeType.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.VertexAttributeTypeHelpers.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Graphics.VideoTexture.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Int.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Int2.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.InvalidOperationException.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Math.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Object.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.ObjectDisposedException.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Runtime.Implementation.GraphicsContextHandle.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Runtime.Implementation.GraphicsContextImpl.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLHelpers.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLInterop.h
.uno/Uno.Graphics.g.cpp.o: include/Uno.String.h
.uno/Uno.Graphics.g.cpp.o: include/Uno/XliInterop.h
.uno/Uno.Graphics.g.cpp.o: jni/Uno.Graphics.g.cpp flags.txt | .uno
	echo Uno.Graphics.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Graphics.g.cpp.o -c jni/Uno.Graphics.g.cpp

.uno/Uno.IO.g.cpp.o: include/Uno.ArgumentException.h
.uno/Uno.IO.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Uno.IO.g.cpp.o: include/Uno.ArgumentOutOfRangeException.h
.uno/Uno.IO.g.cpp.o: include/Uno.Array.h
.uno/Uno.IO.g.cpp.o: include/Uno.Bool.h
.uno/Uno.IO.g.cpp.o: include/Uno.Byte.h
.uno/Uno.IO.g.cpp.o: include/Uno.Char.h
.uno/Uno.IO.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Uno.IO.g.cpp.o: include/Uno.Double.h
.uno/Uno.IO.g.cpp.o: include/Uno.Float.h
.uno/Uno.IO.g.cpp.o: include/Uno.FormatException.h
.uno/Uno.IO.g.cpp.o: include/Uno.GC.h
.uno/Uno.IO.g.cpp.o: include/Uno.Int.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.BinaryReader.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.BinaryWriter.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.CppXliStream.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.CppXliStreamHandle.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.Directory.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.EndOfStreamException.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.File.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.FileMode.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.FileSystemImpl.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.IOException.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.MemoryStream.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.Path.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.SeekOrigin.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.Stream.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.StreamReader.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.StreamWriter.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.StringWriter.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.TextReader.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.TextWriter.h
.uno/Uno.IO.g.cpp.o: include/Uno.IO.UserDirectory.h
.uno/Uno.IO.g.cpp.o: include/Uno.Long.h
.uno/Uno.IO.g.cpp.o: include/Uno.Math.h
.uno/Uno.IO.g.cpp.o: include/Uno.NotImplementedException.h
.uno/Uno.IO.g.cpp.o: include/Uno.NotSupportedException.h
.uno/Uno.IO.g.cpp.o: include/Uno.Object.h
.uno/Uno.IO.g.cpp.o: include/Uno.ObjectDisposedException.h
.uno/Uno.IO.g.cpp.o: include/Uno.Runtime.Implementation.BufferImpl.h
.uno/Uno.IO.g.cpp.o: include/Uno.Runtime.Implementation.TextEncodingImpl.h
.uno/Uno.IO.g.cpp.o: include/Uno.String.h
.uno/Uno.IO.g.cpp.o: include/Uno.Text.Decoder.h
.uno/Uno.IO.g.cpp.o: include/Uno.Text.Encoding.h
.uno/Uno.IO.g.cpp.o: include/Uno.Text.StringBuilder.h
.uno/Uno.IO.g.cpp.o: include/Uno.UInt.h
.uno/Uno.IO.g.cpp.o: include/Uno.ULong.h
.uno/Uno.IO.g.cpp.o: include/Uno/XliInterop.h
.uno/Uno.IO.g.cpp.o: jni/Uno.IO.g.cpp flags.txt | .uno
	echo Uno.IO.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.IO.g.cpp.o -c jni/Uno.IO.g.cpp

.uno/Uno.Net.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Net.g.cpp.o: include/Uno.Buffer.h
.uno/Uno.Net.g.cpp.o: include/Uno.Byte.h
.uno/Uno.Net.g.cpp.o: include/Uno.Char.h
.uno/Uno.Net.g.cpp.o: include/Uno.Exception.h
.uno/Uno.Net.g.cpp.o: include/Uno.FormatException.h
.uno/Uno.Net.g.cpp.o: include/Uno.Int.h
.uno/Uno.Net.g.cpp.o: include/Uno.Net.EndPoint.h
.uno/Uno.Net.g.cpp.o: include/Uno.Net.IPAddress.h
.uno/Uno.Net.g.cpp.o: include/Uno.Net.IPEndPoint.h
.uno/Uno.Net.g.cpp.o: include/Uno.Net.Sockets.AddressFamily.h
.uno/Uno.Net.g.cpp.o: include/Uno.Object.h
.uno/Uno.Net.g.cpp.o: include/Uno.String.h
.uno/Uno.Net.g.cpp.o: include/Uno.UInt.h
.uno/Uno.Net.g.cpp.o: jni/Uno.Net.g.cpp flags.txt | .uno
	echo Uno.Net.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Net.g.cpp.o -c jni/Uno.Net.g.cpp

.uno/Uno.Net.Http.g.cpp.o: include/Android.Base.JNI.h
.uno/Uno.Net.Http.g.cpp.o: include/Android.Base.Wrappers.IJWrapper.h
.uno/Uno.Net.Http.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Uno.Net.Http.g.cpp.o: include/Android.com.fuse.ExperimentalHttp.HttpRequest.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Action.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Action-1.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Action-2.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Action-4.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Byte.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Char.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Collections.IDictionary-2.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Delegate.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Diagnostics.DebugMessageType.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Exception.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.GC.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Int.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Long.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.AbsolutePathParser.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HashParser.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HostInfo.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HostInfoParser.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HttpDefaultDispatcher.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HttpMessageCache.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HttpMessageHandler.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HttpMessageHandler.StaticData.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HttpMessageHandlerRequest.DispatchClosure.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HttpMessageHandlerRequest.DispatchClosure-1.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HttpMessageHandlerRequest.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HttpMessageHandlerRequest.ProgressClosure.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HttpRequestState.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HttpResponseType.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.HttpStatusReasonPhrase.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.Implementation.AndroidHttpRequest.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.Implementation.IHttpRequest.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.InvalidResponseTypeException.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.InvalidStateException.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.QueryParser.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.SchemeParser.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.SchemeParserResult.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.Uri.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.UriFormatException.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.UriScheme.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.UriSchemeType.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Net.Http.UserInfoParser.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.NotSupportedException.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.ObjectDisposedException.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Platform2.Application.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Platform2.ApplicationState.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Platform2.ApplicationStateTransitionHandler.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.String.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Text.Utf8.h
.uno/Uno.Net.Http.g.cpp.o: include/Uno.Threading.IDispatcher.h
.uno/Uno.Net.Http.g.cpp.o: jni/Uno.Net.Http.g.cpp flags.txt | .uno
	echo Uno.Net.Http.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Net.Http.g.cpp.o -c jni/Uno.Net.Http.g.cpp

.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Android.Base.JNI.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Android.Base.Primitives.ujobject.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Android.Base.Types.Arrays.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Android.Base.Types.String.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Android.Base.Wrappers.JWrapper.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.Array.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.Byte.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.Int.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.Long.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.Net.Http.HttpMessageHandlerRequest.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.Net.Http.HttpResponseType.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.Net.Http.Implementation.AndroidHttpRequest.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.Net.Http.Implementation.IHttpRequest.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: include/Uno.String.h
.uno/Uno.Net.Http.Implementation.g.cpp.o: jni/Uno.Net.Http.Implementation.g.cpp flags.txt | .uno
	echo Uno.Net.Http.Implementation.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Net.Http.Implementation.g.cpp.o -c jni/Uno.Net.Http.Implementation.g.cpp

.uno/Uno.Net.Sockets.Berkeley.g.cpp.o: include/Socket.android.h
.uno/Uno.Net.Sockets.Berkeley.g.cpp.o: include/Uno.ArgumentException.h
.uno/Uno.Net.Sockets.Berkeley.g.cpp.o: include/Uno.ArgumentOutOfRangeException.h
.uno/Uno.Net.Sockets.Berkeley.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Net.Sockets.Berkeley.g.cpp.o: include/Uno.Byte.h
.uno/Uno.Net.Sockets.Berkeley.g.cpp.o: include/Uno.Exception.h
.uno/Uno.Net.Sockets.Berkeley.g.cpp.o: include/Uno.Int.h
.uno/Uno.Net.Sockets.Berkeley.g.cpp.o: include/Uno.Net.EndPoint.h
.uno/Uno.Net.Sockets.Berkeley.g.cpp.o: include/Uno.Net.IPAddress.h
.uno/Uno.Net.Sockets.Berkeley.g.cpp.o: include/Uno.Net.IPEndPoint.h
.uno/Uno.Net.Sockets.Berkeley.g.cpp.o: include/Uno.Net.Sockets.AddressFamily.h
.uno/Uno.Net.Sockets.Berkeley.g.cpp.o: include/Uno.Net.Sockets.Berkeley.bsd_socket.h
.uno/Uno.Net.Sockets.Berkeley.g.cpp.o: include/Uno.Net.Sockets.Berkeley.Socket.h
.uno/Uno.Net.Sockets.Berkeley.g.cpp.o: include/Uno.Net.Sockets.ProtocolType.h
.uno/Uno.Net.Sockets.Berkeley.g.cpp.o: include/Uno.Net.Sockets.SelectMode.h
.uno/Uno.Net.Sockets.Berkeley.g.cpp.o: include/Uno.Net.Sockets.SocketException.h
.uno/Uno.Net.Sockets.Berkeley.g.cpp.o: include/Uno.Net.Sockets.SocketShutdown.h
.uno/Uno.Net.Sockets.Berkeley.g.cpp.o: include/Uno.Net.Sockets.SocketType.h
.uno/Uno.Net.Sockets.Berkeley.g.cpp.o: include/Uno.Object.h
.uno/Uno.Net.Sockets.Berkeley.g.cpp.o: include/Uno.Short.h
.uno/Uno.Net.Sockets.Berkeley.g.cpp.o: include/Uno.String.h
.uno/Uno.Net.Sockets.Berkeley.g.cpp.o: include/Uno.UInt.h
.uno/Uno.Net.Sockets.Berkeley.g.cpp.o: jni/Uno.Net.Sockets.Berkeley.g.cpp flags.txt | .uno
	echo Uno.Net.Sockets.Berkeley.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Net.Sockets.Berkeley.g.cpp.o -c jni/Uno.Net.Sockets.Berkeley.g.cpp

.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.Byte.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.Exception.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.Int.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.IO.SeekOrigin.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.Long.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.Net.EndPoint.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.Net.Sockets.AddressFamily.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.Net.Sockets.Berkeley.Socket.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.Net.Sockets.NetworkStream.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.Net.Sockets.ProtocolType.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.Net.Sockets.SelectMode.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.Net.Sockets.Socket.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.Net.Sockets.SocketException.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.Net.Sockets.SocketShutdown.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.Net.Sockets.SocketType.h
.uno/Uno.Net.Sockets.g.cpp.o: include/Uno.String.h
.uno/Uno.Net.Sockets.g.cpp.o: jni/Uno.Net.Sockets.g.cpp flags.txt | .uno
	echo Uno.Net.Sockets.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Net.Sockets.g.cpp.o -c jni/Uno.Net.Sockets.g.cpp

.uno/Uno.Platform.g.cpp.o: include/Android.Base.JNI.h
.uno/Uno.Platform.g.cpp.o: include/Android.Base.Primitives.ujobject.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Application.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Delegate.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Double.h
.uno/Uno.Platform.g.cpp.o: include/Uno.EventArgs.h
.uno/Uno.Platform.g.cpp.o: include/Uno.EventHandler.h
.uno/Uno.Platform.g.cpp.o: include/Uno.EventHandler-1.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Int.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Int2.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Object.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.ClosingEventArgs.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.EventModifiers.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.FrameChangedEventArgs.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.Key.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.KeyEventArgs.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.MouseButton.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.PointerCursor.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.PointerEventArgs.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.PointerType.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.SystemUI.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.SystemUIID.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.SystemUIResizeReason.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.SystemUIWillResizeEventArgs.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.TextInputEventArgs.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.TextInputHint.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.TimerEventArgs.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.ViewNativeHandle.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.WheelDeltaMode.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Platform.Window.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Rect.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Runtime.Implementation.PlatformWindowHandle.h
.uno/Uno.Platform.g.cpp.o: include/Uno.Runtime.Implementation.PlatformWindowImpl.h
.uno/Uno.Platform.g.cpp.o: include/Uno.String.h
.uno/Uno.Platform.g.cpp.o: jni/Uno.Platform.g.cpp flags.txt | .uno
	echo Uno.Platform.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Platform.g.cpp.o -c jni/Uno.Platform.g.cpp

.uno/Uno.Platform.iOS.g.cpp.o: include/Uno.Platform.iOS.StatusBarAnimation.h
.uno/Uno.Platform.iOS.g.cpp.o: include/Uno.Platform.iOS.StatusBarStyle.h
.uno/Uno.Platform.iOS.g.cpp.o: jni/Uno.Platform.iOS.g.cpp flags.txt | .uno
	echo Uno.Platform.iOS.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Platform.iOS.g.cpp.o -c jni/Uno.Platform.iOS.g.cpp

.uno/Uno.Platform2.g.cpp.o: include/Uno.Application.h
.uno/Uno.Platform2.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Platform2.g.cpp.o: include/Uno.Delegate.h
.uno/Uno.Platform2.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Uno.Platform2.g.cpp.o: include/Uno.Diagnostics.DebugMessageType.h
.uno/Uno.Platform2.g.cpp.o: include/Uno.EventArgs.h
.uno/Uno.Platform2.g.cpp.o: include/Uno.EventHandler.h
.uno/Uno.Platform2.g.cpp.o: include/Uno.EventHandler-1.h
.uno/Uno.Platform2.g.cpp.o: include/Uno.Float.h
.uno/Uno.Platform2.g.cpp.o: include/Uno.Graphics.GraphicsContext.h
.uno/Uno.Platform2.g.cpp.o: include/Uno.Int.h
.uno/Uno.Platform2.g.cpp.o: include/Uno.Object.h
.uno/Uno.Platform2.g.cpp.o: include/Uno.Platform.EventModifiers.h
.uno/Uno.Platform2.g.cpp.o: include/Uno.Platform.Key.h
.uno/Uno.Platform2.g.cpp.o: include/Uno.Platform.KeyEventArgs.h
.uno/Uno.Platform2.g.cpp.o: include/Uno.Platform.TimerEventArgs.h
.uno/Uno.Platform2.g.cpp.o: include/Uno.Platform.ViewNativeHandle.h
.uno/Uno.Platform2.g.cpp.o: include/Uno.Platform2.Application.h
.uno/Uno.Platform2.g.cpp.o: include/Uno.Platform2.ApplicationState.h
.uno/Uno.Platform2.g.cpp.o: include/Uno.Platform2.ApplicationStateTransitionHandler.h
.uno/Uno.Platform2.g.cpp.o: include/Uno.Platform2.Display.h
.uno/Uno.Platform2.g.cpp.o: include/Uno.Platform2.Display.PrivateState.h
.uno/Uno.Platform2.g.cpp.o: include/Uno.String.h
.uno/Uno.Platform2.g.cpp.o: include/Uno.UInt.h
.uno/Uno.Platform2.g.cpp.o: jni/Uno.Platform2.g.cpp flags.txt | .uno
	echo Uno.Platform2.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Platform2.g.cpp.o -c jni/Uno.Platform2.g.cpp

.uno/Uno.Platform2.Implementation.g.cpp.o: include/Uno.Platform2.Implementation.InvokedFromNativeCodeAttribute.h
.uno/Uno.Platform2.Implementation.g.cpp.o: jni/Uno.Platform2.Implementation.g.cpp flags.txt | .uno
	echo Uno.Platform2.Implementation.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Platform2.Implementation.g.cpp.o -c jni/Uno.Platform2.Implementation.g.cpp

.uno/Uno.Reflection.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Reflection.g.cpp.o: include/Uno.Delegate.h
.uno/Uno.Reflection.g.cpp.o: include/Uno.Reflection.CppField.h
.uno/Uno.Reflection.g.cpp.o: include/Uno.Reflection.CppFunction.h
.uno/Uno.Reflection.g.cpp.o: include/Uno.Reflection.CppReflection.h
.uno/Uno.Reflection.g.cpp.o: include/Uno.Reflection.IField.h
.uno/Uno.Reflection.g.cpp.o: include/Uno.Reflection.IFunction.h
.uno/Uno.Reflection.g.cpp.o: include/Uno.String.h
.uno/Uno.Reflection.g.cpp.o: include/Uno.Type.h
.uno/Uno.Reflection.g.cpp.o: jni/Uno.Reflection.g.cpp flags.txt | .uno
	echo Uno.Reflection.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Reflection.g.cpp.o -c jni/Uno.Reflection.g.cpp

.uno/Uno.Runtime.Implementation.g.cpp.o: include/OpenGL.GLFramebufferHandle.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.ArgumentException.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.ArgumentOutOfRangeException.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Byte.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Char.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Comparison-1.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Delegate.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Diagnostics.DebugMessageType.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Double.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.EventHandler-1.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Float.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Float2.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Int.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Int2.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.InvalidOperationException.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Long.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Object.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Platform.Key.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Platform.MouseButton.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Platform.PointerCursor.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Platform.SystemUI.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Platform.SystemUIResizeReason.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Platform.SystemUIWillResizeEventArgs.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Platform2.Application.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Platform2.Display.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Rect.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Recti.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Runtime.Implementation.ArrayCopyImpl.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Runtime.Implementation.ArraySortImpl.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Runtime.Implementation.BufferImpl.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Runtime.Implementation.ClockImpl.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Runtime.Implementation.DebugImpl.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Runtime.Implementation.GenericEqualsImpl.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Runtime.Implementation.GraphicsContextHandle.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Runtime.Implementation.GraphicsContextImpl.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Runtime.Implementation.PlatformWindowHandle.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Runtime.Implementation.PlatformWindowImpl.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Runtime.Implementation.TextEncodingImpl.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.Short.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.String.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.UInt.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno.UShort.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno/Base64.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno/Support.h
.uno/Uno.Runtime.Implementation.g.cpp.o: include/Uno/XliInterop.h
.uno/Uno.Runtime.Implementation.g.cpp.o: jni/Uno.Runtime.Implementation.g.cpp flags.txt | .uno
	echo Uno.Runtime.Implementation.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Runtime.Implementation.g.cpp.o -c jni/Uno.Runtime.Implementation.g.cpp

.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Application.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Buffer.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Byte.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Char.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Collections.IEnumerator-1.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Double.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.EventArgs.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Exception.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Float.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Float2.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Float3.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Float4.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.FormatException.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Graphics.GraphicsContext.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Graphics.RenderTarget.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Int.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Long.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Math.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.NotSupportedException.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Object.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Platform.EventModifiers.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Platform.Key.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Platform.KeyEventArgs.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Platform.MouseButton.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Platform.PointerEventArgs.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Platform.PointerType.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Platform.TextInputEventArgs.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Platform.WheelDeltaMode.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Platform.Window.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implementation.ClockImpl.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implementation.Internal.ArrayEnumerator-1.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implementation.Internal.ArrayList-1.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implementation.Internal.BootstrapHints.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implementation.Internal.Bootstrapper.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implementation.Internal.BufferConverters.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implementation.Internal.BufferReader.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implementation.Internal.FormatSpecifier.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implementation.Internal.FormatStringItem.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implementation.Internal.FormatStringLiteral.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implementation.Internal.FormatStringToken.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implementation.Internal.FormatStringTokenizer.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implementation.Internal.FormatStringTokenizer.State.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implementation.Internal.NumericFormatter.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implementation.Internal.WindowHelpers.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implementation.PlatformWindowHandle.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implementation.PlatformWindowImpl.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Runtime.Implementation.TextEncodingImpl.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.SByte.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Short.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.String.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.Text.StringBuilder.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.UInt.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.ULong.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: include/Uno.UShort.h
.uno/Uno.Runtime.Implementation.Internal.g.cpp.o: jni/Uno.Runtime.Implementation.Internal.g.cpp flags.txt | .uno
	echo Uno.Runtime.Implementation.Internal.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Runtime.Implementation.Internal.g.cpp.o -c jni/Uno.Runtime.Implementation.Internal.g.cpp

.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GL.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLBlendEquation.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLBlendingFactor.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLBufferHandle.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLBufferTarget.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLBufferUsage.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLCullFaceMode.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLDataType.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLDepthFunction.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLEnableCap.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLError.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLFramebufferAttachment.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLFramebufferHandle.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLFramebufferStatus.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLFramebufferTarget.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLFrontFaceDirection.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLIndexType.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLPixelFormat.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLPixelType.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLPrimitiveType.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLProgramHandle.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLProgramParameter.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLRenderbufferHandle.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLRenderbufferStorage.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLRenderbufferTarget.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLShaderHandle.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLShaderParameter.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLShaderType.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLTextureHandle.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLTextureParameterName.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLTextureParameterValue.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLTextureTarget.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/OpenGL.GLTextureUnit.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Buffer.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Diagnostics.DebugMessageType.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Exception.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Float.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Float2.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Float2x2.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Float3.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Float4.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Float4x4.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.BlendEquation.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.BlendOperand.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.BufferUsage.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.CompareFunc.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.DeviceBuffer.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.Format.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.IndexBuffer.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.IndexType.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.PolygonFace.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.PolygonWinding.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.PrimitiveType.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.RenderTarget.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.SamplerState.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.Texture2D.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.TextureAddressMode.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.TextureFilter.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.VertexAttributeType.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.VertexBuffer.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Graphics.VideoTexture.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Int.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Int2.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.InvalidOperationException.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Object.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLCompiledProgram.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLException.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLHelpers.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLInterop.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: include/Uno.String.h
.uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o: jni/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp flags.txt | .uno
	echo Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp.o -c jni/Uno.Runtime.Implementation.ShaderBackends.OpenGL.g.cpp

.uno/Uno.Testing.g.cpp.o: include/Uno.Action.h
.uno/Uno.Testing.g.cpp.o: include/Uno.Action-1.h
.uno/Uno.Testing.g.cpp.o: include/Uno.Action-2.h
.uno/Uno.Testing.g.cpp.o: include/Uno.Application.h
.uno/Uno.Testing.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Testing.g.cpp.o: include/Uno.Collections.List-1.Enumerator.h
.uno/Uno.Testing.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Uno.Testing.g.cpp.o: include/Uno.Diagnostics.Clock.h
.uno/Uno.Testing.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Uno.Testing.g.cpp.o: include/Uno.Diagnostics.DebugMessageType.h
.uno/Uno.Testing.g.cpp.o: include/Uno.Double.h
.uno/Uno.Testing.g.cpp.o: include/Uno.Exception.h
.uno/Uno.Testing.g.cpp.o: include/Uno.Int.h
.uno/Uno.Testing.g.cpp.o: include/Uno.Net.Http.HttpMessageHandler.h
.uno/Uno.Testing.g.cpp.o: include/Uno.Net.Http.HttpMessageHandlerRequest.h
.uno/Uno.Testing.g.cpp.o: include/Uno.Net.Http.HttpResponseType.h
.uno/Uno.Testing.g.cpp.o: include/Uno.Net.Http.Uri.h
.uno/Uno.Testing.g.cpp.o: include/Uno.Object.h
.uno/Uno.Testing.g.cpp.o: include/Uno.Platform.Window.h
.uno/Uno.Testing.g.cpp.o: include/Uno.String.h
.uno/Uno.Testing.g.cpp.o: include/Uno.Testing.AbstractRunner.h
.uno/Uno.Testing.g.cpp.o: include/Uno.Testing.Assert.h
.uno/Uno.Testing.g.cpp.o: include/Uno.Testing.AssertionFailedException.h
.uno/Uno.Testing.g.cpp.o: include/Uno.Testing.AsyncTestAttribute.h
.uno/Uno.Testing.g.cpp.o: include/Uno.Testing.IRunner.h
.uno/Uno.Testing.g.cpp.o: include/Uno.Testing.NamedTestMethod.h
.uno/Uno.Testing.g.cpp.o: include/Uno.Testing.Registry.h
.uno/Uno.Testing.g.cpp.o: include/Uno.Testing.RemoteRunner.h
.uno/Uno.Testing.g.cpp.o: include/Uno.Testing.TestAttribute.h
.uno/Uno.Testing.g.cpp.o: include/Uno.Testing.TestSetup.h
.uno/Uno.Testing.g.cpp.o: jni/Uno.Testing.g.cpp flags.txt | .uno
	echo Uno.Testing.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Testing.g.cpp.o -c jni/Uno.Testing.g.cpp

.uno/Uno.Text.g.cpp.o: include/Uno.ArgumentException.h
.uno/Uno.Text.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Uno.Text.g.cpp.o: include/Uno.ArgumentOutOfRangeException.h
.uno/Uno.Text.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Text.g.cpp.o: include/Uno.Byte.h
.uno/Uno.Text.g.cpp.o: include/Uno.Char.h
.uno/Uno.Text.g.cpp.o: include/Uno.Int.h
.uno/Uno.Text.g.cpp.o: include/Uno.Runtime.Implementation.TextEncodingImpl.h
.uno/Uno.Text.g.cpp.o: include/Uno.String.h
.uno/Uno.Text.g.cpp.o: include/Uno.Text.Ascii.h
.uno/Uno.Text.g.cpp.o: include/Uno.Text.Base64.h
.uno/Uno.Text.g.cpp.o: include/Uno.Text.Decoder.h
.uno/Uno.Text.g.cpp.o: include/Uno.Text.Encoding.h
.uno/Uno.Text.g.cpp.o: include/Uno.Text.StringBuilder.h
.uno/Uno.Text.g.cpp.o: include/Uno.Text.StringBuilderElement.h
.uno/Uno.Text.g.cpp.o: include/Uno.Text.Utf8.h
.uno/Uno.Text.g.cpp.o: include/Uno.Text.UTF8Decoder.h
.uno/Uno.Text.g.cpp.o: include/Uno.Text.UTF8Encoding.h
.uno/Uno.Text.g.cpp.o: jni/Uno.Text.g.cpp flags.txt | .uno
	echo Uno.Text.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Text.g.cpp.o -c jni/Uno.Text.g.cpp

.uno/Uno.Threading.g.cpp.o: include/posix_mutex.h
.uno/Uno.Threading.g.cpp.o: include/posix_thread.h
.uno/Uno.Threading.g.cpp.o: include/PosixResetEvent.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Action.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Action-1.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Action-2.h
.uno/Uno.Threading.g.cpp.o: include/Uno.AggregateException.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Application.h
.uno/Uno.Threading.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Collections.Queue-1.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Delegate.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Diagnostics.Debug.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Diagnostics.DebugMessageType.h
.uno/Uno.Threading.g.cpp.o: include/Uno.EventArgs.h
.uno/Uno.Threading.g.cpp.o: include/Uno.EventHandler.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Exception.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Func-1.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Func-2.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Int.h
.uno/Uno.Threading.g.cpp.o: include/Uno.IntPtr.h
.uno/Uno.Threading.g.cpp.o: include/Uno.NotImplementedException.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Object.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Platform.Window.h
.uno/Uno.Threading.g.cpp.o: include/Uno.String.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.AutoResetEvent.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.CancellationToken.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.CancellationTokenSource.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.ConcurrentQueue-1.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.Future.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.Future-1.Closure-1.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.Future-1.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.FutureState.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.IDispatcher.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.IDispatcherExtensions.Arg1Invoke-1.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.IDispatcherExtensions.Arg1InvokeFunc-2.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.IDispatcherExtensions.Arg2Invoke-2.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.IDispatcherExtensions.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.ITaskScheduler.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.LockGuard.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.ManualResetEvent.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.Mutex.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.PosixAutoResetEvent.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.PosixManualResetEvent.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.POSIXMutex.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.POSIXThread.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.Promise-1.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.SyncDispatcher.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.Task.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.TaskDelegate.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.TaskFuture-1.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.TaskStatus.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.Thread.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.ThreadPool.DefaultWorkItem.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.ThreadPool.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.ThreadPool.ParameterizedWorkItem-1.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.ThreadPool.WorkItem.h
.uno/Uno.Threading.g.cpp.o: include/Uno.Threading.ThreadPoolTaskScheduler.h
.uno/Uno.Threading.g.cpp.o: include/Uno.ULong.h
.uno/Uno.Threading.g.cpp.o: jni/Uno.Threading.g.cpp flags.txt | .uno
	echo Uno.Threading.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Threading.g.cpp.o -c jni/Uno.Threading.g.cpp

.uno/Uno.Time.Calendars.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Time.Calendars.g.cpp.o: include/Uno.Int.h
.uno/Uno.Time.Calendars.g.cpp.o: include/Uno.Long.h
.uno/Uno.Time.Calendars.g.cpp.o: include/Uno.String.h
.uno/Uno.Time.Calendars.g.cpp.o: include/Uno.Time.Calendars.Era.h
.uno/Uno.Time.Calendars.g.cpp.o: include/Uno.Time.Calendars.GregorianYearMonthDayCalculator.h
.uno/Uno.Time.Calendars.g.cpp.o: include/Uno.Time.Calendars.TimeOfDayCalculator.h
.uno/Uno.Time.Calendars.g.cpp.o: include/Uno.Time.Calendars.WeekYearCalculator.h
.uno/Uno.Time.Calendars.g.cpp.o: include/Uno.Time.Calendars.YearMonthDayCalculator.h
.uno/Uno.Time.Calendars.g.cpp.o: include/Uno.Time.Converter.h
.uno/Uno.Time.Calendars.g.cpp.o: include/Uno.Time.Instant.h
.uno/Uno.Time.Calendars.g.cpp.o: include/Uno.Time.Preconditions.h
.uno/Uno.Time.Calendars.g.cpp.o: jni/Uno.Time.Calendars.g.cpp flags.txt | .uno
	echo Uno.Time.Calendars.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Time.Calendars.g.cpp.o -c jni/Uno.Time.Calendars.g.cpp

.uno/Uno.Time.g.cpp.o: include/Uno.ArgumentNullException.h
.uno/Uno.Time.g.cpp.o: include/Uno.ArgumentOutOfRangeException.h
.uno/Uno.Time.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Time.g.cpp.o: include/Uno.Diagnostics.Clock.h
.uno/Uno.Time.g.cpp.o: include/Uno.Int.h
.uno/Uno.Time.g.cpp.o: include/Uno.Long.h
.uno/Uno.Time.g.cpp.o: include/Uno.Object.h
.uno/Uno.Time.g.cpp.o: include/Uno.String.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.Calendars.Era.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.Calendars.GregorianYearMonthDayCalculator.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.Calendars.TimeOfDayCalculator.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.Calendars.WeekYearCalculator.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.Calendars.YearMonthDayCalculator.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.CalendarSystem.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.Converter.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.DateTimeZone.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.DeviceTimeZone.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.Duration.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.FixedDateTimeZone.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.HashCodeHelper.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.Instant.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.LocalDate.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.LocalDateTime.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.LocalTime.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.Offset.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.OffsetDateTime.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.Preconditions.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.Text.LocalDatePattern.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.Text.LocalDateTimePattern.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.Text.LocalTimePattern.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.Text.OffsetDateTimePattern.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.Text.OffsetPattern.h
.uno/Uno.Time.g.cpp.o: include/Uno.Time.ZonedDateTime.h
.uno/Uno.Time.g.cpp.o: include/Uno.Type.h
.uno/Uno.Time.g.cpp.o: jni/Uno.Time.g.cpp flags.txt | .uno
	echo Uno.Time.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Time.g.cpp.o -c jni/Uno.Time.g.cpp

.uno/Uno.Time.Text.g.cpp.o: include/Uno.Action-2.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Bool.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Char.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Delegate.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Exception.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Float.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.FormatException.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Func-2.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Int.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Math.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.String.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Text.StringBuilder.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.LocalDate.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.LocalDateTime.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.LocalTime.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Offset.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.OffsetDateTime.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.FixedFormatPattern-1.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.IPatternPart-1.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.LocalDatePattern.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.LocalDatePattern.LocalDateBucket.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.LocalDateTimePattern.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.LocalTimePattern.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.LocalTimePattern.LocalTimeBucket.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.NumberPart-1.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.OffsetDateTimePattern.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.OffsetPattern.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.OffsetPattern.OffsetBucket.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.OffsetPatternPart-1.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.ParseResult-1.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.PatternPart-2.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.RangeNumberPart-1.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.SeparatorPart-1.h
.uno/Uno.Time.Text.g.cpp.o: include/Uno.Time.Text.SignPart-1.h
.uno/Uno.Time.Text.g.cpp.o: jni/Uno.Time.Text.g.cpp flags.txt | .uno
	echo Uno.Time.Text.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.Time.Text.g.cpp.o -c jni/Uno.Time.Text.g.cpp

.uno/Uno.UX.g.cpp.o: include/Uno.Action-1.h
.uno/Uno.UX.g.cpp.o: include/Uno.Bool.h
.uno/Uno.UX.g.cpp.o: include/Uno.BundleFile.h
.uno/Uno.UX.g.cpp.o: include/Uno.Byte.h
.uno/Uno.UX.g.cpp.o: include/Uno.Collections.Dictionary-2.Enumerator.h
.uno/Uno.UX.g.cpp.o: include/Uno.Collections.Dictionary-2.h
.uno/Uno.UX.g.cpp.o: include/Uno.Collections.Dictionary-2.ValueCollection.Enumerator.h
.uno/Uno.UX.g.cpp.o: include/Uno.Collections.Dictionary-2.ValueCollection.h
.uno/Uno.UX.g.cpp.o: include/Uno.Collections.KeyValuePair-2.h
.uno/Uno.UX.g.cpp.o: include/Uno.Collections.List-1.h
.uno/Uno.UX.g.cpp.o: include/Uno.Delegate.h
.uno/Uno.UX.g.cpp.o: include/Uno.EventArgs.h
.uno/Uno.UX.g.cpp.o: include/Uno.EventHandler-1.h
.uno/Uno.UX.g.cpp.o: include/Uno.Exception.h
.uno/Uno.UX.g.cpp.o: include/Uno.IDisposable.h
.uno/Uno.UX.g.cpp.o: include/Uno.Int.h
.uno/Uno.UX.g.cpp.o: include/Uno.InvalidOperationException.h
.uno/Uno.UX.g.cpp.o: include/Uno.IO.BinaryReader.h
.uno/Uno.UX.g.cpp.o: include/Uno.IO.MemoryStream.h
.uno/Uno.UX.g.cpp.o: include/Uno.IO.Stream.h
.uno/Uno.UX.g.cpp.o: include/Uno.IO.StreamReader.h
.uno/Uno.UX.g.cpp.o: include/Uno.Long.h
.uno/Uno.UX.g.cpp.o: include/Uno.Object.h
.uno/Uno.UX.g.cpp.o: include/Uno.Predicate-1.h
.uno/Uno.UX.g.cpp.o: include/Uno.String.h
.uno/Uno.UX.g.cpp.o: include/Uno.Type.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.BundleFileSource.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.Expression-1.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.Factory.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.FileSource.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.ITemplate.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.Property-1.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.Resource.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.StreamExtensions.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.Template-1.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.UXAutoNameTableAttribute.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.UXComponentsAttribute.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.UXConstructorAttribute.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.UXContentAttribute.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.UXFileNameAttribute.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.UXGlobalResourceAttribute.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.UXLineNumberAttribute.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.UXMetadataAttribute.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.UXNameAttribute.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.UXPrimaryAttribute.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.UXSourceFileNameAttribute.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.UXValueBindingArgumentAttribute.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.UXValueBindingTargetAttribute.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.ValueChangedArgs-1.h
.uno/Uno.UX.g.cpp.o: include/Uno.UX.ValueChangedHandler-1.h
.uno/Uno.UX.g.cpp.o: jni/Uno.UX.g.cpp flags.txt | .uno
	echo Uno.UX.g.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno.UX.g.cpp.o -c jni/Uno.UX.g.cpp

.uno/Uno/_invoke.cpp.o: include/Uno/ObjectModel.h
.uno/Uno/_invoke.cpp.o: jni/Uno/_invoke.cpp flags.txt | .uno/Uno
	echo Uno/_invoke.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno/_invoke.cpp.o -c jni/Uno/_invoke.cpp

.uno/Uno/_main.cpp.o: include/Uno/Support.h
.uno/Uno/_main.cpp.o: include/Uno.Exception.h
.uno/Uno/_main.cpp.o: include/Uno.Platform2.Application.h
.uno/Uno/_main.cpp.o: include/Uno.Runtime.Implementation.Internal.Bootstrapper.h
.uno/Uno/_main.cpp.o: include/Uno.Runtime.Implementation.Internal.BootstrapHints.h
.uno/Uno/_main.cpp.o: include/Uno.Runtime.Implementation.PlatformWindowImpl.h
.uno/Uno/_main.cpp.o: include/Uno.Application.h
.uno/Uno/_main.cpp.o: include/Outracks.Simulator.GeneratedApplication.h
.uno/Uno/_main.cpp.o: jni/Uno/_main.cpp flags.txt | .uno/Uno
	echo Uno/_main.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno/_main.cpp.o -c jni/Uno/_main.cpp

.uno/Uno/Activity/AApplication.cpp.o: include/Uno/Activity/AApplication.h
.uno/Uno/Activity/AApplication.cpp.o: include/Uno/Activity/EntryPoints.h
.uno/Uno/Activity/AApplication.cpp.o: include/Uno/Platform2.h
.uno/Uno/Activity/AApplication.cpp.o: include/Uno.Platform2.Display.h
.uno/Uno/Activity/AApplication.cpp.o: include/Uno.Platform2.Application.h
.uno/Uno/Activity/AApplication.cpp.o: include/Uno.Platform.TimerEventArgs.h
.uno/Uno/Activity/AApplication.cpp.o: include/Uno.Platform.SystemUI.h
.uno/Uno/Activity/AApplication.cpp.o: include/Uno.Platform.SystemUIWillResizeEventArgs.h
.uno/Uno/Activity/AApplication.cpp.o: include/Uno.Compiler.ExportTargetInterop.Foreign.Android.ExternBlockHost.h
.uno/Uno/Activity/AApplication.cpp.o: jni/Uno/Activity/AApplication.cpp flags.txt | .uno/Uno/Activity
	echo Uno/Activity/AApplication.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno/Activity/AApplication.cpp.o -c jni/Uno/Activity/AApplication.cpp

.uno/Uno/Activity/EntryPoints.cpp.o: include/Uno/Activity/EntryPoints.h
.uno/Uno/Activity/EntryPoints.cpp.o: include/Uno/Activity/AApplication.h
.uno/Uno/Activity/EntryPoints.cpp.o: include/Uno/JNIHelper.h
.uno/Uno/Activity/EntryPoints.cpp.o: include/Uno/Graphics/GLHelper.h
.uno/Uno/Activity/EntryPoints.cpp.o: include/Android.Base.JNI.h
.uno/Uno/Activity/EntryPoints.cpp.o: jni/Uno/Activity/EntryPoints.cpp flags.txt | .uno/Uno/Activity
	echo Uno/Activity/EntryPoints.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno/Activity/EntryPoints.cpp.o -c jni/Uno/Activity/EntryPoints.cpp

.uno/Uno/Activity/Platform2.cpp.o: include/Uno/Platform2.h
.uno/Uno/Activity/Platform2.cpp.o: include/Uno/Activity/AApplication.h
.uno/Uno/Activity/Platform2.cpp.o: include/Uno/JNIHelper.h
.uno/Uno/Activity/Platform2.cpp.o: include/Uno/Graphics/GLHelper.h
.uno/Uno/Activity/Platform2.cpp.o: include/Uno.Float2.h
.uno/Uno/Activity/Platform2.cpp.o: include/Uno.Rect.h
.uno/Uno/Activity/Platform2.cpp.o: include/Uno.Platform2.Application.h
.uno/Uno/Activity/Platform2.cpp.o: include/Uno.Platform2.Display.h
.uno/Uno/Activity/Platform2.cpp.o: include/Uno.Platform.TimerEventArgs.h
.uno/Uno/Activity/Platform2.cpp.o: include/Uno.Platform2.Application.h
.uno/Uno/Activity/Platform2.cpp.o: include/Uno.Platform.SystemUI.h
.uno/Uno/Activity/Platform2.cpp.o: include/Uno.Platform.SystemUIWillResizeEventArgs.h
.uno/Uno/Activity/Platform2.cpp.o: include/Android.Base.JNI.h
.uno/Uno/Activity/Platform2.cpp.o: jni/Uno/Activity/Platform2.cpp flags.txt | .uno/Uno/Activity
	echo Uno/Activity/Platform2.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno/Activity/Platform2.cpp.o -c jni/Uno/Activity/Platform2.cpp

.uno/Uno/Base64.cpp.o: include/Uno.h
.uno/Uno/Base64.cpp.o: jni/Uno/Base64.cpp flags.txt | .uno/Uno
	echo Uno/Base64.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno/Base64.cpp.o -c jni/Uno/Base64.cpp

.uno/Uno/Graphics/GLHelper.cpp.o: include/Uno/Graphics/GLHelper.h
.uno/Uno/Graphics/GLHelper.cpp.o: include/Uno/JNIHelper.h
.uno/Uno/Graphics/GLHelper.cpp.o: include/Uno.Exception.h
.uno/Uno/Graphics/GLHelper.cpp.o: jni/Uno/Graphics/GLHelper.cpp flags.txt | .uno/Uno/Graphics
	echo Uno/Graphics/GLHelper.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno/Graphics/GLHelper.cpp.o -c jni/Uno/Graphics/GLHelper.cpp

.uno/Uno/JNIHelper.cpp.o: include/Uno/JniHelper.h
.uno/Uno/JNIHelper.cpp.o: jni/Uno/JNIHelper.cpp flags.txt | .uno/Uno
	echo Uno/JNIHelper.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno/JNIHelper.cpp.o -c jni/Uno/JNIHelper.cpp

.uno/Uno/Memory.cpp.o: include/Uno/_internal.h
.uno/Uno/Memory.cpp.o: include/Uno/Support.h
.uno/Uno/Memory.cpp.o: include/Uno.Type.h
.uno/Uno/Memory.cpp.o: include/Uno.String.h
.uno/Uno/Memory.cpp.o: jni/Uno/Memory.cpp flags.txt | .uno/Uno
	echo Uno/Memory.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno/Memory.cpp.o -c jni/Uno/Memory.cpp

.uno/Uno/ObjectModel.cpp.o: include/Uno/_internal.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.Bool.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.Byte.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.Char.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.Float.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.Int.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.Object.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.SByte.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.Short.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.String.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.UShort.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.Delegate.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.IndexOutOfRangeException.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.InvalidCastException.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.InvalidOperationException.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.NullReferenceException.h
.uno/Uno/ObjectModel.cpp.o: include/Uno.Type.h
.uno/Uno/ObjectModel.cpp.o: jni/Uno/ObjectModel.cpp flags.txt | .uno/Uno
	echo Uno/ObjectModel.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno/ObjectModel.cpp.o -c jni/Uno/ObjectModel.cpp

.uno/Uno/Reflection.cpp.o: include/Uno/Reflection.h
.uno/Uno/Reflection.cpp.o: include/Uno/XliInterop.h
.uno/Uno/Reflection.cpp.o: include/Uno.Int.h
.uno/Uno/Reflection.cpp.o: include/Uno.Bool.h
.uno/Uno/Reflection.cpp.o: include/Uno.String.h
.uno/Uno/Reflection.cpp.o: include/Uno.Exception.h
.uno/Uno/Reflection.cpp.o: include/Uno.Type.h
.uno/Uno/Reflection.cpp.o: jni/Uno/Reflection.cpp flags.txt | .uno/Uno
	echo Uno/Reflection.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno/Reflection.cpp.o -c jni/Uno/Reflection.cpp

.uno/Uno/Support.cpp.o: include/Uno.Byte.h
.uno/Uno/Support.cpp.o: include/Uno.Buffer.h
.uno/Uno/Support.cpp.o: include/Uno/Support.h
.uno/Uno/Support.cpp.o: jni/Uno/Support.cpp flags.txt | .uno/Uno
	echo Uno/Support.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/Uno/Support.cpp.o -c jni/Uno/Support.cpp

.uno/V8Proxy.cpp.o: include/V8Proxy.h
.uno/V8Proxy.cpp.o: include/Fuse.Scripting.V8.Simple.String.h
.uno/V8Proxy.cpp.o: include/Fuse.Scripting.V8.Simple.ScriptException.h
.uno/V8Proxy.cpp.o: include/Fuse.Scripting.V8.Simple.UniqueValueVector.h
.uno/V8Proxy.cpp.o: include/Uno.h
.uno/V8Proxy.cpp.o: jni/V8Proxy.cpp flags.txt | .uno
	echo V8Proxy.cpp
	$(CXX) $(CXX_FLAGS) -o .uno/V8Proxy.cpp.o -c jni/V8Proxy.cpp

include/_root.FuseAndroid_bundle.h: include/Uno.h

include/_root.FuseBasicTheme_bundle.h: include/Uno.h

include/_root.FuseBasicTheme_FuseAnimationsChange1_float4_Value_Property.h: include/Uno.Float4.h
include/_root.FuseBasicTheme_FuseAnimationsChange1_float4_Value_Property.h: include/Uno.UX.Property-1.h

include/_root.FuseBasicTheme_FuseControlsButton_string_Text_Property.h: include/Uno.String.h
include/_root.FuseBasicTheme_FuseControlsButton_string_Text_Property.h: include/Uno.UX.Property-1.h

include/_root.FuseBasicTheme_FuseControlsTextControl_float_FontSize_Property.h: include/Uno.Float.h
include/_root.FuseBasicTheme_FuseControlsTextControl_float_FontSize_Property.h: include/Uno.UX.Property-1.h

include/_root.FuseBasicTheme_FuseControlsTextControl_float_LineSpacing_Property.h: include/Uno.Float.h
include/_root.FuseBasicTheme_FuseControlsTextControl_float_LineSpacing_Property.h: include/Uno.UX.Property-1.h

include/_root.FuseBasicTheme_FuseControlsTextControl_float4_TextColor_Property.h: include/Uno.Float4.h
include/_root.FuseBasicTheme_FuseControlsTextControl_float4_TextColor_Property.h: include/Uno.UX.Property-1.h

include/_root.FuseBasicTheme_FuseControlsTextControl_FuseElementsTextAl-caf616dd.h: include/Fuse.Elements.TextAlignment.h
include/_root.FuseBasicTheme_FuseControlsTextControl_FuseElementsTextAl-caf616dd.h: include/Uno.UX.Property-1.h

include/_root.FuseBasicTheme_FuseControlsTextControl_FuseElementsTextWr-746d7e4e.h: include/Fuse.Elements.TextWrapping.h
include/_root.FuseBasicTheme_FuseControlsTextControl_FuseElementsTextWr-746d7e4e.h: include/Uno.UX.Property-1.h

include/_root.FuseBasicTheme_FuseControlsTextControl_FuseFont_Font_Property.h: include/Fuse.Font.h
include/_root.FuseBasicTheme_FuseControlsTextControl_FuseFont_Font_Property.h: include/Uno.UX.Property-1.h

include/_root.FuseBasicTheme_FuseControlsTextControl_string_Value_Property.h: include/Uno.String.h
include/_root.FuseBasicTheme_FuseControlsTextControl_string_Value_Property.h: include/Uno.UX.Property-1.h

include/_root.FuseBasicTheme_FuseControlsTextEdit_float4_PlaceholderCol-a5e732f7.h: include/Uno.Float4.h
include/_root.FuseBasicTheme_FuseControlsTextEdit_float4_PlaceholderCol-a5e732f7.h: include/Uno.UX.Property-1.h

include/_root.FuseBasicTheme_FuseControlsTextEdit_string_PlaceholderTex-b681a73c.h: include/Uno.String.h
include/_root.FuseBasicTheme_FuseControlsTextEdit_string_PlaceholderTex-b681a73c.h: include/Uno.UX.Property-1.h

include/_root.FuseBasicTheme_FuseDrawingSolidColor_float4_Color_Property.h: include/Uno.Float4.h
include/_root.FuseBasicTheme_FuseDrawingSolidColor_float4_Color_Property.h: include/Uno.UX.Property-1.h

include/_root.FuseBasicTheme_FuseDrawingStroke_float_Width_Property.h: include/Uno.Float.h
include/_root.FuseBasicTheme_FuseDrawingStroke_float_Width_Property.h: include/Uno.UX.Property-1.h

include/_root.FuseBasicTheme_FuseEffectsDropShadow_float4_Color_Property.h: include/Uno.Float4.h
include/_root.FuseBasicTheme_FuseEffectsDropShadow_float4_Color_Property.h: include/Uno.UX.Property-1.h

include/_root.FuseBasicTheme_FuseElementsElement_float_Height_Property.h: include/Uno.Float.h
include/_root.FuseBasicTheme_FuseElementsElement_float_Height_Property.h: include/Uno.UX.Property-1.h

include/_root.FuseBasicTheme_FuseElementsElement_float_Opacity_Property.h: include/Uno.Float.h
include/_root.FuseBasicTheme_FuseElementsElement_float_Opacity_Property.h: include/Uno.UX.Property-1.h

include/_root.FuseBasicTheme_FuseElementsElement_float_Width_Property.h: include/Uno.Float.h
include/_root.FuseBasicTheme_FuseElementsElement_float_Width_Property.h: include/Uno.UX.Property-1.h

include/_root.FuseBasicTheme_FuseInputFocus_bool_FocusIsFocusable_Property.h: include/Uno.Bool.h
include/_root.FuseBasicTheme_FuseInputFocus_bool_FocusIsFocusable_Property.h: include/Uno.UX.Property-1.h

include/_root.FuseBasicTheme_FuseTranslation_float_X_Property.h: include/Uno.Float.h
include/_root.FuseBasicTheme_FuseTranslation_float_X_Property.h: include/Uno.UX.Property-1.h

include/_root.FuseBasicTheme_FuseTriggersActionsTriggerAction_bool_IsAc-7430db5a.h: include/Uno.Bool.h
include/_root.FuseBasicTheme_FuseTriggersActionsTriggerAction_bool_IsAc-7430db5a.h: include/Uno.UX.Property-1.h

include/_root.FuseBasicTheme_FuseTriggersWhileBool_bool_Value_Property.h: include/Uno.Bool.h
include/_root.FuseBasicTheme_FuseTriggersWhileBool_bool_Value_Property.h: include/Uno.UX.Property-1.h

include/_root.FuseControls_bundle.h: include/Uno.h

include/_root.FuseControls_FuseDrawingSolidColor_float4_Color_Property.h: include/Uno.Float4.h
include/_root.FuseControls_FuseDrawingSolidColor_float4_Color_Property.h: include/Uno.UX.Property-1.h

include/_root.FuseControls_FuseNode_bool_IsEnabled_Property.h: include/Uno.Bool.h
include/_root.FuseControls_FuseNode_bool_IsEnabled_Property.h: include/Uno.UX.Property-1.h

include/_root.FuseCore_bundle.h: include/Uno.h

include/_root.FuseDrawing_bundle.h: include/Uno.h

include/_root.FuseDrawingPolygons_bundle.h: include/Uno.h

include/_root.FuseDrawingPrimitives_bundle.h: include/Uno.h

include/_root.FuseEffects_bundle.h: include/Uno.h

include/_root.FuseElements_bundle.h: include/Uno.h

include/_root.FuseEntities_bundle.h: include/Uno.h

include/_root.FuseiOS_bundle.h: include/Uno.h

include/_root.FuseReactive_bundle.h: include/Uno.h

include/_root.FuseThemes_bundle.h: include/Uno.h

include/_root.FuseThemes_FuseControlsScrollView_bool_KeepFocusInView_Property.h: include/Uno.Bool.h
include/_root.FuseThemes_FuseControlsScrollView_bool_KeepFocusInView_Property.h: include/Uno.UX.Property-1.h

include/_root.FuseThemes_FuseControlsScrollView_bool_UserScroll_Property.h: include/Uno.Bool.h
include/_root.FuseThemes_FuseControlsScrollView_bool_UserScroll_Property.h: include/Uno.UX.Property-1.h

include/_root.FuseThemes_FuseGesturesScroller_bool_UserScroll_Property.h: include/Uno.Bool.h
include/_root.FuseThemes_FuseGesturesScroller_bool_UserScroll_Property.h: include/Uno.UX.Property-1.h

include/_root.FuseThemes_FuseTriggersWhileBool_bool_Value_Property.h: include/Uno.Bool.h
include/_root.FuseThemes_FuseTriggersWhileBool_bool_Value_Property.h: include/Uno.UX.Property-1.h

include/_root.FuseVideo_bundle.h: include/Uno.h

include/_root.HashableWeakReference.h: include/Uno.Object.h

include/_root.InfoMedic_bundle.h: include/Uno.h

include/_root.InfoMedic_FuseControlsPageControl_FuseNode_Active_Property.h: include/Fuse.Node.h
include/_root.InfoMedic_FuseControlsPageControl_FuseNode_Active_Property.h: include/Uno.UX.Property-1.h

include/_root.InfoMedic_FuseControlsTextControl_string_Value_Property.h: include/Uno.String.h
include/_root.InfoMedic_FuseControlsTextControl_string_Value_Property.h: include/Uno.UX.Property-1.h

include/_root.InfoMedic_FuseNode_bool_IsEnabled_Property.h: include/Uno.Bool.h
include/_root.InfoMedic_FuseNode_bool_IsEnabled_Property.h: include/Uno.UX.Property-1.h

include/_root.MainView.h: include/Fuse.App.h

include/_root.MainView.Template.h: include/Fuse.Controls.Text.h
include/_root.MainView.Template.h: include/Uno.UX.ITemplate.h
include/_root.MainView.Template.h: include/Uno.UX.Template-1.h

include/_root.MainView.Template1.h: include/Fuse.Controls.TextInput.h
include/_root.MainView.Template1.h: include/Uno.UX.ITemplate.h
include/_root.MainView.Template1.h: include/Uno.UX.Template-1.h

include/_root.OutracksSimulatorClientUno_bundle.h: include/Uno.h

include/_root.UnoCore_bundle.h: include/Uno.h

include/_root.WeakDictionary-2.h: include/Uno.Object.h

include/Android.android.animation.Animator.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.animation.Animator.h: include/Android.java.lang.Object.h
include/Android.android.animation.Animator.h: include/Uno.IDisposable.h

include/Android.android.animation.LayoutTransition.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.animation.LayoutTransition.h: include/Android.java.lang.Object.h
include/Android.android.animation.LayoutTransition.h: include/Uno.IDisposable.h

include/Android.android.animation.TimeAnimator.h: include/Android.android.animation.ValueAnimator.h
include/Android.android.animation.TimeAnimator.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.animation.TimeAnimator.h: include/Uno.IDisposable.h

include/Android.android.animation.TimeAnimatorDLRTimeListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.animation.TimeAnimatorDLRTimeListener.h: include/Uno.Object.h

include/Android.android.animation.TimeInterpolator.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.animation.TimeInterpolator.h: include/Uno.Object.h

include/Android.android.animation.ValueAnimator.h: include/Android.android.animation.Animator.h
include/Android.android.animation.ValueAnimator.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.animation.ValueAnimator.h: include/Uno.IDisposable.h

include/Android.android.app.Activity.h: include/Android.android.view.ContextThemeWrapper.h
include/Android.android.app.Activity.h: include/Android.android.view.ViewDLROnCreateContextMenuListener.h
include/Android.android.app.Activity.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.app.Activity.h: include/Uno.IDisposable.h

include/Android.android.app.Fragment.h: include/Android.android.view.ViewDLROnCreateContextMenuListener.h
include/Android.android.app.Fragment.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.app.Fragment.h: include/Android.java.lang.Object.h
include/Android.android.app.Fragment.h: include/Uno.IDisposable.h

include/Android.android.app.TaskStackBuilder.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.app.TaskStackBuilder.h: include/Android.java.lang.Object.h
include/Android.android.app.TaskStackBuilder.h: include/Uno.IDisposable.h

include/Android.android.content.ClipData.h: include/Android.android.os.Parcelable.h
include/Android.android.content.ClipData.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.content.ClipData.h: include/Android.java.lang.Object.h
include/Android.android.content.ClipData.h: include/Uno.IDisposable.h

include/Android.android.content.ComponentName.h: include/Android.android.os.Parcelable.h
include/Android.android.content.ComponentName.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.content.ComponentName.h: include/Android.java.lang.Object.h
include/Android.android.content.ComponentName.h: include/Uno.IDisposable.h

include/Android.android.content.Context.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.content.Context.h: include/Android.java.lang.Object.h
include/Android.android.content.Context.h: include/Uno.IDisposable.h

include/Android.android.content.ContextWrapper.h: include/Android.android.content.Context.h
include/Android.android.content.ContextWrapper.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.content.ContextWrapper.h: include/Uno.IDisposable.h

include/Android.android.content.Intent.h: include/Android.android.os.Parcelable.h
include/Android.android.content.Intent.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.content.Intent.h: include/Android.java.lang.Object.h
include/Android.android.content.Intent.h: include/Uno.IDisposable.h

include/Android.android.content.res.AssetFileDescriptor.h: include/Android.android.os.Parcelable.h
include/Android.android.content.res.AssetFileDescriptor.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.content.res.AssetFileDescriptor.h: include/Android.java.lang.Object.h
include/Android.android.content.res.AssetFileDescriptor.h: include/Uno.IDisposable.h

include/Android.android.content.res.AssetManager.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.content.res.AssetManager.h: include/Android.java.lang.Object.h
include/Android.android.content.res.AssetManager.h: include/Uno.IDisposable.h

include/Android.android.content.res.ColorStateList.h: include/Android.android.os.Parcelable.h
include/Android.android.content.res.ColorStateList.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.content.res.ColorStateList.h: include/Android.java.lang.Object.h
include/Android.android.content.res.ColorStateList.h: include/Uno.IDisposable.h

include/Android.android.content.res.Configuration.h: include/Android.android.os.Parcelable.h
include/Android.android.content.res.Configuration.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.content.res.Configuration.h: include/Android.java.lang.Object.h
include/Android.android.content.res.Configuration.h: include/Uno.IDisposable.h

include/Android.android.content.res.Resources.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.content.res.Resources.h: include/Android.java.lang.Object.h
include/Android.android.content.res.Resources.h: include/Uno.IDisposable.h

include/Android.android.content.res.TypedArray.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.content.res.TypedArray.h: include/Android.java.lang.Object.h
include/Android.android.content.res.TypedArray.h: include/Uno.IDisposable.h

include/Android.android.graphics.Bitmap.h: include/Android.android.os.Parcelable.h
include/Android.android.graphics.Bitmap.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.graphics.Bitmap.h: include/Android.java.lang.Object.h
include/Android.android.graphics.Bitmap.h: include/Uno.IDisposable.h

include/Android.android.graphics.BitmapDLRConfig.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.graphics.BitmapDLRConfig.h: include/Android.java.lang.Object.h
include/Android.android.graphics.BitmapDLRConfig.h: include/Uno.IDisposable.h

include/Android.android.graphics.BitmapFactory.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.graphics.BitmapFactory.h: include/Android.java.lang.Object.h
include/Android.android.graphics.BitmapFactory.h: include/Uno.IDisposable.h

include/Android.android.graphics.Canvas.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.graphics.Canvas.h: include/Android.java.lang.Object.h
include/Android.android.graphics.Canvas.h: include/Uno.IDisposable.h

include/Android.android.graphics.Color.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.graphics.Color.h: include/Android.java.lang.Object.h
include/Android.android.graphics.Color.h: include/Uno.IDisposable.h

include/Android.android.graphics.drawable.Drawable.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.graphics.drawable.Drawable.h: include/Android.java.lang.Object.h
include/Android.android.graphics.drawable.Drawable.h: include/Uno.IDisposable.h

include/Android.android.graphics.drawable.LayerDrawable.h: include/Android.android.graphics.drawable.Drawable.h
include/Android.android.graphics.drawable.LayerDrawable.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.graphics.drawable.LayerDrawable.h: include/Uno.IDisposable.h

include/Android.android.graphics.drawable.ShapeDrawable.h: include/Android.android.graphics.drawable.Drawable.h
include/Android.android.graphics.drawable.ShapeDrawable.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.graphics.drawable.ShapeDrawable.h: include/Uno.IDisposable.h

include/Android.android.graphics.drawable.ShapeDrawableDLRShaderFactory.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.graphics.drawable.ShapeDrawableDLRShaderFactory.h: include/Android.java.lang.Object.h
include/Android.android.graphics.drawable.ShapeDrawableDLRShaderFactory.h: include/Uno.IDisposable.h

include/Android.android.graphics.drawable.shapes.ArcShape.h: include/Android.android.graphics.drawable.shapes.RectShape.h
include/Android.android.graphics.drawable.shapes.ArcShape.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.graphics.drawable.shapes.ArcShape.h: include/Uno.IDisposable.h

include/Android.android.graphics.drawable.shapes.RectShape.h: include/Android.android.graphics.drawable.shapes.Shape.h
include/Android.android.graphics.drawable.shapes.RectShape.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.graphics.drawable.shapes.RectShape.h: include/Uno.IDisposable.h

include/Android.android.graphics.drawable.shapes.RoundRectShape.h: include/Android.android.graphics.drawable.shapes.RectShape.h
include/Android.android.graphics.drawable.shapes.RoundRectShape.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.graphics.drawable.shapes.RoundRectShape.h: include/Uno.IDisposable.h

include/Android.android.graphics.drawable.shapes.Shape.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.graphics.drawable.shapes.Shape.h: include/Android.java.lang.Object.h
include/Android.android.graphics.drawable.shapes.Shape.h: include/Uno.IDisposable.h

include/Android.android.graphics.LinearGradient.h: include/Android.android.graphics.Shader.h
include/Android.android.graphics.LinearGradient.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.graphics.LinearGradient.h: include/Uno.IDisposable.h

include/Android.android.graphics.Matrix.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.graphics.Matrix.h: include/Android.java.lang.Object.h
include/Android.android.graphics.Matrix.h: include/Uno.IDisposable.h

include/Android.android.graphics.Paint.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.graphics.Paint.h: include/Android.java.lang.Object.h
include/Android.android.graphics.Paint.h: include/Uno.IDisposable.h

include/Android.android.graphics.PaintDLRStyle.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.graphics.PaintDLRStyle.h: include/Android.java.lang.Object.h
include/Android.android.graphics.PaintDLRStyle.h: include/Uno.IDisposable.h

include/Android.android.graphics.Point.h: include/Android.android.os.Parcelable.h
include/Android.android.graphics.Point.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.graphics.Point.h: include/Android.java.lang.Object.h
include/Android.android.graphics.Point.h: include/Uno.IDisposable.h

include/Android.android.graphics.PorterDuffDLRMode.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.graphics.PorterDuffDLRMode.h: include/Android.java.lang.Object.h
include/Android.android.graphics.PorterDuffDLRMode.h: include/Uno.IDisposable.h

include/Android.android.graphics.Rect.h: include/Android.android.os.Parcelable.h
include/Android.android.graphics.Rect.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.graphics.Rect.h: include/Android.java.lang.Object.h
include/Android.android.graphics.Rect.h: include/Uno.IDisposable.h

include/Android.android.graphics.RectF.h: include/Android.android.os.Parcelable.h
include/Android.android.graphics.RectF.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.graphics.RectF.h: include/Android.java.lang.Object.h
include/Android.android.graphics.RectF.h: include/Uno.IDisposable.h

include/Android.android.graphics.Region.h: include/Android.android.os.Parcelable.h
include/Android.android.graphics.Region.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.graphics.Region.h: include/Android.java.lang.Object.h
include/Android.android.graphics.Region.h: include/Uno.IDisposable.h

include/Android.android.graphics.Shader.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.graphics.Shader.h: include/Android.java.lang.Object.h
include/Android.android.graphics.Shader.h: include/Uno.IDisposable.h

include/Android.android.graphics.ShaderDLRTileMode.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.graphics.ShaderDLRTileMode.h: include/Android.java.lang.Object.h
include/Android.android.graphics.ShaderDLRTileMode.h: include/Uno.IDisposable.h

include/Android.android.graphics.SurfaceTexture.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.graphics.SurfaceTexture.h: include/Android.java.lang.Object.h
include/Android.android.graphics.SurfaceTexture.h: include/Uno.IDisposable.h

include/Android.android.graphics.SurfaceTextureDLROnFrameAvailableListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.graphics.SurfaceTextureDLROnFrameAvailableListener.h: include/Uno.Object.h

include/Android.android.graphics.Typeface.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.graphics.Typeface.h: include/Android.java.lang.Object.h
include/Android.android.graphics.Typeface.h: include/Uno.IDisposable.h

include/Android.android.location.Location.h: include/Android.android.os.Parcelable.h
include/Android.android.location.Location.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.location.Location.h: include/Android.java.lang.Object.h
include/Android.android.location.Location.h: include/Uno.IDisposable.h

include/Android.android.location.LocationListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.location.LocationListener.h: include/Uno.Object.h

include/Android.android.location.LocationManager.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.location.LocationManager.h: include/Android.java.lang.Object.h
include/Android.android.location.LocationManager.h: include/Uno.IDisposable.h

include/Android.android.media.AudioManager.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.media.AudioManager.h: include/Android.java.lang.Object.h
include/Android.android.media.AudioManager.h: include/Uno.IDisposable.h

include/Android.android.media.AudioManagerDLROnAudioFocusChangeListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.media.AudioManagerDLROnAudioFocusChangeListener.h: include/Uno.Object.h

include/Android.android.media.MediaPlayer.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.media.MediaPlayer.h: include/Android.java.lang.Object.h
include/Android.android.media.MediaPlayer.h: include/Uno.IDisposable.h

include/Android.android.media.MediaPlayerDLROnBufferingUpdateListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.media.MediaPlayerDLROnBufferingUpdateListener.h: include/Uno.Object.h

include/Android.android.media.MediaPlayerDLROnCompletionListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.media.MediaPlayerDLROnCompletionListener.h: include/Uno.Object.h

include/Android.android.media.MediaPlayerDLROnErrorListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.media.MediaPlayerDLROnErrorListener.h: include/Uno.Object.h

include/Android.android.media.MediaPlayerDLROnPreparedListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.media.MediaPlayerDLROnPreparedListener.h: include/Uno.Object.h

include/Android.android.media.MediaPlayerDLROnSeekCompleteListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.media.MediaPlayerDLROnSeekCompleteListener.h: include/Uno.Object.h

include/Android.android.media.MediaPlayerDLROnVideoSizeChangedListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.media.MediaPlayerDLROnVideoSizeChangedListener.h: include/Uno.Object.h

include/Android.android.net.http.SslError.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.net.http.SslError.h: include/Android.java.lang.Object.h
include/Android.android.net.http.SslError.h: include/Uno.IDisposable.h

include/Android.android.net.Uri.h: include/Android.android.os.Parcelable.h
include/Android.android.net.Uri.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.net.Uri.h: include/Android.java.lang.Object.h
include/Android.android.net.Uri.h: include/Uno.IDisposable.h

include/Android.android.opengl.GLUtils.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.opengl.GLUtils.h: include/Android.java.lang.Object.h
include/Android.android.opengl.GLUtils.h: include/Uno.IDisposable.h

include/Android.android.os.Build.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.os.Build.h: include/Android.java.lang.Object.h
include/Android.android.os.Build.h: include/Uno.IDisposable.h

include/Android.android.os.BuildDLRVERSION.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.os.BuildDLRVERSION.h: include/Android.java.lang.Object.h
include/Android.android.os.BuildDLRVERSION.h: include/Uno.IDisposable.h

include/Android.android.os.Bundle.h: include/Android.android.os.Parcelable.h
include/Android.android.os.Bundle.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.os.Bundle.h: include/Android.java.lang.Object.h
include/Android.android.os.Bundle.h: include/Uno.IDisposable.h

include/Android.android.os.Handler.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.os.Handler.h: include/Android.java.lang.Object.h
include/Android.android.os.Handler.h: include/Uno.IDisposable.h

include/Android.android.os.IBinder.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.os.IBinder.h: include/Uno.Object.h

include/Android.android.os.IBinderDLRDeathRecipient.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.os.IBinderDLRDeathRecipient.h: include/Uno.Object.h

include/Android.android.os.IInterface.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.os.IInterface.h: include/Uno.Object.h

include/Android.android.os.Looper.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.os.Looper.h: include/Android.java.lang.Object.h
include/Android.android.os.Looper.h: include/Uno.IDisposable.h

include/Android.android.os.Message.h: include/Android.android.os.Parcelable.h
include/Android.android.os.Message.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.os.Message.h: include/Android.java.lang.Object.h
include/Android.android.os.Message.h: include/Uno.IDisposable.h

include/Android.android.os.Parcel.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.os.Parcel.h: include/Android.java.lang.Object.h
include/Android.android.os.Parcel.h: include/Uno.IDisposable.h

include/Android.android.os.Parcelable.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.os.Parcelable.h: include/Uno.Object.h

include/Android.android.os.Vibrator.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.os.Vibrator.h: include/Android.java.lang.Object.h
include/Android.android.os.Vibrator.h: include/Uno.IDisposable.h

include/Android.android.test.mock.MockContext.h: include/Android.android.content.Context.h
include/Android.android.test.mock.MockContext.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.test.mock.MockContext.h: include/Uno.IDisposable.h

include/Android.android.text.Editable.h: include/Android.android.text.GetChars.h
include/Android.android.text.Editable.h: include/Android.android.text.Spannable.h
include/Android.android.text.Editable.h: include/Android.android.text.Spanned.h
include/Android.android.text.Editable.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.text.Editable.h: include/Android.java.lang.CharSequence.h
include/Android.android.text.Editable.h: include/Uno.Object.h

include/Android.android.text.GetChars.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.text.GetChars.h: include/Android.java.lang.CharSequence.h
include/Android.android.text.GetChars.h: include/Uno.Object.h

include/Android.android.text.InputFilter.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.text.InputFilter.h: include/Uno.Object.h

include/Android.android.text.Layout.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.text.Layout.h: include/Android.java.lang.Object.h
include/Android.android.text.Layout.h: include/Uno.IDisposable.h

include/Android.android.text.LayoutDLRAlignment.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.text.LayoutDLRAlignment.h: include/Android.java.lang.Object.h
include/Android.android.text.LayoutDLRAlignment.h: include/Uno.IDisposable.h

include/Android.android.text.Spannable.h: include/Android.android.text.Spanned.h
include/Android.android.text.Spannable.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.text.Spannable.h: include/Android.java.lang.CharSequence.h
include/Android.android.text.Spannable.h: include/Uno.Object.h

include/Android.android.text.Spanned.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.text.Spanned.h: include/Android.java.lang.CharSequence.h
include/Android.android.text.Spanned.h: include/Uno.Object.h

include/Android.android.text.StaticLayout.h: include/Android.android.text.Layout.h
include/Android.android.text.StaticLayout.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.text.StaticLayout.h: include/Uno.IDisposable.h

include/Android.android.text.TextPaint.h: include/Android.android.graphics.Paint.h
include/Android.android.text.TextPaint.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.text.TextPaint.h: include/Uno.IDisposable.h

include/Android.android.text.TextUtilsDLRTruncateAt.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.text.TextUtilsDLRTruncateAt.h: include/Android.java.lang.Object.h
include/Android.android.text.TextUtilsDLRTruncateAt.h: include/Uno.IDisposable.h

include/Android.android.text.TextWatcher.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.text.TextWatcher.h: include/Uno.Object.h

include/Android.android.util.AttributeSet.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.util.AttributeSet.h: include/Uno.Object.h

include/Android.android.util.Property.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.util.Property.h: include/Android.java.lang.Object.h
include/Android.android.util.Property.h: include/Uno.IDisposable.h

include/Android.android.util.SparseArray.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.util.SparseArray.h: include/Android.java.lang.Object.h
include/Android.android.util.SparseArray.h: include/Uno.IDisposable.h

include/Android.android.util.TypedValue.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.util.TypedValue.h: include/Android.java.lang.Object.h
include/Android.android.util.TypedValue.h: include/Uno.IDisposable.h

include/Android.android.view.accessibility.AccessibilityEvent.h: include/Android.android.os.Parcelable.h
include/Android.android.view.accessibility.AccessibilityEvent.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.accessibility.AccessibilityEvent.h: include/Android.java.lang.Object.h
include/Android.android.view.accessibility.AccessibilityEvent.h: include/Uno.IDisposable.h

include/Android.android.view.accessibility.AccessibilityNodeInfo.h: include/Android.android.os.Parcelable.h
include/Android.android.view.accessibility.AccessibilityNodeInfo.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.accessibility.AccessibilityNodeInfo.h: include/Android.java.lang.Object.h
include/Android.android.view.accessibility.AccessibilityNodeInfo.h: include/Uno.IDisposable.h

include/Android.android.view.accessibility.AccessibilityNodeProvider.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.accessibility.AccessibilityNodeProvider.h: include/Android.java.lang.Object.h
include/Android.android.view.accessibility.AccessibilityNodeProvider.h: include/Uno.IDisposable.h

include/Android.android.view.ActionMode.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ActionMode.h: include/Android.java.lang.Object.h
include/Android.android.view.ActionMode.h: include/Uno.IDisposable.h

include/Android.android.view.ActionModeDLRCallback.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ActionModeDLRCallback.h: include/Uno.Object.h

include/Android.android.view.ActionProvider.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ActionProvider.h: include/Android.java.lang.Object.h
include/Android.android.view.ActionProvider.h: include/Uno.IDisposable.h

include/Android.android.view.animation.Animation.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.animation.Animation.h: include/Android.java.lang.Object.h
include/Android.android.view.animation.Animation.h: include/Uno.IDisposable.h

include/Android.android.view.animation.AnimationDLRAnimationListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.animation.AnimationDLRAnimationListener.h: include/Uno.Object.h

include/Android.android.view.animation.Interpolator.h: include/Android.android.animation.TimeInterpolator.h
include/Android.android.view.animation.Interpolator.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.animation.Interpolator.h: include/Uno.Object.h

include/Android.android.view.animation.LayoutAnimationController.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.animation.LayoutAnimationController.h: include/Android.java.lang.Object.h
include/Android.android.view.animation.LayoutAnimationController.h: include/Uno.IDisposable.h

include/Android.android.view.animation.Transformation.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.animation.Transformation.h: include/Android.java.lang.Object.h
include/Android.android.view.animation.Transformation.h: include/Uno.IDisposable.h

include/Android.android.view.Choreographer.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.Choreographer.h: include/Android.java.lang.Object.h
include/Android.android.view.Choreographer.h: include/Uno.IDisposable.h

include/Android.android.view.ChoreographerDLRFrameCallback.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ChoreographerDLRFrameCallback.h: include/Uno.Object.h

include/Android.android.view.ContextMenu.h: include/Android.android.view.Menu.h
include/Android.android.view.ContextMenu.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ContextMenu.h: include/Uno.Object.h

include/Android.android.view.ContextMenuDLRContextMenuInfo.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ContextMenuDLRContextMenuInfo.h: include/Uno.Object.h

include/Android.android.view.ContextThemeWrapper.h: include/Android.android.content.ContextWrapper.h
include/Android.android.view.ContextThemeWrapper.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ContextThemeWrapper.h: include/Uno.IDisposable.h

include/Android.android.view.Display.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.Display.h: include/Android.java.lang.Object.h
include/Android.android.view.Display.h: include/Uno.IDisposable.h

include/Android.android.view.DragEvent.h: include/Android.android.os.Parcelable.h
include/Android.android.view.DragEvent.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.DragEvent.h: include/Android.java.lang.Object.h
include/Android.android.view.DragEvent.h: include/Uno.IDisposable.h

include/Android.android.view.Gravity.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.Gravity.h: include/Android.java.lang.Object.h
include/Android.android.view.Gravity.h: include/Uno.IDisposable.h

include/Android.android.view.InputEvent.h: include/Android.android.os.Parcelable.h
include/Android.android.view.InputEvent.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.InputEvent.h: include/Android.java.lang.Object.h
include/Android.android.view.InputEvent.h: include/Uno.IDisposable.h

include/Android.android.view.inputmethod.CompletionInfo.h: include/Android.android.os.Parcelable.h
include/Android.android.view.inputmethod.CompletionInfo.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.inputmethod.CompletionInfo.h: include/Android.java.lang.Object.h
include/Android.android.view.inputmethod.CompletionInfo.h: include/Uno.IDisposable.h

include/Android.android.view.inputmethod.CorrectionInfo.h: include/Android.android.os.Parcelable.h
include/Android.android.view.inputmethod.CorrectionInfo.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.inputmethod.CorrectionInfo.h: include/Android.java.lang.Object.h
include/Android.android.view.inputmethod.CorrectionInfo.h: include/Uno.IDisposable.h

include/Android.android.view.inputmethod.EditorInfo.h: include/Android.android.os.Parcelable.h
include/Android.android.view.inputmethod.EditorInfo.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.inputmethod.EditorInfo.h: include/Android.java.lang.Object.h
include/Android.android.view.inputmethod.EditorInfo.h: include/Uno.IDisposable.h

include/Android.android.view.inputmethod.ExtractedText.h: include/Android.android.os.Parcelable.h
include/Android.android.view.inputmethod.ExtractedText.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.inputmethod.ExtractedText.h: include/Android.java.lang.Object.h
include/Android.android.view.inputmethod.ExtractedText.h: include/Uno.IDisposable.h

include/Android.android.view.inputmethod.ExtractedTextRequest.h: include/Android.android.os.Parcelable.h
include/Android.android.view.inputmethod.ExtractedTextRequest.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.inputmethod.ExtractedTextRequest.h: include/Android.java.lang.Object.h
include/Android.android.view.inputmethod.ExtractedTextRequest.h: include/Uno.IDisposable.h

include/Android.android.view.inputmethod.InputConnection.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.inputmethod.InputConnection.h: include/Uno.Object.h

include/Android.android.view.inputmethod.InputMethodManager.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.inputmethod.InputMethodManager.h: include/Android.java.lang.Object.h
include/Android.android.view.inputmethod.InputMethodManager.h: include/Uno.IDisposable.h

include/Android.android.view.KeyEvent.h: include/Android.android.os.Parcelable.h
include/Android.android.view.KeyEvent.h: include/Android.android.view.InputEvent.h
include/Android.android.view.KeyEvent.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.KeyEvent.h: include/Uno.IDisposable.h

include/Android.android.view.KeyEventDLRDispatcherState.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.KeyEventDLRDispatcherState.h: include/Android.java.lang.Object.h
include/Android.android.view.KeyEventDLRDispatcherState.h: include/Uno.IDisposable.h

include/Android.android.view.Menu.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.Menu.h: include/Uno.Object.h

include/Android.android.view.MenuItem.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.MenuItem.h: include/Uno.Object.h

include/Android.android.view.MenuItemDLROnActionExpandListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.MenuItemDLROnActionExpandListener.h: include/Uno.Object.h

include/Android.android.view.MenuItemDLROnMenuItemClickListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.MenuItemDLROnMenuItemClickListener.h: include/Uno.Object.h

include/Android.android.view.MotionEvent.h: include/Android.android.os.Parcelable.h
include/Android.android.view.MotionEvent.h: include/Android.android.view.InputEvent.h
include/Android.android.view.MotionEvent.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.MotionEvent.h: include/Uno.IDisposable.h

include/Android.android.view.SubMenu.h: include/Android.android.view.Menu.h
include/Android.android.view.SubMenu.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.SubMenu.h: include/Uno.Object.h

include/Android.android.view.Surface.h: include/Android.android.os.Parcelable.h
include/Android.android.view.Surface.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.Surface.h: include/Android.java.lang.Object.h
include/Android.android.view.Surface.h: include/Uno.IDisposable.h

include/Android.android.view.SurfaceHolder.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.SurfaceHolder.h: include/Uno.Object.h

include/Android.android.view.SurfaceHolderDLRCallback.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.SurfaceHolderDLRCallback.h: include/Uno.Object.h

include/Android.android.view.SurfaceHolderDLRCallback2.h: include/Android.android.view.SurfaceHolderDLRCallback.h
include/Android.android.view.SurfaceHolderDLRCallback2.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.SurfaceHolderDLRCallback2.h: include/Uno.Object.h

include/Android.android.view.SurfaceView.h: include/Android.android.view.View.h
include/Android.android.view.SurfaceView.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.SurfaceView.h: include/Uno.IDisposable.h

include/Android.android.view.TextureView.h: include/Android.android.view.View.h
include/Android.android.view.TextureView.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.TextureView.h: include/Uno.IDisposable.h

include/Android.android.view.TextureViewDLRSurfaceTextureListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.TextureViewDLRSurfaceTextureListener.h: include/Uno.Object.h

include/Android.android.view.TouchDelegate.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.TouchDelegate.h: include/Android.java.lang.Object.h
include/Android.android.view.TouchDelegate.h: include/Uno.IDisposable.h

include/Android.android.view.View.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.View.h: include/Android.java.lang.Object.h
include/Android.android.view.View.h: include/Uno.IDisposable.h

include/Android.android.view.ViewDLRAccessibilityDelegate.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ViewDLRAccessibilityDelegate.h: include/Android.java.lang.Object.h
include/Android.android.view.ViewDLRAccessibilityDelegate.h: include/Uno.IDisposable.h

include/Android.android.view.ViewDLRDragShadowBuilder.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ViewDLRDragShadowBuilder.h: include/Android.java.lang.Object.h
include/Android.android.view.ViewDLRDragShadowBuilder.h: include/Uno.IDisposable.h

include/Android.android.view.ViewDLRMeasureSpec.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ViewDLRMeasureSpec.h: include/Android.java.lang.Object.h
include/Android.android.view.ViewDLRMeasureSpec.h: include/Uno.IDisposable.h

include/Android.android.view.ViewDLROnAttachStateChangeListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ViewDLROnAttachStateChangeListener.h: include/Uno.Object.h

include/Android.android.view.ViewDLROnClickListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ViewDLROnClickListener.h: include/Uno.Object.h

include/Android.android.view.ViewDLROnCreateContextMenuListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ViewDLROnCreateContextMenuListener.h: include/Uno.Object.h

include/Android.android.view.ViewDLROnDragListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ViewDLROnDragListener.h: include/Uno.Object.h

include/Android.android.view.ViewDLROnFocusChangeListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ViewDLROnFocusChangeListener.h: include/Uno.Object.h

include/Android.android.view.ViewDLROnGenericMotionListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ViewDLROnGenericMotionListener.h: include/Uno.Object.h

include/Android.android.view.ViewDLROnHoverListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ViewDLROnHoverListener.h: include/Uno.Object.h

include/Android.android.view.ViewDLROnKeyListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ViewDLROnKeyListener.h: include/Uno.Object.h

include/Android.android.view.ViewDLROnLayoutChangeListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ViewDLROnLayoutChangeListener.h: include/Uno.Object.h

include/Android.android.view.ViewDLROnLongClickListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ViewDLROnLongClickListener.h: include/Uno.Object.h

include/Android.android.view.ViewDLROnSystemUiVisibilityChangeListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ViewDLROnSystemUiVisibilityChangeListener.h: include/Uno.Object.h

include/Android.android.view.ViewDLROnTouchListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ViewDLROnTouchListener.h: include/Uno.Object.h

include/Android.android.view.ViewGroup.h: include/Android.android.view.View.h
include/Android.android.view.ViewGroup.h: include/Android.android.view.ViewParent.h
include/Android.android.view.ViewGroup.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ViewGroup.h: include/Uno.IDisposable.h

include/Android.android.view.ViewGroupDLRLayoutParams.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ViewGroupDLRLayoutParams.h: include/Android.java.lang.Object.h
include/Android.android.view.ViewGroupDLRLayoutParams.h: include/Uno.IDisposable.h

include/Android.android.view.ViewGroupDLRMarginLayoutParams.h: include/Android.android.view.ViewGroupDLRLayoutParams.h
include/Android.android.view.ViewGroupDLRMarginLayoutParams.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ViewGroupDLRMarginLayoutParams.h: include/Uno.IDisposable.h

include/Android.android.view.ViewGroupDLROnHierarchyChangeListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ViewGroupDLROnHierarchyChangeListener.h: include/Uno.Object.h

include/Android.android.view.ViewGroupOverlay.h: include/Android.android.view.ViewOverlay.h
include/Android.android.view.ViewGroupOverlay.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ViewGroupOverlay.h: include/Uno.IDisposable.h

include/Android.android.view.ViewOverlay.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ViewOverlay.h: include/Android.java.lang.Object.h
include/Android.android.view.ViewOverlay.h: include/Uno.IDisposable.h

include/Android.android.view.ViewParent.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ViewParent.h: include/Uno.Object.h

include/Android.android.view.ViewPropertyAnimator.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ViewPropertyAnimator.h: include/Android.java.lang.Object.h
include/Android.android.view.ViewPropertyAnimator.h: include/Uno.IDisposable.h

include/Android.android.view.ViewTreeObserver.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.ViewTreeObserver.h: include/Android.java.lang.Object.h
include/Android.android.view.ViewTreeObserver.h: include/Uno.IDisposable.h

include/Android.android.view.WindowId.h: include/Android.android.os.Parcelable.h
include/Android.android.view.WindowId.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.WindowId.h: include/Android.java.lang.Object.h
include/Android.android.view.WindowId.h: include/Uno.IDisposable.h

include/Android.android.view.WindowManagerDLRLayoutParams.h: include/Android.android.os.Parcelable.h
include/Android.android.view.WindowManagerDLRLayoutParams.h: include/Android.android.view.ViewGroupDLRLayoutParams.h
include/Android.android.view.WindowManagerDLRLayoutParams.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.view.WindowManagerDLRLayoutParams.h: include/Uno.IDisposable.h

include/Android.android.webkit.ConsoleMessage.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.webkit.ConsoleMessage.h: include/Android.java.lang.Object.h
include/Android.android.webkit.ConsoleMessage.h: include/Uno.IDisposable.h

include/Android.android.webkit.GeolocationPermissionsDLRCallback.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.webkit.GeolocationPermissionsDLRCallback.h: include/Uno.Object.h

include/Android.android.webkit.HttpAuthHandler.h: include/Android.android.os.Handler.h
include/Android.android.webkit.HttpAuthHandler.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.webkit.HttpAuthHandler.h: include/Uno.IDisposable.h

include/Android.android.webkit.JsPromptResult.h: include/Android.android.webkit.JsResult.h
include/Android.android.webkit.JsPromptResult.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.webkit.JsPromptResult.h: include/Uno.IDisposable.h

include/Android.android.webkit.JsResult.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.webkit.JsResult.h: include/Android.java.lang.Object.h
include/Android.android.webkit.JsResult.h: include/Uno.IDisposable.h

include/Android.android.webkit.SslErrorHandler.h: include/Android.android.os.Handler.h
include/Android.android.webkit.SslErrorHandler.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.webkit.SslErrorHandler.h: include/Uno.IDisposable.h

include/Android.android.webkit.ValueCallback.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.webkit.ValueCallback.h: include/Uno.Object.h

include/Android.android.webkit.WebChromeClient.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.webkit.WebChromeClient.h: include/Android.java.lang.Object.h
include/Android.android.webkit.WebChromeClient.h: include/Uno.IDisposable.h

include/Android.android.webkit.WebChromeClientDLRCustomViewCallback.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.webkit.WebChromeClientDLRCustomViewCallback.h: include/Uno.Object.h

include/Android.android.webkit.WebResourceResponse.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.webkit.WebResourceResponse.h: include/Android.java.lang.Object.h
include/Android.android.webkit.WebResourceResponse.h: include/Uno.IDisposable.h

include/Android.android.webkit.WebSettings.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.webkit.WebSettings.h: include/Android.java.lang.Object.h
include/Android.android.webkit.WebSettings.h: include/Uno.IDisposable.h

include/Android.android.webkit.WebStorageDLRQuotaUpdater.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.webkit.WebStorageDLRQuotaUpdater.h: include/Uno.Object.h

include/Android.android.webkit.WebView.h: include/Android.android.view.ViewGroupDLROnHierarchyChangeListener.h
include/Android.android.webkit.WebView.h: include/Android.android.view.ViewParent.h
include/Android.android.webkit.WebView.h: include/Android.android.widget.AbsoluteLayout.h
include/Android.android.webkit.WebView.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.webkit.WebView.h: include/Uno.IDisposable.h

include/Android.android.webkit.WebViewClient.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.webkit.WebViewClient.h: include/Android.java.lang.Object.h
include/Android.android.webkit.WebViewClient.h: include/Uno.IDisposable.h

include/Android.android.widget.AbsoluteLayout.h: include/Android.android.view.ViewGroup.h
include/Android.android.widget.AbsoluteLayout.h: include/Android.android.view.ViewParent.h
include/Android.android.widget.AbsoluteLayout.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.widget.AbsoluteLayout.h: include/Uno.IDisposable.h

include/Android.android.widget.AbsSeekBar.h: include/Android.android.widget.ProgressBar.h
include/Android.android.widget.AbsSeekBar.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.widget.AbsSeekBar.h: include/Uno.IDisposable.h

include/Android.android.widget.Button.h: include/Android.android.widget.TextView.h
include/Android.android.widget.Button.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.widget.Button.h: include/Uno.IDisposable.h

include/Android.android.widget.CompoundButton.h: include/Android.android.widget.Button.h
include/Android.android.widget.CompoundButton.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.widget.CompoundButton.h: include/Uno.IDisposable.h

include/Android.android.widget.CompoundButtonDLROnCheckedChangeListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.widget.CompoundButtonDLROnCheckedChangeListener.h: include/Uno.Object.h

include/Android.android.widget.EditText.h: include/Android.android.widget.TextView.h
include/Android.android.widget.EditText.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.widget.EditText.h: include/Uno.IDisposable.h

include/Android.android.widget.FrameLayout.h: include/Android.android.view.ViewGroup.h
include/Android.android.widget.FrameLayout.h: include/Android.android.view.ViewParent.h
include/Android.android.widget.FrameLayout.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.widget.FrameLayout.h: include/Uno.IDisposable.h

include/Android.android.widget.FrameLayoutDLRLayoutParams.h: include/Android.android.view.ViewGroupDLRMarginLayoutParams.h
include/Android.android.widget.FrameLayoutDLRLayoutParams.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.widget.FrameLayoutDLRLayoutParams.h: include/Uno.IDisposable.h

include/Android.android.widget.HorizontalScrollView.h: include/Android.android.view.ViewParent.h
include/Android.android.widget.HorizontalScrollView.h: include/Android.android.widget.FrameLayout.h
include/Android.android.widget.HorizontalScrollView.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.widget.HorizontalScrollView.h: include/Uno.IDisposable.h

include/Android.android.widget.ImageView.h: include/Android.android.view.View.h
include/Android.android.widget.ImageView.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.widget.ImageView.h: include/Uno.IDisposable.h

include/Android.android.widget.ImageViewDLRScaleType.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.widget.ImageViewDLRScaleType.h: include/Android.java.lang.Object.h
include/Android.android.widget.ImageViewDLRScaleType.h: include/Uno.IDisposable.h

include/Android.android.widget.ProgressBar.h: include/Android.android.view.View.h
include/Android.android.widget.ProgressBar.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.widget.ProgressBar.h: include/Uno.IDisposable.h

include/Android.android.widget.RelativeLayout.h: include/Android.android.view.ViewGroup.h
include/Android.android.widget.RelativeLayout.h: include/Android.android.view.ViewParent.h
include/Android.android.widget.RelativeLayout.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.widget.RelativeLayout.h: include/Uno.IDisposable.h

include/Android.android.widget.RelativeLayoutDLRLayoutParams.h: include/Android.android.view.ViewGroupDLRMarginLayoutParams.h
include/Android.android.widget.RelativeLayoutDLRLayoutParams.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.widget.RelativeLayoutDLRLayoutParams.h: include/Uno.IDisposable.h

include/Android.android.widget.ScrollView.h: include/Android.android.view.ViewParent.h
include/Android.android.widget.ScrollView.h: include/Android.android.widget.FrameLayout.h
include/Android.android.widget.ScrollView.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.widget.ScrollView.h: include/Uno.IDisposable.h

include/Android.android.widget.SeekBar.h: include/Android.android.widget.AbsSeekBar.h
include/Android.android.widget.SeekBar.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.widget.SeekBar.h: include/Uno.IDisposable.h

include/Android.android.widget.SeekBarDLROnSeekBarChangeListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.widget.SeekBarDLROnSeekBarChangeListener.h: include/Uno.Object.h

include/Android.android.widget.Switch.h: include/Android.android.widget.CompoundButton.h
include/Android.android.widget.Switch.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.widget.Switch.h: include/Uno.IDisposable.h

include/Android.android.widget.TextView.h: include/Android.android.view.View.h
include/Android.android.widget.TextView.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.widget.TextView.h: include/Uno.IDisposable.h

include/Android.android.widget.TextViewDLROnEditorActionListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.android.widget.TextViewDLROnEditorActionListener.h: include/Uno.Object.h

include/Android.Base.AndroidBindingMacros.h: include/Uno.Type.h
include/Android.Base.AndroidBindingMacros.h: include/Uno.Exception.h
include/Android.Base.AndroidBindingMacros.h: include/Uno.h

include/Android.Base.JNI.h: include/Uno.Exception.h
include/Android.Base.JNI.h: include/Uno.h
include/Android.Base.JNI.h: include/Uno/JNIHelper.h

include/Android.Base.JNI.RefType.h: include/Uno.Int.h

include/Android.Base.Permissions.h: include/Uno.Object.h

include/Android.Base.PlatPermission.h: include/Uno.Object.h

include/Android.Base.Primitives.ConstCharPtr.h: include/Uno.Object.h

include/Android.Base.Primitives.JavaVMPtr.h: include/Uno.Object.h

include/Android.Base.Primitives.jfieldID.h: include/Uno.Object.h

include/Android.Base.Primitives.jmethodID.h: include/Uno.Object.h

include/Android.Base.Primitives.JNIEnvPtr.h: include/Uno.Object.h

include/Android.Base.Primitives.JNINativeMethod.h: include/Uno.Object.h

include/Android.Base.Primitives.jweak.h: include/Uno.Object.h

include/Android.Base.Primitives.ujboolean.h: include/Uno.Object.h

include/Android.Base.Primitives.ujbyte.h: include/Uno.Object.h

include/Android.Base.Primitives.ujchar.h: include/Uno.Object.h

include/Android.Base.Primitives.ujclass.h: include/Uno.Object.h

include/Android.Base.Primitives.ujdouble.h: include/Uno.Object.h

include/Android.Base.Primitives.ujfloat.h: include/Uno.Object.h

include/Android.Base.Primitives.ujint.h: include/Uno.Object.h

include/Android.Base.Primitives.ujlong.h: include/Uno.Object.h

include/Android.Base.Primitives.ujobject.h: include/Uno.Object.h

include/Android.Base.Primitives.ujshort.h: include/Uno.Object.h

include/Android.Base.Primitives.ujstring.h: include/Uno.Object.h

include/Android.Base.Primitives.ujvalue.h: include/Uno.Object.h

include/Android.Base.Primitives.uweakptr.h: include/Uno.Object.h

include/Android.Base.Types.Arrays.h: include/Android.Base.JNI.h
include/Android.Base.Types.Arrays.h: include/Uno.h

include/Android.Base.Types.Bridge.h: include/Android.Base.JNI.h
include/Android.Base.Types.Bridge.h: include/Uno.Exception.h
include/Android.Base.Types.Bridge.h: include/Uno.h

include/Android.Base.Types.ByteBuffer.h: include/Android.Base.JNI.h
include/Android.Base.Types.ByteBuffer.h: include/Uno.h

include/Android.Base.Types.String.h: include/Android.Base.JNI.h
include/Android.Base.Types.String.h: include/Uno.h

include/Android.Base.Versions.h: include/Uno.h

include/Android.Base.Wrappers.BindingSubclassAttribute.h: include/Uno.Attribute.h

include/Android.Base.Wrappers.IJWrapper.h: include/Uno.Object.h

include/Android.Base.Wrappers.JWrapper.h: include/Android.Base.AndroidBindingMacros.h
include/Android.Base.Wrappers.JWrapper.h: include/Android.Base.JNI.h
include/Android.Base.Wrappers.JWrapper.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Base.Wrappers.JWrapper.h: include/Java.Object.h
include/Android.Base.Wrappers.JWrapper.h: include/Uno.Exception.h
include/Android.Base.Wrappers.JWrapper.h: include/Uno.IDisposable.h

include/Android.Bootstrapper.h: include/Uno.h

include/Android.com.fuse.ExperimentalHttp.HttpRequest.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.com.fuse.ExperimentalHttp.HttpRequest.h: include/Android.Base.Wrappers.JWrapper.h
include/Android.com.fuse.ExperimentalHttp.HttpRequest.h: include/Uno.IDisposable.h

include/Android.com.fuse.Native.Camera.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.com.fuse.Native.Camera.h: include/Android.Base.Wrappers.JWrapper.h
include/Android.com.fuse.Native.Camera.h: include/Uno.IDisposable.h

include/Android.com.fuse.Native.CameraTask.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.com.fuse.Native.CameraTask.h: include/Android.Base.Wrappers.JWrapper.h
include/Android.com.fuse.Native.CameraTask.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_animation_Animator.h: include/Android.android.animation.Animator.h
include/Android.Fallbacks.Android_android_animation_Animator.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_animation_Animator.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_animation_TimeAnimatorDLRTimeListener.h: include/Android.android.animation.TimeAnimatorDLRTimeListener.h
include/Android.Fallbacks.Android_android_animation_TimeAnimatorDLRTimeListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_animation_TimeAnimatorDLRTimeListener.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_animation_TimeAnimatorDLRTimeListener.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_animation_TimeInterpolator.h: include/Android.android.animation.TimeInterpolator.h
include/Android.Fallbacks.Android_android_animation_TimeInterpolator.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_animation_TimeInterpolator.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_animation_TimeInterpolator.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_content_Context.h: include/Android.android.content.Context.h
include/Android.Fallbacks.Android_android_content_Context.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_content_Context.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_graphics_drawable_Drawable.h: include/Android.android.graphics.drawable.Drawable.h
include/Android.Fallbacks.Android_android_graphics_drawable_Drawable.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_graphics_drawable_Drawable.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_graphics_drawable_ShapeDrawab-1918c93c.h: include/Android.android.graphics.drawable.ShapeDrawableDLRShaderFactory.h
include/Android.Fallbacks.Android_android_graphics_drawable_ShapeDrawab-1918c93c.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_graphics_drawable_ShapeDrawab-1918c93c.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_graphics_drawable_shapes_Shape.h: include/Android.android.graphics.drawable.shapes.Shape.h
include/Android.Fallbacks.Android_android_graphics_drawable_shapes_Shape.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_graphics_drawable_shapes_Shape.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_graphics_SurfaceTextureDLROnF-45d51137.h: include/Android.android.graphics.SurfaceTextureDLROnFrameAvailableListener.h
include/Android.Fallbacks.Android_android_graphics_SurfaceTextureDLROnF-45d51137.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_graphics_SurfaceTextureDLROnF-45d51137.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_graphics_SurfaceTextureDLROnF-45d51137.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_location_LocationListener.h: include/Android.android.location.LocationListener.h
include/Android.Fallbacks.Android_android_location_LocationListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_location_LocationListener.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_location_LocationListener.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_media_AudioManagerDLROnAudioF-b4dcb473.h: include/Android.android.media.AudioManagerDLROnAudioFocusChangeListener.h
include/Android.Fallbacks.Android_android_media_AudioManagerDLROnAudioF-b4dcb473.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_media_AudioManagerDLROnAudioF-b4dcb473.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_media_AudioManagerDLROnAudioF-b4dcb473.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnBufferi-a11a3e5b.h: include/Android.android.media.MediaPlayerDLROnBufferingUpdateListener.h
include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnBufferi-a11a3e5b.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnBufferi-a11a3e5b.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnBufferi-a11a3e5b.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnComplet-64af01f3.h: include/Android.android.media.MediaPlayerDLROnCompletionListener.h
include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnComplet-64af01f3.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnComplet-64af01f3.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnComplet-64af01f3.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnErrorListener.h: include/Android.android.media.MediaPlayerDLROnErrorListener.h
include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnErrorListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnErrorListener.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnErrorListener.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnPreparedListener.h: include/Android.android.media.MediaPlayerDLROnPreparedListener.h
include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnPreparedListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnPreparedListener.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnPreparedListener.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnSeekCom-79a19ba7.h: include/Android.android.media.MediaPlayerDLROnSeekCompleteListener.h
include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnSeekCom-79a19ba7.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnSeekCom-79a19ba7.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnSeekCom-79a19ba7.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnVideoSi-169f5c77.h: include/Android.android.media.MediaPlayerDLROnVideoSizeChangedListener.h
include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnVideoSi-169f5c77.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnVideoSi-169f5c77.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_media_MediaPlayerDLROnVideoSi-169f5c77.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_net_Uri.h: include/Android.android.net.Uri.h
include/Android.Fallbacks.Android_android_net_Uri.h: include/Android.android.os.Parcelable.h
include/Android.Fallbacks.Android_android_net_Uri.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_net_Uri.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_os_IBinder.h: include/Android.android.os.IBinder.h
include/Android.Fallbacks.Android_android_os_IBinder.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_os_IBinder.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_os_IBinder.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_os_IBinderDLRDeathRecipient.h: include/Android.android.os.IBinderDLRDeathRecipient.h
include/Android.Fallbacks.Android_android_os_IBinderDLRDeathRecipient.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_os_IBinderDLRDeathRecipient.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_os_IBinderDLRDeathRecipient.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_os_IInterface.h: include/Android.android.os.IInterface.h
include/Android.Fallbacks.Android_android_os_IInterface.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_os_IInterface.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_os_IInterface.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_os_Parcelable.h: include/Android.android.os.Parcelable.h
include/Android.Fallbacks.Android_android_os_Parcelable.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_os_Parcelable.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_os_Parcelable.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_os_Vibrator.h: include/Android.android.os.Vibrator.h
include/Android.Fallbacks.Android_android_os_Vibrator.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_os_Vibrator.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_text_Editable.h: include/Android.android.text.Editable.h
include/Android.Fallbacks.Android_android_text_Editable.h: include/Android.android.text.GetChars.h
include/Android.Fallbacks.Android_android_text_Editable.h: include/Android.android.text.Spannable.h
include/Android.Fallbacks.Android_android_text_Editable.h: include/Android.android.text.Spanned.h
include/Android.Fallbacks.Android_android_text_Editable.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_text_Editable.h: include/Android.java.lang.CharSequence.h
include/Android.Fallbacks.Android_android_text_Editable.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_text_Editable.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_text_GetChars.h: include/Android.android.text.GetChars.h
include/Android.Fallbacks.Android_android_text_GetChars.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_text_GetChars.h: include/Android.java.lang.CharSequence.h
include/Android.Fallbacks.Android_android_text_GetChars.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_text_GetChars.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_text_InputFilter.h: include/Android.android.text.InputFilter.h
include/Android.Fallbacks.Android_android_text_InputFilter.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_text_InputFilter.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_text_InputFilter.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_text_Layout.h: include/Android.android.text.Layout.h
include/Android.Fallbacks.Android_android_text_Layout.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_text_Layout.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_text_Spannable.h: include/Android.android.text.Spannable.h
include/Android.Fallbacks.Android_android_text_Spannable.h: include/Android.android.text.Spanned.h
include/Android.Fallbacks.Android_android_text_Spannable.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_text_Spannable.h: include/Android.java.lang.CharSequence.h
include/Android.Fallbacks.Android_android_text_Spannable.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_text_Spannable.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_text_Spanned.h: include/Android.android.text.Spanned.h
include/Android.Fallbacks.Android_android_text_Spanned.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_text_Spanned.h: include/Android.java.lang.CharSequence.h
include/Android.Fallbacks.Android_android_text_Spanned.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_text_Spanned.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_text_TextWatcher.h: include/Android.android.text.TextWatcher.h
include/Android.Fallbacks.Android_android_text_TextWatcher.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_text_TextWatcher.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_text_TextWatcher.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_util_AttributeSet.h: include/Android.android.util.AttributeSet.h
include/Android.Fallbacks.Android_android_util_AttributeSet.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_util_AttributeSet.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_util_AttributeSet.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_util_Property.h: include/Android.android.util.Property.h
include/Android.Fallbacks.Android_android_util_Property.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_util_Property.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_accessibility_Accessibil-d7e100f2.h: include/Android.android.view.accessibility.AccessibilityNodeProvider.h
include/Android.Fallbacks.Android_android_view_accessibility_Accessibil-d7e100f2.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_accessibility_Accessibil-d7e100f2.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_ActionMode.h: include/Android.android.view.ActionMode.h
include/Android.Fallbacks.Android_android_view_ActionMode.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_ActionMode.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_ActionModeDLRCallback.h: include/Android.android.view.ActionModeDLRCallback.h
include/Android.Fallbacks.Android_android_view_ActionModeDLRCallback.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_ActionModeDLRCallback.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_ActionModeDLRCallback.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_ActionProvider.h: include/Android.android.view.ActionProvider.h
include/Android.Fallbacks.Android_android_view_ActionProvider.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_ActionProvider.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_animation_Animation.h: include/Android.android.view.animation.Animation.h
include/Android.Fallbacks.Android_android_view_animation_Animation.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_animation_Animation.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_animation_AnimationDLRAn-50875199.h: include/Android.android.view.animation.AnimationDLRAnimationListener.h
include/Android.Fallbacks.Android_android_view_animation_AnimationDLRAn-50875199.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_animation_AnimationDLRAn-50875199.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_animation_AnimationDLRAn-50875199.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_animation_Interpolator.h: include/Android.android.animation.TimeInterpolator.h
include/Android.Fallbacks.Android_android_view_animation_Interpolator.h: include/Android.android.view.animation.Interpolator.h
include/Android.Fallbacks.Android_android_view_animation_Interpolator.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_animation_Interpolator.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_animation_Interpolator.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_ChoreographerDLRFrameCallback.h: include/Android.android.view.ChoreographerDLRFrameCallback.h
include/Android.Fallbacks.Android_android_view_ChoreographerDLRFrameCallback.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_ChoreographerDLRFrameCallback.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_ChoreographerDLRFrameCallback.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_ContextMenu.h: include/Android.android.view.ContextMenu.h
include/Android.Fallbacks.Android_android_view_ContextMenu.h: include/Android.android.view.Menu.h
include/Android.Fallbacks.Android_android_view_ContextMenu.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_ContextMenu.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_ContextMenu.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_ContextMenuDLRContextMenuInfo.h: include/Android.android.view.ContextMenuDLRContextMenuInfo.h
include/Android.Fallbacks.Android_android_view_ContextMenuDLRContextMenuInfo.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_ContextMenuDLRContextMenuInfo.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_ContextMenuDLRContextMenuInfo.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_InputEvent.h: include/Android.android.os.Parcelable.h
include/Android.Fallbacks.Android_android_view_InputEvent.h: include/Android.android.view.InputEvent.h
include/Android.Fallbacks.Android_android_view_InputEvent.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_InputEvent.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_inputmethod_InputConnection.h: include/Android.android.view.inputmethod.InputConnection.h
include/Android.Fallbacks.Android_android_view_inputmethod_InputConnection.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_inputmethod_InputConnection.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_inputmethod_InputConnection.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_Menu.h: include/Android.android.view.Menu.h
include/Android.Fallbacks.Android_android_view_Menu.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_Menu.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_Menu.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_MenuItem.h: include/Android.android.view.MenuItem.h
include/Android.Fallbacks.Android_android_view_MenuItem.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_MenuItem.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_MenuItem.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_MenuItemDLROnActionExpandListener.h: include/Android.android.view.MenuItemDLROnActionExpandListener.h
include/Android.Fallbacks.Android_android_view_MenuItemDLROnActionExpandListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_MenuItemDLROnActionExpandListener.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_MenuItemDLROnActionExpandListener.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_MenuItemDLROnMenuItemCli-b952820b.h: include/Android.android.view.MenuItemDLROnMenuItemClickListener.h
include/Android.Fallbacks.Android_android_view_MenuItemDLROnMenuItemCli-b952820b.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_MenuItemDLROnMenuItemCli-b952820b.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_MenuItemDLROnMenuItemCli-b952820b.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_SubMenu.h: include/Android.android.view.Menu.h
include/Android.Fallbacks.Android_android_view_SubMenu.h: include/Android.android.view.SubMenu.h
include/Android.Fallbacks.Android_android_view_SubMenu.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_SubMenu.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_SubMenu.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_SurfaceHolder.h: include/Android.android.view.SurfaceHolder.h
include/Android.Fallbacks.Android_android_view_SurfaceHolder.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_SurfaceHolder.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_SurfaceHolder.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_SurfaceHolderDLRCallback.h: include/Android.android.view.SurfaceHolderDLRCallback.h
include/Android.Fallbacks.Android_android_view_SurfaceHolderDLRCallback.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_SurfaceHolderDLRCallback.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_SurfaceHolderDLRCallback.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_SurfaceHolderDLRCallback2.h: include/Android.android.view.SurfaceHolderDLRCallback.h
include/Android.Fallbacks.Android_android_view_SurfaceHolderDLRCallback2.h: include/Android.android.view.SurfaceHolderDLRCallback2.h
include/Android.Fallbacks.Android_android_view_SurfaceHolderDLRCallback2.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_SurfaceHolderDLRCallback2.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_SurfaceHolderDLRCallback2.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_TextureViewDLRSurfaceTex-57881719.h: include/Android.android.view.TextureViewDLRSurfaceTextureListener.h
include/Android.Fallbacks.Android_android_view_TextureViewDLRSurfaceTex-57881719.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_TextureViewDLRSurfaceTex-57881719.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_TextureViewDLRSurfaceTex-57881719.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_ViewDLROnAttachStateChan-cad4f1be.h: include/Android.android.view.ViewDLROnAttachStateChangeListener.h
include/Android.Fallbacks.Android_android_view_ViewDLROnAttachStateChan-cad4f1be.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_ViewDLROnAttachStateChan-cad4f1be.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_ViewDLROnAttachStateChan-cad4f1be.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_ViewDLROnClickListener.h: include/Android.android.view.ViewDLROnClickListener.h
include/Android.Fallbacks.Android_android_view_ViewDLROnClickListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_ViewDLROnClickListener.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_ViewDLROnClickListener.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_ViewDLROnCreateContextMe-448f6a4b.h: include/Android.android.view.ViewDLROnCreateContextMenuListener.h
include/Android.Fallbacks.Android_android_view_ViewDLROnCreateContextMe-448f6a4b.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_ViewDLROnCreateContextMe-448f6a4b.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_ViewDLROnCreateContextMe-448f6a4b.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_ViewDLROnDragListener.h: include/Android.android.view.ViewDLROnDragListener.h
include/Android.Fallbacks.Android_android_view_ViewDLROnDragListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_ViewDLROnDragListener.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_ViewDLROnDragListener.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_ViewDLROnFocusChangeListener.h: include/Android.android.view.ViewDLROnFocusChangeListener.h
include/Android.Fallbacks.Android_android_view_ViewDLROnFocusChangeListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_ViewDLROnFocusChangeListener.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_ViewDLROnFocusChangeListener.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_ViewDLROnGenericMotionListener.h: include/Android.android.view.ViewDLROnGenericMotionListener.h
include/Android.Fallbacks.Android_android_view_ViewDLROnGenericMotionListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_ViewDLROnGenericMotionListener.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_ViewDLROnGenericMotionListener.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_ViewDLROnHoverListener.h: include/Android.android.view.ViewDLROnHoverListener.h
include/Android.Fallbacks.Android_android_view_ViewDLROnHoverListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_ViewDLROnHoverListener.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_ViewDLROnHoverListener.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_ViewDLROnKeyListener.h: include/Android.android.view.ViewDLROnKeyListener.h
include/Android.Fallbacks.Android_android_view_ViewDLROnKeyListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_ViewDLROnKeyListener.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_ViewDLROnKeyListener.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_ViewDLROnLayoutChangeListener.h: include/Android.android.view.ViewDLROnLayoutChangeListener.h
include/Android.Fallbacks.Android_android_view_ViewDLROnLayoutChangeListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_ViewDLROnLayoutChangeListener.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_ViewDLROnLayoutChangeListener.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_ViewDLROnLongClickListener.h: include/Android.android.view.ViewDLROnLongClickListener.h
include/Android.Fallbacks.Android_android_view_ViewDLROnLongClickListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_ViewDLROnLongClickListener.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_ViewDLROnLongClickListener.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_ViewDLROnSystemUiVisibil-1e6ae627.h: include/Android.android.view.ViewDLROnSystemUiVisibilityChangeListener.h
include/Android.Fallbacks.Android_android_view_ViewDLROnSystemUiVisibil-1e6ae627.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_ViewDLROnSystemUiVisibil-1e6ae627.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_ViewDLROnSystemUiVisibil-1e6ae627.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_ViewDLROnTouchListener.h: include/Android.android.view.ViewDLROnTouchListener.h
include/Android.Fallbacks.Android_android_view_ViewDLROnTouchListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_ViewDLROnTouchListener.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_ViewDLROnTouchListener.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_ViewGroup.h: include/Android.android.view.ViewGroup.h
include/Android.Fallbacks.Android_android_view_ViewGroup.h: include/Android.android.view.ViewParent.h
include/Android.Fallbacks.Android_android_view_ViewGroup.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_ViewGroup.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_ViewGroupDLROnHierarchyC-cdf1f397.h: include/Android.android.view.ViewGroupDLROnHierarchyChangeListener.h
include/Android.Fallbacks.Android_android_view_ViewGroupDLROnHierarchyC-cdf1f397.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_ViewGroupDLROnHierarchyC-cdf1f397.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_ViewGroupDLROnHierarchyC-cdf1f397.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_view_ViewParent.h: include/Android.android.view.ViewParent.h
include/Android.Fallbacks.Android_android_view_ViewParent.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_view_ViewParent.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_view_ViewParent.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_webkit_GeolocationPermissions-b666dc8a.h: include/Android.android.webkit.GeolocationPermissionsDLRCallback.h
include/Android.Fallbacks.Android_android_webkit_GeolocationPermissions-b666dc8a.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_webkit_GeolocationPermissions-b666dc8a.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_webkit_GeolocationPermissions-b666dc8a.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_webkit_ValueCallback.h: include/Android.android.webkit.ValueCallback.h
include/Android.Fallbacks.Android_android_webkit_ValueCallback.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_webkit_ValueCallback.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_webkit_ValueCallback.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_webkit_WebChromeClientDLRCust-ce52e805.h: include/Android.android.webkit.WebChromeClientDLRCustomViewCallback.h
include/Android.Fallbacks.Android_android_webkit_WebChromeClientDLRCust-ce52e805.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_webkit_WebChromeClientDLRCust-ce52e805.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_webkit_WebChromeClientDLRCust-ce52e805.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_webkit_WebSettings.h: include/Android.android.webkit.WebSettings.h
include/Android.Fallbacks.Android_android_webkit_WebSettings.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_webkit_WebSettings.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_webkit_WebStorageDLRQuotaUpdater.h: include/Android.android.webkit.WebStorageDLRQuotaUpdater.h
include/Android.Fallbacks.Android_android_webkit_WebStorageDLRQuotaUpdater.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_webkit_WebStorageDLRQuotaUpdater.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_webkit_WebStorageDLRQuotaUpdater.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_widget_AbsSeekBar.h: include/Android.android.widget.AbsSeekBar.h
include/Android.Fallbacks.Android_android_widget_AbsSeekBar.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_widget_AbsSeekBar.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_widget_CompoundButton.h: include/Android.android.widget.CompoundButton.h
include/Android.Fallbacks.Android_android_widget_CompoundButton.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_widget_CompoundButton.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_widget_CompoundButtonDLROnChe-91091c48.h: include/Android.android.widget.CompoundButtonDLROnCheckedChangeListener.h
include/Android.Fallbacks.Android_android_widget_CompoundButtonDLROnChe-91091c48.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_widget_CompoundButtonDLROnChe-91091c48.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_widget_CompoundButtonDLROnChe-91091c48.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_widget_SeekBarDLROnSeekBarCha-e452c5ca.h: include/Android.android.widget.SeekBarDLROnSeekBarChangeListener.h
include/Android.Fallbacks.Android_android_widget_SeekBarDLROnSeekBarCha-e452c5ca.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_widget_SeekBarDLROnSeekBarCha-e452c5ca.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_widget_SeekBarDLROnSeekBarCha-e452c5ca.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_android_widget_TextViewDLROnEditorAct-1b5558e6.h: include/Android.android.widget.TextViewDLROnEditorActionListener.h
include/Android.Fallbacks.Android_android_widget_TextViewDLROnEditorAct-1b5558e6.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_android_widget_TextViewDLROnEditorAct-1b5558e6.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_android_widget_TextViewDLROnEditorAct-1b5558e6.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_java_io_InputStream.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_java_io_InputStream.h: include/Android.java.io.InputStream.h
include/Android.Fallbacks.Android_java_io_InputStream.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_java_lang_CharSequence.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_java_lang_CharSequence.h: include/Android.java.lang.CharSequence.h
include/Android.Fallbacks.Android_java_lang_CharSequence.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_java_lang_CharSequence.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_java_lang_Iterable.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_java_lang_Iterable.h: include/Android.java.lang.Iterable.h
include/Android.Fallbacks.Android_java_lang_Iterable.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_java_lang_Iterable.h: include/Uno.Collections.IEnumerable-1.h
include/Android.Fallbacks.Android_java_lang_Iterable.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_java_lang_Runnable.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_java_lang_Runnable.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_java_lang_Runnable.h: include/Android.java.lang.Runnable.h
include/Android.Fallbacks.Android_java_lang_Runnable.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_java_util_AbstractCollection.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_java_util_AbstractCollection.h: include/Android.java.lang.Iterable.h
include/Android.Fallbacks.Android_java_util_AbstractCollection.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_java_util_AbstractCollection.h: include/Android.java.util.AbstractCollection.h
include/Android.Fallbacks.Android_java_util_AbstractCollection.h: include/Android.java.util.Collection.h
include/Android.Fallbacks.Android_java_util_AbstractCollection.h: include/Uno.Collections.IEnumerable-1.h
include/Android.Fallbacks.Android_java_util_AbstractCollection.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_java_util_AbstractList.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_java_util_AbstractList.h: include/Android.java.lang.Iterable.h
include/Android.Fallbacks.Android_java_util_AbstractList.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_java_util_AbstractList.h: include/Android.java.util.AbstractList.h
include/Android.Fallbacks.Android_java_util_AbstractList.h: include/Android.java.util.Collection.h
include/Android.Fallbacks.Android_java_util_AbstractList.h: include/Android.java.util.List.h
include/Android.Fallbacks.Android_java_util_AbstractList.h: include/Uno.Collections.IEnumerable-1.h
include/Android.Fallbacks.Android_java_util_AbstractList.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_java_util_Collection.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_java_util_Collection.h: include/Android.java.lang.Iterable.h
include/Android.Fallbacks.Android_java_util_Collection.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_java_util_Collection.h: include/Android.java.util.Collection.h
include/Android.Fallbacks.Android_java_util_Collection.h: include/Uno.Collections.IEnumerable-1.h
include/Android.Fallbacks.Android_java_util_Collection.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_java_util_Iterator.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_java_util_Iterator.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_java_util_Iterator.h: include/Android.java.util.Iterator.h
include/Android.Fallbacks.Android_java_util_Iterator.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_java_util_List.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_java_util_List.h: include/Android.java.lang.Iterable.h
include/Android.Fallbacks.Android_java_util_List.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_java_util_List.h: include/Android.java.util.Collection.h
include/Android.Fallbacks.Android_java_util_List.h: include/Android.java.util.List.h
include/Android.Fallbacks.Android_java_util_List.h: include/Uno.Collections.IEnumerable-1.h
include/Android.Fallbacks.Android_java_util_List.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_java_util_ListIterator.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_java_util_ListIterator.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_java_util_ListIterator.h: include/Android.java.util.Iterator.h
include/Android.Fallbacks.Android_java_util_ListIterator.h: include/Android.java.util.ListIterator.h
include/Android.Fallbacks.Android_java_util_ListIterator.h: include/Uno.IDisposable.h

include/Android.Fallbacks.Android_java_util_Observer.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Fallbacks.Android_java_util_Observer.h: include/Android.java.lang.Object.h
include/Android.Fallbacks.Android_java_util_Observer.h: include/Android.java.util.Observer.h
include/Android.Fallbacks.Android_java_util_Observer.h: include/Uno.IDisposable.h

include/Android.java.io.FileDescriptor.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.java.io.FileDescriptor.h: include/Android.java.lang.Object.h
include/Android.java.io.FileDescriptor.h: include/Uno.IDisposable.h

include/Android.java.io.InputStream.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.java.io.InputStream.h: include/Android.java.lang.Object.h
include/Android.java.io.InputStream.h: include/Uno.IDisposable.h

include/Android.java.lang.CharSequence.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.java.lang.CharSequence.h: include/Uno.Object.h

include/Android.java.lang.Class.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.java.lang.Class.h: include/Android.java.lang.Object.h
include/Android.java.lang.Class.h: include/Uno.IDisposable.h

include/Android.java.lang.Iterable.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.java.lang.Iterable.h: include/Android.java.lang.Object.h
include/Android.java.lang.Iterable.h: include/Uno.Collections.IEnumerable-1.h
include/Android.java.lang.Iterable.h: include/Uno.Object.h

include/Android.java.lang.Object.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.java.lang.Object.h: include/Android.Base.Wrappers.JWrapper.h
include/Android.java.lang.Object.h: include/Uno.IDisposable.h

include/Android.java.lang.reflect.AccessibleObject.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.java.lang.reflect.AccessibleObject.h: include/Android.java.lang.Object.h
include/Android.java.lang.reflect.AccessibleObject.h: include/Uno.IDisposable.h

include/Android.java.lang.reflect.Field.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.java.lang.reflect.Field.h: include/Android.java.lang.reflect.AccessibleObject.h
include/Android.java.lang.reflect.Field.h: include/Uno.IDisposable.h

include/Android.java.lang.Runnable.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.java.lang.Runnable.h: include/Uno.Object.h

include/Android.java.lang.String.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.java.lang.String.h: include/Android.java.lang.CharSequence.h
include/Android.java.lang.String.h: include/Android.java.lang.Object.h
include/Android.java.lang.String.h: include/Uno.IDisposable.h

include/Android.java.lang.System.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.java.lang.System.h: include/Android.java.lang.Object.h
include/Android.java.lang.System.h: include/Uno.IDisposable.h

include/Android.java.lang.Thread.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.java.lang.Thread.h: include/Android.java.lang.Object.h
include/Android.java.lang.Thread.h: include/Android.java.lang.Runnable.h
include/Android.java.lang.Thread.h: include/Uno.IDisposable.h

include/Android.java.net.URL.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.java.net.URL.h: include/Android.java.lang.Object.h
include/Android.java.net.URL.h: include/Uno.IDisposable.h

include/Android.java.util.AbstractCollection.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.java.util.AbstractCollection.h: include/Android.java.lang.Iterable.h
include/Android.java.util.AbstractCollection.h: include/Android.java.lang.Object.h
include/Android.java.util.AbstractCollection.h: include/Android.java.util.Collection.h
include/Android.java.util.AbstractCollection.h: include/Uno.Collections.IEnumerable-1.h
include/Android.java.util.AbstractCollection.h: include/Uno.IDisposable.h

include/Android.java.util.AbstractList.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.java.util.AbstractList.h: include/Android.java.lang.Iterable.h
include/Android.java.util.AbstractList.h: include/Android.java.lang.Object.h
include/Android.java.util.AbstractList.h: include/Android.java.util.AbstractCollection.h
include/Android.java.util.AbstractList.h: include/Android.java.util.Collection.h
include/Android.java.util.AbstractList.h: include/Android.java.util.List.h
include/Android.java.util.AbstractList.h: include/Uno.Collections.IEnumerable-1.h
include/Android.java.util.AbstractList.h: include/Uno.IDisposable.h

include/Android.java.util.ArrayList.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.java.util.ArrayList.h: include/Android.java.lang.Iterable.h
include/Android.java.util.ArrayList.h: include/Android.java.lang.Object.h
include/Android.java.util.ArrayList.h: include/Android.java.util.AbstractList.h
include/Android.java.util.ArrayList.h: include/Android.java.util.Collection.h
include/Android.java.util.ArrayList.h: include/Android.java.util.List.h
include/Android.java.util.ArrayList.h: include/Uno.Collections.IEnumerable-1.h
include/Android.java.util.ArrayList.h: include/Uno.IDisposable.h

include/Android.java.util.Collection.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.java.util.Collection.h: include/Android.java.lang.Iterable.h
include/Android.java.util.Collection.h: include/Android.java.lang.Object.h
include/Android.java.util.Collection.h: include/Uno.Collections.IEnumerable-1.h
include/Android.java.util.Collection.h: include/Uno.Object.h

include/Android.java.util.Iterator.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.java.util.Iterator.h: include/Uno.Object.h

include/Android.java.util.List.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.java.util.List.h: include/Android.java.lang.Iterable.h
include/Android.java.util.List.h: include/Android.java.lang.Object.h
include/Android.java.util.List.h: include/Android.java.util.Collection.h
include/Android.java.util.List.h: include/Uno.Collections.IEnumerable-1.h
include/Android.java.util.List.h: include/Uno.Object.h

include/Android.java.util.ListIterator.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.java.util.ListIterator.h: include/Android.java.util.Iterator.h
include/Android.java.util.ListIterator.h: include/Uno.Object.h

include/Android.java.util.Observable.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.java.util.Observable.h: include/Android.java.lang.Object.h
include/Android.java.util.Observable.h: include/Uno.IDisposable.h

include/Android.java.util.Observer.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.java.util.Observer.h: include/Uno.Object.h

include/Android.Runtime.BooleanArray.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Runtime.BooleanArray.h: include/Android.java.lang.Object.h
include/Android.Runtime.BooleanArray.h: include/Uno.Bool.h
include/Android.Runtime.BooleanArray.h: include/Uno.Collections.IEnumerable-1.h
include/Android.Runtime.BooleanArray.h: include/Uno.IDisposable.h

include/Android.Runtime.ByteArray.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Runtime.ByteArray.h: include/Android.java.lang.Object.h
include/Android.Runtime.ByteArray.h: include/Uno.Collections.IEnumerable-1.h
include/Android.Runtime.ByteArray.h: include/Uno.IDisposable.h
include/Android.Runtime.ByteArray.h: include/Uno.SByte.h

include/Android.Runtime.CharArray.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Runtime.CharArray.h: include/Android.java.lang.Object.h
include/Android.Runtime.CharArray.h: include/Uno.Char.h
include/Android.Runtime.CharArray.h: include/Uno.Collections.IEnumerable-1.h
include/Android.Runtime.CharArray.h: include/Uno.IDisposable.h

include/Android.Runtime.DoubleArray.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Runtime.DoubleArray.h: include/Android.java.lang.Object.h
include/Android.Runtime.DoubleArray.h: include/Uno.Collections.IEnumerable-1.h
include/Android.Runtime.DoubleArray.h: include/Uno.Double.h
include/Android.Runtime.DoubleArray.h: include/Uno.IDisposable.h

include/Android.Runtime.FloatArray.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Runtime.FloatArray.h: include/Android.java.lang.Object.h
include/Android.Runtime.FloatArray.h: include/Uno.Collections.IEnumerable-1.h
include/Android.Runtime.FloatArray.h: include/Uno.Float.h
include/Android.Runtime.FloatArray.h: include/Uno.IDisposable.h

include/Android.Runtime.IntArray.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Runtime.IntArray.h: include/Android.java.lang.Object.h
include/Android.Runtime.IntArray.h: include/Uno.Collections.IEnumerable-1.h
include/Android.Runtime.IntArray.h: include/Uno.IDisposable.h
include/Android.Runtime.IntArray.h: include/Uno.Int.h

include/Android.Runtime.JAEnumerator-1.h: include/Uno.Collections.IEnumerator.h
include/Android.Runtime.JAEnumerator-1.h: include/Uno.Collections.IEnumerator-1.h
include/Android.Runtime.JAEnumerator-1.h: include/Uno.IDisposable.h
include/Android.Runtime.JAEnumerator-1.h: include/Uno.Object.h

include/Android.Runtime.JavaGetter-1.h: include/Uno.Delegate.h

include/Android.Runtime.JEnumerator.h: include/Android.java.lang.Object.h
include/Android.Runtime.JEnumerator.h: include/Uno.Collections.IEnumerator.h
include/Android.Runtime.JEnumerator.h: include/Uno.Collections.IEnumerator-1.h
include/Android.Runtime.JEnumerator.h: include/Uno.IDisposable.h
include/Android.Runtime.JEnumerator.h: include/Uno.Object.h

include/Android.Runtime.JOAEnumerator-1.h: include/Uno.Collections.IEnumerator.h
include/Android.Runtime.JOAEnumerator-1.h: include/Uno.Collections.IEnumerator-1.h
include/Android.Runtime.JOAEnumerator-1.h: include/Uno.IDisposable.h
include/Android.Runtime.JOAEnumerator-1.h: include/Uno.Object.h

include/Android.Runtime.LongArray.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Runtime.LongArray.h: include/Android.java.lang.Object.h
include/Android.Runtime.LongArray.h: include/Uno.Collections.IEnumerable-1.h
include/Android.Runtime.LongArray.h: include/Uno.IDisposable.h
include/Android.Runtime.LongArray.h: include/Uno.Long.h

include/Android.Runtime.NativeActivityHelper.h: include/Uno.h

include/Android.Runtime.ObjectArray-1.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Runtime.ObjectArray-1.h: include/Android.java.lang.Object.h
include/Android.Runtime.ObjectArray-1.h: include/Uno.Collections.IEnumerable-1.h
include/Android.Runtime.ObjectArray-1.h: include/Uno.IDisposable.h
include/Android.Runtime.ObjectArray-1.h: include/Uno.Object.h

include/Android.Runtime.ObjectArrayAUX.h: include/Uno.h

include/Android.Runtime.RunnableAction.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Runtime.RunnableAction.h: include/Android.java.lang.Object.h
include/Android.Runtime.RunnableAction.h: include/Android.java.lang.Runnable.h
include/Android.Runtime.RunnableAction.h: include/Uno.IDisposable.h

include/Android.Runtime.ShortArray.h: include/Android.Base.Wrappers.IJWrapper.h
include/Android.Runtime.ShortArray.h: include/Android.java.lang.Object.h
include/Android.Runtime.ShortArray.h: include/Uno.Collections.IEnumerable-1.h
include/Android.Runtime.ShortArray.h: include/Uno.IDisposable.h
include/Android.Runtime.ShortArray.h: include/Uno.Short.h

include/Android.Runtime.UnoHelper.h: include/Uno.h

include/android_semaphore.h: include/Uno/Uno.h



include/duktape_helpers.h: include/Uno/Uno.h
include/duktape_helpers.h: include/duktape.h
include/duktape_helpers.h: include/Uno.IntPtr.h

include/Experimental.Cache.CacheLoaded.h: include/Uno.Delegate.h

include/Experimental.Cache.ICache.h: include/Uno.Object.h

include/Experimental.Cache.ICacheReader.h: include/Uno.Object.h

include/Experimental.Cache.ICacheWriter.h: include/Uno.Object.h

include/Experimental.Cache.ProxyStream.h: include/Uno.IDisposable.h
include/Experimental.Cache.ProxyStream.h: include/Uno.IO.Stream.h

include/Experimental.Http.BinaryLoader.h: include/Experimental.Http.Loader.h

include/Experimental.Http.HttpLoader.h: include/Uno.h

include/Experimental.Http.HttpResponseHeader.h: include/Uno.Object.h

include/Experimental.Http.Internal.DateUtil.h: include/Uno.h

include/Experimental.Http.Loader.h: include/Uno.Object.h

include/Experimental.Http.LoaderConst.h: include/Uno.h

include/Experimental.Http.TextLoader.h: include/Experimental.Http.Loader.h

include/Experimental.Physics.AdapterMultiplier-1.h: include/Experimental.Physics.DestinationSimulation-1.h
include/Experimental.Physics.AdapterMultiplier-1.h: include/Experimental.Physics.MotionSimulation-1.h
include/Experimental.Physics.AdapterMultiplier-1.h: include/Experimental.Physics.Simulation.h
include/Experimental.Physics.AdapterMultiplier-1.h: include/Uno.Object.h

include/Experimental.Physics.AngularAdapter-1.h: include/Experimental.Physics.DestinationSimulation-1.h
include/Experimental.Physics.AngularAdapter-1.h: include/Experimental.Physics.MotionSimulation-1.h
include/Experimental.Physics.AngularAdapter-1.h: include/Experimental.Physics.Simulation.h
include/Experimental.Physics.AngularAdapter-1.h: include/Uno.Object.h

include/Experimental.Physics.BasicBoundedRegion2D.h: include/Experimental.Physics.BoundedRegion2D.h
include/Experimental.Physics.BasicBoundedRegion2D.h: include/Experimental.Physics.MotionSimulation-1.h
include/Experimental.Physics.BasicBoundedRegion2D.h: include/Experimental.Physics.Simulation.h
include/Experimental.Physics.BasicBoundedRegion2D.h: include/Uno.Float2.h
include/Experimental.Physics.BasicBoundedRegion2D.h: include/Uno.Object.h

include/Experimental.Physics.BasicBoundedRegion2D.MoveMode.h: include/Uno.Int.h

include/Experimental.Physics.BoundedRegion2D.h: include/Experimental.Physics.MotionSimulation-1.h
include/Experimental.Physics.BoundedRegion2D.h: include/Experimental.Physics.Simulation.h
include/Experimental.Physics.BoundedRegion2D.h: include/Uno.Float2.h
include/Experimental.Physics.BoundedRegion2D.h: include/Uno.Object.h

include/Experimental.Physics.DestinationSimulation-1.h: include/Experimental.Physics.MotionSimulation-1.h
include/Experimental.Physics.DestinationSimulation-1.h: include/Experimental.Physics.Simulation.h
include/Experimental.Physics.DestinationSimulation-1.h: include/Uno.Object.h

include/Experimental.Physics.DestinationSimulationFactory-1.h: include/Uno.h

include/Experimental.Physics.DestinationSimulationType.h: include/Uno.Int.h

include/Experimental.Physics.ElasticForce-1.h: include/Experimental.Physics.DestinationSimulation-1.h
include/Experimental.Physics.ElasticForce-1.h: include/Experimental.Physics.MotionSimulation-1.h
include/Experimental.Physics.ElasticForce-1.h: include/Experimental.Physics.Simulation.h
include/Experimental.Physics.ElasticForce-1.h: include/Uno.Object.h

include/Experimental.Physics.Friction-1.h: include/Experimental.Physics.MotionSimulation-1.h
include/Experimental.Physics.Friction-1.h: include/Experimental.Physics.Simulation.h
include/Experimental.Physics.Friction-1.h: include/Uno.Object.h

include/Experimental.Physics.MotionSimulation-1.h: include/Experimental.Physics.Simulation.h
include/Experimental.Physics.MotionSimulation-1.h: include/Uno.Object.h

include/Experimental.Physics.PointerVelocity-1.h: include/Uno.Object.h

include/Experimental.Physics.Simulation.h: include/Uno.Object.h

include/Experimental.Physics.SmoothSnap-1.h: include/Experimental.Physics.DestinationSimulation-1.h
include/Experimental.Physics.SmoothSnap-1.h: include/Experimental.Physics.MotionSimulation-1.h
include/Experimental.Physics.SmoothSnap-1.h: include/Experimental.Physics.Simulation.h
include/Experimental.Physics.SmoothSnap-1.h: include/Uno.Object.h

include/Experimental.TextureLoader.Callback.h: include/Uno.Object.h

include/Experimental.TextureLoader.InvalidContentTypeException.h: include/Uno.Exception.h

include/Experimental.TextureLoader.TextureLoader.h: include/Uno.h

include/Experimental.TextureLoader.TextureLoaderImpl.h: include/Uno.h

include/Fuse.Android.AndroidExtensions.h: include/Uno.h

include/Fuse.Android.BindingView.h: include/Uno.h
include/Fuse.Android.BindingView.h: include/Uno/Platform2.h

include/Fuse.Android.Blitter.h: include/Uno.Float2.h
include/Fuse.Android.Blitter.h: include/Uno.Object.h
include/Fuse.Android.Blitter.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Android.Controls.AndroidExtensions.h: include/Uno.h

include/Fuse.Android.Controls.AndroidSeekBar.h: include/Android.android.widget.SeekBar.h
include/Fuse.Android.Controls.AndroidSeekBar.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.Android.Controls.AndroidSeekBar.h: include/Uno.IDisposable.h

include/Fuse.Android.Controls.BitmapFactory.h: include/Uno.h

include/Fuse.Android.Controls.Button.h: include/Fuse.Android.Controls.Control-1.h
include/Fuse.Android.Controls.Button.h: include/Fuse.Controls.Button.h
include/Fuse.Android.Controls.Button.h: include/Fuse.IDataContext.h
include/Fuse.Android.Controls.Button.h: include/Fuse.Scripting.INameScope.h

include/Fuse.Android.Controls.CheckBox.h: include/Fuse.Android.Controls.CompoundButton.h
include/Fuse.Android.Controls.CheckBox.h: include/Fuse.IDataContext.h
include/Fuse.Android.Controls.CheckBox.h: include/Fuse.Scripting.INameScope.h

include/Fuse.Android.Controls.Circle.h: include/Fuse.Android.Controls.Shape-1.h
include/Fuse.Android.Controls.Circle.h: include/Fuse.Controls.Circle.h
include/Fuse.Android.Controls.Circle.h: include/Fuse.IDataContext.h
include/Fuse.Android.Controls.Circle.h: include/Fuse.Scripting.INameScope.h

include/Fuse.Android.Controls.CompoundButton.h: include/Fuse.Android.Controls.Control-1.h
include/Fuse.Android.Controls.CompoundButton.h: include/Fuse.Controls.ToggleControl.h
include/Fuse.Android.Controls.CompoundButton.h: include/Fuse.IDataContext.h
include/Fuse.Android.Controls.CompoundButton.h: include/Fuse.Scripting.INameScope.h

include/Fuse.Android.Controls.CompoundButton.Listener.h: include/Android.android.widget.CompoundButtonDLROnCheckedChangeListener.h
include/Fuse.Android.Controls.CompoundButton.Listener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.Android.Controls.CompoundButton.Listener.h: include/Android.java.lang.Object.h
include/Fuse.Android.Controls.CompoundButton.Listener.h: include/Uno.IDisposable.h

include/Fuse.Android.Controls.Control-1.h: include/Fuse.Android.Controls.Element.h
include/Fuse.Android.Controls.Control-1.h: include/Fuse.IDataContext.h
include/Fuse.Android.Controls.Control-1.h: include/Fuse.Scripting.INameScope.h

include/Fuse.Android.Controls.EditorActionArgs.h: include/Uno.EventArgs.h

include/Fuse.Android.Controls.EditorActionHandler.h: include/Uno.Delegate.h

include/Fuse.Android.Controls.EditorActionListener.h: include/Android.android.widget.TextViewDLROnEditorActionListener.h
include/Fuse.Android.Controls.EditorActionListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.Android.Controls.EditorActionListener.h: include/Android.java.lang.Object.h
include/Fuse.Android.Controls.EditorActionListener.h: include/Uno.IDisposable.h

include/Fuse.Android.Controls.Element.h: include/Fuse.IDataContext.h
include/Fuse.Android.Controls.Element.h: include/Fuse.Node.h
include/Fuse.Android.Controls.Element.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Android.Controls.Element.h: include/Uno.Float2.h
include/Fuse.Android.Controls.Element.h: include/Fuse.LayoutParams.h
include/Fuse.Android.Controls.Element.h: include/Uno.Float4.h
include/Fuse.Android.Controls.Element.h: include/Uno.Rect.h

include/Fuse.Android.Controls.FocusManager.h: include/Uno.Object.h

include/Fuse.Android.Controls.Image.h: include/Fuse.Android.Controls.Control-1.h
include/Fuse.Android.Controls.Image.h: include/Fuse.Controls.Image.h
include/Fuse.Android.Controls.Image.h: include/Fuse.IDataContext.h
include/Fuse.Android.Controls.Image.h: include/Fuse.Scripting.INameScope.h

include/Fuse.Android.Controls.Image.ImageLoader.BitmapLoader.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.Android.Controls.Image.ImageLoader.BitmapLoader.h: include/Android.java.lang.Object.h
include/Fuse.Android.Controls.Image.ImageLoader.BitmapLoader.h: include/Android.java.lang.Runnable.h
include/Fuse.Android.Controls.Image.ImageLoader.BitmapLoader.h: include/Uno.IDisposable.h

include/Fuse.Android.Controls.Image.ImageLoader.h: include/Uno.Object.h

include/Fuse.Android.Controls.JsResultHandler.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.Android.Controls.JsResultHandler.h: include/Android.java.lang.Object.h
include/Fuse.Android.Controls.JsResultHandler.h: include/Android.java.util.Observer.h
include/Fuse.Android.Controls.JsResultHandler.h: include/Uno.IDisposable.h

include/Fuse.Android.Controls.MapView.h: include/Fuse.Android.Controls.Control-1.h
include/Fuse.Android.Controls.MapView.h: include/Fuse.Controls.MapView.h
include/Fuse.Android.Controls.MapView.h: include/Fuse.IDataContext.h
include/Fuse.Android.Controls.MapView.h: include/Fuse.Scripting.INameScope.h

include/Fuse.Android.Controls.PlainTextEdit.h: include/Fuse.Android.Controls.TextEdit.h
include/Fuse.Android.Controls.PlainTextEdit.h: include/Fuse.IDataContext.h
include/Fuse.Android.Controls.PlainTextEdit.h: include/Fuse.Scripting.INameScope.h

include/Fuse.Android.Controls.ProgressChangedHandler.h: include/Uno.Delegate.h

include/Fuse.Android.Controls.ProgressChangedListener.h: include/Android.android.widget.SeekBarDLROnSeekBarChangeListener.h
include/Fuse.Android.Controls.ProgressChangedListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.Android.Controls.ProgressChangedListener.h: include/Android.java.lang.Object.h
include/Fuse.Android.Controls.ProgressChangedListener.h: include/Uno.IDisposable.h

include/Fuse.Android.Controls.RadioButton.h: include/Fuse.Android.Controls.CompoundButton.h
include/Fuse.Android.Controls.RadioButton.h: include/Fuse.IDataContext.h
include/Fuse.Android.Controls.RadioButton.h: include/Fuse.Scripting.INameScope.h

include/Fuse.Android.Controls.Rectangle.h: include/Fuse.Android.Controls.Shape-1.h
include/Fuse.Android.Controls.Rectangle.h: include/Fuse.Controls.Rectangle.h
include/Fuse.Android.Controls.Rectangle.h: include/Fuse.IDataContext.h
include/Fuse.Android.Controls.Rectangle.h: include/Fuse.Scripting.INameScope.h

include/Fuse.Android.Controls.SeekBar.h: include/Fuse.Android.Controls.Control-1.h
include/Fuse.Android.Controls.SeekBar.h: include/Fuse.Controls.Slider.h
include/Fuse.Android.Controls.SeekBar.h: include/Fuse.IDataContext.h
include/Fuse.Android.Controls.SeekBar.h: include/Fuse.Scripting.INameScope.h

include/Fuse.Android.Controls.ShaderFactory.h: include/Android.android.graphics.drawable.ShapeDrawableDLRShaderFactory.h
include/Fuse.Android.Controls.ShaderFactory.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.Android.Controls.ShaderFactory.h: include/Uno.IDisposable.h

include/Fuse.Android.Controls.Shape-1.h: include/Fuse.Android.Controls.Control-1.h
include/Fuse.Android.Controls.Shape-1.h: include/Fuse.Controls.Shape.h
include/Fuse.Android.Controls.Shape-1.h: include/Fuse.IDataContext.h
include/Fuse.Android.Controls.Shape-1.h: include/Fuse.Scripting.INameScope.h

include/Fuse.Android.Controls.Switch.h: include/Fuse.Android.Controls.CompoundButton.h
include/Fuse.Android.Controls.Switch.h: include/Fuse.IDataContext.h
include/Fuse.Android.Controls.Switch.h: include/Fuse.Scripting.INameScope.h

include/Fuse.Android.Controls.TextChangedHandler.h: include/Uno.Delegate.h

include/Fuse.Android.Controls.TextChangedListener.h: include/Android.android.text.TextWatcher.h
include/Fuse.Android.Controls.TextChangedListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.Android.Controls.TextChangedListener.h: include/Android.java.lang.Object.h
include/Fuse.Android.Controls.TextChangedListener.h: include/Uno.IDisposable.h

include/Fuse.Android.Controls.TextEdit.h: include/Fuse.Android.Controls.TextViewBase-1.h
include/Fuse.Android.Controls.TextEdit.h: include/Fuse.Controls.TextEdit.h
include/Fuse.Android.Controls.TextEdit.h: include/Fuse.IDataContext.h
include/Fuse.Android.Controls.TextEdit.h: include/Fuse.Scripting.INameScope.h

include/Fuse.Android.Controls.TextView.h: include/Fuse.Android.Controls.TextViewBase-1.h
include/Fuse.Android.Controls.TextView.h: include/Fuse.Controls.TextControl.h
include/Fuse.Android.Controls.TextView.h: include/Fuse.IDataContext.h
include/Fuse.Android.Controls.TextView.h: include/Fuse.Scripting.INameScope.h

include/Fuse.Android.Controls.TextViewBase-1.h: include/Fuse.Android.Controls.Control-1.h
include/Fuse.Android.Controls.TextViewBase-1.h: include/Fuse.Controls.TextControl.h
include/Fuse.Android.Controls.TextViewBase-1.h: include/Fuse.IDataContext.h
include/Fuse.Android.Controls.TextViewBase-1.h: include/Fuse.Scripting.INameScope.h

include/Fuse.Android.Controls.ToggleButton.h: include/Fuse.Android.Controls.CompoundButton.h
include/Fuse.Android.Controls.ToggleButton.h: include/Fuse.IDataContext.h
include/Fuse.Android.Controls.ToggleButton.h: include/Fuse.Scripting.INameScope.h

include/Fuse.Android.Controls.WebChromeClient.h: include/Android.android.webkit.WebChromeClient.h
include/Fuse.Android.Controls.WebChromeClient.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.Android.Controls.WebChromeClient.h: include/Uno.IDisposable.h

include/Fuse.Android.Controls.WebView.h: include/Fuse.Android.Controls.Control-1.h
include/Fuse.Android.Controls.WebView.h: include/Fuse.Controls.ISourceReceiver.h
include/Fuse.Android.Controls.WebView.h: include/Fuse.Controls.IWebView.h
include/Fuse.Android.Controls.WebView.h: include/Fuse.Controls.WebView.h
include/Fuse.Android.Controls.WebView.h: include/Fuse.IDataContext.h
include/Fuse.Android.Controls.WebView.h: include/Fuse.Navigation.IBaseNavigation.h
include/Fuse.Android.Controls.WebView.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Android.Controls.WebView.h: include/Fuse.Triggers.IProgress.h

include/Fuse.Android.Controls.WebViewClient.h: include/Android.android.webkit.WebViewClient.h
include/Fuse.Android.Controls.WebViewClient.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.Android.Controls.WebViewClient.h: include/Uno.IDisposable.h

include/Fuse.Android.FocusChangedHandler.h: include/Uno.Delegate.h

include/Fuse.Android.FocusChangedListener.h: include/Android.android.view.ViewDLROnFocusChangeListener.h
include/Fuse.Android.FocusChangedListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.Android.FocusChangedListener.h: include/Android.java.lang.Object.h
include/Fuse.Android.FocusChangedListener.h: include/Uno.IDisposable.h

include/Fuse.Android.Helpers.h: include/Uno.h

include/Fuse.Android.InputDispatch.h: include/Uno.h

include/Fuse.Android.InputDispatch.TouchListener.h: include/Android.android.view.ViewDLROnTouchListener.h
include/Fuse.Android.InputDispatch.TouchListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.Android.InputDispatch.TouchListener.h: include/Android.java.lang.Object.h
include/Fuse.Android.InputDispatch.TouchListener.h: include/Uno.IDisposable.h

include/Fuse.Android.NativeStyle.h: include/Fuse.Style.h
include/Fuse.Android.NativeStyle.h: include/Uno.UX.ITemplate.h

include/Fuse.Android.NativeStyle.Template.h: include/Fuse.Controls.GraphicsView.h
include/Fuse.Android.NativeStyle.Template.h: include/Uno.UX.ITemplate.h
include/Fuse.Android.NativeStyle.Template.h: include/Uno.UX.Template-1.h

include/Fuse.Android.NativeStyle.Template.Template1.h: include/Fuse.Controls.TextBlock.h
include/Fuse.Android.NativeStyle.Template.Template1.h: include/Uno.UX.ITemplate.h
include/Fuse.Android.NativeStyle.Template.Template1.h: include/Uno.UX.Template-1.h

include/Fuse.Android.NativeStyle.Template.Template2.Factory.h: include/Uno.UX.Factory.h

include/Fuse.Android.NativeStyle.Template.Template2.Factory1.h: include/Uno.UX.Factory.h

include/Fuse.Android.NativeStyle.Template.Template2.h: include/Fuse.Controls.PlainTextEdit.h
include/Fuse.Android.NativeStyle.Template.Template2.h: include/Uno.UX.ITemplate.h
include/Fuse.Android.NativeStyle.Template.Template2.h: include/Uno.UX.Template-1.h

include/Fuse.Android.NativeTemplate.h: include/Uno.Object.h
include/Fuse.Android.NativeTemplate.h: include/Uno.UX.ITemplate.h

include/Fuse.Android.NativeViews.ContentControl.h: include/Fuse.Android.NativeViews.ParentNativeView-1.h
include/Fuse.Android.NativeViews.ContentControl.h: include/Fuse.Controls.ContentControl.h

include/Fuse.Android.NativeViews.GLSurfaceTextureListener.h: include/Android.android.view.TextureViewDLRSurfaceTextureListener.h
include/Fuse.Android.NativeViews.GLSurfaceTextureListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.Android.NativeViews.GLSurfaceTextureListener.h: include/Android.java.lang.Object.h
include/Fuse.Android.NativeViews.GLSurfaceTextureListener.h: include/Uno.IDisposable.h
include/Fuse.Android.NativeViews.GLSurfaceTextureListener.h: include/Uno/Graphics/GLHelper.h

include/Fuse.Android.NativeViews.GraphicsView.h: include/Fuse.Android.NativeViews.ParentNativeView-1.h
include/Fuse.Android.NativeViews.GraphicsView.h: include/Fuse.Controls.GraphicsView.h
include/Fuse.Android.NativeViews.GraphicsView.h: include/Uno/Graphics/GLHelper.h

include/Fuse.Android.NativeViews.HorizontalScrollView.h: include/Android.android.view.ViewParent.h
include/Fuse.Android.NativeViews.HorizontalScrollView.h: include/Android.android.widget.HorizontalScrollView.h
include/Fuse.Android.NativeViews.HorizontalScrollView.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.Android.NativeViews.HorizontalScrollView.h: include/Uno.IDisposable.h

include/Fuse.Android.NativeViews.LeafNativeView.h: include/Fuse.Android.NativeViews.NativeView.h

include/Fuse.Android.NativeViews.NativeView.h: include/Fuse.Behavior.h
include/Fuse.Android.NativeViews.NativeView.h: include/Uno.Float2.h
include/Fuse.Android.NativeViews.NativeView.h: include/Uno.Float4x4.h

include/Fuse.Android.NativeViews.NativeViewHost.h: include/Fuse.Android.NativeViews.ParentNativeView-1.h
include/Fuse.Android.NativeViews.NativeViewHost.h: include/Fuse.Controls.NativeViewHost.h

include/Fuse.Android.NativeViews.ParentControl.h: include/Fuse.Android.NativeViews.ParentNativeView-1.h
include/Fuse.Android.NativeViews.ParentControl.h: include/Fuse.Controls.ParentControl.h

include/Fuse.Android.NativeViews.ParentNativeView-1.h: include/Fuse.Android.NativeViews.NativeView.h

include/Fuse.Android.NativeViews.ScrollView.h: include/Fuse.Android.NativeViews.ParentNativeView-1.h
include/Fuse.Android.NativeViews.ScrollView.h: include/Fuse.Controls.ScrollView.h

include/Fuse.Android.NativeViews.SurfaceCallback.h: include/Android.android.view.SurfaceHolderDLRCallback.h
include/Fuse.Android.NativeViews.SurfaceCallback.h: include/Android.android.view.SurfaceHolderDLRCallback2.h
include/Fuse.Android.NativeViews.SurfaceCallback.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.Android.NativeViews.SurfaceCallback.h: include/Android.java.lang.Object.h
include/Fuse.Android.NativeViews.SurfaceCallback.h: include/Uno.IDisposable.h
include/Fuse.Android.NativeViews.SurfaceCallback.h: include/Uno/Graphics/GLHelper.h

include/Fuse.Android.NativeViews.SurfaceView.h: include/Fuse.Android.NativeViews.GraphicsView.h

include/Fuse.Android.NativeViews.TextureView.h: include/Fuse.Android.NativeViews.GraphicsView.h

include/Fuse.Android.NativeViews.VerticalScrollView.h: include/Android.android.view.ViewParent.h
include/Fuse.Android.NativeViews.VerticalScrollView.h: include/Android.android.widget.ScrollView.h
include/Fuse.Android.NativeViews.VerticalScrollView.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.Android.NativeViews.VerticalScrollView.h: include/Uno.IDisposable.h

include/Fuse.Android.RootView.h: include/Uno.Object.h

include/Fuse.Android.RootViewContainer.h: include/Android.android.view.ViewParent.h
include/Fuse.Android.RootViewContainer.h: include/Android.android.widget.RelativeLayout.h
include/Fuse.Android.RootViewContainer.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.Android.RootViewContainer.h: include/Uno.IDisposable.h

include/Fuse.Android.StatusBarConfig.h: include/Fuse.Behavior.h
include/Fuse.Android.StatusBarConfig.h: include/Uno.Float4.h

include/Fuse.Android.TextControlLayout.h: include/Uno.Object.h
include/Fuse.Android.TextControlLayout.h: include/Uno.Recti.h

include/Fuse.Android.TextRenderer.BackgroundRender.h: include/Uno.Float4.h
include/Fuse.Android.TextRenderer.BackgroundRender.h: include/Uno.Object.h
include/Fuse.Android.TextRenderer.BackgroundRender.h: include/Uno.Recti.h

include/Fuse.Android.TextRenderer.h: include/Fuse.Controls.Graphics.TextVisual.h
include/Fuse.Android.TextRenderer.h: include/Fuse.IDataContext.h
include/Fuse.Android.TextRenderer.h: include/Fuse.Resources.ISoftDisposable.h
include/Fuse.Android.TextRenderer.h: include/Fuse.Scripting.INameScope.h

include/Fuse.Android.TypefaceCache.h: include/Uno.h

include/Fuse.Animations.AnimationVariant.h: include/Uno.Int.h

include/Fuse.Animations.Animator.h: include/Uno.Object.h

include/Fuse.Animations.AnimatorState.h: include/Uno.Object.h

include/Fuse.Animations.AnimatorVariant.h: include/Uno.Int.h

include/Fuse.Animations.Attractor-1.h: include/Fuse.Behavior.h

include/Fuse.Animations.AverageMasterProperty-1.h: include/Fuse.Animations.IMixerMaster.h
include/Fuse.Animations.AverageMasterProperty-1.h: include/Fuse.Animations.MasterProperty-1.h
include/Fuse.Animations.AverageMasterProperty-1.h: include/Fuse.Animations.MasterPropertyGet.h
include/Fuse.Animations.AverageMasterProperty-1.h: include/Uno.Object.h

include/Fuse.Animations.AverageMasterTransform.h: include/Fuse.Animations.IMixerMaster.h
include/Fuse.Animations.AverageMasterTransform.h: include/Fuse.Animations.MasterTransform.h

include/Fuse.Animations.AverageMixer.h: include/Fuse.Animations.IMixer.h
include/Fuse.Animations.AverageMixer.h: include/Fuse.Animations.MixerBase.h

include/Fuse.Animations.Change-1.h: include/Fuse.Animations.TrackAnimator.h

include/Fuse.Animations.ContinuousTrackChangeState-1.h: include/Fuse.Animations.TrackAnimatorState.h

include/Fuse.Animations.ContinuousTrackProvider.h: include/Fuse.Animations.TrackProvider.h
include/Fuse.Animations.ContinuousTrackProvider.h: include/Uno.Object.h

include/Fuse.Animations.Converter-1.h: include/Uno.Object.h
include/Fuse.Animations.Converter-1.h: include/Uno.Float4.h

include/Fuse.Animations.ConverterDouble.h: include/Fuse.Animations.Converter-1.h
include/Fuse.Animations.ConverterDouble.h: include/Uno.Double.h

include/Fuse.Animations.ConverterFloat.h: include/Fuse.Animations.Converter-1.h
include/Fuse.Animations.ConverterFloat.h: include/Uno.Float.h

include/Fuse.Animations.ConverterFloat2.h: include/Fuse.Animations.Converter-1.h
include/Fuse.Animations.ConverterFloat2.h: include/Uno.Float2.h

include/Fuse.Animations.ConverterFloat3.h: include/Fuse.Animations.Converter-1.h
include/Fuse.Animations.ConverterFloat3.h: include/Uno.Float3.h

include/Fuse.Animations.ConverterFloat4.h: include/Fuse.Animations.Converter-1.h
include/Fuse.Animations.ConverterFloat4.h: include/Uno.Float4.h

include/Fuse.Animations.CreateStateParams.h: include/Uno.Object.h

include/Fuse.Animations.Cycle-1.h: include/Fuse.Animations.OpenAnimator.h

include/Fuse.Animations.CycleState-1.h: include/Fuse.Animations.OpenAnimatorState.h

include/Fuse.Animations.CycleWaveform.h: include/Uno.Int.h

include/Fuse.Animations.DiscreteKeyframeTrack.h: include/Fuse.Animations.DiscreteTrackProvider.h
include/Fuse.Animations.DiscreteKeyframeTrack.h: include/Fuse.Animations.ITrackProvider.h
include/Fuse.Animations.DiscreteKeyframeTrack.h: include/Fuse.Animations.KeyframeTrack.h
include/Fuse.Animations.DiscreteKeyframeTrack.h: include/Fuse.Animations.TrackProvider.h
include/Fuse.Animations.DiscreteKeyframeTrack.h: include/Uno.Object.h

include/Fuse.Animations.DiscreteMasterProperty-1.h: include/Fuse.Animations.IMixerMaster.h
include/Fuse.Animations.DiscreteMasterProperty-1.h: include/Fuse.Animations.MasterProperty-1.h
include/Fuse.Animations.DiscreteMasterProperty-1.h: include/Fuse.Animations.MasterPropertyGet.h
include/Fuse.Animations.DiscreteMasterProperty-1.h: include/Uno.Object.h

include/Fuse.Animations.DiscreteMasterTransform.h: include/Fuse.Animations.IMixerMaster.h
include/Fuse.Animations.DiscreteMasterTransform.h: include/Fuse.Animations.MasterTransform.h

include/Fuse.Animations.DiscreteMixer.h: include/Fuse.Animations.IMixer.h
include/Fuse.Animations.DiscreteMixer.h: include/Fuse.Animations.MixerBase.h

include/Fuse.Animations.DiscreteSingleTrack.h: include/Fuse.Animations.DiscreteTrackProvider.h
include/Fuse.Animations.DiscreteSingleTrack.h: include/Fuse.Animations.ITrackProvider.h
include/Fuse.Animations.DiscreteSingleTrack.h: include/Fuse.Animations.TrackProvider.h
include/Fuse.Animations.DiscreteSingleTrack.h: include/Uno.Object.h

include/Fuse.Animations.DiscreteTrackChangeState-1.h: include/Fuse.Animations.TrackAnimatorState.h

include/Fuse.Animations.DiscreteTrackProvider.h: include/Fuse.Animations.TrackProvider.h
include/Fuse.Animations.DiscreteTrackProvider.h: include/Uno.Object.h

include/Fuse.Animations.Easing.h: include/Uno.Int.h

include/Fuse.Animations.EasingFunction.h: include/Uno.Delegate.h

include/Fuse.Animations.EasingFunctions.h: include/Uno.h

include/Fuse.Animations.EasingTrack.h: include/Fuse.Animations.ContinuousTrackProvider.h
include/Fuse.Animations.EasingTrack.h: include/Fuse.Animations.ITrackProvider.h
include/Fuse.Animations.EasingTrack.h: include/Fuse.Animations.TrackProvider.h
include/Fuse.Animations.EasingTrack.h: include/Uno.Object.h

include/Fuse.Animations.FastMatrixTransform.h: include/Fuse.Transform.h

include/Fuse.Animations.IMixer.h: include/Uno.Object.h

include/Fuse.Animations.IMixerHandle-1.h: include/Uno.Object.h

include/Fuse.Animations.IMixerMaster.h: include/Uno.Object.h

include/Fuse.Animations.IResize.h: include/Uno.Object.h
include/Fuse.Animations.IResize.h: include/Uno.Float2.h

include/Fuse.Animations.IResizeMode.h: include/Fuse.ITransformMode.h
include/Fuse.Animations.IResizeMode.h: include/Uno.Object.h

include/Fuse.Animations.ITrackProvider.h: include/Uno.Object.h

include/Fuse.Animations.Keyframe.h: include/Uno.Float4.h
include/Fuse.Animations.Keyframe.h: include/Uno.Object.h

include/Fuse.Animations.KeyframeInterpolation.h: include/Uno.Int.h

include/Fuse.Animations.KeyframeTrack.h: include/Uno.Object.h

include/Fuse.Animations.MasterBase-1.GFWResult.h: include/Uno.Object.h

include/Fuse.Animations.MasterBase-1.h: include/Fuse.Animations.IMixerMaster.h
include/Fuse.Animations.MasterBase-1.h: include/Uno.Object.h

include/Fuse.Animations.MasterProperty-1.h: include/Fuse.Animations.IMixerMaster.h
include/Fuse.Animations.MasterProperty-1.h: include/Fuse.Animations.MasterBase-1.h
include/Fuse.Animations.MasterProperty-1.h: include/Fuse.Animations.MasterPropertyGet.h
include/Fuse.Animations.MasterProperty-1.h: include/Uno.Object.h

include/Fuse.Animations.MasterPropertyGet.h: include/Uno.Object.h

include/Fuse.Animations.MasterTransform.h: include/Fuse.Animations.IMixerMaster.h
include/Fuse.Animations.MasterTransform.h: include/Fuse.Animations.MasterBase-1.h
include/Fuse.Animations.MasterTransform.h: include/Fuse.Transform.h

include/Fuse.Animations.Mixer.h: include/Uno.Object.h

include/Fuse.Animations.MixerBase.h: include/Fuse.Animations.IMixer.h
include/Fuse.Animations.MixerBase.h: include/Uno.Object.h

include/Fuse.Animations.MixerHandle-1.h: include/Fuse.Animations.IMixerHandle-1.h
include/Fuse.Animations.MixerHandle-1.h: include/Uno.Object.h

include/Fuse.Animations.MixOp.h: include/Uno.Int.h

include/Fuse.Animations.Move.h: include/Fuse.Animations.TransformAnimator-1.h
include/Fuse.Animations.Move.h: include/Fuse.Translation.h

include/Fuse.Animations.Nothing.h: include/Fuse.Animations.TrackAnimator.h

include/Fuse.Animations.NothingAnimatorState.h: include/Fuse.Animations.TrackAnimatorState.h

include/Fuse.Animations.OpenAnimator.h: include/Fuse.Animations.Animator.h

include/Fuse.Animations.OpenAnimatorState.h: include/Fuse.Animations.AnimatorState.h

include/Fuse.Animations.Player.h: include/Uno.Object.h

include/Fuse.Animations.PlayerPart.h: include/Uno.Object.h

include/Fuse.Animations.PlayMode.h: include/Uno.Int.h

include/Fuse.Animations.Resize.h: include/Fuse.Animations.TrackAnimator.h

include/Fuse.Animations.ResizeAnimatorState.h: include/Fuse.Animations.TrackAnimatorState.h
include/Fuse.Animations.ResizeAnimatorState.h: include/Uno.Float4.h

include/Fuse.Animations.Rotate.h: include/Fuse.Animations.TransformAnimator-1.h
include/Fuse.Animations.Rotate.h: include/Fuse.Rotation.h

include/Fuse.Animations.Scale.h: include/Fuse.Animations.TransformAnimator-1.h
include/Fuse.Animations.Scale.h: include/Fuse.Scaling.h

include/Fuse.Animations.SeekDirection.h: include/Uno.Int.h

include/Fuse.Animations.Skew.h: include/Fuse.Animations.TransformAnimator-1.h
include/Fuse.Animations.Skew.h: include/Fuse.Shear.h

include/Fuse.Animations.Spin.h: include/Fuse.Animations.OpenAnimator.h

include/Fuse.Animations.SpinState.h: include/Fuse.Animations.OpenAnimatorState.h

include/Fuse.Animations.SplineTrack.h: include/Fuse.Animations.ContinuousTrackProvider.h
include/Fuse.Animations.SplineTrack.h: include/Fuse.Animations.ITrackProvider.h
include/Fuse.Animations.SplineTrack.h: include/Fuse.Animations.KeyframeTrack.h
include/Fuse.Animations.SplineTrack.h: include/Fuse.Animations.TrackProvider.h
include/Fuse.Animations.SplineTrack.h: include/Uno.Object.h

include/Fuse.Animations.SplineTrack.PointInterpolater.h: include/Uno.Delegate.h

include/Fuse.Animations.TrackAnimator.h: include/Fuse.Animations.Animator.h
include/Fuse.Animations.TrackAnimator.h: include/Uno.Float4.h

include/Fuse.Animations.TrackAnimatorState.h: include/Fuse.Animations.AnimatorState.h
include/Fuse.Animations.TrackAnimatorState.h: include/Uno.Float4.h

include/Fuse.Animations.TrackProvider.h: include/Uno.Object.h

include/Fuse.Animations.TransformAnimator-1.h: include/Fuse.Animations.TrackAnimator.h
include/Fuse.Animations.TransformAnimator-1.h: include/Uno.Float3.h
include/Fuse.Animations.TransformAnimator-1.h: include/Uno.Float4.h

include/Fuse.Animations.TransformAnimatorState-1.h: include/Fuse.Animations.TrackAnimatorState.h

include/Fuse.Animations.TransformPriority.h: include/Uno.Int.h

include/Fuse.Animations.TriggerAnimation.h: include/Uno.Object.h

include/Fuse.Animations.TriggerAnimationState.h: include/Uno.Object.h

include/Fuse.Animations.TriggerAnimationState.SeekFlags.h: include/Uno.Int.h

include/Fuse.App.FrameCallback.h: include/Android.android.view.ChoreographerDLRFrameCallback.h
include/Fuse.App.FrameCallback.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.App.FrameCallback.h: include/Android.java.lang.Object.h
include/Fuse.App.FrameCallback.h: include/Uno.IDisposable.h

include/Fuse.App.h: include/Fuse.AppBase.h

include/Fuse.App.TimeListener.h: include/Android.android.animation.TimeAnimatorDLRTimeListener.h
include/Fuse.App.TimeListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.App.TimeListener.h: include/Android.java.lang.Object.h
include/Fuse.App.TimeListener.h: include/Uno.IDisposable.h

include/Fuse.AppBase.h: include/Uno.Application.h

include/Fuse.BasicTheme.BasicStyle.h: include/Fuse.Style.h
include/Fuse.BasicTheme.BasicStyle.h: include/Uno.UX.ITemplate.h

include/Fuse.BasicTheme.BasicStyle.Template.h: include/Fuse.Controls.BackButton.h
include/Fuse.BasicTheme.BasicStyle.Template.h: include/Uno.UX.ITemplate.h
include/Fuse.BasicTheme.BasicStyle.Template.h: include/Uno.UX.Template-1.h

include/Fuse.BasicTheme.BasicStyle.Template.Template1.h: include/Fuse.Controls.Text.h
include/Fuse.BasicTheme.BasicStyle.Template.Template1.h: include/Uno.UX.ITemplate.h
include/Fuse.BasicTheme.BasicStyle.Template.Template1.h: include/Uno.UX.Template-1.h

include/Fuse.BasicTheme.BasicStyle.Template1.h: include/Fuse.Controls.NavigationBar.h
include/Fuse.BasicTheme.BasicStyle.Template1.h: include/Uno.UX.ITemplate.h
include/Fuse.BasicTheme.BasicStyle.Template1.h: include/Uno.UX.Template-1.h

include/Fuse.BasicTheme.BasicStyle.Template2.h: include/Fuse.Controls.Switch.h
include/Fuse.BasicTheme.BasicStyle.Template2.h: include/Uno.UX.ITemplate.h
include/Fuse.BasicTheme.BasicStyle.Template2.h: include/Uno.UX.Template-1.h

include/Fuse.BasicTheme.BasicStyle.Template3.h: include/Fuse.Controls.Slider.h
include/Fuse.BasicTheme.BasicStyle.Template3.h: include/Uno.UX.ITemplate.h
include/Fuse.BasicTheme.BasicStyle.Template3.h: include/Uno.UX.Template-1.h

include/Fuse.BasicTheme.BasicStyle.Template4.h: include/Fuse.Controls.Button.h
include/Fuse.BasicTheme.BasicStyle.Template4.h: include/Uno.UX.ITemplate.h
include/Fuse.BasicTheme.BasicStyle.Template4.h: include/Uno.UX.Template-1.h

include/Fuse.BasicTheme.BasicStyle.Template5.h: include/Fuse.Controls.TextEdit.h
include/Fuse.BasicTheme.BasicStyle.Template5.h: include/Uno.UX.ITemplate.h
include/Fuse.BasicTheme.BasicStyle.Template5.h: include/Uno.UX.Template-1.h

include/Fuse.BasicTheme.BasicStyle.Template6.h: include/Fuse.Controls.TextInput.h
include/Fuse.BasicTheme.BasicStyle.Template6.h: include/Uno.UX.ITemplate.h
include/Fuse.BasicTheme.BasicStyle.Template6.h: include/Uno.UX.Template-1.h

include/Fuse.BasicTheme.BasicTheme.h: include/Fuse.GraphicsTheme.h
include/Fuse.BasicTheme.BasicTheme.h: include/Uno.UX.ITemplate.h

include/Fuse.BasicTheme.ButtonText.h: include/Fuse.Animations.IResize.h
include/Fuse.BasicTheme.ButtonText.h: include/Fuse.Controls.TextBlock.h
include/Fuse.BasicTheme.ButtonText.h: include/Fuse.IActualPlacement.h
include/Fuse.BasicTheme.ButtonText.h: include/Fuse.IDataContext.h
include/Fuse.BasicTheme.ButtonText.h: include/Fuse.IObjectContainer.h
include/Fuse.BasicTheme.ButtonText.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.BasicTheme.ButtonText.h: include/Fuse.Scripting.INameScope.h
include/Fuse.BasicTheme.ButtonText.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.BasicTheme.ButtonText.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.BasicTheme.ButtonText.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.BasicTheme.ButtonText.h: include/Fuse.Triggers.IValue-1.h
include/Fuse.BasicTheme.ButtonText.h: include/Uno.String.h

include/Fuse.BasicTheme.ColorScheme.h: include/Uno.Int.h

include/Fuse.BasicTheme.DefaultBasicTheme.h: include/Uno.h

include/Fuse.BeginRemoveArgs.h: include/Uno.EventArgs.h

include/Fuse.BeginRemoveHandler.h: include/Uno.Delegate.h

include/Fuse.Behavior.h: include/Uno.Object.h

include/Fuse.Behavior.RootStatus.h: include/Uno.Int.h

include/Fuse.CacheFramebuffer.h: include/Uno.Object.h

include/Fuse.Camera.AndroidCameraImpl.DispatchTakePicture.h: include/Uno.Object.h

include/Fuse.Camera.AndroidCameraImpl.h: include/Uno.h

include/Fuse.Camera.AndroidCameraImpl.TakePictureTask.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.Camera.AndroidCameraImpl.TakePictureTask.h: include/Android.com.fuse.Native.CameraTask.h
include/Fuse.Camera.AndroidCameraImpl.TakePictureTask.h: include/Uno.IDisposable.h

include/Fuse.Camera.Camera.h: include/Uno.h

include/Fuse.Camera.PictureResult.h: include/Uno.Object.h

include/Fuse.Camera.TakePictureHelpers.h: include/Uno.h

include/Fuse.Camera.TakePictureOptions.h: include/Uno.Object.h

include/Fuse.Controls.BackButton.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.BackButton.h: include/Fuse.Controls.Button.h
include/Fuse.Controls.BackButton.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.BackButton.h: include/Fuse.IDataContext.h
include/Fuse.Controls.BackButton.h: include/Fuse.IObjectContainer.h
include/Fuse.Controls.BackButton.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.BackButton.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.BackButton.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.BackButton.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.BackButton.h: include/Fuse.Triggers.Actions.IShow.h

include/Fuse.Controls.BeginRemoveArgsImpl.h: include/Fuse.BeginRemoveArgs.h

include/Fuse.Controls.BottomBarBackground.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.BottomBarBackground.h: include/Fuse.Controls.BottomFrameBackground.h
include/Fuse.Controls.BottomBarBackground.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.BottomBarBackground.h: include/Fuse.IDataContext.h
include/Fuse.Controls.BottomBarBackground.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.BottomBarBackground.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.BottomBarBackground.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.BottomBarBackground.h: include/Fuse.Triggers.Actions.IShow.h

include/Fuse.Controls.BottomFrameBackground.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.BottomFrameBackground.h: include/Fuse.Controls.Control.h
include/Fuse.Controls.BottomFrameBackground.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.BottomFrameBackground.h: include/Fuse.IDataContext.h
include/Fuse.Controls.BottomFrameBackground.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.BottomFrameBackground.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.BottomFrameBackground.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.BottomFrameBackground.h: include/Fuse.Triggers.Actions.IShow.h

include/Fuse.Controls.BufferedWebViewCall.h: include/Uno.Object.h

include/Fuse.Controls.Button.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Button.h: include/Fuse.Controls.ParentControl.h
include/Fuse.Controls.Button.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Button.h: include/Fuse.IDataContext.h
include/Fuse.Controls.Button.h: include/Fuse.IObjectContainer.h
include/Fuse.Controls.Button.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.Button.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.Button.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.Button.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Button.h: include/Fuse.Triggers.Actions.IShow.h

include/Fuse.Controls.Circle.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Circle.h: include/Fuse.Controls.Shape.h
include/Fuse.Controls.Circle.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Circle.h: include/Fuse.IDataContext.h
include/Fuse.Controls.Circle.h: include/Fuse.IObjectContainer.h
include/Fuse.Controls.Circle.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.Circle.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.Circle.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.Circle.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Circle.h: include/Fuse.Triggers.Actions.IShow.h

include/Fuse.Controls.ClientPanel.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.ClientPanel.h: include/Fuse.Controls.DockPanel.h
include/Fuse.Controls.ClientPanel.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.ClientPanel.h: include/Fuse.IDataContext.h
include/Fuse.Controls.ClientPanel.h: include/Fuse.IObjectContainer.h
include/Fuse.Controls.ClientPanel.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.ClientPanel.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.ClientPanel.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.ClientPanel.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.ClientPanel.h: include/Fuse.Triggers.Actions.IShow.h

include/Fuse.Controls.ContentControl.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.ContentControl.h: include/Fuse.Controls.Control.h
include/Fuse.Controls.ContentControl.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.ContentControl.h: include/Fuse.IDataContext.h
include/Fuse.Controls.ContentControl.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.ContentControl.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.ContentControl.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.ContentControl.h: include/Fuse.Triggers.Actions.IShow.h

include/Fuse.Controls.Control.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Control.h: include/Fuse.Elements.Element.h
include/Fuse.Controls.Control.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Control.h: include/Fuse.IDataContext.h
include/Fuse.Controls.Control.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.Control.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.Control.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Control.h: include/Fuse.Triggers.Actions.IShow.h

include/Fuse.Controls.DefaultSwitchBehavior.h: include/Fuse.Triggers.Trigger.h
include/Fuse.Controls.DefaultSwitchBehavior.h: include/Uno.Float2.h

include/Fuse.Controls.DockPanel.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.DockPanel.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.DockPanel.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.DockPanel.h: include/Fuse.IDataContext.h
include/Fuse.Controls.DockPanel.h: include/Fuse.IObjectContainer.h
include/Fuse.Controls.DockPanel.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.DockPanel.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.DockPanel.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.DockPanel.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.DockPanel.h: include/Fuse.Triggers.Actions.IShow.h

include/Fuse.Controls.EdgeNavigator.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.EdgeNavigator.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.EdgeNavigator.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.EdgeNavigator.h: include/Fuse.IDataContext.h
include/Fuse.Controls.EdgeNavigator.h: include/Fuse.IObjectContainer.h
include/Fuse.Controls.EdgeNavigator.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.EdgeNavigator.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.EdgeNavigator.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.EdgeNavigator.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.EdgeNavigator.h: include/Fuse.Triggers.Actions.IShow.h

include/Fuse.Controls.Ellipse.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Ellipse.h: include/Fuse.Controls.Shape.h
include/Fuse.Controls.Ellipse.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Ellipse.h: include/Fuse.IDataContext.h
include/Fuse.Controls.Ellipse.h: include/Fuse.IObjectContainer.h
include/Fuse.Controls.Ellipse.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.Ellipse.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.Ellipse.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.Ellipse.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Ellipse.h: include/Fuse.Triggers.Actions.IShow.h

include/Fuse.Controls.FallbackTextEdit.LineCache.h: include/Uno.Object.h

include/Fuse.Controls.FallbackTextEdit.LineCacheLine.h: include/Uno.Object.h

include/Fuse.Controls.FallbackTextEdit.LineCachePasswordTransform.h: include/Fuse.Controls.FallbackTextEdit.LineCacheTransform.h
include/Fuse.Controls.FallbackTextEdit.LineCachePasswordTransform.h: include/Uno.Object.h

include/Fuse.Controls.FallbackTextEdit.LineCacheTransform.h: include/Uno.Object.h

include/Fuse.Controls.FallbackTextEdit.TextEditVisual.DegreeSpan.h: include/Uno.Object.h

include/Fuse.Controls.FallbackTextEdit.TextEditVisual.h: include/Fuse.Controls.Graphics.ControlVisual-1.h
include/Fuse.Controls.FallbackTextEdit.TextEditVisual.h: include/Fuse.Controls.TextEdit.h
include/Fuse.Controls.FallbackTextEdit.TextEditVisual.h: include/Fuse.IDataContext.h
include/Fuse.Controls.FallbackTextEdit.TextEditVisual.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.FallbackTextEdit.TextEditVisual.h: include/Uno.Float2.h

include/Fuse.Controls.FallbackTextEdit.TextEditVisual.SwipeGestureHelper.h: include/Uno.Object.h

include/Fuse.Controls.FallbackTextEdit.TextPosition.h: include/Uno.Object.h

include/Fuse.Controls.FallbackTextEdit.TextSpan.h: include/Uno.Object.h

include/Fuse.Controls.FallbackTextEdit.TextWindow.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.FallbackTextEdit.TextWindow.h: include/Fuse.Elements.Element.h
include/Fuse.Controls.FallbackTextEdit.TextWindow.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.FallbackTextEdit.TextWindow.h: include/Fuse.IDataContext.h
include/Fuse.Controls.FallbackTextEdit.TextWindow.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.FallbackTextEdit.TextWindow.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.FallbackTextEdit.TextWindow.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.FallbackTextEdit.TextWindow.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.FallbackTextEdit.TextWindow.h: include/Uno.Float2.h
include/Fuse.Controls.FallbackTextEdit.TextWindow.h: include/Uno.Float4.h

include/Fuse.Controls.FallbackTextEdit.VisualTextTransform.h: include/Uno.Int.h

include/Fuse.Controls.FallbackWebViewClient.h: include/Fuse.Controls.ISourceReceiver.h
include/Fuse.Controls.FallbackWebViewClient.h: include/Fuse.Controls.IWebView.h
include/Fuse.Controls.FallbackWebViewClient.h: include/Fuse.Navigation.IBaseNavigation.h
include/Fuse.Controls.FallbackWebViewClient.h: include/Fuse.Triggers.IProgress.h
include/Fuse.Controls.FallbackWebViewClient.h: include/Uno.Object.h

include/Fuse.Controls.FileVideoSource.h: include/Fuse.Controls.VideoSource.h

include/Fuse.Controls.FillRule.h: include/Uno.Int.h

include/Fuse.Controls.FitMode.h: include/Uno.Int.h

include/Fuse.Controls.Graphics.CircleVisual.h: include/Fuse.Controls.Circle.h
include/Fuse.Controls.Graphics.CircleVisual.h: include/Fuse.Controls.Graphics.ShapeVisual-1.h
include/Fuse.Controls.Graphics.CircleVisual.h: include/Fuse.IDataContext.h
include/Fuse.Controls.Graphics.CircleVisual.h: include/Fuse.Scripting.INameScope.h

include/Fuse.Controls.Graphics.ControlVisual-1.h: include/Fuse.Controls.Graphics.Visual.h
include/Fuse.Controls.Graphics.ControlVisual-1.h: include/Fuse.IDataContext.h
include/Fuse.Controls.Graphics.ControlVisual-1.h: include/Fuse.Scripting.INameScope.h

include/Fuse.Controls.Graphics.DefaultTextVisual.h: include/Fuse.Controls.Graphics.TextVisual.h
include/Fuse.Controls.Graphics.DefaultTextVisual.h: include/Fuse.IDataContext.h
include/Fuse.Controls.Graphics.DefaultTextVisual.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.Graphics.DefaultTextVisual.h: include/Uno.Float2.h

include/Fuse.Controls.Graphics.EllipseVisual.h: include/Fuse.Controls.Ellipse.h
include/Fuse.Controls.Graphics.EllipseVisual.h: include/Fuse.Controls.Graphics.PathShapeVisual-1.h
include/Fuse.Controls.Graphics.EllipseVisual.h: include/Fuse.IDataContext.h
include/Fuse.Controls.Graphics.EllipseVisual.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.Graphics.EllipseVisual.h: include/Uno.Float2.h

include/Fuse.Controls.Graphics.ImageElementDraw.h: include/Uno.Float4x4.h
include/Fuse.Controls.Graphics.ImageElementDraw.h: include/Uno.Object.h
include/Fuse.Controls.Graphics.ImageElementDraw.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Controls.Graphics.ImageVisual.h: include/Fuse.Controls.Graphics.ControlVisual-1.h
include/Fuse.Controls.Graphics.ImageVisual.h: include/Fuse.Controls.Image.h
include/Fuse.Controls.Graphics.ImageVisual.h: include/Fuse.IDataContext.h
include/Fuse.Controls.Graphics.ImageVisual.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.Graphics.ImageVisual.h: include/Uno.Float2.h
include/Fuse.Controls.Graphics.ImageVisual.h: include/Uno.Float4.h

include/Fuse.Controls.Graphics.LinearSliderBehavior.h: include/Fuse.Gestures.LinearRangeBehavior.h

include/Fuse.Controls.Graphics.PathShapeVisual-1.h: include/Fuse.Controls.Graphics.ShapeVisual-1.h
include/Fuse.Controls.Graphics.PathShapeVisual-1.h: include/Fuse.IDataContext.h
include/Fuse.Controls.Graphics.PathShapeVisual-1.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.Graphics.PathShapeVisual-1.h: include/Uno.Object.h
include/Fuse.Controls.Graphics.PathShapeVisual-1.h: include/Uno.Float2.h
include/Fuse.Controls.Graphics.PathShapeVisual-1.h: include/Uno.Float4x4.h
include/Fuse.Controls.Graphics.PathShapeVisual-1.h: include/Uno.Rect.h

include/Fuse.Controls.Graphics.PathVisual.h: include/Fuse.Controls.Graphics.PathShapeVisual-1.h
include/Fuse.Controls.Graphics.PathVisual.h: include/Fuse.Controls.Path.h
include/Fuse.Controls.Graphics.PathVisual.h: include/Fuse.IDataContext.h
include/Fuse.Controls.Graphics.PathVisual.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.Graphics.PathVisual.h: include/Uno.Float2.h

include/Fuse.Controls.Graphics.RectangleVisual.h: include/Fuse.Controls.Graphics.ShapeVisual-1.h
include/Fuse.Controls.Graphics.RectangleVisual.h: include/Fuse.Controls.Rectangle.h
include/Fuse.Controls.Graphics.RectangleVisual.h: include/Fuse.IDataContext.h
include/Fuse.Controls.Graphics.RectangleVisual.h: include/Fuse.Scripting.INameScope.h

include/Fuse.Controls.Graphics.RegularPolygonVisual.h: include/Fuse.Controls.Graphics.PathShapeVisual-1.h
include/Fuse.Controls.Graphics.RegularPolygonVisual.h: include/Fuse.Controls.RegularPolygon.h
include/Fuse.Controls.Graphics.RegularPolygonVisual.h: include/Fuse.IDataContext.h
include/Fuse.Controls.Graphics.RegularPolygonVisual.h: include/Fuse.Scripting.INameScope.h

include/Fuse.Controls.Graphics.ShapeVisual-1.h: include/Fuse.Controls.Graphics.ControlVisual-1.h
include/Fuse.Controls.Graphics.ShapeVisual-1.h: include/Fuse.IDataContext.h
include/Fuse.Controls.Graphics.ShapeVisual-1.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.Graphics.ShapeVisual-1.h: include/Uno.Object.h

include/Fuse.Controls.Graphics.StarVisual.h: include/Fuse.Controls.Graphics.PathShapeVisual-1.h
include/Fuse.Controls.Graphics.StarVisual.h: include/Fuse.Controls.Star.h
include/Fuse.Controls.Graphics.StarVisual.h: include/Fuse.IDataContext.h
include/Fuse.Controls.Graphics.StarVisual.h: include/Fuse.Scripting.INameScope.h

include/Fuse.Controls.Graphics.TextVisual.h: include/Fuse.Controls.Graphics.ControlVisual-1.h
include/Fuse.Controls.Graphics.TextVisual.h: include/Fuse.Controls.TextControl.h
include/Fuse.Controls.Graphics.TextVisual.h: include/Fuse.IDataContext.h
include/Fuse.Controls.Graphics.TextVisual.h: include/Fuse.Scripting.INameScope.h

include/Fuse.Controls.Graphics.Visual.h: include/Fuse.IDataContext.h
include/Fuse.Controls.Graphics.Visual.h: include/Fuse.Node.h
include/Fuse.Controls.Graphics.Visual.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.Graphics.Visual.h: include/Uno.Float2.h

include/Fuse.Controls.GraphicsView.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.GraphicsView.h: include/Fuse.Controls.ContentControl.h
include/Fuse.Controls.GraphicsView.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.GraphicsView.h: include/Fuse.IDataContext.h
include/Fuse.Controls.GraphicsView.h: include/Fuse.IViewport.h
include/Fuse.Controls.GraphicsView.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.GraphicsView.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.GraphicsView.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.GraphicsView.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.GraphicsView.h: include/Uno.Float4.h

include/Fuse.Controls.Grid.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Grid.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.Grid.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Grid.h: include/Fuse.IDataContext.h
include/Fuse.Controls.Grid.h: include/Fuse.IObjectContainer.h
include/Fuse.Controls.Grid.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.Grid.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.Grid.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.Grid.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Grid.h: include/Fuse.Triggers.Actions.IShow.h

include/Fuse.Controls.HTML.h: include/Uno.Object.h

include/Fuse.Controls.Image.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Image.h: include/Fuse.Controls.ParentControl.h
include/Fuse.Controls.Image.h: include/Fuse.Gestures.ISizeConstraint.h
include/Fuse.Controls.Image.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Image.h: include/Fuse.IDataContext.h
include/Fuse.Controls.Image.h: include/Fuse.IObjectContainer.h
include/Fuse.Controls.Image.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.Image.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.Image.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.Image.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Image.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Image.h: include/Uno.Float4.h

include/Fuse.Controls.Internal.DefaultTextRenderer.FontKey.h: include/Uno.Object.h

include/Fuse.Controls.Internal.DefaultTextRenderer.h: include/Uno.Float4x4.h
include/Fuse.Controls.Internal.DefaultTextRenderer.h: include/Uno.Object.h

include/Fuse.Controls.Internal.ProperTextTransform.h: include/Uno.Content.Fonts.TextTransform.h
include/Fuse.Controls.Internal.ProperTextTransform.h: include/Uno.Float4x4.h

include/Fuse.Controls.Internal.WordWrapInfo.h: include/Uno.Object.h

include/Fuse.Controls.Internal.WordWrapper.h: include/Uno.h

include/Fuse.Controls.Internal.WordWrapperWord.h: include/Uno.Object.h

include/Fuse.Controls.Internal.WrappedLine.h: include/Uno.Object.h

include/Fuse.Controls.ISourceReceiver.h: include/Uno.Object.h

include/Fuse.Controls.IWebView.h: include/Fuse.Controls.ISourceReceiver.h
include/Fuse.Controls.IWebView.h: include/Fuse.Navigation.IBaseNavigation.h
include/Fuse.Controls.IWebView.h: include/Fuse.Triggers.IProgress.h
include/Fuse.Controls.IWebView.h: include/Uno.Object.h

include/Fuse.Controls.JavaScriptCall.h: include/Fuse.Controls.BufferedWebViewCall.h
include/Fuse.Controls.JavaScriptCall.h: include/Uno.Object.h

include/Fuse.Controls.KeyframeAccessors.h: include/Uno.h

include/Fuse.Controls.LoadHtmlCall.h: include/Fuse.Controls.BufferedWebViewCall.h
include/Fuse.Controls.LoadHtmlCall.h: include/Uno.Object.h

include/Fuse.Controls.MapView.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.MapView.h: include/Fuse.Controls.ParentControl.h
include/Fuse.Controls.MapView.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.MapView.h: include/Fuse.IDataContext.h
include/Fuse.Controls.MapView.h: include/Fuse.IObjectContainer.h
include/Fuse.Controls.MapView.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.MapView.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.MapView.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.MapView.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.MapView.h: include/Fuse.Triggers.Actions.IShow.h

include/Fuse.Controls.MultiLayout.h: include/Fuse.Behavior.h

include/Fuse.Controls.MultiLayoutPanel.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.MultiLayoutPanel.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.MultiLayoutPanel.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.MultiLayoutPanel.h: include/Fuse.IDataContext.h
include/Fuse.Controls.MultiLayoutPanel.h: include/Fuse.IObjectContainer.h
include/Fuse.Controls.MultiLayoutPanel.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.MultiLayoutPanel.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.MultiLayoutPanel.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.MultiLayoutPanel.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.MultiLayoutPanel.h: include/Fuse.Triggers.Actions.IShow.h

include/Fuse.Controls.NativeViewHost.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.NativeViewHost.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.NativeViewHost.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.NativeViewHost.h: include/Fuse.IDataContext.h
include/Fuse.Controls.NativeViewHost.h: include/Fuse.IObjectContainer.h
include/Fuse.Controls.NativeViewHost.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.NativeViewHost.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.NativeViewHost.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.NativeViewHost.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.NativeViewHost.h: include/Fuse.Triggers.Actions.IShow.h

include/Fuse.Controls.NavigationBar.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.NavigationBar.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.NavigationBar.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.NavigationBar.h: include/Fuse.IDataContext.h
include/Fuse.Controls.NavigationBar.h: include/Fuse.IObjectContainer.h
include/Fuse.Controls.NavigationBar.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.NavigationBar.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.NavigationBar.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.NavigationBar.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.NavigationBar.h: include/Fuse.Triggers.Actions.IShow.h

include/Fuse.Controls.Number.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Number.h: include/Fuse.Controls.ParentControl.h
include/Fuse.Controls.Number.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Number.h: include/Fuse.IDataContext.h
include/Fuse.Controls.Number.h: include/Fuse.IObjectContainer.h
include/Fuse.Controls.Number.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.Number.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.Number.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.Number.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Number.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Number.h: include/Fuse.Triggers.IValue-1.h
include/Fuse.Controls.Number.h: include/Uno.Float.h

include/Fuse.Controls.Page.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Page.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.Page.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Page.h: include/Fuse.IDataContext.h
include/Fuse.Controls.Page.h: include/Fuse.IObjectContainer.h
include/Fuse.Controls.Page.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.Page.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.Page.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.Page.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Page.h: include/Fuse.Triggers.Actions.IShow.h

include/Fuse.Controls.PageControl.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.PageControl.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.PageControl.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.PageControl.h: include/Fuse.IDataContext.h
include/Fuse.Controls.PageControl.h: include/Fuse.IObjectContainer.h
include/Fuse.Controls.PageControl.h: include/Fuse.Navigation.IBaseNavigation.h
include/Fuse.Controls.PageControl.h: include/Fuse.Navigation.INavigation.h
include/Fuse.Controls.PageControl.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.PageControl.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.PageControl.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.PageControl.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.PageControl.h: include/Fuse.Triggers.Actions.IShow.h

include/Fuse.Controls.PageControl.Template.h: include/Fuse.Controls.Page.h
include/Fuse.Controls.PageControl.Template.h: include/Uno.UX.ITemplate.h
include/Fuse.Controls.PageControl.Template.h: include/Uno.UX.Template-1.h

include/Fuse.Controls.PageIndicator.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.PageIndicator.h: include/Fuse.Controls.StackPanel.h
include/Fuse.Controls.PageIndicator.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.PageIndicator.h: include/Fuse.IDataContext.h
include/Fuse.Controls.PageIndicator.h: include/Fuse.IObjectContainer.h
include/Fuse.Controls.PageIndicator.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.PageIndicator.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.PageIndicator.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.PageIndicator.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.PageIndicator.h: include/Fuse.Triggers.Actions.IShow.h

include/Fuse.Controls.PageIndicator.Template.h: include/Fuse.Controls.PageIndicatorDot.h
include/Fuse.Controls.PageIndicator.Template.h: include/Uno.UX.ITemplate.h
include/Fuse.Controls.PageIndicator.Template.h: include/Uno.UX.Template-1.h

include/Fuse.Controls.PageIndicatorDot.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.PageIndicatorDot.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.PageIndicatorDot.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.PageIndicatorDot.h: include/Fuse.IDataContext.h
include/Fuse.Controls.PageIndicatorDot.h: include/Fuse.IObjectContainer.h
include/Fuse.Controls.PageIndicatorDot.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.PageIndicatorDot.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.PageIndicatorDot.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.PageIndicatorDot.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.PageIndicatorDot.h: include/Fuse.Triggers.Actions.IShow.h

include/Fuse.Controls.PageIndicatorDotFactory.h: include/Uno.UX.Factory.h

include/Fuse.Controls.Panel.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Panel.h: include/Fuse.Controls.ParentControl.h
include/Fuse.Controls.Panel.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Panel.h: include/Fuse.IDataContext.h
include/Fuse.Controls.Panel.h: include/Fuse.IObjectContainer.h
include/Fuse.Controls.Panel.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.Panel.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.Panel.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.Panel.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Panel.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Panel.h: include/Uno.Float4.h

include/Fuse.Controls.ParentControl.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.ParentControl.h: include/Fuse.Controls.Control.h
include/Fuse.Controls.ParentControl.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.ParentControl.h: include/Fuse.IDataContext.h
include/Fuse.Controls.ParentControl.h: include/Fuse.IObjectContainer.h
include/Fuse.Controls.ParentControl.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.ParentControl.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.ParentControl.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.ParentControl.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.ParentControl.h: include/Fuse.Triggers.Actions.IShow.h

include/Fuse.Controls.Path.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Path.h: include/Fuse.Controls.Shape.h
include/Fuse.Controls.Path.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Path.h: include/Fuse.IDataContext.h
include/Fuse.Controls.Path.h: include/Fuse.IObjectContainer.h
include/Fuse.Controls.Path.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.Path.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.Path.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.Path.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Path.h: include/Fuse.Triggers.Actions.IShow.h

include/Fuse.Controls.PathScaleMode.h: include/Uno.Int.h

include/Fuse.Controls.Placeholder.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Placeholder.h: include/Fuse.Controls.ContentControl.h
include/Fuse.Controls.Placeholder.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Placeholder.h: include/Fuse.IDataContext.h
include/Fuse.Controls.Placeholder.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.Placeholder.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.Placeholder.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Placeholder.h: include/Fuse.Triggers.Actions.IShow.h

include/Fuse.Controls.PlainTextEdit.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.PlainTextEdit.h: include/Fuse.Controls.ParentControl.h
include/Fuse.Controls.PlainTextEdit.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.PlainTextEdit.h: include/Fuse.IDataContext.h
include/Fuse.Controls.PlainTextEdit.h: include/Fuse.IObjectContainer.h
include/Fuse.Controls.PlainTextEdit.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.PlainTextEdit.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.PlainTextEdit.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.PlainTextEdit.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.PlainTextEdit.h: include/Fuse.Triggers.Actions.IShow.h

include/Fuse.Controls.PropertyBinding-1.h: include/Fuse.Behavior.h

include/Fuse.Controls.RangeControl.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.RangeControl.h: include/Fuse.Controls.ParentControl.h
include/Fuse.Controls.RangeControl.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.RangeControl.h: include/Fuse.IDataContext.h
include/Fuse.Controls.RangeControl.h: include/Fuse.IObjectContainer.h
include/Fuse.Controls.RangeControl.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.RangeControl.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.RangeControl.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.RangeControl.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.RangeControl.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.RangeControl.h: include/Fuse.Triggers.IProgress.h
include/Fuse.Controls.RangeControl.h: include/Fuse.Triggers.IValue-1.h
include/Fuse.Controls.RangeControl.h: include/Uno.Double.h

include/Fuse.Controls.RangeControl2D.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.RangeControl2D.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.RangeControl2D.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.RangeControl2D.h: include/Fuse.IDataContext.h
include/Fuse.Controls.RangeControl2D.h: include/Fuse.IObjectContainer.h
include/Fuse.Controls.RangeControl2D.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.RangeControl2D.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.RangeControl2D.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.RangeControl2D.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.RangeControl2D.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.RangeControl2D.h: include/Fuse.Triggers.IValue-1.h
include/Fuse.Controls.RangeControl2D.h: include/Uno.Float2.h

include/Fuse.Controls.Rectangle.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Rectangle.h: include/Fuse.Controls.Shape.h
include/Fuse.Controls.Rectangle.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Rectangle.h: include/Fuse.IDataContext.h
include/Fuse.Controls.Rectangle.h: include/Fuse.IObjectContainer.h
include/Fuse.Controls.Rectangle.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.Rectangle.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.Rectangle.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.Rectangle.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Rectangle.h: include/Fuse.Triggers.Actions.IShow.h

include/Fuse.Controls.RegularPolygon.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.RegularPolygon.h: include/Fuse.Controls.Shape.h
include/Fuse.Controls.RegularPolygon.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.RegularPolygon.h: include/Fuse.IDataContext.h
include/Fuse.Controls.RegularPolygon.h: include/Fuse.IObjectContainer.h
include/Fuse.Controls.RegularPolygon.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.RegularPolygon.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.RegularPolygon.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.RegularPolygon.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.RegularPolygon.h: include/Fuse.Triggers.Actions.IShow.h

include/Fuse.Controls.ScrollPositionChangedArgs.h: include/Uno.EventArgs.h

include/Fuse.Controls.ScrollPositionChangedHandler.h: include/Uno.Delegate.h

include/Fuse.Controls.ScrollPropertyChangedArgs.h: include/Uno.EventArgs.h

include/Fuse.Controls.ScrollPropertyChangedHandler.h: include/Uno.Delegate.h

include/Fuse.Controls.ScrollView.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.ScrollView.h: include/Fuse.Controls.ContentControl.h
include/Fuse.Controls.ScrollView.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.ScrollView.h: include/Fuse.IDataContext.h
include/Fuse.Controls.ScrollView.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.ScrollView.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.ScrollView.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.ScrollView.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.ScrollView.h: include/Uno.Float2.h

include/Fuse.Controls.ScrollViewer.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.ScrollViewer.h: include/Fuse.Controls.ScrollView.h
include/Fuse.Controls.ScrollViewer.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.ScrollViewer.h: include/Fuse.IDataContext.h
include/Fuse.Controls.ScrollViewer.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.ScrollViewer.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.ScrollViewer.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.ScrollViewer.h: include/Fuse.Triggers.Actions.IShow.h

include/Fuse.Controls.Shape.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Shape.h: include/Fuse.Controls.ParentControl.h
include/Fuse.Controls.Shape.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Shape.h: include/Fuse.IDataContext.h
include/Fuse.Controls.Shape.h: include/Fuse.IObjectContainer.h
include/Fuse.Controls.Shape.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.Shape.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.Shape.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.Shape.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Shape.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Shape.h: include/Uno.Float4.h

include/Fuse.Controls.Slider.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Slider.h: include/Fuse.Controls.RangeControl.h
include/Fuse.Controls.Slider.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Slider.h: include/Fuse.IDataContext.h
include/Fuse.Controls.Slider.h: include/Fuse.IObjectContainer.h
include/Fuse.Controls.Slider.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.Slider.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.Slider.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.Slider.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Slider.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Slider.h: include/Fuse.Triggers.IProgress.h
include/Fuse.Controls.Slider.h: include/Fuse.Triggers.IValue-1.h
include/Fuse.Controls.Slider.h: include/Uno.Double.h

include/Fuse.Controls.StackPanel.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.StackPanel.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.StackPanel.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.StackPanel.h: include/Fuse.IDataContext.h
include/Fuse.Controls.StackPanel.h: include/Fuse.IObjectContainer.h
include/Fuse.Controls.StackPanel.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.StackPanel.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.StackPanel.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.StackPanel.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.StackPanel.h: include/Fuse.Triggers.Actions.IShow.h

include/Fuse.Controls.Star.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Star.h: include/Fuse.Controls.Shape.h
include/Fuse.Controls.Star.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Star.h: include/Fuse.IDataContext.h
include/Fuse.Controls.Star.h: include/Fuse.IObjectContainer.h
include/Fuse.Controls.Star.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.Star.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.Star.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.Star.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Star.h: include/Fuse.Triggers.Actions.IShow.h

include/Fuse.Controls.StatusBarBackground.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.StatusBarBackground.h: include/Fuse.Controls.TopFrameBackground.h
include/Fuse.Controls.StatusBarBackground.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.StatusBarBackground.h: include/Fuse.IDataContext.h
include/Fuse.Controls.StatusBarBackground.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.StatusBarBackground.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.StatusBarBackground.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.StatusBarBackground.h: include/Fuse.Triggers.Actions.IShow.h

include/Fuse.Controls.Switch.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Switch.h: include/Fuse.Controls.ToggleControl.h
include/Fuse.Controls.Switch.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Switch.h: include/Fuse.IDataContext.h
include/Fuse.Controls.Switch.h: include/Fuse.IObjectContainer.h
include/Fuse.Controls.Switch.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.Switch.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.Switch.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.Switch.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Switch.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Switch.h: include/Fuse.Triggers.IValue-1.h
include/Fuse.Controls.Switch.h: include/Uno.Bool.h

include/Fuse.Controls.Text.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Text.h: include/Fuse.Controls.TextBlock.h
include/Fuse.Controls.Text.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Text.h: include/Fuse.IDataContext.h
include/Fuse.Controls.Text.h: include/Fuse.IObjectContainer.h
include/Fuse.Controls.Text.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.Text.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.Text.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.Text.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Text.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Text.h: include/Fuse.Triggers.IValue-1.h
include/Fuse.Controls.Text.h: include/Uno.String.h

include/Fuse.Controls.TextBlock.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.TextBlock.h: include/Fuse.Controls.TextControl.h
include/Fuse.Controls.TextBlock.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.TextBlock.h: include/Fuse.IDataContext.h
include/Fuse.Controls.TextBlock.h: include/Fuse.IObjectContainer.h
include/Fuse.Controls.TextBlock.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.TextBlock.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.TextBlock.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.TextBlock.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.TextBlock.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.TextBlock.h: include/Fuse.Triggers.IValue-1.h
include/Fuse.Controls.TextBlock.h: include/Uno.String.h

include/Fuse.Controls.TextControl.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.TextControl.h: include/Fuse.Controls.ParentControl.h
include/Fuse.Controls.TextControl.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.TextControl.h: include/Fuse.IDataContext.h
include/Fuse.Controls.TextControl.h: include/Fuse.IObjectContainer.h
include/Fuse.Controls.TextControl.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.TextControl.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.TextControl.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.TextControl.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.TextControl.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.TextControl.h: include/Fuse.Triggers.IValue-1.h
include/Fuse.Controls.TextControl.h: include/Uno.String.h
include/Fuse.Controls.TextControl.h: include/Uno.Float4.h

include/Fuse.Controls.TextEdit.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.TextEdit.h: include/Fuse.Controls.TextControl.h
include/Fuse.Controls.TextEdit.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.TextEdit.h: include/Fuse.IDataContext.h
include/Fuse.Controls.TextEdit.h: include/Fuse.IObjectContainer.h
include/Fuse.Controls.TextEdit.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.TextEdit.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.TextEdit.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.TextEdit.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.TextEdit.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.TextEdit.h: include/Fuse.Triggers.IValue-1.h
include/Fuse.Controls.TextEdit.h: include/Uno.String.h

include/Fuse.Controls.TextInput.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.TextInput.h: include/Fuse.Controls.TextEdit.h
include/Fuse.Controls.TextInput.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.TextInput.h: include/Fuse.IDataContext.h
include/Fuse.Controls.TextInput.h: include/Fuse.IObjectContainer.h
include/Fuse.Controls.TextInput.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.TextInput.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.TextInput.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.TextInput.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.TextInput.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.TextInput.h: include/Fuse.Triggers.IValue-1.h
include/Fuse.Controls.TextInput.h: include/Uno.String.h

include/Fuse.Controls.TextInputActionArgs.h: include/Fuse.NodeEventArgs.h
include/Fuse.Controls.TextInputActionArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Controls.TextInputActionHandler.h: include/Uno.Delegate.h

include/Fuse.Controls.TextInputActionStyle.h: include/Uno.Int.h

include/Fuse.Controls.TextInputActionType.h: include/Uno.Int.h

include/Fuse.Controls.Toggle.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Controls.ToggleControl.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.ToggleControl.h: include/Fuse.Controls.ParentControl.h
include/Fuse.Controls.ToggleControl.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.ToggleControl.h: include/Fuse.IDataContext.h
include/Fuse.Controls.ToggleControl.h: include/Fuse.IObjectContainer.h
include/Fuse.Controls.ToggleControl.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.ToggleControl.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.ToggleControl.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.ToggleControl.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.ToggleControl.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.ToggleControl.h: include/Fuse.Triggers.IValue-1.h
include/Fuse.Controls.ToggleControl.h: include/Uno.Bool.h

include/Fuse.Controls.TopFrameBackground.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.TopFrameBackground.h: include/Fuse.Controls.Control.h
include/Fuse.Controls.TopFrameBackground.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.TopFrameBackground.h: include/Fuse.IDataContext.h
include/Fuse.Controls.TopFrameBackground.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.TopFrameBackground.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.TopFrameBackground.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.TopFrameBackground.h: include/Fuse.Triggers.Actions.IShow.h

include/Fuse.Controls.UrlVideoSource.h: include/Fuse.Controls.VideoSource.h

include/Fuse.Controls.Video.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Video.h: include/Fuse.Controls.ParentControl.h
include/Fuse.Controls.Video.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Video.h: include/Fuse.IDataContext.h
include/Fuse.Controls.Video.h: include/Fuse.IObjectContainer.h
include/Fuse.Controls.Video.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.Video.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.Video.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.Video.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Video.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Video.h: include/Fuse.Triggers.IMediaPlayback.h
include/Fuse.Controls.Video.h: include/Fuse.Triggers.IPlayback.h
include/Fuse.Controls.Video.h: include/Fuse.Triggers.IProgress.h
include/Fuse.Controls.Video.h: include/Uno.Float4.h

include/Fuse.Controls.VideoSource.h: include/Uno.Object.h

include/Fuse.Controls.Viewbox.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.Viewbox.h: include/Fuse.Controls.ContentControl.h
include/Fuse.Controls.Viewbox.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.Viewbox.h: include/Fuse.IDataContext.h
include/Fuse.Controls.Viewbox.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.Viewbox.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.Viewbox.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.Viewbox.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.Viewbox.h: include/Uno.Float2.h

include/Fuse.Controls.WebView.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.WebView.h: include/Fuse.Controls.ISourceReceiver.h
include/Fuse.Controls.WebView.h: include/Fuse.Controls.IWebView.h
include/Fuse.Controls.WebView.h: include/Fuse.Controls.ParentControl.h
include/Fuse.Controls.WebView.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.WebView.h: include/Fuse.IDataContext.h
include/Fuse.Controls.WebView.h: include/Fuse.IObjectContainer.h
include/Fuse.Controls.WebView.h: include/Fuse.Navigation.IBaseNavigation.h
include/Fuse.Controls.WebView.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.WebView.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.WebView.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.WebView.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.WebView.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Controls.WebView.h: include/Fuse.Triggers.IProgress.h

include/Fuse.Controls.WrapPanel.h: include/Fuse.Animations.IResize.h
include/Fuse.Controls.WrapPanel.h: include/Fuse.Controls.Panel.h
include/Fuse.Controls.WrapPanel.h: include/Fuse.IActualPlacement.h
include/Fuse.Controls.WrapPanel.h: include/Fuse.IDataContext.h
include/Fuse.Controls.WrapPanel.h: include/Fuse.IObjectContainer.h
include/Fuse.Controls.WrapPanel.h: include/Fuse.Navigation.INavigationPanel.h
include/Fuse.Controls.WrapPanel.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Controls.WrapPanel.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Controls.WrapPanel.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Controls.WrapPanel.h: include/Fuse.Triggers.Actions.IShow.h

include/Fuse.DataContextChangedArgs.h: include/Uno.EventArgs.h

include/Fuse.DataContextChangedHandler.h: include/Uno.Delegate.h

include/Fuse.Designer.AdvancedAttribute.h: include/Uno.Attribute.h

include/Fuse.Designer.ChildExtensionAttribute.h: include/Uno.Attribute.h

include/Fuse.Designer.ColorAttribute.h: include/Uno.Attribute.h

include/Fuse.Designer.ComponentOfAttribute.h: include/Uno.Attribute.h

include/Fuse.Designer.DefaultComponentAttribute.h: include/Uno.Attribute.h

include/Fuse.Designer.DefaultInstanceAttribute.h: include/Uno.Attribute.h

include/Fuse.Designer.DesignerNameAttribute.h: include/Uno.Attribute.h

include/Fuse.Designer.DragDropPriorityAttribute.h: include/Uno.Attribute.h

include/Fuse.Designer.ExtensionAttribute.h: include/Uno.Attribute.h

include/Fuse.Designer.GroupAttribute.h: include/Uno.Attribute.h

include/Fuse.Designer.HideAttribute.h: include/Uno.Attribute.h

include/Fuse.Designer.HidesAttribute.h: include/Uno.Attribute.h

include/Fuse.Designer.IconAttribute.h: include/Uno.Attribute.h

include/Fuse.Designer.InlineAttribute.h: include/Uno.Attribute.h

include/Fuse.Designer.IntervalAttribute.h: include/Uno.Attribute.h

include/Fuse.Designer.OptionalHideAttribute.h: include/Uno.Attribute.h

include/Fuse.Designer.PriorityAttribute.h: include/Uno.Attribute.h

include/Fuse.Designer.RangeAttribute.h: include/Uno.Attribute.h

include/Fuse.Designer.RecursionSafeAttribute.h: include/Uno.Attribute.h

include/Fuse.Designer.RequiredComponentAttribute.h: include/Uno.Attribute.h

include/Fuse.Designer.SpawnableAttribute.h: include/Uno.Attribute.h

include/Fuse.Designer.SpawnsAttribute.h: include/Uno.Attribute.h

include/Fuse.Designer.ThicknessAttribute.h: include/Uno.Attribute.h

include/Fuse.Designer.TransitionAttribute.h: include/Uno.Attribute.h

include/Fuse.Desktop.DesktopRootViewport.h: include/Fuse.IDataContext.h
include/Fuse.Desktop.DesktopRootViewport.h: include/Fuse.IViewport.h
include/Fuse.Desktop.DesktopRootViewport.h: include/Fuse.RootViewport.h
include/Fuse.Desktop.DesktopRootViewport.h: include/Fuse.Scripting.INameScope.h

include/Fuse.Desktop.NativeStyle.h: include/Fuse.Style.h
include/Fuse.Desktop.NativeStyle.h: include/Uno.UX.ITemplate.h

include/Fuse.Desktop.NativeStyle.Template.h: include/Fuse.Controls.TextBlock.h
include/Fuse.Desktop.NativeStyle.Template.h: include/Uno.UX.ITemplate.h
include/Fuse.Desktop.NativeStyle.Template.h: include/Uno.UX.Template-1.h

include/Fuse.Desktop.NativeStyle.Template1.Factory.h: include/Uno.UX.Factory.h

include/Fuse.Desktop.NativeStyle.Template1.h: include/Fuse.Controls.PlainTextEdit.h
include/Fuse.Desktop.NativeStyle.Template1.h: include/Uno.UX.ITemplate.h
include/Fuse.Desktop.NativeStyle.Template1.h: include/Uno.UX.Template-1.h

include/Fuse.Diagnostics.h: include/Uno.h

include/Fuse.DrawArgs.h: include/Uno.EventArgs.h

include/Fuse.DrawContext.h: include/Uno.Int4.h
include/Fuse.DrawContext.h: include/Uno.Object.h
include/Fuse.DrawContext.h: include/Uno/GraphicsContext.h

include/Fuse.DrawHandler.h: include/Uno.Delegate.h

include/Fuse.DrawHelpers.h: include/Uno.Float2.h
include/Fuse.DrawHelpers.h: include/Uno.Object.h
include/Fuse.DrawHelpers.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Drawing.Antialiasing.h: include/Uno.Int.h

include/Fuse.Drawing.Batching.Batch.h: include/Uno.Object.h

include/Fuse.Drawing.Batching.BatchHelpers.h: include/Uno.h

include/Fuse.Drawing.Batching.BatchIndexBuffer.h: include/Uno.Object.h

include/Fuse.Drawing.Batching.BatchVertexBuffer.h: include/Uno.Object.h

include/Fuse.Drawing.Batching.Entry.h: include/Uno.Object.h

include/Fuse.Drawing.Batching.MeshBatcher.h: include/Uno.Object.h

include/Fuse.Drawing.BezierOp.h: include/Uno.h

include/Fuse.Drawing.BlendMode.h: include/Uno.Int.h

include/Fuse.Drawing.BlendModeHelpers.h: include/Uno.h

include/Fuse.Drawing.Border.h: include/Uno.Float2.h
include/Fuse.Drawing.Border.h: include/Uno.Float4.h
include/Fuse.Drawing.Border.h: include/Uno.Object.h
include/Fuse.Drawing.Border.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Drawing.Brush.h: include/Uno.Object.h
include/Fuse.Drawing.Brush.h: include/Uno.Float2.h

include/Fuse.Drawing.Brushes.h: include/Uno.h

include/Fuse.Drawing.ButtCap.h: include/Fuse.Drawing.LineCapImpl.h

include/Fuse.Drawing.Cache-1.h: include/Uno.Object.h

include/Fuse.Drawing.ClosePath.h: include/Fuse.Drawing.ContourTerminator.h
include/Fuse.Drawing.ClosePath.h: include/Uno.Float2.h

include/Fuse.Drawing.Colors.h: include/Uno.h

include/Fuse.Drawing.Contour.h: include/Uno.Float2.h
include/Fuse.Drawing.Contour.h: include/Uno.Object.h

include/Fuse.Drawing.ContourEnumerable.h: include/Fuse.Drawing.Contour.h
include/Fuse.Drawing.ContourEnumerable.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Drawing.ContourEnumerable.h: include/Uno.Float2.h
include/Fuse.Drawing.ContourEnumerable.h: include/Uno.Object.h

include/Fuse.Drawing.ContourEnumerator.h: include/Fuse.Drawing.Contour.h
include/Fuse.Drawing.ContourEnumerator.h: include/Uno.Collections.IEnumerator.h
include/Fuse.Drawing.ContourEnumerator.h: include/Uno.Collections.IEnumerator-1.h
include/Fuse.Drawing.ContourEnumerator.h: include/Uno.Float2.h
include/Fuse.Drawing.ContourEnumerator.h: include/Uno.IDisposable.h
include/Fuse.Drawing.ContourEnumerator.h: include/Uno.Object.h

include/Fuse.Drawing.ContourTerminator.h: include/Fuse.Drawing.PathGeometry.h

include/Fuse.Drawing.CurveTo.h: include/Fuse.Drawing.PathGeometry.h
include/Fuse.Drawing.CurveTo.h: include/Uno.Float2.h

include/Fuse.Drawing.DynamicBrush.h: include/Fuse.Drawing.Brush.h

include/Fuse.Drawing.EllipseFactory.h: include/Uno.h

include/Fuse.Drawing.GradientStop.h: include/Uno.Float4.h
include/Fuse.Drawing.GradientStop.h: include/Uno.Object.h

include/Fuse.Drawing.HorizontalLineTo.h: include/Fuse.Drawing.LineTo.h

include/Fuse.Drawing.ImageFill.DrawParams.h: include/Uno.Float2.h
include/Fuse.Drawing.ImageFill.DrawParams.h: include/Uno.Float4.h
include/Fuse.Drawing.ImageFill.DrawParams.h: include/Uno.Object.h

include/Fuse.Drawing.ImageFill.h: include/Fuse.Drawing.DynamicBrush.h
include/Fuse.Drawing.ImageFill.h: include/Fuse.Internal.IImageContainerOwner.h
include/Fuse.Drawing.ImageFill.h: include/Uno.Float4.h

include/Fuse.Drawing.Internal.Float2Buffer.h: include/Fuse.Drawing.Internal.TypedBuffer.h

include/Fuse.Drawing.Internal.Float3Buffer.h: include/Fuse.Drawing.Internal.TypedBuffer.h

include/Fuse.Drawing.Internal.FloatBuffer.h: include/Fuse.Drawing.Internal.TypedBuffer.h

include/Fuse.Drawing.Internal.MultiBuffer.Field.h: include/Uno.Object.h

include/Fuse.Drawing.Internal.MultiBuffer.h: include/Fuse.Drawing.Internal.TypedBuffer.h

include/Fuse.Drawing.Internal.MultiBuffer.Setter.h: include/Uno.Object.h

include/Fuse.Drawing.Internal.TypedBuffer.h: include/Uno.Object.h

include/Fuse.Drawing.Internal.UShortBuffer.h: include/Fuse.Drawing.Internal.TypedBuffer.h

include/Fuse.Drawing.ISolidColor.h: include/Uno.Object.h
include/Fuse.Drawing.ISolidColor.h: include/Uno.Float4.h

include/Fuse.Drawing.LinearGradient.h: include/Fuse.Drawing.DynamicBrush.h
include/Fuse.Drawing.LinearGradient.h: include/Uno.Float2.h

include/Fuse.Drawing.LinearGradientDrawable.h: include/Uno.Float2.h
include/Fuse.Drawing.LinearGradientDrawable.h: include/Uno.Object.h
include/Fuse.Drawing.LinearGradientDrawable.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Drawing.LineCap.h: include/Uno.Int.h

include/Fuse.Drawing.LineCapImpl.h: include/Uno.Object.h
include/Fuse.Drawing.LineCapImpl.h: include/Uno.Float2.h

include/Fuse.Drawing.LineJoin.h: include/Uno.Int.h

include/Fuse.Drawing.LineJoinImpl.h: include/Uno.Object.h
include/Fuse.Drawing.LineJoinImpl.h: include/Uno.Float2.h

include/Fuse.Drawing.LineTo.h: include/Fuse.Drawing.PathGeometry.h
include/Fuse.Drawing.LineTo.h: include/Uno.Float2.h

include/Fuse.Drawing.Meshes.MeshGenerator.h: include/Uno.h

include/Fuse.Drawing.Meshes.MeshTools.h: include/Uno.h

include/Fuse.Drawing.MiterJoin.h: include/Fuse.Drawing.LineJoinImpl.h

include/Fuse.Drawing.MoveTo.h: include/Fuse.Drawing.ContourTerminator.h

include/Fuse.Drawing.NonConsecutiveEnumerable.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Drawing.NonConsecutiveEnumerable.h: include/Uno.Float2.h
include/Fuse.Drawing.NonConsecutiveEnumerable.h: include/Uno.Object.h

include/Fuse.Drawing.NonConsecutiveEnumerator.h: include/Uno.Collections.IEnumerator.h
include/Fuse.Drawing.NonConsecutiveEnumerator.h: include/Uno.Collections.IEnumerator-1.h
include/Fuse.Drawing.NonConsecutiveEnumerator.h: include/Uno.Float2.h
include/Fuse.Drawing.NonConsecutiveEnumerator.h: include/Uno.IDisposable.h
include/Fuse.Drawing.NonConsecutiveEnumerator.h: include/Uno.Object.h

include/Fuse.Drawing.NonConsecutiveExtension.h: include/Uno.h

include/Fuse.Drawing.PathGeometry.h: include/Uno.Float2.h
include/Fuse.Drawing.PathGeometry.h: include/Uno.Object.h
include/Fuse.Drawing.PathGeometry.h: include/Uno.Rect.h

include/Fuse.Drawing.PathGeometryExtensions.h: include/Uno.h

include/Fuse.Drawing.PathGeometryParser.h: include/Uno.Object.h

include/Fuse.Drawing.PathGeometryRenderer.h: include/Uno.Float2.h
include/Fuse.Drawing.PathGeometryRenderer.h: include/Uno.Float4.h
include/Fuse.Drawing.PathGeometryRenderer.h: include/Uno.Object.h
include/Fuse.Drawing.PathGeometryRenderer.h: include/Uno.Rect.h

include/Fuse.Drawing.Polygon.h: include/Uno.Object.h

include/Fuse.Drawing.PolygonDrawable.h: include/Uno.Float2.h
include/Fuse.Drawing.PolygonDrawable.h: include/Uno.Object.h
include/Fuse.Drawing.PolygonDrawable.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Drawing.PolygonFiller.h: include/Uno.IDisposable.h
include/Fuse.Drawing.PolygonFiller.h: include/Uno.Object.h
include/Fuse.Drawing.PolygonFiller.h: include/Uno.Rect.h

include/Fuse.Drawing.Primitives.Circle.h: include/Uno.Object.h
include/Fuse.Drawing.Primitives.Circle.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Drawing.Primitives.ConcaveWedgeCoverage.h: include/Fuse.Drawing.Primitives.WedgeCoverage.h

include/Fuse.Drawing.Primitives.ConvexWedgeCoverage.h: include/Fuse.Drawing.Primitives.WedgeCoverage.h

include/Fuse.Drawing.Primitives.Coverage.h: include/Uno.Object.h

include/Fuse.Drawing.Primitives.FillCoverage.h: include/Fuse.Drawing.Primitives.Coverage.h

include/Fuse.Drawing.Primitives.LimitCoverage.h: include/Uno.Object.h

include/Fuse.Drawing.Primitives.OneLimitCoverage.h: include/Fuse.Drawing.Primitives.LimitCoverage.h

include/Fuse.Drawing.Primitives.Rectangle.h: include/Uno.Graphics.VertexAttributeInfo.h
include/Fuse.Drawing.Primitives.Rectangle.h: include/Uno.Object.h
include/Fuse.Drawing.Primitives.Rectangle.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Drawing.Primitives.StrokeCoverage.h: include/Fuse.Drawing.Primitives.Coverage.h

include/Fuse.Drawing.Primitives.Wedge.h: include/Uno.Object.h

include/Fuse.Drawing.Primitives.WedgeCoverage.h: include/Fuse.Drawing.Primitives.LimitCoverage.h

include/Fuse.Drawing.RectangleFactory.h: include/Uno.h

include/Fuse.Drawing.RegularPolygonFactory.h: include/Uno.h

include/Fuse.Drawing.RendererContext.h: include/Uno.Float2.h
include/Fuse.Drawing.RendererContext.h: include/Uno.Float4x4.h
include/Fuse.Drawing.RendererContext.h: include/Uno.Object.h

include/Fuse.Drawing.ResampleMode.h: include/Uno.Int.h

include/Fuse.Drawing.RoundCap.h: include/Fuse.Drawing.LineCapImpl.h

include/Fuse.Drawing.SmoothCurveTo.h: include/Fuse.Drawing.CurveTo.h

include/Fuse.Drawing.SolidColor.h: include/Fuse.Drawing.DynamicBrush.h
include/Fuse.Drawing.SolidColor.h: include/Fuse.Drawing.ISolidColor.h
include/Fuse.Drawing.SolidColor.h: include/Uno.Float4.h

include/Fuse.Drawing.StarFactory.h: include/Uno.h

include/Fuse.Drawing.StaticBrush.h: include/Fuse.Drawing.Brush.h

include/Fuse.Drawing.StaticSolidColor.h: include/Fuse.Drawing.ISolidColor.h
include/Fuse.Drawing.StaticSolidColor.h: include/Fuse.Drawing.StaticBrush.h
include/Fuse.Drawing.StaticSolidColor.h: include/Uno.Float4.h

include/Fuse.Drawing.Stroke.h: include/Uno.Object.h

include/Fuse.Drawing.StrokeAdjustment.h: include/Uno.Int.h

include/Fuse.Drawing.StrokeAlignment.h: include/Uno.Int.h

include/Fuse.Drawing.Tesselation.ActiveRegion.h: include/Uno.Object.h

include/Fuse.Drawing.Tesselation.Collections.ActiveRegionDict.h: include/Fuse.Drawing.Tesselation.ActiveRegion.h
include/Fuse.Drawing.Tesselation.Collections.ActiveRegionDict.h: include/Fuse.Drawing.Tesselation.Collections.Dict-1.h

include/Fuse.Drawing.Tesselation.Collections.Dict-1.h: include/Uno.Object.h

include/Fuse.Drawing.Tesselation.Collections.DictNode-1.h: include/Uno.Object.h

include/Fuse.Drawing.Tesselation.Collections.DictNodeEnumerable-1.h: include/Fuse.Drawing.Tesselation.Collections.DictNode-1.h
include/Fuse.Drawing.Tesselation.Collections.DictNodeEnumerable-1.h: include/Fuse.Drawing.Tesselation.Collections.LinkedListEnumerable-1.h
include/Fuse.Drawing.Tesselation.Collections.DictNodeEnumerable-1.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Drawing.Tesselation.Collections.DictNodeEnumerable-1.h: include/Uno.Object.h

include/Fuse.Drawing.Tesselation.Collections.LinkedListEnumerable-1.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Drawing.Tesselation.Collections.LinkedListEnumerable-1.h: include/Uno.Object.h

include/Fuse.Drawing.Tesselation.Collections.LinkedListEnumerator-1.h: include/Uno.Collections.IEnumerator.h
include/Fuse.Drawing.Tesselation.Collections.LinkedListEnumerator-1.h: include/Uno.Collections.IEnumerator-1.h
include/Fuse.Drawing.Tesselation.Collections.LinkedListEnumerator-1.h: include/Uno.IDisposable.h
include/Fuse.Drawing.Tesselation.Collections.LinkedListEnumerator-1.h: include/Uno.Object.h

include/Fuse.Drawing.Tesselation.Collections.PriorityQueue-1.h: include/Uno.Object.h

include/Fuse.Drawing.Tesselation.Collections.VertexQueue.h: include/Fuse.Drawing.Tesselation.Collections.PriorityQueue-1.h
include/Fuse.Drawing.Tesselation.Collections.VertexQueue.h: include/Fuse.Drawing.Tesselation.Vertex.h

include/Fuse.Drawing.Tesselation.EdgeLoopEnumerable.h: include/Fuse.Drawing.Tesselation.Collections.LinkedListEnumerable-1.h
include/Fuse.Drawing.Tesselation.EdgeLoopEnumerable.h: include/Fuse.Drawing.Tesselation.HalfEdge.h
include/Fuse.Drawing.Tesselation.EdgeLoopEnumerable.h: include/Uno.Collections.IEnumerable-1.h

include/Fuse.Drawing.Tesselation.EdgesEnumerable.h: include/Fuse.Drawing.Tesselation.Collections.LinkedListEnumerable-1.h
include/Fuse.Drawing.Tesselation.EdgesEnumerable.h: include/Fuse.Drawing.Tesselation.HalfEdge.h
include/Fuse.Drawing.Tesselation.EdgesEnumerable.h: include/Uno.Collections.IEnumerable-1.h

include/Fuse.Drawing.Tesselation.Face.h: include/Uno.Object.h

include/Fuse.Drawing.Tesselation.FacesEnumerable.h: include/Fuse.Drawing.Tesselation.Collections.LinkedListEnumerable-1.h
include/Fuse.Drawing.Tesselation.FacesEnumerable.h: include/Fuse.Drawing.Tesselation.Face.h
include/Fuse.Drawing.Tesselation.FacesEnumerable.h: include/Uno.Collections.IEnumerable-1.h

include/Fuse.Drawing.Tesselation.Geom.h: include/Uno.h

include/Fuse.Drawing.Tesselation.HalfEdge.h: include/Uno.Object.h

include/Fuse.Drawing.Tesselation.Mesh.h: include/Uno.Object.h

include/Fuse.Drawing.Tesselation.MeshBuilder.h: include/Uno.Object.h

include/Fuse.Drawing.Tesselation.OriginEnumerable.h: include/Fuse.Drawing.Tesselation.Collections.LinkedListEnumerable-1.h
include/Fuse.Drawing.Tesselation.OriginEnumerable.h: include/Fuse.Drawing.Tesselation.HalfEdge.h
include/Fuse.Drawing.Tesselation.OriginEnumerable.h: include/Uno.Collections.IEnumerable-1.h

include/Fuse.Drawing.Tesselation.Sweep.h: include/Uno.Object.h

include/Fuse.Drawing.Tesselation.Vertex.h: include/Uno.Object.h

include/Fuse.Drawing.Tesselation.VerticesEnumerable.h: include/Fuse.Drawing.Tesselation.Collections.LinkedListEnumerable-1.h
include/Fuse.Drawing.Tesselation.VerticesEnumerable.h: include/Fuse.Drawing.Tesselation.Vertex.h
include/Fuse.Drawing.Tesselation.VerticesEnumerable.h: include/Uno.Collections.IEnumerable-1.h

include/Fuse.Drawing.Token.h: include/Uno.Object.h

include/Fuse.Drawing.Util.h: include/Uno.Object.h

include/Fuse.Drawing.VerticalLineTo.h: include/Fuse.Drawing.LineTo.h

include/Fuse.Drawing.WindingRules.h: include/Uno.h

include/Fuse.Effects.BasicEffect.h: include/Fuse.Effects.Effect.h
include/Fuse.Effects.BasicEffect.h: include/Uno.Rect.h
include/Fuse.Effects.BasicEffect.h: include/Uno.Recti.h

include/Fuse.Effects.Blur.h: include/Fuse.Effects.BasicEffect.h
include/Fuse.Effects.Blur.h: include/Uno.Float4x4.h
include/Fuse.Effects.Blur.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Effects.Desaturate.h: include/Fuse.Effects.BasicEffect.h
include/Fuse.Effects.Desaturate.h: include/Uno.Float4x4.h
include/Fuse.Effects.Desaturate.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Effects.DropShadow.Blitter.h: include/Uno.Float4x4.h
include/Fuse.Effects.DropShadow.Blitter.h: include/Uno.Object.h
include/Fuse.Effects.DropShadow.Blitter.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Effects.DropShadow.h: include/Fuse.Effects.BasicEffect.h
include/Fuse.Effects.DropShadow.h: include/Uno.Float4.h

include/Fuse.Effects.Effect.h: include/Uno.Object.h
include/Fuse.Effects.Effect.h: include/Uno.Rect.h

include/Fuse.Effects.EffectHelpers.h: include/Uno.Object.h
include/Fuse.Effects.EffectHelpers.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Effects.EffectType.h: include/Uno.Int.h

include/Fuse.Effects.Halftone.h: include/Fuse.Effects.BasicEffect.h
include/Fuse.Effects.Halftone.h: include/Uno.Float4x4.h
include/Fuse.Effects.Halftone.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Effects.Mask.h: include/Fuse.Effects.BasicEffect.h
include/Fuse.Effects.Mask.h: include/Fuse.Internal.IImageContainerOwner.h
include/Fuse.Effects.Mask.h: include/Uno.Float4x4.h
include/Fuse.Effects.Mask.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Effects.Mask.MaskMode.h: include/Uno.Int.h

include/Fuse.Elements.Alignment.h: include/Uno.Int.h

include/Fuse.Elements.AlignmentHelpers.h: include/Uno.h

include/Fuse.Elements.BoxPlacement.h: include/Uno.Float2.h
include/Fuse.Elements.BoxPlacement.h: include/Uno.Object.h

include/Fuse.Elements.BoxSizing.ConstraintFlags.h: include/Uno.Int.h

include/Fuse.Elements.BoxSizing.h: include/Uno.Object.h
include/Fuse.Elements.BoxSizing.h: include/Fuse.Elements.BoxPlacement.h
include/Fuse.Elements.BoxSizing.h: include/Fuse.LayoutParams.h
include/Fuse.Elements.BoxSizing.h: include/Uno.Float2.h

include/Fuse.Elements.Cache.h: include/Fuse.Elements.CacheTile.h
include/Fuse.Elements.Cache.h: include/Uno.Object.h
include/Fuse.Elements.Cache.h: include/Uno.Recti.h

include/Fuse.Elements.CacheHelper.h: include/Uno.Float2.h
include/Fuse.Elements.CacheHelper.h: include/Uno.Object.h
include/Fuse.Elements.CacheHelper.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Elements.CacheTile.h: include/Uno.Float4x4.h
include/Fuse.Elements.CacheTile.h: include/Uno.Object.h
include/Fuse.Elements.CacheTile.h: include/Uno.Recti.h

include/Fuse.Elements.CachingMode.h: include/Uno.Int.h

include/Fuse.Elements.DisplayHelpers.h: include/Uno.h

include/Fuse.Elements.Element.BoxSizingMode.h: include/Uno.Int.h

include/Fuse.Elements.Element.GMSCacheItem.h: include/Fuse.LayoutParams.h
include/Fuse.Elements.Element.GMSCacheItem.h: include/Uno.Float2.h
include/Fuse.Elements.Element.GMSCacheItem.h: include/Uno.Object.h

include/Fuse.Elements.Element.h: include/Fuse.Animations.IResize.h
include/Fuse.Elements.Element.h: include/Fuse.Elements.Element.GMSCacheItem.h
include/Fuse.Elements.Element.h: include/Fuse.IActualPlacement.h
include/Fuse.Elements.Element.h: include/Fuse.IDataContext.h
include/Fuse.Elements.Element.h: include/Fuse.Node.h
include/Fuse.Elements.Element.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Elements.Element.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Elements.Element.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Elements.Element.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Elements.Element.h: include/Uno.Float2.h
include/Fuse.Elements.Element.h: include/Uno.Rect.h
include/Fuse.Elements.Element.h: include/Fuse.LayoutParams.h
include/Fuse.Elements.Element.h: include/Uno.Float3.h
include/Fuse.Elements.Element.h: include/Uno.Float4.h
include/Fuse.Elements.Element.h: include/Uno.Geometry.Box.h
include/Fuse.Elements.Element.h: include/Uno.Recti.h

include/Fuse.Elements.ElementAtlas.h: include/Uno.Object.h

include/Fuse.Elements.ElementAtlasFramebuffer.h: include/Uno.Object.h

include/Fuse.Elements.ElementAtlasFramebufferPool.h: include/Uno.h

include/Fuse.Elements.ElementAtlasFramebufferPoolEntry.h: include/Uno.Object.h

include/Fuse.Elements.ElementAtlasFramebufferPoolImpl.h: include/Fuse.Resources.ISoftDisposable.h
include/Fuse.Elements.ElementAtlasFramebufferPoolImpl.h: include/Uno.Object.h

include/Fuse.Elements.ElementBatch.h: include/Fuse.Elements.IElementBatchDrawable.h
include/Fuse.Elements.ElementBatch.h: include/Uno.Graphics.VertexAttributeInfo.h
include/Fuse.Elements.ElementBatch.h: include/Uno.Object.h
include/Fuse.Elements.ElementBatch.h: include/Uno.Rect.h
include/Fuse.Elements.ElementBatch.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Elements.ElementBatchEntry.h: include/Uno.Object.h
include/Fuse.Elements.ElementBatchEntry.h: include/Uno.Recti.h

include/Fuse.Elements.ElementBatcher.h: include/Fuse.Resources.ISoftDisposable.h
include/Fuse.Elements.ElementBatcher.h: include/Uno.Object.h

include/Fuse.Elements.FillAspectBoxSizing.h: include/Fuse.Elements.BoxSizing.h

include/Fuse.Elements.HitTestMode.h: include/Uno.Int.h

include/Fuse.Elements.IElementBatchDrawable.h: include/Uno.Object.h
include/Fuse.Elements.IElementBatchDrawable.h: include/Uno.Float4x4.h
include/Fuse.Elements.IElementBatchDrawable.h: include/Uno.Rect.h

include/Fuse.Elements.InteractiveTransform.h: include/Fuse.Transform.h
include/Fuse.Elements.InteractiveTransform.h: include/Uno.Float2.h

include/Fuse.Elements.Internal.ElementDraw.h: include/Uno.Float4x4.h
include/Fuse.Elements.Internal.ElementDraw.h: include/Uno.Object.h
include/Fuse.Elements.Internal.ElementDraw.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Elements.Internal.Scale9Rectangle.h: include/Uno.Object.h
include/Fuse.Elements.Internal.Scale9Rectangle.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Elements.ITransformOrigin.h: include/Uno.Object.h
include/Fuse.Elements.ITransformOrigin.h: include/Uno.Float3.h

include/Fuse.Elements.LayoutMasterBoxSizing.h: include/Fuse.Elements.BoxSizing.h

include/Fuse.Elements.LayoutMasterBoxSizing.LayoutMasterData.h: include/Uno.Object.h

include/Fuse.Elements.LayoutMasterMode.h: include/Uno.Int.h

include/Fuse.Elements.LimitBoxSizing.h: include/Fuse.Elements.BoxSizing.h

include/Fuse.Elements.NoImplicitMaxBoxSizing.h: include/Fuse.Elements.StandardBoxSizing.h

include/Fuse.Elements.PreplacementArgs.h: include/Uno.EventArgs.h

include/Fuse.Elements.PreplacementHandler.h: include/Uno.Delegate.h

include/Fuse.Elements.SimpleAlignment.h: include/Uno.Int.h

include/Fuse.Elements.SingleNodeDrawable.h: include/Fuse.Elements.IElementBatchDrawable.h
include/Fuse.Elements.SingleNodeDrawable.h: include/Uno.Object.h

include/Fuse.Elements.SizeUnit.h: include/Uno.Int.h

include/Fuse.Elements.StandardBoxSizing.h: include/Fuse.Elements.BoxSizing.h

include/Fuse.Elements.StretchDirection.h: include/Uno.Int.h

include/Fuse.Elements.StretchMode.h: include/Uno.Int.h

include/Fuse.Elements.StretchSizing.h: include/Uno.Int.h

include/Fuse.Elements.TextAlignment.h: include/Uno.Int.h

include/Fuse.Elements.TextureAtlas.h: include/Uno.Int2.h
include/Fuse.Elements.TextureAtlas.h: include/Uno.Object.h
include/Fuse.Elements.TextureAtlas.h: include/Uno.Recti.h

include/Fuse.Elements.TextWrapping.h: include/Uno.Int.h

include/Fuse.Elements.TransformOrigins.AnchorOrigin.h: include/Fuse.Elements.ITransformOrigin.h
include/Fuse.Elements.TransformOrigins.AnchorOrigin.h: include/Uno.Object.h

include/Fuse.Elements.TransformOrigins.BoxCenter.h: include/Fuse.Elements.ITransformOrigin.h
include/Fuse.Elements.TransformOrigins.BoxCenter.h: include/Uno.Float2.h
include/Fuse.Elements.TransformOrigins.BoxCenter.h: include/Uno.Object.h

include/Fuse.Elements.TransformOrigins.CenterOrigin.h: include/Fuse.Elements.ITransformOrigin.h
include/Fuse.Elements.TransformOrigins.CenterOrigin.h: include/Uno.Object.h

include/Fuse.Elements.TransformOrigins.h: include/Uno.h

include/Fuse.Elements.TransformOrigins.TopLeftOrigin.h: include/Fuse.Elements.ITransformOrigin.h
include/Fuse.Elements.TransformOrigins.TopLeftOrigin.h: include/Uno.Object.h

include/Fuse.Elements.TranslationModes.h: include/Uno.h

include/Fuse.Elements.TranslationModes.OffsetMode.h: include/Fuse.ITransformMode.h
include/Fuse.Elements.TranslationModes.OffsetMode.h: include/Fuse.ITranslationMode.h
include/Fuse.Elements.TranslationModes.OffsetMode.h: include/Uno.Object.h
include/Fuse.Elements.TranslationModes.OffsetMode.h: include/Uno.Float3.h

include/Fuse.Elements.TranslationModes.PositionOffsetMode.h: include/Fuse.Elements.TranslationModes.OffsetMode.h
include/Fuse.Elements.TranslationModes.PositionOffsetMode.h: include/Fuse.ITransformMode.h
include/Fuse.Elements.TranslationModes.PositionOffsetMode.h: include/Fuse.ITranslationMode.h

include/Fuse.Elements.TranslationModes.RelativeResizeChangeMode.h: include/Fuse.Animations.IResizeMode.h
include/Fuse.Elements.TranslationModes.RelativeResizeChangeMode.h: include/Fuse.ITransformMode.h
include/Fuse.Elements.TranslationModes.RelativeResizeChangeMode.h: include/Uno.Object.h

include/Fuse.Elements.TranslationModes.SizeFactorMode.h: include/Fuse.IScalingMode.h
include/Fuse.Elements.TranslationModes.SizeFactorMode.h: include/Fuse.ITransformMode.h
include/Fuse.Elements.TranslationModes.SizeFactorMode.h: include/Uno.Object.h

include/Fuse.Elements.TranslationModes.TransformOriginOffsetMode.h: include/Fuse.Elements.TranslationModes.OffsetMode.h
include/Fuse.Elements.TranslationModes.TransformOriginOffsetMode.h: include/Fuse.ITransformMode.h
include/Fuse.Elements.TranslationModes.TransformOriginOffsetMode.h: include/Fuse.ITranslationMode.h

include/Fuse.Elements.Viewport.h: include/Fuse.Animations.IResize.h
include/Fuse.Elements.Viewport.h: include/Fuse.Elements.Element.h
include/Fuse.Elements.Viewport.h: include/Fuse.IActualPlacement.h
include/Fuse.Elements.Viewport.h: include/Fuse.IDataContext.h
include/Fuse.Elements.Viewport.h: include/Fuse.IViewport.h
include/Fuse.Elements.Viewport.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Elements.Viewport.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Elements.Viewport.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Elements.Viewport.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Elements.Viewport.h: include/Uno.Float4x4.h
include/Fuse.Elements.Viewport.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Elements.Visibility.h: include/Uno.Int.h

include/Fuse.Entities.Component.h: include/Uno.Object.h

include/Fuse.Entities.DefaultMaterial.h: include/Fuse.Entities.Material.h
include/Fuse.Entities.DefaultMaterial.h: include/Uno.Float2.h
include/Fuse.Entities.DefaultMaterial.h: include/Uno.Float3.h

include/Fuse.Entities.Designer.AnimationHelpers.h: include/Uno.h

include/Fuse.Entities.Designer.PreloadedResources.h: include/Uno.h

include/Fuse.Entities.DirectArrayMeshIntersecter.h: include/Fuse.Entities.TriangleMeshIntersecter.h
include/Fuse.Entities.DirectArrayMeshIntersecter.h: include/Uno.Float3.h

include/Fuse.Entities.DirectionalLight.h: include/Fuse.Entities.Light.h
include/Fuse.Entities.DirectionalLight.h: include/Uno.Geometry.Box.h

include/Fuse.Entities.Entity.h: include/Fuse.IDataContext.h
include/Fuse.Entities.Entity.h: include/Fuse.Node.h
include/Fuse.Entities.Entity.h: include/Fuse.Scripting.INameScope.h

include/Fuse.Entities.Entry.h: include/Uno.Float4x4.h
include/Fuse.Entities.Entry.h: include/Uno.Object.h

include/Fuse.Entities.EnvironmentLight.h: include/Fuse.Entities.Light.h

include/Fuse.Entities.Filters.Blitter.h: include/Uno.Object.h
include/Fuse.Entities.Filters.Blitter.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Entities.Filters.Blur.h: include/Fuse.Entities.RenderNode.h
include/Fuse.Entities.Filters.Blur.h: include/Fuse.IDataContext.h
include/Fuse.Entities.Filters.Blur.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Entities.Filters.Blur.h: include/Uno.Float4.h
include/Fuse.Entities.Filters.Blur.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Entities.Filters.FindEdges.h: include/Fuse.Entities.RenderNode.h
include/Fuse.Entities.Filters.FindEdges.h: include/Fuse.IDataContext.h
include/Fuse.Entities.Filters.FindEdges.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Entities.Filters.FindEdges.h: include/Uno.Float4.h
include/Fuse.Entities.Filters.FindEdges.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Entities.Frustum.h: include/Fuse.Entities.Component.h
include/Fuse.Entities.Frustum.h: include/Fuse.IFrustum.h

include/Fuse.Entities.ILightVisitor.h: include/Uno.Object.h

include/Fuse.Entities.IndexedArrayMeshIntersecter.h: include/Fuse.Entities.TriangleMeshIntersecter.h
include/Fuse.Entities.IndexedArrayMeshIntersecter.h: include/Uno.Float3.h

include/Fuse.Entities.Internal.SceneGraphBuilder.h: include/Uno.Object.h

include/Fuse.Entities.Internal.SceneGraphBuilderVisitor.h: include/Uno.Object.h

include/Fuse.Entities.Light.h: include/Fuse.Entities.Component.h
include/Fuse.Entities.Light.h: include/Uno.Float3.h

include/Fuse.Entities.Material.h: include/Uno.Object.h

include/Fuse.Entities.Mesh.h: include/Uno.Geometry.Box.h
include/Fuse.Entities.Mesh.h: include/Uno.Geometry.Sphere.h
include/Fuse.Entities.Mesh.h: include/Uno.IDisposable.h
include/Fuse.Entities.Mesh.h: include/Uno.Object.h

include/Fuse.Entities.MeshBatchingEngine.h: include/Fuse.Entities.Entry.h
include/Fuse.Entities.MeshBatchingEngine.h: include/Fuse.IFlush.h
include/Fuse.Entities.MeshBatchingEngine.h: include/Uno.Float4x4.h
include/Fuse.Entities.MeshBatchingEngine.h: include/Uno.Object.h
include/Fuse.Entities.MeshBatchingEngine.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Entities.MeshHitTestMode.h: include/Uno.Int.h

include/Fuse.Entities.MeshRenderer.h: include/Fuse.Entities.Component.h
include/Fuse.Entities.MeshRenderer.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Entities.ModelMeshCollision.Direct.h: include/Fuse.Entities.TriangleMeshIntersecter.h

include/Fuse.Entities.ModelMeshCollision.h: include/Uno.Object.h

include/Fuse.Entities.ModelMeshCollision.Indexed.h: include/Fuse.Entities.TriangleMeshIntersecter.h

include/Fuse.Entities.ModelMeshHelpers.h: include/Uno.h

include/Fuse.Entities.NodeExtensions.h: include/Uno.h

include/Fuse.Entities.PointLight.h: include/Fuse.Entities.Light.h

include/Fuse.Entities.Primitives.ConeRenderer.h: include/Fuse.Entities.MeshRenderer.h

include/Fuse.Entities.Primitives.CubeRenderer.h: include/Fuse.Entities.MeshRenderer.h

include/Fuse.Entities.Primitives.CylinderRenderer.h: include/Fuse.Entities.MeshRenderer.h

include/Fuse.Entities.Primitives.SphereRenderer.h: include/Fuse.Entities.MeshRenderer.h

include/Fuse.Entities.Processing.Extrude.h: include/Fuse.Entities.Mesh.h
include/Fuse.Entities.Processing.Extrude.h: include/Fuse.IOutput-1.h
include/Fuse.Entities.Processing.Extrude.h: include/Uno.Object.h

include/Fuse.Entities.Processing.Stroke.h: include/Fuse.Drawing.Polygon.h
include/Fuse.Entities.Processing.Stroke.h: include/Fuse.IOutput-1.h
include/Fuse.Entities.Processing.Stroke.h: include/Uno.Object.h

include/Fuse.Entities.Raycasting.EntityVisitor.h: include/Uno.Float2.h
include/Fuse.Entities.Raycasting.EntityVisitor.h: include/Uno.Object.h

include/Fuse.Entities.Raycasting.h: include/Uno.h

include/Fuse.Entities.RenderNode.h: include/Fuse.IDataContext.h
include/Fuse.Entities.RenderNode.h: include/Fuse.Node.h
include/Fuse.Entities.RenderNode.h: include/Fuse.Scripting.INameScope.h

include/Fuse.Entities.RenderToTexture.h: include/Fuse.Entities.RenderNode.h
include/Fuse.Entities.RenderToTexture.h: include/Fuse.IDataContext.h
include/Fuse.Entities.RenderToTexture.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Entities.RenderToTexture.h: include/Uno.Float4.h
include/Fuse.Entities.RenderToTexture.h: include/Uno.Int2.h
include/Fuse.Entities.RenderToTexture.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Entities.Scene.h: include/Fuse.Entities.RenderNode.h
include/Fuse.Entities.Scene.h: include/Fuse.IDataContext.h
include/Fuse.Entities.Scene.h: include/Fuse.IViewport.h
include/Fuse.Entities.Scene.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Entities.Scene.h: include/Uno.Float4.h

include/Fuse.Entities.SkinnedMeshRenderer.h: include/Fuse.Entities.MeshRenderer.h

include/Fuse.Entities.Skinner.h: include/Uno.Float4x4.h
include/Fuse.Entities.Skinner.h: include/Uno.Object.h

include/Fuse.Entities.SpotLight.h: include/Fuse.Entities.Light.h

include/Fuse.Entities.Transform3D.h: include/Fuse.Transform.h
include/Fuse.Entities.Transform3D.h: include/Uno.Float3.h
include/Fuse.Entities.Transform3D.h: include/Uno.Float4.h

include/Fuse.Entities.TriangleMeshIntersecter.h: include/Uno.Object.h
include/Fuse.Entities.TriangleMeshIntersecter.h: include/Uno.Geometry.Ray.h
include/Fuse.Entities.TriangleMeshIntersecter.h: include/Uno.Geometry.Triangle.h

include/Fuse.Entities.VisitAction-1.h: include/Fuse.Entities.VisitType-1.h
include/Fuse.Entities.VisitAction-1.h: include/Uno.Object.h

include/Fuse.Entities.VisitPredicate-1.h: include/Fuse.Entities.VisitType-1.h
include/Fuse.Entities.VisitPredicate-1.h: include/Uno.Object.h

include/Fuse.Entities.VisitType-1.h: include/Uno.Object.h

include/Fuse.FastMatrix.h: include/Uno.Float4x4.h
include/Fuse.FastMatrix.h: include/Uno.Object.h

include/Fuse.FixedViewport.h: include/Fuse.IViewport.h
include/Fuse.FixedViewport.h: include/Uno.Float2.h
include/Fuse.FixedViewport.h: include/Uno.Object.h

include/Fuse.Font.h: include/Uno.Object.h

include/Fuse.Fonts.h: include/Uno.h

include/Fuse.FramebufferPool.h: include/Uno.h

include/Fuse.FramebufferPoolImpl.h: include/Fuse.Resources.ISoftDisposable.h
include/Fuse.FramebufferPoolImpl.h: include/Uno.Object.h

include/Fuse.FrustumViewport.h: include/Uno.Float4x4.h
include/Fuse.FrustumViewport.h: include/Uno.Object.h

include/Fuse.GeoLocation.AndroidLocationProvider.h: include/Android.android.location.LocationListener.h
include/Fuse.GeoLocation.AndroidLocationProvider.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.GeoLocation.AndroidLocationProvider.h: include/Fuse.GeoLocation.ILocationTracker.h
include/Fuse.GeoLocation.AndroidLocationProvider.h: include/Fuse.GeoLocation.LocationListenerBase.h
include/Fuse.GeoLocation.AndroidLocationProvider.h: include/Uno.IDisposable.h

include/Fuse.GeoLocation.GeoCoordinates.h: include/Uno.Object.h

include/Fuse.GeoLocation.GeoLocationAuthorizationType.h: include/Uno.Int.h

include/Fuse.GeoLocation.ILocationTracker.h: include/Uno.Object.h

include/Fuse.GeoLocation.Location.h: include/Uno.Object.h

include/Fuse.GeoLocation.LocationListenerBase.h: include/Android.android.location.LocationListener.h
include/Fuse.GeoLocation.LocationListenerBase.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.GeoLocation.LocationListenerBase.h: include/Android.java.lang.Object.h
include/Fuse.GeoLocation.LocationListenerBase.h: include/Uno.IDisposable.h

include/Fuse.GeoLocation.LocationTracker.h: include/Uno.Object.h

include/Fuse.GeoLocation.PromiseListener.h: include/Android.android.location.LocationListener.h
include/Fuse.GeoLocation.PromiseListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.GeoLocation.PromiseListener.h: include/Fuse.GeoLocation.TimeoutListener.h
include/Fuse.GeoLocation.PromiseListener.h: include/Uno.IDisposable.h

include/Fuse.GeoLocation.TimeoutListener.h: include/Android.android.location.LocationListener.h
include/Fuse.GeoLocation.TimeoutListener.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.GeoLocation.TimeoutListener.h: include/Fuse.GeoLocation.LocationListenerBase.h
include/Fuse.GeoLocation.TimeoutListener.h: include/Uno.IDisposable.h

include/Fuse.Gestures.CircularRangeBehavior.h: include/Fuse.Behavior.h
include/Fuse.Gestures.CircularRangeBehavior.h: include/Fuse.Gestures.double2.h

include/Fuse.Gestures.Clicked.h: include/Fuse.Gestures.ClickerTrigger.h

include/Fuse.Gestures.ClickedArgs.h: include/Fuse.Input.CustomPointerEventArgs.h
include/Fuse.Gestures.ClickedArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Gestures.ClickedHandler.h: include/Uno.Delegate.h

include/Fuse.Gestures.Clicker.h: include/Uno.Float2.h
include/Fuse.Gestures.Clicker.h: include/Uno.Object.h

include/Fuse.Gestures.ClickerEventHandler.h: include/Uno.Delegate.h

include/Fuse.Gestures.ClickerTrigger.h: include/Fuse.Triggers.Trigger.h

include/Fuse.Gestures.DegreeSpan.h: include/Uno.Object.h

include/Fuse.Gestures.double2.h: include/Uno.Object.h

include/Fuse.Gestures.DoubleClicked.h: include/Fuse.Gestures.ClickerTrigger.h

include/Fuse.Gestures.DoubleTapped.h: include/Fuse.Gestures.ClickerTrigger.h

include/Fuse.Gestures.DoubleTappedArgs.h: include/Fuse.Input.CustomPointerEventArgs.h
include/Fuse.Gestures.DoubleTappedArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Gestures.DoubleTappedHandler.h: include/Uno.Delegate.h

include/Fuse.Gestures.Edge.h: include/Uno.Int.h

include/Fuse.Gestures.EdgeSwipeAnimation.h: include/Fuse.Triggers.Trigger.h

include/Fuse.Gestures.Internal.EdgeSwiper.h: include/Uno.Float2.h
include/Fuse.Gestures.Internal.EdgeSwiper.h: include/Uno.Object.h

include/Fuse.Gestures.Internal.Swiper.h: include/Uno.Float2.h
include/Fuse.Gestures.Internal.Swiper.h: include/Uno.Object.h

include/Fuse.Gestures.Internal.SwipeRegion.h: include/Uno.Float2.h
include/Fuse.Gestures.Internal.SwipeRegion.h: include/Uno.Float4.h
include/Fuse.Gestures.Internal.SwipeRegion.h: include/Uno.Object.h

include/Fuse.Gestures.Internal.SwipeRegionArea.h: include/Uno.Int.h

include/Fuse.Gestures.Internal.TwoFinger.h: include/Uno.Float2.h
include/Fuse.Gestures.Internal.TwoFinger.h: include/Uno.Object.h

include/Fuse.Gestures.Internal.TwoFinger.Point.h: include/Uno.Float2.h
include/Fuse.Gestures.Internal.TwoFinger.Point.h: include/Uno.Object.h

include/Fuse.Gestures.Internal.TwoFingerEventHandler.h: include/Uno.Delegate.h

include/Fuse.Gestures.Internal.TwoFingerRotateHandler.h: include/Uno.Delegate.h

include/Fuse.Gestures.Internal.TwoFingerTranslateHandler.h: include/Uno.Delegate.h

include/Fuse.Gestures.Internal.TwoFingerZoomHandler.h: include/Uno.Delegate.h

include/Fuse.Gestures.ISizeConstraint.h: include/Uno.Object.h
include/Fuse.Gestures.ISizeConstraint.h: include/Uno.Float2.h

include/Fuse.Gestures.KeepFocusInView.h: include/Fuse.Gestures.KeepInViewCommon.h

include/Fuse.Gestures.KeepInView.h: include/Fuse.Gestures.KeepInViewCommon.h

include/Fuse.Gestures.KeepInViewCommon.h: include/Fuse.Behavior.h

include/Fuse.Gestures.LinearRangeBehavior.h: include/Fuse.Behavior.h
include/Fuse.Gestures.LinearRangeBehavior.h: include/Uno.Float2.h

include/Fuse.Gestures.LongPressed.h: include/Fuse.Gestures.ClickerTrigger.h

include/Fuse.Gestures.LongPressedArgs.h: include/Fuse.Input.CustomPointerEventArgs.h
include/Fuse.Gestures.LongPressedArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Gestures.LongPressedHandler.h: include/Uno.Delegate.h

include/Fuse.Gestures.PanGesture.h: include/Fuse.Gestures.TransformGesture.h
include/Fuse.Gestures.PanGesture.h: include/Uno.Float2.h
include/Fuse.Gestures.PanGesture.h: include/Uno.Float4x4.h

include/Fuse.Gestures.Pressed.h: include/Fuse.Triggers.Trigger.h

include/Fuse.Gestures.Released.h: include/Fuse.Triggers.Trigger.h

include/Fuse.Gestures.RotateGesture.h: include/Fuse.Gestures.TransformGesture.h

include/Fuse.Gestures.ScrollableGoto.h: include/Fuse.Triggers.Actions.TriggerAction.h
include/Fuse.Gestures.ScrollableGoto.h: include/Uno.Float2.h

include/Fuse.Gestures.ScrollDirections.h: include/Uno.Int.h

include/Fuse.Gestures.Scroller.h: include/Fuse.Behavior.h
include/Fuse.Gestures.Scroller.h: include/Uno.Float2.h

include/Fuse.Gestures.Scroller.MoveUserFlags.h: include/Uno.Int.h

include/Fuse.Gestures.SetSwipeActive.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Gestures.Swiped.h: include/Fuse.Triggers.Trigger.h

include/Fuse.Gestures.SwipedHow.h: include/Uno.Int.h

include/Fuse.Gestures.SwipeDirection.h: include/Uno.Int.h

include/Fuse.Gestures.SwipeGesture.h: include/Fuse.Behavior.h

include/Fuse.Gestures.SwipeGestureHelper.h: include/Uno.Object.h

include/Fuse.Gestures.SwipeType.h: include/Uno.Int.h

include/Fuse.Gestures.SwipingAnimation.h: include/Fuse.Triggers.Trigger.h

include/Fuse.Gestures.Tapped.h: include/Fuse.Gestures.ClickerTrigger.h

include/Fuse.Gestures.TappedArgs.h: include/Fuse.Input.CustomPointerEventArgs.h
include/Fuse.Gestures.TappedArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Gestures.TappedHandler.h: include/Uno.Delegate.h

include/Fuse.Gestures.ToggleSwipeActive.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Gestures.Trackball.h: include/Fuse.Behavior.h
include/Fuse.Gestures.Trackball.h: include/Uno.Float2.h
include/Fuse.Gestures.Trackball.h: include/Uno.Float3.h
include/Fuse.Gestures.Trackball.h: include/Uno.Float4.h
include/Fuse.Gestures.Trackball.h: include/Uno.Float4x4.h

include/Fuse.Gestures.Trackball.MoveMode.h: include/Uno.Int.h

include/Fuse.Gestures.TransformGesture.h: include/Fuse.Behavior.h

include/Fuse.Gestures.WhileClickerTrigger.h: include/Fuse.Triggers.WhileTrigger.h

include/Fuse.Gestures.WhileHovering.h: include/Fuse.Triggers.Trigger.h

include/Fuse.Gestures.WhilePressed.h: include/Fuse.Triggers.WhileTrigger.h

include/Fuse.Gestures.WhileSwipeActive.h: include/Fuse.Triggers.WhileTrigger.h

include/Fuse.Gestures.ZoomGesture.h: include/Fuse.Gestures.TransformGesture.h

include/Fuse.GraphicsTheme.h: include/Fuse.Theme.h
include/Fuse.GraphicsTheme.h: include/Uno.UX.ITemplate.h

include/Fuse.GraphicsWorker.h: include/Uno.h

include/Fuse.HitTestCallback.h: include/Uno.Delegate.h

include/Fuse.HitTestContext.h: include/Uno.Float2.h
include/Fuse.HitTestContext.h: include/Uno.Geometry.Ray.h
include/Fuse.HitTestContext.h: include/Uno.Object.h

include/Fuse.HitTestHandler.h: include/Uno.Delegate.h

include/Fuse.HitTestResult.h: include/Uno.Object.h

include/Fuse.IActualPlacement.h: include/Uno.Object.h
include/Fuse.IActualPlacement.h: include/Uno.Float3.h

include/Fuse.IDataContext.h: include/Uno.Object.h

include/Fuse.IFlush.h: include/Uno.Object.h

include/Fuse.IFrustum.h: include/Uno.Object.h
include/Fuse.IFrustum.h: include/Uno.Float2.h
include/Fuse.IFrustum.h: include/Uno.Float3.h
include/Fuse.IFrustum.h: include/Uno.Float4x4.h

include/Fuse.Input.Capturer.h: include/Uno.Object.h

include/Fuse.Input.CustomPointerEventArgs.h: include/Fuse.Input.PointerEventArgs.h
include/Fuse.Input.CustomPointerEventArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Input.Focus.h: include/Uno.h

include/Fuse.Input.FocusDelegator.h: include/Uno.Delegate.h

include/Fuse.Input.FocusGained.h: include/Fuse.Input.FocusGainedArgs.h
include/Fuse.Input.FocusGained.h: include/Fuse.Input.FocusGainedHandler.h
include/Fuse.Input.FocusGained.h: include/Fuse.NodeEvent-2.h

include/Fuse.Input.FocusGainedArgs.h: include/Fuse.NodeEventArgs.h
include/Fuse.Input.FocusGainedArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Input.FocusGainedHandler.h: include/Uno.Delegate.h

include/Fuse.Input.FocusLost.h: include/Fuse.Input.FocusLostArgs.h
include/Fuse.Input.FocusLost.h: include/Fuse.Input.FocusLostHandler.h
include/Fuse.Input.FocusLost.h: include/Fuse.NodeEvent-2.h

include/Fuse.Input.FocusLostArgs.h: include/Fuse.NodeEventArgs.h
include/Fuse.Input.FocusLostArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Input.FocusLostHandler.h: include/Uno.Delegate.h

include/Fuse.Input.FocusNavigationDirection.h: include/Uno.Int.h

include/Fuse.Input.FocusPredictStrategy.h: include/Uno.h

include/Fuse.Input.HitTestHelpers.h: include/Uno.h

include/Fuse.Input.IPointerEventResponder.h: include/Uno.Object.h

include/Fuse.Input.IsFocusableChangedArgs.h: include/Fuse.NodeEventArgs.h
include/Fuse.Input.IsFocusableChangedArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Input.IsFocusableChangedEvent.h: include/Fuse.Input.IsFocusableChangedArgs.h
include/Fuse.Input.IsFocusableChangedEvent.h: include/Fuse.Input.IsFocusableChangedHandler.h
include/Fuse.Input.IsFocusableChangedEvent.h: include/Fuse.NodeEvent-2.h

include/Fuse.Input.IsFocusableChangedHandler.h: include/Uno.Delegate.h

include/Fuse.Input.Keyboard.h: include/Uno.h

include/Fuse.Input.KeyEventArgs.h: include/Fuse.NodeEventArgs.h
include/Fuse.Input.KeyEventArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Input.KeyPressed.h: include/Fuse.Input.KeyPressedArgs.h
include/Fuse.Input.KeyPressed.h: include/Fuse.Input.KeyPressedHandler.h
include/Fuse.Input.KeyPressed.h: include/Fuse.NodeEvent-2.h

include/Fuse.Input.KeyPressedArgs.h: include/Fuse.Input.KeyEventArgs.h
include/Fuse.Input.KeyPressedArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Input.KeyPressedHandler.h: include/Uno.Delegate.h

include/Fuse.Input.KeyReleased.h: include/Fuse.Input.KeyReleasedArgs.h
include/Fuse.Input.KeyReleased.h: include/Fuse.Input.KeyReleasedHandler.h
include/Fuse.Input.KeyReleased.h: include/Fuse.NodeEvent-2.h

include/Fuse.Input.KeyReleasedArgs.h: include/Fuse.Input.KeyEventArgs.h
include/Fuse.Input.KeyReleasedArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Input.KeyReleasedHandler.h: include/Uno.Delegate.h

include/Fuse.Input.Pointer.DefaultPointerEventResponder.h: include/Fuse.Input.IPointerEventResponder.h
include/Fuse.Input.Pointer.DefaultPointerEventResponder.h: include/Uno.Object.h

include/Fuse.Input.Pointer.h: include/Uno.h

include/Fuse.Input.Pointer.PELHolder.h: include/Uno.Object.h

include/Fuse.Input.Pointer.PELStatus.h: include/Uno.Int.h

include/Fuse.Input.Pointer.PointerRecord.h: include/Uno.Float2.h
include/Fuse.Input.Pointer.PointerRecord.h: include/Uno.Object.h

include/Fuse.Input.PointerEntered.h: include/Fuse.Input.PointerEnteredArgs.h
include/Fuse.Input.PointerEntered.h: include/Fuse.Input.PointerEnteredHandler.h
include/Fuse.Input.PointerEntered.h: include/Fuse.NodeEvent-2.h

include/Fuse.Input.PointerEnteredArgs.h: include/Fuse.Input.PointerEventArgs.h
include/Fuse.Input.PointerEnteredArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Input.PointerEnteredHandler.h: include/Uno.Delegate.h

include/Fuse.Input.PointerEventArgs.h: include/Fuse.NodeEventArgs.h
include/Fuse.Input.PointerEventArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Input.PointerEventData.h: include/Uno.Float2.h
include/Fuse.Input.PointerEventData.h: include/Uno.Object.h

include/Fuse.Input.PointerLeft.h: include/Fuse.Input.PointerLeftArgs.h
include/Fuse.Input.PointerLeft.h: include/Fuse.Input.PointerLeftHandler.h
include/Fuse.Input.PointerLeft.h: include/Fuse.NodeEvent-2.h

include/Fuse.Input.PointerLeftArgs.h: include/Fuse.Input.PointerEventArgs.h
include/Fuse.Input.PointerLeftArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Input.PointerLeftHandler.h: include/Uno.Delegate.h

include/Fuse.Input.PointerMoved.h: include/Fuse.Input.PointerMovedArgs.h
include/Fuse.Input.PointerMoved.h: include/Fuse.Input.PointerMovedHandler.h
include/Fuse.Input.PointerMoved.h: include/Fuse.NodeEvent-2.h

include/Fuse.Input.PointerMovedArgs.h: include/Fuse.Input.PointerEventArgs.h
include/Fuse.Input.PointerMovedArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Input.PointerMovedHandler.h: include/Uno.Delegate.h

include/Fuse.Input.PointerPressed.h: include/Fuse.Input.PointerPressedArgs.h
include/Fuse.Input.PointerPressed.h: include/Fuse.Input.PointerPressedHandler.h
include/Fuse.Input.PointerPressed.h: include/Fuse.NodeEvent-2.h

include/Fuse.Input.PointerPressedArgs.h: include/Fuse.Input.PointerEventArgs.h
include/Fuse.Input.PointerPressedArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Input.PointerPressedHandler.h: include/Uno.Delegate.h

include/Fuse.Input.PointerReleased.h: include/Fuse.Input.PointerReleasedArgs.h
include/Fuse.Input.PointerReleased.h: include/Fuse.Input.PointerReleasedHandler.h
include/Fuse.Input.PointerReleased.h: include/Fuse.NodeEvent-2.h

include/Fuse.Input.PointerReleasedArgs.h: include/Fuse.Input.PointerEventArgs.h
include/Fuse.Input.PointerReleasedArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Input.PointerReleasedHandler.h: include/Uno.Delegate.h

include/Fuse.Input.PointerWheelMoved.h: include/Fuse.Input.PointerWheelMovedArgs.h
include/Fuse.Input.PointerWheelMoved.h: include/Fuse.Input.PointerWheelMovedHandler.h
include/Fuse.Input.PointerWheelMoved.h: include/Fuse.NodeEvent-2.h

include/Fuse.Input.PointerWheelMovedArgs.h: include/Fuse.Input.PointerEventArgs.h
include/Fuse.Input.PointerWheelMovedArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Input.PointerWheelMovedHandler.h: include/Uno.Delegate.h

include/Fuse.Input.SelectionQuery.h: include/Uno.Object.h

include/Fuse.Input.TextEntered.h: include/Fuse.Input.TextEnteredArgs.h
include/Fuse.Input.TextEntered.h: include/Fuse.Input.TextEnteredHandler.h
include/Fuse.Input.TextEntered.h: include/Fuse.NodeEvent-2.h

include/Fuse.Input.TextEnteredArgs.h: include/Fuse.NodeEventArgs.h
include/Fuse.Input.TextEnteredArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Input.TextEnteredHandler.h: include/Uno.Delegate.h

include/Fuse.Input.TextService.h: include/Uno.h

include/Fuse.Input.TraverseNodeExtensions.h: include/Uno.h

include/Fuse.Input.UX.AttachedFocusMembers.h: include/Uno.h

include/Fuse.Input.UX.AttachedKeyboardMembers.h: include/Uno.h

include/Fuse.Input.UX.AttachedPointerMembers.h: include/Uno.h

include/Fuse.Internal.Blender-1.h: include/Uno.Object.h

include/Fuse.Internal.BlenderMap.h: include/Uno.Object.h

include/Fuse.Internal.DoubleBlender.h: include/Fuse.Internal.ScalarBlender-1.h
include/Fuse.Internal.DoubleBlender.h: include/Uno.Double.h

include/Fuse.Internal.Drawing.SolidRectangle.h: include/Uno.Float4x4.h
include/Fuse.Internal.Drawing.SolidRectangle.h: include/Uno.Object.h
include/Fuse.Internal.Drawing.SolidRectangle.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Internal.Float2Blender.h: include/Fuse.Internal.Blender-1.h
include/Fuse.Internal.Float2Blender.h: include/Uno.Float2.h

include/Fuse.Internal.Float3Blender.h: include/Fuse.Internal.Blender-1.h
include/Fuse.Internal.Float3Blender.h: include/Uno.Float3.h

include/Fuse.Internal.Float4Blender.h: include/Fuse.Internal.Blender-1.h
include/Fuse.Internal.Float4Blender.h: include/Uno.Float4.h

include/Fuse.Internal.FloatBlender.h: include/Fuse.Internal.ScalarBlender-1.h
include/Fuse.Internal.FloatBlender.h: include/Uno.Float.h

include/Fuse.Internal.FrustumMatrix.h: include/Uno.h

include/Fuse.Internal.FuseConfig.h: include/Uno.h

include/Fuse.Internal.IImageContainerOwner.h: include/Uno.Object.h

include/Fuse.Internal.ImageContainer.h: include/Uno.Object.h

include/Fuse.Internal.RectExtensions.h: include/Uno.h

include/Fuse.Internal.ScalarBlender-1.h: include/Fuse.Internal.Blender-1.h
include/Fuse.Internal.ScalarBlender-1.h: include/Uno.Object.h

include/Fuse.Internal.SimpleLock.h: include/Uno.Object.h

include/Fuse.Internal.SizingContainer.h: include/Uno.Float4.h
include/Fuse.Internal.SizingContainer.h: include/Uno.Object.h

include/Fuse.Internal.Statistics.h: include/Uno.h

include/Fuse.Internal.VectorUtil.h: include/Uno.h

include/Fuse.InvalidateLayoutReason.h: include/Uno.Int.h

include/Fuse.IObjectContainer.h: include/Uno.Object.h

include/Fuse.iOS.Blitter.h: include/Uno.Float2.h
include/Fuse.iOS.Blitter.h: include/Uno.Object.h
include/Fuse.iOS.Blitter.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.iOS.Controls.Button.h: include/Fuse.Controls.Button.h
include/Fuse.iOS.Controls.Button.h: include/Fuse.IDataContext.h
include/Fuse.iOS.Controls.Button.h: include/Fuse.iOS.Controls.Control-1.h
include/Fuse.iOS.Controls.Button.h: include/Fuse.Scripting.INameScope.h

include/Fuse.iOS.Controls.Circle.h: include/Fuse.Controls.Circle.h
include/Fuse.iOS.Controls.Circle.h: include/Fuse.IDataContext.h
include/Fuse.iOS.Controls.Circle.h: include/Fuse.iOS.Controls.Shape-1.h
include/Fuse.iOS.Controls.Circle.h: include/Fuse.Scripting.INameScope.h

include/Fuse.iOS.Controls.Control-1.h: include/Fuse.IDataContext.h
include/Fuse.iOS.Controls.Control-1.h: include/Fuse.iOS.Controls.Element.h
include/Fuse.iOS.Controls.Control-1.h: include/Fuse.Scripting.INameScope.h

include/Fuse.iOS.Controls.ControlProperties.h: include/Uno.h

include/Fuse.iOS.Controls.Element.h: include/Fuse.IDataContext.h
include/Fuse.iOS.Controls.Element.h: include/Fuse.Node.h
include/Fuse.iOS.Controls.Element.h: include/Fuse.Scripting.INameScope.h

include/Fuse.iOS.Controls.Image.h: include/Fuse.Controls.Image.h
include/Fuse.iOS.Controls.Image.h: include/Fuse.IDataContext.h
include/Fuse.iOS.Controls.Image.h: include/Fuse.iOS.Controls.Control-1.h
include/Fuse.iOS.Controls.Image.h: include/Fuse.Scripting.INameScope.h

include/Fuse.iOS.Controls.MapView.h: include/Fuse.Controls.MapView.h
include/Fuse.iOS.Controls.MapView.h: include/Fuse.IDataContext.h
include/Fuse.iOS.Controls.MapView.h: include/Fuse.iOS.Controls.Control-1.h
include/Fuse.iOS.Controls.MapView.h: include/Fuse.Scripting.INameScope.h

include/Fuse.iOS.Controls.Rectangle.h: include/Fuse.Controls.Rectangle.h
include/Fuse.iOS.Controls.Rectangle.h: include/Fuse.IDataContext.h
include/Fuse.iOS.Controls.Rectangle.h: include/Fuse.iOS.Controls.Shape-1.h
include/Fuse.iOS.Controls.Rectangle.h: include/Fuse.Scripting.INameScope.h

include/Fuse.iOS.Controls.Shape-1.h: include/Fuse.IDataContext.h
include/Fuse.iOS.Controls.Shape-1.h: include/Fuse.iOS.Controls.Control-1.h
include/Fuse.iOS.Controls.Shape-1.h: include/Fuse.Scripting.INameScope.h
include/Fuse.iOS.Controls.Shape-1.h: include/Uno.Object.h

include/Fuse.iOS.Controls.Slider.h: include/Fuse.Controls.Slider.h
include/Fuse.iOS.Controls.Slider.h: include/Fuse.IDataContext.h
include/Fuse.iOS.Controls.Slider.h: include/Fuse.iOS.Controls.Control-1.h
include/Fuse.iOS.Controls.Slider.h: include/Fuse.Scripting.INameScope.h

include/Fuse.iOS.Controls.Switch.h: include/Fuse.Controls.Switch.h
include/Fuse.iOS.Controls.Switch.h: include/Fuse.IDataContext.h
include/Fuse.iOS.Controls.Switch.h: include/Fuse.iOS.Controls.Control-1.h
include/Fuse.iOS.Controls.Switch.h: include/Fuse.Scripting.INameScope.h

include/Fuse.iOS.Controls.TextBlock.h: include/Fuse.Controls.TextBlock.h
include/Fuse.iOS.Controls.TextBlock.h: include/Fuse.IDataContext.h
include/Fuse.iOS.Controls.TextBlock.h: include/Fuse.iOS.Controls.Control-1.h
include/Fuse.iOS.Controls.TextBlock.h: include/Fuse.Scripting.INameScope.h

include/Fuse.iOS.Controls.TextInput.h: include/Fuse.Controls.TextEdit.h
include/Fuse.iOS.Controls.TextInput.h: include/Fuse.IDataContext.h
include/Fuse.iOS.Controls.TextInput.h: include/Fuse.iOS.Controls.Control-1.h
include/Fuse.iOS.Controls.TextInput.h: include/Fuse.Scripting.INameScope.h

include/Fuse.iOS.Controls.WebView.h: include/Fuse.Controls.WebView.h
include/Fuse.iOS.Controls.WebView.h: include/Fuse.IDataContext.h
include/Fuse.iOS.Controls.WebView.h: include/Fuse.iOS.Controls.Control-1.h
include/Fuse.iOS.Controls.WebView.h: include/Fuse.Scripting.INameScope.h

include/Fuse.iOS.NativeStyle.h: include/Fuse.Style.h
include/Fuse.iOS.NativeStyle.h: include/Uno.UX.ITemplate.h

include/Fuse.iOS.NativeStyle.Template.h: include/Fuse.Controls.GraphicsView.h
include/Fuse.iOS.NativeStyle.Template.h: include/Uno.UX.ITemplate.h
include/Fuse.iOS.NativeStyle.Template.h: include/Uno.UX.Template-1.h

include/Fuse.iOS.NativeStyle.Template.Template1.h: include/Fuse.Controls.TextBlock.h
include/Fuse.iOS.NativeStyle.Template.Template1.h: include/Uno.UX.ITemplate.h
include/Fuse.iOS.NativeStyle.Template.Template1.h: include/Uno.UX.Template-1.h

include/Fuse.iOS.NativeStyle.Template.Template2.Factory.h: include/Uno.UX.Factory.h

include/Fuse.iOS.NativeStyle.Template.Template2.Factory1.h: include/Uno.UX.Factory.h

include/Fuse.iOS.NativeStyle.Template.Template2.h: include/Fuse.Controls.PlainTextEdit.h
include/Fuse.iOS.NativeStyle.Template.Template2.h: include/Uno.UX.ITemplate.h
include/Fuse.iOS.NativeStyle.Template.Template2.h: include/Uno.UX.Template-1.h

include/Fuse.iOS.NativeTemplate.h: include/Uno.Object.h
include/Fuse.iOS.NativeTemplate.h: include/Uno.UX.ITemplate.h

include/Fuse.iOS.NativeViews.ContentControl.h: include/Fuse.Controls.ContentControl.h
include/Fuse.iOS.NativeViews.ContentControl.h: include/Fuse.iOS.NativeViews.ParentNativeView-1.h

include/Fuse.iOS.NativeViews.GenericNativeView.h: include/Fuse.iOS.NativeViews.NativeView.h

include/Fuse.iOS.NativeViews.GraphicsView.h: include/Fuse.Controls.GraphicsView.h
include/Fuse.iOS.NativeViews.GraphicsView.h: include/Fuse.iOS.NativeViews.ParentNativeView-1.h

include/Fuse.iOS.NativeViews.LeafNativeView.h: include/Fuse.iOS.NativeViews.NativeView.h

include/Fuse.iOS.NativeViews.NativeView.h: include/Fuse.Behavior.h

include/Fuse.iOS.NativeViews.NativeViewHost.h: include/Fuse.Controls.NativeViewHost.h
include/Fuse.iOS.NativeViews.NativeViewHost.h: include/Fuse.iOS.NativeViews.ParentNativeView-1.h

include/Fuse.iOS.NativeViews.ParentControl.h: include/Fuse.Controls.ParentControl.h
include/Fuse.iOS.NativeViews.ParentControl.h: include/Fuse.iOS.NativeViews.ParentNativeView-1.h

include/Fuse.iOS.NativeViews.ParentNativeView-1.h: include/Fuse.iOS.NativeViews.NativeView.h

include/Fuse.iOS.NativeViews.ScrollView.h: include/Fuse.Controls.ScrollView.h
include/Fuse.iOS.NativeViews.ScrollView.h: include/Fuse.iOS.NativeViews.ParentNativeView-1.h

include/Fuse.iOS.StatusBarConfig.h: include/Fuse.Behavior.h

include/Fuse.iOS.TextRenderer.h: include/Fuse.Controls.Graphics.TextVisual.h
include/Fuse.iOS.TextRenderer.h: include/Fuse.IDataContext.h
include/Fuse.iOS.TextRenderer.h: include/Fuse.Scripting.INameScope.h

include/Fuse.IOutput-1.h: include/Uno.Object.h

include/Fuse.IScalingMode.h: include/Fuse.ITransformMode.h
include/Fuse.IScalingMode.h: include/Uno.Object.h
include/Fuse.IScalingMode.h: include/Uno.Float3.h

include/Fuse.ITransformMode.h: include/Uno.Object.h

include/Fuse.ITranslationMode.h: include/Fuse.ITransformMode.h
include/Fuse.ITranslationMode.h: include/Uno.Object.h
include/Fuse.ITranslationMode.h: include/Uno.Float3.h

include/Fuse.IViewport.h: include/Uno.Object.h
include/Fuse.IViewport.h: include/Uno.Float2.h
include/Fuse.IViewport.h: include/Uno.Float3.h
include/Fuse.IViewport.h: include/Uno.Float4x4.h
include/Fuse.IViewport.h: include/Uno.Geometry.Ray.h

include/Fuse.KeyboardBootstrapper.h: include/Uno.Object.h

include/Fuse.Launcher.h: include/Uno.h

include/Fuse.Layer.h: include/Uno.Int.h

include/Fuse.LayoutDependent.h: include/Uno.Int.h

include/Fuse.LayoutParams.Flags.h: include/Uno.Int.h

include/Fuse.LayoutParams.h: include/Uno.Float2.h
include/Fuse.LayoutParams.h: include/Uno.Object.h

include/Fuse.LayoutRole.h: include/Uno.Int.h

include/Fuse.Layouts.CircleLayout.h: include/Fuse.Layouts.Layout.h

include/Fuse.Layouts.Column.h: include/Fuse.Layouts.DefinitionBase.h

include/Fuse.Layouts.ColumnLayout.h: include/Fuse.Layouts.Layout.h

include/Fuse.Layouts.ColumnLayoutSizing.h: include/Uno.Int.h

include/Fuse.Layouts.DefaultLayout.h: include/Fuse.Layouts.Layout.h

include/Fuse.Layouts.DefinitionBase.h: include/Uno.Object.h

include/Fuse.Layouts.DefinitionBase.ParseDataItem.h: include/Uno.Object.h

include/Fuse.Layouts.Dock.h: include/Uno.Int.h

include/Fuse.Layouts.DockLayout.h: include/Fuse.Layouts.Layout.h

include/Fuse.Layouts.FlowDirection.h: include/Uno.Int.h

include/Fuse.Layouts.GridLayout.h: include/Fuse.Layouts.Layout.h

include/Fuse.Layouts.Layout.h: include/Uno.Object.h
include/Fuse.Layouts.Layout.h: include/Fuse.LayoutParams.h
include/Fuse.Layouts.Layout.h: include/Uno.Float2.h
include/Fuse.Layouts.Layout.h: include/Uno.Float4.h

include/Fuse.Layouts.Layouts.h: include/Uno.h

include/Fuse.Layouts.Metric.h: include/Uno.Int.h

include/Fuse.Layouts.Orientation.h: include/Uno.Int.h

include/Fuse.Layouts.Row.h: include/Fuse.Layouts.DefinitionBase.h

include/Fuse.Layouts.StackLayout.h: include/Fuse.Layouts.Layout.h

include/Fuse.Layouts.StackLayoutMode.h: include/Uno.Int.h

include/Fuse.Layouts.WrapLayout.h: include/Fuse.Layouts.Layout.h

include/Fuse.MarginBoxDependent.h: include/Uno.Int.h

include/Fuse.MobileBootstrapping.h: include/Uno.Object.h

include/Fuse.NativeTheme.h: include/Fuse.Theme.h
include/Fuse.NativeTheme.h: include/Uno.UX.ITemplate.h

include/Fuse.NativeWithFallbackTheme.CreateTheme.h: include/Uno.Delegate.h

include/Fuse.NativeWithFallbackTheme.h: include/Uno.Object.h

include/Fuse.Navigation.ActivatingAnimation.h: include/Fuse.Navigation.NavigationAnimation.h

include/Fuse.Navigation.BackForwardNavigationTriggerAction.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Navigation.DeactivatingAnimation.h: include/Fuse.Navigation.NavigationAnimation.h

include/Fuse.Navigation.DefaultNavigationAnimator.h: include/Fuse.Navigation.INavigationAnimator.h
include/Fuse.Navigation.DefaultNavigationAnimator.h: include/Uno.Object.h

include/Fuse.Navigation.DefaultNavigationAnimatorPlayer.h: include/Fuse.Navigation.INavigationAnimatorPlayer.h
include/Fuse.Navigation.DefaultNavigationAnimatorPlayer.h: include/Uno.Object.h

include/Fuse.Navigation.DirectNavigation.h: include/Fuse.Navigation.IBaseNavigation.h
include/Fuse.Navigation.DirectNavigation.h: include/Fuse.Navigation.INavigation.h
include/Fuse.Navigation.DirectNavigation.h: include/Fuse.Navigation.Navigation.h

include/Fuse.Navigation.EdgeNavigation.h: include/Fuse.Navigation.IBaseNavigation.h
include/Fuse.Navigation.EdgeNavigation.h: include/Fuse.Navigation.INavigation.h
include/Fuse.Navigation.EdgeNavigation.h: include/Fuse.Navigation.Navigation.h

include/Fuse.Navigation.EndSeekArgs.h: include/Uno.Object.h

include/Fuse.Navigation.EnterExitAnimation.h: include/Fuse.Navigation.NavigationAnimation.h

include/Fuse.Navigation.EnteringAnimation.h: include/Fuse.Navigation.EnterExitAnimation.h

include/Fuse.Navigation.ExitingAnimation.h: include/Fuse.Navigation.EnterExitAnimation.h

include/Fuse.Navigation.GoBack.h: include/Fuse.Navigation.BackForwardNavigationTriggerAction.h

include/Fuse.Navigation.GoForward.h: include/Fuse.Navigation.BackForwardNavigationTriggerAction.h

include/Fuse.Navigation.HierarchicalNavigation.h: include/Fuse.Navigation.IBaseNavigation.h
include/Fuse.Navigation.HierarchicalNavigation.h: include/Fuse.Navigation.INavigation.h
include/Fuse.Navigation.HierarchicalNavigation.h: include/Fuse.Navigation.StructuredNavigation.h

include/Fuse.Navigation.HistoryChangedHandler.h: include/Uno.Delegate.h

include/Fuse.Navigation.IBaseNavigation.h: include/Uno.Object.h

include/Fuse.Navigation.INavigation.h: include/Fuse.Navigation.IBaseNavigation.h
include/Fuse.Navigation.INavigation.h: include/Uno.Object.h

include/Fuse.Navigation.INavigationAnimator.h: include/Uno.Object.h

include/Fuse.Navigation.INavigationAnimatorPlayer.h: include/Uno.Object.h

include/Fuse.Navigation.INavigationPanel.h: include/Uno.Object.h
include/Fuse.Navigation.INavigationPanel.h: include/Uno.Float2.h

include/Fuse.Navigation.IPageResourceBinding.h: include/Uno.Object.h

include/Fuse.Navigation.ISeekable.h: include/Uno.Object.h

include/Fuse.Navigation.LinearNavigation.h: include/Fuse.Navigation.IBaseNavigation.h
include/Fuse.Navigation.LinearNavigation.h: include/Fuse.Navigation.INavigation.h
include/Fuse.Navigation.LinearNavigation.h: include/Fuse.Navigation.StructuredNavigation.h

include/Fuse.Navigation.NavigatedArgs.h: include/Fuse.Scripting.IScriptEvent.h
include/Fuse.Navigation.NavigatedArgs.h: include/Uno.EventArgs.h

include/Fuse.Navigation.NavigatedHandler.h: include/Uno.Delegate.h

include/Fuse.Navigation.NavigateTo.h: include/Fuse.Navigation.NavigationTriggerAction.h

include/Fuse.Navigation.NavigateToggle.h: include/Fuse.Navigation.NavigationTriggerAction.h

include/Fuse.Navigation.Navigation.h: include/Fuse.Behavior.h
include/Fuse.Navigation.Navigation.h: include/Fuse.Navigation.IBaseNavigation.h
include/Fuse.Navigation.Navigation.h: include/Fuse.Navigation.INavigation.h

include/Fuse.Navigation.NavigationAnimation.h: include/Fuse.Triggers.Trigger.h

include/Fuse.Navigation.NavigationArgs.h: include/Uno.EventArgs.h

include/Fuse.Navigation.NavigationDirection.h: include/Uno.Int.h

include/Fuse.Navigation.NavigationEdge.h: include/Uno.Int.h

include/Fuse.Navigation.NavigationGotoMode.h: include/Uno.Int.h

include/Fuse.Navigation.NavigationHandler.h: include/Uno.Delegate.h

include/Fuse.Navigation.NavigationMode.h: include/Uno.Int.h

include/Fuse.Navigation.NavigationPageCountHandler.h: include/Uno.Delegate.h

include/Fuse.Navigation.NavigationPageProgressHandler.h: include/Uno.Delegate.h

include/Fuse.Navigation.NavigationPageProperty.h: include/Uno.h

include/Fuse.Navigation.NavigationState.h: include/Uno.Int.h

include/Fuse.Navigation.NavigationStateArgs.h: include/Uno.EventArgs.h

include/Fuse.Navigation.NavigationStateHandler.h: include/Uno.Delegate.h

include/Fuse.Navigation.NavigationTriggerAction.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Navigation.NavigationTween.h: include/Uno.Object.h

include/Fuse.Navigation.NavTriggerUtil.h: include/Uno.h

include/Fuse.Navigation.PageResourceBinding-1.h: include/Fuse.Behavior.h
include/Fuse.Navigation.PageResourceBinding-1.h: include/Fuse.Navigation.IPageResourceBinding.h

include/Fuse.Navigation.PlayerFactory.h: include/Uno.h

include/Fuse.Navigation.ProgressSpan.h: include/Uno.Object.h

include/Fuse.Navigation.ProgressTimer.h: include/Uno.Object.h

include/Fuse.Navigation.SeekNavigationAnimatorPlayer.h: include/Fuse.Navigation.INavigationAnimatorPlayer.h
include/Fuse.Navigation.SeekNavigationAnimatorPlayer.h: include/Uno.Object.h

include/Fuse.Navigation.SnapTo.h: include/Uno.Int.h

include/Fuse.Navigation.StructuredNavigation.h: include/Fuse.Navigation.IBaseNavigation.h
include/Fuse.Navigation.StructuredNavigation.h: include/Fuse.Navigation.INavigation.h
include/Fuse.Navigation.StructuredNavigation.h: include/Fuse.Navigation.Navigation.h

include/Fuse.Navigation.StructuredNavigation.NavigationStructure.h: include/Uno.Int.h

include/Fuse.Navigation.SwipeDirection.h: include/Uno.Int.h

include/Fuse.Navigation.SwipeEnds.h: include/Uno.Int.h

include/Fuse.Navigation.SwipeNavigate.h: include/Fuse.Behavior.h
include/Fuse.Navigation.SwipeNavigate.h: include/Uno.Float2.h

include/Fuse.Navigation.UpdateSeekArgs.h: include/Uno.Object.h

include/Fuse.Navigation.WhileActive.h: include/Fuse.Navigation.WhileNavigationTrigger.h

include/Fuse.Navigation.WhileCanGoBack.h: include/Fuse.Navigation.WhileHistoryTrigger.h

include/Fuse.Navigation.WhileCanGoForward.h: include/Fuse.Navigation.WhileHistoryTrigger.h

include/Fuse.Navigation.WhileHistoryTrigger.h: include/Fuse.Triggers.WhileTrigger.h

include/Fuse.Navigation.WhileInactive.h: include/Fuse.Navigation.WhileNavigationTrigger.h

include/Fuse.Navigation.WhileInEnterState.h: include/Fuse.Navigation.WhileNavigationTrigger.h

include/Fuse.Navigation.WhileInExitState.h: include/Fuse.Navigation.WhileNavigationTrigger.h

include/Fuse.Navigation.WhileNavigating.h: include/Fuse.Triggers.Trigger.h

include/Fuse.Navigation.WhileNavigationTrigger.h: include/Fuse.Triggers.WhileTrigger.h

include/Fuse.Node.CancelInteractionsType.h: include/Uno.Int.h

include/Fuse.Node.h: include/Fuse.IDataContext.h
include/Fuse.Node.h: include/Fuse.LayoutParams.h
include/Fuse.Node.h: include/Fuse.Node.InteractionItem.h
include/Fuse.Node.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Node.h: include/Uno.Float2.h
include/Fuse.Node.h: include/Uno.Object.h
include/Fuse.Node.h: include/Uno.Float3.h
include/Fuse.Node.h: include/Uno.Float4.h
include/Fuse.Node.h: include/Uno.Float4x4.h
include/Fuse.Node.h: include/Uno.Geometry.Box.h
include/Fuse.Node.h: include/Uno.Geometry.Ray.h
include/Fuse.Node.h: include/Uno.Rect.h

include/Fuse.Node.HitTestRecord.h: include/Uno.Object.h

include/Fuse.Node.InteractionItem.h: include/Uno.Object.h

include/Fuse.Node.NodeBits.h: include/Uno.Int.h

include/Fuse.Node.RootStage.h: include/Uno.Int.h

include/Fuse.NodeBounds.h: include/Uno.Geometry.Box.h
include/Fuse.NodeBounds.h: include/Uno.Object.h

include/Fuse.NodeEvent-2.h: include/Uno.Object.h

include/Fuse.NodeEventArgs.h: include/Fuse.Scripting.IScriptEvent.h
include/Fuse.NodeEventArgs.h: include/Uno.EventArgs.h

include/Fuse.NodeEventHandler.h: include/Uno.Delegate.h

include/Fuse.NodeEventMode.h: include/Uno.Int.h

include/Fuse.NodeListCache.h: include/Uno.h

include/Fuse.OrthographicFrustum.h: include/Fuse.IFrustum.h
include/Fuse.OrthographicFrustum.h: include/Uno.Float2.h
include/Fuse.OrthographicFrustum.h: include/Uno.Float4x4.h
include/Fuse.OrthographicFrustum.h: include/Uno.Object.h

include/Fuse.PerspectiveFrustum.h: include/Fuse.IFrustum.h
include/Fuse.PerspectiveFrustum.h: include/Uno.Object.h

include/Fuse.Physics.Body.h: include/Uno.Float3.h
include/Fuse.Physics.Body.h: include/Uno.Object.h

include/Fuse.Physics.Draggable.h: include/Fuse.Behavior.h
include/Fuse.Physics.Draggable.h: include/Fuse.Physics.IRule.h
include/Fuse.Physics.Draggable.h: include/Uno.Float3.h

include/Fuse.Physics.EnteredForceField.h: include/Fuse.Physics.ForceFieldEventTrigger.h

include/Fuse.Physics.ExitedForceField.h: include/Fuse.Physics.ForceFieldEventTrigger.h

include/Fuse.Physics.ForceField.h: include/Fuse.Behavior.h
include/Fuse.Physics.ForceField.h: include/Fuse.Physics.IRule.h

include/Fuse.Physics.ForceFieldEventArgs.h: include/Fuse.Scripting.IScriptEvent.h
include/Fuse.Physics.ForceFieldEventArgs.h: include/Uno.EventArgs.h

include/Fuse.Physics.ForceFieldEventHandler.h: include/Uno.Delegate.h

include/Fuse.Physics.ForceFieldEventTrigger.h: include/Fuse.Physics.ForceFieldTrigger.h

include/Fuse.Physics.ForceFieldTrigger.h: include/Fuse.Triggers.Trigger.h

include/Fuse.Physics.InForceFieldAnimation.h: include/Fuse.Physics.ForceFieldTrigger.h

include/Fuse.Physics.IRule.h: include/Uno.Object.h

include/Fuse.Physics.PointAttractor.h: include/Fuse.Physics.ForceField.h
include/Fuse.Physics.PointAttractor.h: include/Fuse.Physics.IRule.h
include/Fuse.Physics.PointAttractor.h: include/Uno.Float3.h

include/Fuse.Physics.Spring.h: include/Fuse.Behavior.h
include/Fuse.Physics.Spring.h: include/Fuse.Physics.IRule.h

include/Fuse.Physics.WhileDragging.h: include/Fuse.Triggers.Trigger.h

include/Fuse.Physics.World.h: include/Uno.Object.h

include/Fuse.PlacedArgs.h: include/Uno.EventArgs.h
include/Fuse.PlacedArgs.h: include/Uno.Float2.h

include/Fuse.PlacedHandler.h: include/Uno.Delegate.h

include/Fuse.Preview.ISelection.h: include/Uno.Object.h

include/Fuse.Preview.SelectionManager.h: include/Uno.h

include/Fuse.Properties.h: include/Uno.Object.h

include/Fuse.PropertyHandle.h: include/Uno.Object.h

include/Fuse.PropertyState.h: include/Uno.Int.h

include/Fuse.Reactive.AsyncArray.h: include/Fuse.Reactive.IAsyncArray.h
include/Fuse.Reactive.AsyncArray.h: include/Uno.Object.h

include/Fuse.Reactive.AsyncFunction.h: include/Uno.Object.h

include/Fuse.Reactive.AsyncObject.h: include/Uno.Object.h

include/Fuse.Reactive.Binding.h: include/Fuse.Behavior.h

include/Fuse.Reactive.CallEventHandler.h: include/Fuse.Scripting.IEventSerializer.h
include/Fuse.Reactive.CallEventHandler.h: include/Uno.Object.h

include/Fuse.Reactive.CascadingPathSubscription.BindAttempt.h: include/Uno.Object.h

include/Fuse.Reactive.CascadingPathSubscription.h: include/Uno.IDisposable.h
include/Fuse.Reactive.CascadingPathSubscription.h: include/Uno.Object.h

include/Fuse.Reactive.Case.h: include/Uno.Object.h

include/Fuse.Reactive.Console.h: include/Uno.h

include/Fuse.Reactive.DataBinding-1.h: include/Fuse.Reactive.Binding.h
include/Fuse.Reactive.DataBinding-1.h: include/Fuse.Reactive.IObserver.h
include/Fuse.Reactive.DataBinding-1.h: include/Fuse.Scripting.INameListener.h

include/Fuse.Reactive.DataToResourceBinding-1.h: include/Fuse.Reactive.DataBinding-1.h
include/Fuse.Reactive.DataToResourceBinding-1.h: include/Fuse.Reactive.IObserver.h
include/Fuse.Reactive.DataToResourceBinding-1.h: include/Fuse.Scripting.INameListener.h
include/Fuse.Reactive.DataToResourceBinding-1.h: include/Uno.Object.h

include/Fuse.Reactive.DebugLog.h: include/Uno.h

include/Fuse.Reactive.Dispatcher.h: include/Uno.h

include/Fuse.Reactive.Dispatcher.UIThreadDispatcher.h: include/Uno.Object.h
include/Fuse.Reactive.Dispatcher.UIThreadDispatcher.h: include/Uno.Threading.IDispatcher.h

include/Fuse.Reactive.Each.h: include/Fuse.Behavior.h
include/Fuse.Reactive.Each.h: include/Fuse.Reactive.IObserver.h

include/Fuse.Reactive.EnumArray.h: include/Uno.Object.h

include/Fuse.Reactive.EnumObservable.h: include/Uno.Object.h

include/Fuse.Reactive.EventBinding.h: include/Fuse.Reactive.Binding.h

include/Fuse.Reactive.FileSourceTell.h: include/Uno.Object.h

include/Fuse.Reactive.FuseJS.Base64.h: include/Fuse.Scripting.IModule.h
include/Fuse.Reactive.FuseJS.Base64.h: include/Fuse.Scripting.NativeModule.h

include/Fuse.Reactive.FuseJS.Builtins.h: include/Uno.Object.h

include/Fuse.Reactive.FuseJS.Camera.h: include/Uno.h

include/Fuse.Reactive.FuseJS.Email.h: include/Uno.Object.h

include/Fuse.Reactive.FuseJS.Environment.h: include/Fuse.Scripting.IModule.h
include/Fuse.Reactive.FuseJS.Environment.h: include/Fuse.Scripting.NativeModule.h

include/Fuse.Reactive.FuseJS.FileReaderImpl.h: include/Uno.h

include/Fuse.Reactive.FuseJS.FunctionClosure.h: include/Uno.Object.h

include/Fuse.Reactive.FuseJS.GeoLocation.h: include/Fuse.Scripting.IModule.h
include/Fuse.Reactive.FuseJS.GeoLocation.h: include/Fuse.Scripting.NativeModule.h

include/Fuse.Reactive.FuseJS.Globals.h: include/Uno.h

include/Fuse.Reactive.FuseJS.Http.FuseJSHttpClient.h: include/Uno.Object.h

include/Fuse.Reactive.FuseJS.Http.FuseJSHttpRequest.h: include/Uno.Object.h

include/Fuse.Reactive.FuseJS.Http.h: include/Uno.Object.h

include/Fuse.Reactive.FuseJS.InterApp.h: include/Uno.Object.h

include/Fuse.Reactive.FuseJS.Lifecycle.h: include/Uno.Object.h

include/Fuse.Reactive.FuseJS.Maps.h: include/Uno.Object.h

include/Fuse.Reactive.FuseJS.Phone.h: include/Uno.Object.h

include/Fuse.Reactive.FuseJS.RaiseEvent.h: include/Uno.Object.h

include/Fuse.Reactive.FuseJS.Storage.h: include/Uno.h

include/Fuse.Reactive.FuseJS.TimerManager.h: include/Uno.Object.h

include/Fuse.Reactive.FuseJS.TimerManager.Timer.h: include/Uno.Object.h

include/Fuse.Reactive.FuseJS.TimerModule.CallbackClosure.h: include/Uno.Object.h

include/Fuse.Reactive.FuseJS.TimerModule.h: include/Fuse.Scripting.IModule.h
include/Fuse.Reactive.FuseJS.TimerModule.h: include/Fuse.Scripting.NativeModule.h

include/Fuse.Reactive.FuseJS.UserEvents.h: include/Uno.Object.h

include/Fuse.Reactive.FuseJS.Vibration.h: include/Uno.h

include/Fuse.Reactive.IAsyncArray.h: include/Uno.Object.h

include/Fuse.Reactive.InternalPathSubscription.h: include/Fuse.Reactive.IObserver.h
include/Fuse.Reactive.InternalPathSubscription.h: include/Uno.IDisposable.h
include/Fuse.Reactive.InternalPathSubscription.h: include/Uno.Object.h

include/Fuse.Reactive.IObserver.h: include/Uno.Object.h

include/Fuse.Reactive.JavaScript.h: include/Fuse.Behavior.h
include/Fuse.Reactive.JavaScript.h: include/Fuse.Scripting.IModule.h

include/Fuse.Reactive.JSFileSource.h: include/Uno.UX.FileSource.h

include/Fuse.Reactive.Marshal.Float2Enum.h: include/Uno.Float2.h
include/Fuse.Reactive.Marshal.Float2Enum.h: include/Uno.Object.h

include/Fuse.Reactive.Marshal.Float3Enum.h: include/Uno.Float3.h
include/Fuse.Reactive.Marshal.Float3Enum.h: include/Uno.Object.h

include/Fuse.Reactive.Marshal.h: include/Uno.h

include/Fuse.Reactive.Marshal.VectorEnum.h: include/Uno.Float4.h
include/Fuse.Reactive.Marshal.VectorEnum.h: include/Uno.Object.h

include/Fuse.Reactive.Match.h: include/Fuse.Behavior.h
include/Fuse.Reactive.Match.h: include/Fuse.Reactive.IObserver.h

include/Fuse.Reactive.Observable.h: include/Fuse.Reactive.IAsyncArray.h
include/Fuse.Reactive.Observable.h: include/Uno.Object.h

include/Fuse.Reactive.ObservableSubscription.h: include/Uno.IDisposable.h
include/Fuse.Reactive.ObservableSubscription.h: include/Uno.Object.h

include/Fuse.Reactive.ScriptEventArgs.h: include/Uno.EventArgs.h

include/Fuse.Reactive.Select.h: include/Fuse.Triggers.Trigger.h

include/Fuse.Reactive.TellObject.h: include/Uno.Object.h

include/Fuse.Reactive.ThreadWorker.h: include/Uno.IDisposable.h
include/Fuse.Reactive.ThreadWorker.h: include/Uno.Object.h
include/Fuse.Reactive.ThreadWorker.h: include/Uno.Threading.IDispatcher.h

include/Fuse.Reactive.WhileCount.h: include/Fuse.Reactive.IObserver.h
include/Fuse.Reactive.WhileCount.h: include/Fuse.Triggers.Trigger.h

include/Fuse.Reactive.WhileEmpty.h: include/Fuse.Reactive.IObserver.h
include/Fuse.Reactive.WhileEmpty.h: include/Fuse.Reactive.WhileCount.h

include/Fuse.RenderTargetEntry.h: include/Uno.Int2.h
include/Fuse.RenderTargetEntry.h: include/Uno.Int4.h
include/Fuse.RenderTargetEntry.h: include/Uno.Object.h

include/Fuse.RequestBringIntoViewArgs.h: include/Uno.EventArgs.h

include/Fuse.RequestBringIntoViewHandler.h: include/Uno.Delegate.h

include/Fuse.RequiresRootedException.h: include/Uno.Exception.h

include/Fuse.Resources.DisposalManager.h: include/Uno.h

include/Fuse.Resources.DisposalPolicy.h: include/Uno.Object.h

include/Fuse.Resources.DisposalRequest.h: include/Uno.Int.h

include/Fuse.Resources.DoubleResourceConverter.h: include/Fuse.Resources.IResourceConverter-1.h
include/Fuse.Resources.DoubleResourceConverter.h: include/Fuse.Resources.NumericResourceConverter-1.h
include/Fuse.Resources.DoubleResourceConverter.h: include/Uno.Double.h

include/Fuse.Resources.ExpirationDisposalPolicy.h: include/Fuse.Resources.DisposalPolicy.h

include/Fuse.Resources.FileImageSource.h: include/Fuse.Resources.ImageSource.h

include/Fuse.Resources.FileImageSourceCache.h: include/Uno.h

include/Fuse.Resources.FileImageSourceImpl.h: include/Fuse.Resources.IMemoryResource.h
include/Fuse.Resources.FileImageSourceImpl.h: include/Fuse.Resources.LoadingImageSource.h

include/Fuse.Resources.FileResource.h: include/Uno.UX.FileSource.h

include/Fuse.Resources.FloatResourceConverter.h: include/Fuse.Resources.IResourceConverter-1.h
include/Fuse.Resources.FloatResourceConverter.h: include/Fuse.Resources.NumericResourceConverter-1.h
include/Fuse.Resources.FloatResourceConverter.h: include/Uno.Float.h

include/Fuse.Resources.GenericResourceConverter-1.h: include/Fuse.Resources.IResourceConverter-1.h
include/Fuse.Resources.GenericResourceConverter-1.h: include/Uno.Object.h

include/Fuse.Resources.HttpImageSource.h: include/Fuse.Resources.ImageSource.h

include/Fuse.Resources.HttpImageSourceCache.h: include/Uno.h

include/Fuse.Resources.HttpImageSourceImpl.BackgroundLoad.h: include/Uno.Object.h

include/Fuse.Resources.HttpImageSourceImpl.h: include/Fuse.Resources.IMemoryResource.h
include/Fuse.Resources.HttpImageSourceImpl.h: include/Fuse.Resources.LoadingImageSource.h

include/Fuse.Resources.IDeferredDisposable.h: include/Uno.IDisposable.h
include/Fuse.Resources.IDeferredDisposable.h: include/Uno.Object.h

include/Fuse.Resources.ImageSource.h: include/Uno.Object.h
include/Fuse.Resources.ImageSource.h: include/Uno.Float2.h
include/Fuse.Resources.ImageSource.h: include/Uno.Int2.h

include/Fuse.Resources.ImageSourceErrorArgs.h: include/Fuse.Scripting.IScriptEvent.h
include/Fuse.Resources.ImageSourceErrorArgs.h: include/Uno.EventArgs.h

include/Fuse.Resources.ImageSourceErrorHandler.h: include/Uno.Delegate.h

include/Fuse.Resources.ImageSourceState.h: include/Uno.Int.h

include/Fuse.Resources.IMemoryResource.h: include/Uno.Object.h

include/Fuse.Resources.IntResourceConverter.h: include/Fuse.Resources.IResourceConverter-1.h
include/Fuse.Resources.IntResourceConverter.h: include/Fuse.Resources.NumericResourceConverter-1.h
include/Fuse.Resources.IntResourceConverter.h: include/Uno.Int.h

include/Fuse.Resources.IResourceConverter-1.h: include/Uno.Object.h

include/Fuse.Resources.ISoftDisposable.h: include/Uno.Object.h

include/Fuse.Resources.LoadingImageSource.CleanupReason.h: include/Uno.Int.h

include/Fuse.Resources.LoadingImageSource.h: include/Fuse.Resources.ImageSource.h
include/Fuse.Resources.LoadingImageSource.h: include/Fuse.Resources.IMemoryResource.h
include/Fuse.Resources.LoadingImageSource.h: include/Uno.Int2.h

include/Fuse.Resources.MemoryPolicy.h: include/Uno.Object.h

include/Fuse.Resources.MultiDensityImageSource.h: include/Fuse.Resources.ImageSource.h

include/Fuse.Resources.NumericResourceConverter-1.h: include/Fuse.Resources.IResourceConverter-1.h
include/Fuse.Resources.NumericResourceConverter-1.h: include/Uno.Object.h

include/Fuse.Resources.PolicyDeferredDisposable.h: include/Fuse.Resources.IDeferredDisposable.h
include/Fuse.Resources.PolicyDeferredDisposable.h: include/Uno.IDisposable.h
include/Fuse.Resources.PolicyDeferredDisposable.h: include/Uno.Object.h

include/Fuse.Resources.ProxyImageSource.h: include/Uno.Object.h

include/Fuse.Resources.ResourceBinding-1.h: include/Fuse.Behavior.h

include/Fuse.Resources.ResourceBool.h: include/Fuse.Resources.ResourceSetter-1.h
include/Fuse.Resources.ResourceBool.h: include/Uno.Bool.h

include/Fuse.Resources.ResourceConverters.h: include/Uno.h

include/Fuse.Resources.ResourceFloat.h: include/Fuse.Resources.ResourceSetter-1.h
include/Fuse.Resources.ResourceFloat.h: include/Uno.Float.h

include/Fuse.Resources.ResourceFloat2.h: include/Fuse.Resources.ResourceSetter-1.h
include/Fuse.Resources.ResourceFloat2.h: include/Uno.Float2.h

include/Fuse.Resources.ResourceFloat3.h: include/Fuse.Resources.ResourceSetter-1.h
include/Fuse.Resources.ResourceFloat3.h: include/Uno.Float3.h

include/Fuse.Resources.ResourceFloat4.h: include/Fuse.Resources.ResourceSetter-1.h
include/Fuse.Resources.ResourceFloat4.h: include/Uno.Float4.h

include/Fuse.Resources.ResourceObject.h: include/Fuse.Resources.ResourceSetter-1.h
include/Fuse.Resources.ResourceObject.h: include/Uno.Object.h

include/Fuse.Resources.ResourceRegistry.h: include/Uno.h

include/Fuse.Resources.ResourceSetter-1.h: include/Fuse.Behavior.h

include/Fuse.Resources.ResourceString.h: include/Fuse.Resources.ResourceSetter-1.h
include/Fuse.Resources.ResourceString.h: include/Uno.String.h

include/Fuse.Resources.RetainDisposalPolicy.h: include/Fuse.Resources.DisposalPolicy.h

include/Fuse.Resources.TextureImageSource.h: include/Fuse.Resources.ImageSource.h

include/Fuse.RootViewport.h: include/Fuse.IDataContext.h
include/Fuse.RootViewport.h: include/Fuse.IViewport.h
include/Fuse.RootViewport.h: include/Fuse.Node.h
include/Fuse.RootViewport.h: include/Fuse.Scripting.INameScope.h
include/Fuse.RootViewport.h: include/Uno.Float2.h

include/Fuse.Rotation.h: include/Fuse.Transform.h
include/Fuse.Rotation.h: include/Uno.Float3.h

include/Fuse.Scaling.h: include/Fuse.Transform.h
include/Fuse.Scaling.h: include/Uno.Float3.h

include/Fuse.ScalingModes.h: include/Uno.h

include/Fuse.ScalingModes.IdentityMode.h: include/Fuse.IScalingMode.h
include/Fuse.ScalingModes.IdentityMode.h: include/Fuse.ITransformMode.h
include/Fuse.ScalingModes.IdentityMode.h: include/Uno.Object.h

include/Fuse.Scripting.Array.h: include/Uno.Object.h

include/Fuse.Scripting.BoolChangedArgs.h: include/Fuse.Scripting.IScriptEvent.h
include/Fuse.Scripting.BoolChangedArgs.h: include/Uno.Bool.h
include/Fuse.Scripting.BoolChangedArgs.h: include/Uno.UX.ValueChangedArgs-1.h

include/Fuse.Scripting.Callback.h: include/Uno.Delegate.h

include/Fuse.Scripting.Context.h: include/Uno.IDisposable.h
include/Fuse.Scripting.Context.h: include/Uno.Object.h

include/Fuse.Scripting.DoubleChangedArgs.h: include/Fuse.Scripting.IScriptEvent.h
include/Fuse.Scripting.DoubleChangedArgs.h: include/Uno.Double.h
include/Fuse.Scripting.DoubleChangedArgs.h: include/Uno.UX.ValueChangedArgs-1.h

include/Fuse.Scripting.Duktape.callback.h: include/Uno.Delegate.h

include/Fuse.Scripting.Duktape.CallbackClosure.h: include/Uno.Object.h

include/Fuse.Scripting.Duktape.CompileFlag.h: include/Uno.UInt.h

include/Fuse.Scripting.Duktape.Context.h: include/Fuse.Scripting.Context.h
include/Fuse.Scripting.Duktape.Context.h: include/Uno.IDisposable.h

include/Fuse.Scripting.Duktape.duktape.h: include/Uno.h

include/Fuse.Scripting.Duktape.EnumFlags.h: include/Uno.Int.h

include/Fuse.Scripting.Duktape.JSArray.h: include/Fuse.Scripting.Array.h

include/Fuse.Scripting.Duktape.JSFunction.h: include/Fuse.Scripting.Function.h

include/Fuse.Scripting.Duktape.JSObject.h: include/Fuse.Scripting.Object.h

include/Fuse.Scripting.Duktape.JSONObject.h: include/Uno.h

include/Fuse.Scripting.Error.h: include/Uno.Exception.h

include/Fuse.Scripting.FactoryClosure-1.h: include/Uno.Object.h

include/Fuse.Scripting.FileModule.h: include/Fuse.Scripting.IModule.h
include/Fuse.Scripting.FileModule.h: include/Uno.Object.h

include/Fuse.Scripting.Function.h: include/Uno.Object.h

include/Fuse.Scripting.FutureFactory-1.h: include/Uno.Delegate.h

include/Fuse.Scripting.IEventSerializer.h: include/Uno.Object.h

include/Fuse.Scripting.IModule.h: include/Uno.Object.h

include/Fuse.Scripting.INameListener.h: include/Uno.Object.h

include/Fuse.Scripting.INameScope.h: include/Uno.Object.h

include/Fuse.Scripting.IScriptEvent.h: include/Uno.Object.h

include/Fuse.Scripting.JSCallback.ActionClosure.h: include/Uno.Object.h

include/Fuse.Scripting.JSCallback.ActionClosure-1.h: include/Uno.Object.h

include/Fuse.Scripting.JSCallback.ActionClosure-2.h: include/Uno.Object.h

include/Fuse.Scripting.JSCallback.FuncClosure-1.h: include/Uno.Object.h

include/Fuse.Scripting.JSCallback.FuncClosure-2.h: include/Uno.Object.h

include/Fuse.Scripting.JSCallback.FuncClosure-3.h: include/Uno.Object.h

include/Fuse.Scripting.JSCallback.h: include/Uno.h

include/Fuse.Scripting.JSCallback.NumberConverter.h: include/Uno.h

include/Fuse.Scripting.NameRegistry.h: include/Uno.h

include/Fuse.Scripting.NativeCallback.h: include/Uno.Delegate.h

include/Fuse.Scripting.NativeEvent.h: include/Fuse.Scripting.Function.h
include/Fuse.Scripting.NativeEvent.h: include/Fuse.Scripting.NativeProperty-2.h

include/Fuse.Scripting.NativeFunction.h: include/Fuse.Scripting.NativeMember.h

include/Fuse.Scripting.NativeFunction.NativeFunctionClosure.h: include/Uno.Object.h

include/Fuse.Scripting.NativeMember.h: include/Uno.Object.h

include/Fuse.Scripting.NativeModule.h: include/Fuse.Scripting.IModule.h
include/Fuse.Scripting.NativeModule.h: include/Uno.Object.h

include/Fuse.Scripting.NativePromise-2.ContextClosure.h: include/Uno.Object.h

include/Fuse.Scripting.NativePromise-2.h: include/Fuse.Scripting.NativeMember.h

include/Fuse.Scripting.NativePromise-2.PromiseClosure.h: include/Uno.Object.h

include/Fuse.Scripting.NativeProperty-2.h: include/Fuse.Scripting.NativeMember.h

include/Fuse.Scripting.NodeCallback.h: include/Uno.Delegate.h

include/Fuse.Scripting.Object.h: include/Uno.Object.h

include/Fuse.Scripting.ResultConverter-2.h: include/Uno.Delegate.h

include/Fuse.Scripting.ResultFactory-1.h: include/Uno.Delegate.h

include/Fuse.Scripting.ScriptException.h: include/Uno.Exception.h

include/Fuse.Scripting.StringChangedArgs.h: include/Fuse.Scripting.IScriptEvent.h
include/Fuse.Scripting.StringChangedArgs.h: include/Uno.String.h
include/Fuse.Scripting.StringChangedArgs.h: include/Uno.UX.ValueChangedArgs-1.h

include/Fuse.Scripting.V8.Array.h: include/Fuse.Scripting.Array.h

include/Fuse.Scripting.V8.Context.h: include/Fuse.Scripting.Context.h
include/Fuse.Scripting.V8.Context.h: include/Uno.IDisposable.h

include/Fuse.Scripting.V8.Debugger.Connected.h: include/Fuse.Scripting.V8.Debugger.State.h
include/Fuse.Scripting.V8.Debugger.Connected.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Debugger.ConnectedMessageHandler.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Debugger.Connecting.h: include/Fuse.Scripting.V8.Debugger.State.h
include/Fuse.Scripting.V8.Debugger.Connecting.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Debugger.h: include/Uno.IDisposable.h
include/Fuse.Scripting.V8.Debugger.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Debugger.State.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Function.h: include/Fuse.Scripting.Function.h

include/Fuse.Scripting.V8.Marshaller.CallbackWrapper.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Marshaller.h: include/Uno.h

include/Fuse.Scripting.V8.Object.h: include/Fuse.Scripting.Object.h

include/Fuse.Scripting.V8.Simple.Array.h: include/Fuse.Scripting.V8.Simple.ArrayImpl.h
include/Fuse.Scripting.V8.Simple.Array.h: include/Fuse.Scripting.V8.Simple.Value.h

include/Fuse.Scripting.V8.Simple.ArrayImpl.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Simple.Bool.h: include/Fuse.Scripting.V8.Simple.BoolImpl.h
include/Fuse.Scripting.V8.Simple.Bool.h: include/Fuse.Scripting.V8.Simple.Value.h

include/Fuse.Scripting.V8.Simple.BoolImpl.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Simple.Callback.h: include/Fuse.Scripting.V8.Simple.Value.h

include/Fuse.Scripting.V8.Simple.CallbackImpl.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Simple.Context.h: include/Fuse.Scripting.V8.Simple.ContextImpl.h
include/Fuse.Scripting.V8.Simple.Context.h: include/Uno.IDisposable.h
include/Fuse.Scripting.V8.Simple.Context.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Simple.ContextImpl.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Simple.DelegateCallback.h: include/Fuse.Scripting.V8.Simple.Callback.h

include/Fuse.Scripting.V8.Simple.DelegateMessageHandler.h: include/Fuse.Scripting.V8.Simple.MessageHandler.h

include/Fuse.Scripting.V8.Simple.DelegateScriptExceptionHandler.h: include/Fuse.Scripting.V8.Simple.ScriptExceptionHandler.h

include/Fuse.Scripting.V8.Simple.DllDirectory.h: include/Uno.h

include/Fuse.Scripting.V8.Simple.Double.h: include/Fuse.Scripting.V8.Simple.DoubleImpl.h
include/Fuse.Scripting.V8.Simple.Double.h: include/Fuse.Scripting.V8.Simple.Value.h

include/Fuse.Scripting.V8.Simple.DoubleImpl.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Simple.Function.h: include/Fuse.Scripting.V8.Simple.FunctionImpl.h
include/Fuse.Scripting.V8.Simple.Function.h: include/Fuse.Scripting.V8.Simple.Value.h

include/Fuse.Scripting.V8.Simple.FunctionImpl.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Simple.Int.h: include/Fuse.Scripting.V8.Simple.IntImpl.h
include/Fuse.Scripting.V8.Simple.Int.h: include/Fuse.Scripting.V8.Simple.Value.h

include/Fuse.Scripting.V8.Simple.IntImpl.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Simple.MessageHandler.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Simple.MessageHandlerImpl.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Simple.MultiMap-1.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Simple.Object.h: include/Fuse.Scripting.V8.Simple.ObjectImpl.h
include/Fuse.Scripting.V8.Simple.Object.h: include/Fuse.Scripting.V8.Simple.Value.h

include/Fuse.Scripting.V8.Simple.ObjectImpl.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Simple.ScriptException.h: include/Fuse.Scripting.V8.Simple.ScriptExceptionImpl.h
include/Fuse.Scripting.V8.Simple.ScriptException.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Simple.ScriptExceptionHandler.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Simple.ScriptExceptionHandlerImpl.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Simple.ScriptExceptionImpl.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Simple.String.h: include/Fuse.Scripting.V8.Simple.StringImpl.h
include/Fuse.Scripting.V8.Simple.String.h: include/Fuse.Scripting.V8.Simple.Value.h

include/Fuse.Scripting.V8.Simple.StringExtensions.h: include/Uno.h

include/Fuse.Scripting.V8.Simple.StringImpl.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Simple.Type.h: include/Uno.Int.h

include/Fuse.Scripting.V8.Simple.UniqueValueVector.h: include/Fuse.Scripting.V8.Simple.UniqueValueVectorImpl.h
include/Fuse.Scripting.V8.Simple.UniqueValueVector.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Simple.UniqueValueVectorImpl.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Simple.Value.h: include/Fuse.Scripting.V8.Simple.ValueImpl.h
include/Fuse.Scripting.V8.Simple.Value.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Simple.ValueExtensions.h: include/Uno.h

include/Fuse.Scripting.V8.Simple.ValueImpl.h: include/Uno.Object.h

include/Fuse.Scripting.V8.Simple.ValueVector.h: include/Fuse.Scripting.V8.Simple.Value.h
include/Fuse.Scripting.V8.Simple.ValueVector.h: include/Uno.Collections.ICollection-1.h
include/Fuse.Scripting.V8.Simple.ValueVector.h: include/Uno.Collections.IEnumerable-1.h
include/Fuse.Scripting.V8.Simple.ValueVector.h: include/Uno.Collections.IList-1.h
include/Fuse.Scripting.V8.Simple.ValueVector.h: include/Uno.Object.h

include/Fuse.Scripting.Value.h: include/Uno.h

include/Fuse.Scripting.ValueConverter-2.h: include/Uno.Delegate.h

include/Fuse.Shapes.Circle.h: include/Fuse.Animations.IResize.h
include/Fuse.Shapes.Circle.h: include/Fuse.IActualPlacement.h
include/Fuse.Shapes.Circle.h: include/Fuse.IDataContext.h
include/Fuse.Shapes.Circle.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Shapes.Circle.h: include/Fuse.Shapes.Shape.h
include/Fuse.Shapes.Circle.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Shapes.Circle.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Shapes.Circle.h: include/Fuse.Triggers.Actions.IShow.h

include/Fuse.Shapes.Ellipse.h: include/Fuse.Animations.IResize.h
include/Fuse.Shapes.Ellipse.h: include/Fuse.IActualPlacement.h
include/Fuse.Shapes.Ellipse.h: include/Fuse.IDataContext.h
include/Fuse.Shapes.Ellipse.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Shapes.Ellipse.h: include/Fuse.Shapes.PathShape.h
include/Fuse.Shapes.Ellipse.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Shapes.Ellipse.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Shapes.Ellipse.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Shapes.Ellipse.h: include/Uno.Float2.h

include/Fuse.Shapes.FillRule.h: include/Uno.Int.h

include/Fuse.Shapes.FitMode.h: include/Uno.Int.h

include/Fuse.Shapes.GeometryCache.h: include/Uno.Object.h

include/Fuse.Shapes.GeometryCacheEntry.h: include/Uno.Object.h

include/Fuse.Shapes.Path.h: include/Fuse.Animations.IResize.h
include/Fuse.Shapes.Path.h: include/Fuse.IActualPlacement.h
include/Fuse.Shapes.Path.h: include/Fuse.IDataContext.h
include/Fuse.Shapes.Path.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Shapes.Path.h: include/Fuse.Shapes.PathShape.h
include/Fuse.Shapes.Path.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Shapes.Path.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Shapes.Path.h: include/Fuse.Triggers.Actions.IShow.h
include/Fuse.Shapes.Path.h: include/Uno.Float2.h

include/Fuse.Shapes.PathScaleMode.h: include/Uno.Int.h

include/Fuse.Shapes.PathShape.h: include/Fuse.Animations.IResize.h
include/Fuse.Shapes.PathShape.h: include/Fuse.Elements.Element.h
include/Fuse.Shapes.PathShape.h: include/Fuse.IActualPlacement.h
include/Fuse.Shapes.PathShape.h: include/Fuse.IDataContext.h
include/Fuse.Shapes.PathShape.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Shapes.PathShape.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Shapes.PathShape.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Shapes.PathShape.h: include/Fuse.Triggers.Actions.IShow.h

include/Fuse.Shapes.Rectangle.h: include/Fuse.Animations.IResize.h
include/Fuse.Shapes.Rectangle.h: include/Fuse.IActualPlacement.h
include/Fuse.Shapes.Rectangle.h: include/Fuse.IDataContext.h
include/Fuse.Shapes.Rectangle.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Shapes.Rectangle.h: include/Fuse.Shapes.Shape.h
include/Fuse.Shapes.Rectangle.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Shapes.Rectangle.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Shapes.Rectangle.h: include/Fuse.Triggers.Actions.IShow.h

include/Fuse.Shapes.RegularPolygon.h: include/Fuse.Animations.IResize.h
include/Fuse.Shapes.RegularPolygon.h: include/Fuse.IActualPlacement.h
include/Fuse.Shapes.RegularPolygon.h: include/Fuse.IDataContext.h
include/Fuse.Shapes.RegularPolygon.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Shapes.RegularPolygon.h: include/Fuse.Shapes.PathShape.h
include/Fuse.Shapes.RegularPolygon.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Shapes.RegularPolygon.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Shapes.RegularPolygon.h: include/Fuse.Triggers.Actions.IShow.h

include/Fuse.Shapes.Shape.h: include/Fuse.Animations.IResize.h
include/Fuse.Shapes.Shape.h: include/Fuse.Elements.Element.h
include/Fuse.Shapes.Shape.h: include/Fuse.IActualPlacement.h
include/Fuse.Shapes.Shape.h: include/Fuse.IDataContext.h
include/Fuse.Shapes.Shape.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Shapes.Shape.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Shapes.Shape.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Shapes.Shape.h: include/Fuse.Triggers.Actions.IShow.h

include/Fuse.Shapes.Star.h: include/Fuse.Animations.IResize.h
include/Fuse.Shapes.Star.h: include/Fuse.IActualPlacement.h
include/Fuse.Shapes.Star.h: include/Fuse.IDataContext.h
include/Fuse.Shapes.Star.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Shapes.Star.h: include/Fuse.Shapes.PathShape.h
include/Fuse.Shapes.Star.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Fuse.Shapes.Star.h: include/Fuse.Triggers.Actions.IHide.h
include/Fuse.Shapes.Star.h: include/Fuse.Triggers.Actions.IShow.h

include/Fuse.Shear.h: include/Fuse.Transform.h
include/Fuse.Shear.h: include/Uno.Float2.h

include/Fuse.Stage.h: include/Uno.Object.h

include/Fuse.Storage.ApplicationDir.h: include/Uno.h

include/Fuse.Storage.ApplicationDir.ReadClosure.h: include/Uno.Object.h

include/Fuse.Storage.ApplicationDir.WriteClosure.h: include/Uno.Object.h

include/Fuse.Style.h: include/Uno.Object.h
include/Fuse.Style.h: include/Uno.UX.ITemplate.h

include/Fuse.StyleProperty.h: include/Uno.Object.h

include/Fuse.StyleProperty-2.h: include/Fuse.StyleProperty.h

include/Fuse.StylePropertyWithUnit-3.h: include/Fuse.Node.h
include/Fuse.StylePropertyWithUnit-3.h: include/Fuse.StyleProperty-2.h
include/Fuse.StylePropertyWithUnit-3.h: include/Uno.Object.h

include/Fuse.Theme.h: include/Fuse.Style.h
include/Fuse.Theme.h: include/Uno.UX.ITemplate.h

include/Fuse.Themes.GraphicsStyle.h: include/Fuse.Style.h
include/Fuse.Themes.GraphicsStyle.h: include/Uno.UX.ITemplate.h

include/Fuse.Themes.GraphicsStyle.Template.h: include/Fuse.Controls.TextControl.h
include/Fuse.Themes.GraphicsStyle.Template.h: include/Uno.UX.ITemplate.h
include/Fuse.Themes.GraphicsStyle.Template.h: include/Uno.UX.Template-1.h

include/Fuse.Themes.GraphicsStyle.Template1.h: include/Fuse.Controls.Rectangle.h
include/Fuse.Themes.GraphicsStyle.Template1.h: include/Uno.UX.ITemplate.h
include/Fuse.Themes.GraphicsStyle.Template1.h: include/Uno.UX.Template-1.h

include/Fuse.Themes.GraphicsStyle.Template2.h: include/Fuse.Controls.Circle.h
include/Fuse.Themes.GraphicsStyle.Template2.h: include/Uno.UX.ITemplate.h
include/Fuse.Themes.GraphicsStyle.Template2.h: include/Uno.UX.Template-1.h

include/Fuse.Themes.GraphicsStyle.Template3.h: include/Fuse.Controls.Star.h
include/Fuse.Themes.GraphicsStyle.Template3.h: include/Uno.UX.ITemplate.h
include/Fuse.Themes.GraphicsStyle.Template3.h: include/Uno.UX.Template-1.h

include/Fuse.Themes.GraphicsStyle.Template4.h: include/Fuse.Controls.Ellipse.h
include/Fuse.Themes.GraphicsStyle.Template4.h: include/Uno.UX.ITemplate.h
include/Fuse.Themes.GraphicsStyle.Template4.h: include/Uno.UX.Template-1.h

include/Fuse.Themes.GraphicsStyle.Template5.h: include/Fuse.Controls.RegularPolygon.h
include/Fuse.Themes.GraphicsStyle.Template5.h: include/Uno.UX.ITemplate.h
include/Fuse.Themes.GraphicsStyle.Template5.h: include/Uno.UX.Template-1.h

include/Fuse.Themes.GraphicsStyle.Template6.h: include/Fuse.Controls.Path.h
include/Fuse.Themes.GraphicsStyle.Template6.h: include/Uno.UX.ITemplate.h
include/Fuse.Themes.GraphicsStyle.Template6.h: include/Uno.UX.Template-1.h

include/Fuse.Themes.GraphicsStyle.Template7.h: include/Fuse.Controls.Image.h
include/Fuse.Themes.GraphicsStyle.Template7.h: include/Uno.UX.ITemplate.h
include/Fuse.Themes.GraphicsStyle.Template7.h: include/Uno.UX.Template-1.h

include/Fuse.Themes.GraphicsStyle.Template8.h: include/Fuse.Controls.Video.h
include/Fuse.Themes.GraphicsStyle.Template8.h: include/Uno.UX.ITemplate.h
include/Fuse.Themes.GraphicsStyle.Template8.h: include/Uno.UX.Template-1.h

include/Fuse.Themes.GraphicsStyle.Template9.h: include/Fuse.Controls.ScrollView.h
include/Fuse.Themes.GraphicsStyle.Template9.h: include/Uno.UX.ITemplate.h
include/Fuse.Themes.GraphicsStyle.Template9.h: include/Uno.UX.Template-1.h

include/Fuse.Time.h: include/Uno.h

include/Fuse.Timer.h: include/Uno.Object.h

include/Fuse.Transform.h: include/Uno.Object.h

include/Fuse.TransformModeFlags.h: include/Uno.Int.h

include/Fuse.Translation.h: include/Fuse.Transform.h

include/Fuse.TranslationModes.h: include/Uno.h

include/Fuse.TranslationModes.LocalMode.h: include/Fuse.ITransformMode.h
include/Fuse.TranslationModes.LocalMode.h: include/Fuse.ITranslationMode.h
include/Fuse.TranslationModes.LocalMode.h: include/Uno.Object.h

include/Fuse.TranslationModes.ParentSizeMode.h: include/Fuse.ITransformMode.h
include/Fuse.TranslationModes.ParentSizeMode.h: include/Fuse.ITranslationMode.h
include/Fuse.TranslationModes.ParentSizeMode.h: include/Uno.Object.h

include/Fuse.TranslationModes.SizeMode.h: include/Fuse.ITransformMode.h
include/Fuse.TranslationModes.SizeMode.h: include/Fuse.ITranslationMode.h
include/Fuse.TranslationModes.SizeMode.h: include/Uno.Object.h

include/Fuse.Triggers.Actions.BringIntoView.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.BringToFront.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.Call.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.Callback.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.CancelInteractions.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.Collapse.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.DebugAction.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.DebugFrame.h: include/Fuse.Triggers.Actions.ITaggedDebugProperty.h
include/Fuse.Triggers.Actions.DebugFrame.h: include/Uno.Object.h

include/Fuse.Triggers.Actions.DebugProperty-1.h: include/Fuse.Triggers.Actions.ITaggedDebugProperty.h
include/Fuse.Triggers.Actions.DebugProperty-1.h: include/Uno.Object.h

include/Fuse.Triggers.Actions.DebugTime.h: include/Fuse.Triggers.Actions.ITaggedDebugProperty.h
include/Fuse.Triggers.Actions.DebugTime.h: include/Uno.Object.h

include/Fuse.Triggers.Actions.EvaluateJS.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.GiveFocus.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.Hide.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.ICollapse.h: include/Uno.Object.h

include/Fuse.Triggers.Actions.IHide.h: include/Uno.Object.h

include/Fuse.Triggers.Actions.IShow.h: include/Uno.Object.h

include/Fuse.Triggers.Actions.ITaggedDebugProperty.h: include/Uno.Object.h

include/Fuse.Triggers.Actions.JSEventArgs.h: include/Fuse.Scripting.IScriptEvent.h
include/Fuse.Triggers.Actions.JSEventArgs.h: include/Uno.EventArgs.h

include/Fuse.Triggers.Actions.JSEventHandler.h: include/Uno.Delegate.h

include/Fuse.Triggers.Actions.LaunchEmail.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.LaunchMaps.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.LaunchUri.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.LoadHtml.h: include/Fuse.Controls.ISourceReceiver.h
include/Fuse.Triggers.Actions.LoadHtml.h: include/Fuse.Triggers.Actions.WebViewNavAction.h

include/Fuse.Triggers.Actions.LoadUrl.h: include/Fuse.Triggers.Actions.WebViewNavAction.h

include/Fuse.Triggers.Actions.Pause.h: include/Fuse.Triggers.Actions.PlaybackAction.h

include/Fuse.Triggers.Actions.PlaybackAction.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.PlayTo.h: include/Fuse.Triggers.Actions.PlaybackAction.h

include/Fuse.Triggers.Actions.Pulse.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.PulseBackward.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.PulseForward.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.RaiseUserEvent.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.ReleaseFocus.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.Reload.h: include/Fuse.Triggers.Actions.WebViewNavAction.h

include/Fuse.Triggers.Actions.Resume.h: include/Fuse.Triggers.Actions.PlaybackAction.h

include/Fuse.Triggers.Actions.SendToBack.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.Set-1.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.Show.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.Stop.h: include/Fuse.Triggers.Actions.PlaybackAction.h

include/Fuse.Triggers.Actions.StopLoading.h: include/Fuse.Triggers.Actions.WebViewNavAction.h

include/Fuse.Triggers.Actions.TransitionLayout.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.TransitionState.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.Actions.TransitionStateType.h: include/Uno.Int.h

include/Fuse.Triggers.Actions.TriggerAction.h: include/Uno.Object.h

include/Fuse.Triggers.Actions.TriggerDirection.h: include/Uno.Int.h

include/Fuse.Triggers.Actions.UserEventArg.h: include/Uno.Object.h

include/Fuse.Triggers.Actions.WebViewNavAction.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Triggers.AddingAnimation.h: include/Fuse.Triggers.Trigger.h

include/Fuse.Triggers.Android.h: include/Fuse.Triggers.Trigger.h

include/Fuse.Triggers.ContainingText.h: include/Fuse.Triggers.WhileContainsText.h

include/Fuse.Triggers.IMediaPlayback.h: include/Fuse.Triggers.IPlayback.h
include/Fuse.Triggers.IMediaPlayback.h: include/Fuse.Triggers.IProgress.h
include/Fuse.Triggers.IMediaPlayback.h: include/Uno.Object.h

include/Fuse.Triggers.InteractionCompleted.h: include/Fuse.Triggers.Trigger.h

include/Fuse.Triggers.iOS.h: include/Fuse.Triggers.Trigger.h

include/Fuse.Triggers.IPlayback.h: include/Fuse.Triggers.IProgress.h
include/Fuse.Triggers.IPlayback.h: include/Uno.Object.h

include/Fuse.Triggers.IProgress.h: include/Uno.Object.h

include/Fuse.Triggers.IPulseTrigger.h: include/Uno.Object.h

include/Fuse.Triggers.IValue-1.h: include/Uno.Object.h

include/Fuse.Triggers.IVisibility.h: include/Uno.Object.h

include/Fuse.Triggers.KeyPressHandler.h: include/Uno.Delegate.h

include/Fuse.Triggers.LayoutAnimation.h: include/Fuse.Triggers.Trigger.h
include/Fuse.Triggers.LayoutAnimation.h: include/Uno.Float2.h
include/Fuse.Triggers.LayoutAnimation.h: include/Uno.Float4x4.h

include/Fuse.Triggers.LayoutAnimationType.h: include/Uno.Int.h

include/Fuse.Triggers.LayoutTransition.h: include/Uno.h

include/Fuse.Triggers.LayoutTransition.PositionChangeMode.h: include/Fuse.ITransformMode.h
include/Fuse.Triggers.LayoutTransition.PositionChangeMode.h: include/Fuse.ITranslationMode.h
include/Fuse.Triggers.LayoutTransition.PositionChangeMode.h: include/Uno.Object.h

include/Fuse.Triggers.LayoutTransition.ResizeChangeMode.h: include/Fuse.Animations.IResizeMode.h
include/Fuse.Triggers.LayoutTransition.ResizeChangeMode.h: include/Fuse.ITransformMode.h
include/Fuse.Triggers.LayoutTransition.ResizeChangeMode.h: include/Uno.Object.h

include/Fuse.Triggers.LayoutTransition.ScaleChangeMode.h: include/Fuse.IScalingMode.h
include/Fuse.Triggers.LayoutTransition.ScaleChangeMode.h: include/Fuse.ITransformMode.h
include/Fuse.Triggers.LayoutTransition.ScaleChangeMode.h: include/Uno.Object.h

include/Fuse.Triggers.LayoutTransition.WorldPositionChangeMode.h: include/Fuse.ITransformMode.h
include/Fuse.Triggers.LayoutTransition.WorldPositionChangeMode.h: include/Fuse.ITranslationMode.h
include/Fuse.Triggers.LayoutTransition.WorldPositionChangeMode.h: include/Uno.Object.h

include/Fuse.Triggers.LayoutTransitioned.h: include/Fuse.NodeEvent-2.h
include/Fuse.Triggers.LayoutTransitioned.h: include/Fuse.Triggers.LayoutTransitionedArgs.h
include/Fuse.Triggers.LayoutTransitioned.h: include/Fuse.Triggers.LayoutTransitionedHandler.h

include/Fuse.Triggers.LayoutTransitionedArgs.h: include/Fuse.NodeEventArgs.h
include/Fuse.Triggers.LayoutTransitionedArgs.h: include/Fuse.Scripting.IScriptEvent.h

include/Fuse.Triggers.LayoutTransitionedHandler.h: include/Uno.Delegate.h

include/Fuse.Triggers.OnBackButton.h: include/Fuse.Triggers.OnKeyPress.h

include/Fuse.Triggers.OnKeyPress.h: include/Fuse.Triggers.Trigger.h

include/Fuse.Triggers.OnUserEvent.h: include/Fuse.Triggers.Trigger.h

include/Fuse.Triggers.OnUserEventFilter.h: include/Uno.Int.h

include/Fuse.Triggers.PageBeginLoading.h: include/Fuse.Triggers.Trigger.h

include/Fuse.Triggers.PageLoaded.h: include/Fuse.Triggers.Trigger.h

include/Fuse.Triggers.ProgressAnimation.h: include/Fuse.Triggers.Trigger.h

include/Fuse.Triggers.PullToReload.h: include/Fuse.Triggers.ScrollingAnimation.h

include/Fuse.Triggers.RangeAnimation.h: include/Fuse.Triggers.Trigger.h

include/Fuse.Triggers.RemovingAnimation.h: include/Fuse.Triggers.Trigger.h

include/Fuse.Triggers.ScrollingAnimation.h: include/Fuse.Triggers.Trigger.h

include/Fuse.Triggers.ScrollingAnimationRange.h: include/Uno.Int.h

include/Fuse.Triggers.State.h: include/Fuse.Triggers.Trigger.h

include/Fuse.Triggers.StateGroup.h: include/Fuse.Behavior.h
include/Fuse.Triggers.StateGroup.h: include/Fuse.Scripting.INameScope.h

include/Fuse.Triggers.StateTransition.h: include/Uno.Int.h

include/Fuse.Triggers.TextInputActionTriggered.h: include/Fuse.Triggers.Trigger.h

include/Fuse.Triggers.Timeline.h: include/Fuse.Triggers.IPlayback.h
include/Fuse.Triggers.Timeline.h: include/Fuse.Triggers.IProgress.h
include/Fuse.Triggers.Timeline.h: include/Fuse.Triggers.IPulseTrigger.h
include/Fuse.Triggers.Timeline.h: include/Fuse.Triggers.Trigger.h

include/Fuse.Triggers.Timeline.State.h: include/Uno.Int.h

include/Fuse.Triggers.Trigger.h: include/Fuse.Behavior.h

include/Fuse.Triggers.TriggerBypassMode.h: include/Uno.Int.h

include/Fuse.Triggers.WhileBool.h: include/Fuse.Triggers.IPulseTrigger.h
include/Fuse.Triggers.WhileBool.h: include/Fuse.Triggers.IValue-1.h
include/Fuse.Triggers.WhileBool.h: include/Fuse.Triggers.WhileValue-1.h
include/Fuse.Triggers.WhileBool.h: include/Uno.Bool.h

include/Fuse.Triggers.WhileCompleted.h: include/Fuse.Triggers.WhileTrigger.h

include/Fuse.Triggers.WhileContainsText.h: include/Fuse.Triggers.WhileTrigger.h

include/Fuse.Triggers.WhileDisabled.h: include/Fuse.Triggers.WhileEnabledDisabledTrigger.h

include/Fuse.Triggers.WhileEnabled.h: include/Fuse.Triggers.WhileEnabledDisabledTrigger.h

include/Fuse.Triggers.WhileEnabledDisabledTrigger.h: include/Fuse.Triggers.WhileTrigger.h

include/Fuse.Triggers.WhileFailed.h: include/Fuse.Triggers.WhileTrigger.h

include/Fuse.Triggers.WhileFalse.h: include/Fuse.Triggers.IPulseTrigger.h
include/Fuse.Triggers.WhileFalse.h: include/Fuse.Triggers.IValue-1.h
include/Fuse.Triggers.WhileFalse.h: include/Fuse.Triggers.WhileBool.h
include/Fuse.Triggers.WhileFalse.h: include/Uno.Bool.h

include/Fuse.Triggers.WhileFloat.h: include/Fuse.Triggers.IPulseTrigger.h
include/Fuse.Triggers.WhileFloat.h: include/Fuse.Triggers.IValue-1.h
include/Fuse.Triggers.WhileFloat.h: include/Fuse.Triggers.WhileValue-1.h
include/Fuse.Triggers.WhileFloat.h: include/Uno.Float.h
include/Fuse.Triggers.WhileFloat.h: include/Uno.Float2.h

include/Fuse.Triggers.WhileFloat.Range.h: include/Uno.Int.h

include/Fuse.Triggers.WhileFocused.h: include/Fuse.Triggers.WhileTrigger.h

include/Fuse.Triggers.WhileFocusWithin.h: include/Fuse.Triggers.WhileTrigger.h

include/Fuse.Triggers.WhileInteracting.h: include/Fuse.Triggers.WhileTrigger.h

include/Fuse.Triggers.WhileKeyboardVisible.h: include/Fuse.Triggers.Trigger.h

include/Fuse.Triggers.WhileKeyboardVisible.RelativeToKeyboardMode.h: include/Fuse.ITransformMode.h
include/Fuse.Triggers.WhileKeyboardVisible.RelativeToKeyboardMode.h: include/Fuse.ITranslationMode.h
include/Fuse.Triggers.WhileKeyboardVisible.RelativeToKeyboardMode.h: include/Uno.Object.h

include/Fuse.Triggers.WhileLoading.h: include/Fuse.Triggers.WhileTrigger.h

include/Fuse.Triggers.WhileNotFocused.h: include/Fuse.Triggers.WhileTrigger.h

include/Fuse.Triggers.WhilePageLoading.h: include/Fuse.Triggers.WhileTrigger.h

include/Fuse.Triggers.WhilePaused.h: include/Fuse.Triggers.WhileTrigger.h

include/Fuse.Triggers.WhilePlaying.h: include/Fuse.Triggers.WhileTrigger.h

include/Fuse.Triggers.WhileScrollable.h: include/Fuse.Triggers.WhileTrigger.h

include/Fuse.Triggers.WhileTrigger.h: include/Fuse.Triggers.Trigger.h

include/Fuse.Triggers.WhileTrue.h: include/Fuse.Triggers.IPulseTrigger.h
include/Fuse.Triggers.WhileTrue.h: include/Fuse.Triggers.IValue-1.h
include/Fuse.Triggers.WhileTrue.h: include/Fuse.Triggers.WhileBool.h
include/Fuse.Triggers.WhileTrue.h: include/Uno.Bool.h

include/Fuse.Triggers.WhileValue-1.h: include/Fuse.Triggers.IPulseTrigger.h
include/Fuse.Triggers.WhileValue-1.h: include/Fuse.Triggers.IValue-1.h
include/Fuse.Triggers.WhileValue-1.h: include/Fuse.Triggers.WhileTrigger.h
include/Fuse.Triggers.WhileValue-1.h: include/Uno.Object.h

include/Fuse.Triggers.WhileValueStatic.h: include/Uno.h

include/Fuse.Triggers.WhileVisible.h: include/Fuse.Triggers.WhileTrigger.h

include/Fuse.Triggers.WhileWindowAspect.h: include/Fuse.Triggers.WindowSizeTrigger.h

include/Fuse.Triggers.WhileWindowLandscape.h: include/Fuse.Triggers.WhileWindowAspect.h

include/Fuse.Triggers.WhileWindowPortrait.h: include/Fuse.Triggers.WhileWindowAspect.h

include/Fuse.Triggers.WhileWindowSize.h: include/Fuse.Triggers.WindowSizeTrigger.h
include/Fuse.Triggers.WhileWindowSize.h: include/Uno.Float2.h

include/Fuse.Triggers.WindowSizeTrigger.h: include/Fuse.Triggers.WhileTrigger.h

include/Fuse.UnhandledExceptionArgs.h: include/Uno.EventArgs.h

include/Fuse.UnhandledExceptionHandler.h: include/Uno.Delegate.h

include/Fuse.UpdateDispatcher.h: include/Uno.Object.h
include/Fuse.UpdateDispatcher.h: include/Uno.Threading.IDispatcher.h

include/Fuse.UpdateListener.h: include/Uno.Object.h

include/Fuse.UpdateManager.h: include/Uno.h

include/Fuse.UpdateStage.h: include/Uno.Int.h

include/Fuse.UserEvent.h: include/Fuse.Behavior.h

include/Fuse.UserEventArgs.h: include/Fuse.Scripting.IScriptEvent.h
include/Fuse.UserEventArgs.h: include/Uno.EventArgs.h

include/Fuse.UserEventDispatch.h: include/Uno.Object.h

include/Fuse.UserEventHandler.h: include/Uno.Delegate.h

include/Fuse.Vibration.Vibrate.h: include/Fuse.Triggers.Actions.TriggerAction.h

include/Fuse.Vibration.Vibration.h: include/Uno.h

include/Fuse.Video.CancellationTokenSource.h: include/Uno.Object.h

include/Fuse.Video.Graphics.Android.AndroidAudioHelpers.h: include/Uno.h

include/Fuse.Video.Graphics.Android.AndroidVideoLoader.h: include/Fuse.Video.VideoLoader.h

include/Fuse.Video.Graphics.Android.BufferingArgs.h: include/Uno.EventArgs.h

include/Fuse.Video.Graphics.Android.BufferingEvent.h: include/Android.android.media.MediaPlayerDLROnBufferingUpdateListener.h
include/Fuse.Video.Graphics.Android.BufferingEvent.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.Video.Graphics.Android.BufferingEvent.h: include/Android.java.lang.Object.h
include/Fuse.Video.Graphics.Android.BufferingEvent.h: include/Uno.IDisposable.h

include/Fuse.Video.Graphics.Android.CompletionEvent.h: include/Android.android.media.MediaPlayerDLROnCompletionListener.h
include/Fuse.Video.Graphics.Android.CompletionEvent.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.Video.Graphics.Android.CompletionEvent.h: include/Android.java.lang.Object.h
include/Fuse.Video.Graphics.Android.CompletionEvent.h: include/Uno.IDisposable.h

include/Fuse.Video.Graphics.Android.ErrorEvent.h: include/Android.android.media.MediaPlayerDLROnErrorListener.h
include/Fuse.Video.Graphics.Android.ErrorEvent.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.Video.Graphics.Android.ErrorEvent.h: include/Android.java.lang.Object.h
include/Fuse.Video.Graphics.Android.ErrorEvent.h: include/Uno.IDisposable.h

include/Fuse.Video.Graphics.Android.ErrorEventArgs.h: include/Uno.EventArgs.h

include/Fuse.Video.Graphics.Android.ErrorEventHandler.h: include/Uno.Delegate.h

include/Fuse.Video.Graphics.Android.FrameAvailableEvent.h: include/Android.android.graphics.SurfaceTextureDLROnFrameAvailableListener.h
include/Fuse.Video.Graphics.Android.FrameAvailableEvent.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.Video.Graphics.Android.FrameAvailableEvent.h: include/Android.java.lang.Object.h
include/Fuse.Video.Graphics.Android.FrameAvailableEvent.h: include/Uno.IDisposable.h

include/Fuse.Video.Graphics.Android.PreparedEvent.h: include/Android.android.media.MediaPlayerDLROnPreparedListener.h
include/Fuse.Video.Graphics.Android.PreparedEvent.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.Video.Graphics.Android.PreparedEvent.h: include/Android.java.lang.Object.h
include/Fuse.Video.Graphics.Android.PreparedEvent.h: include/Uno.IDisposable.h

include/Fuse.Video.Graphics.Android.SeekCompleteEvent.h: include/Android.android.media.MediaPlayerDLROnSeekCompleteListener.h
include/Fuse.Video.Graphics.Android.SeekCompleteEvent.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.Video.Graphics.Android.SeekCompleteEvent.h: include/Android.java.lang.Object.h
include/Fuse.Video.Graphics.Android.SeekCompleteEvent.h: include/Uno.IDisposable.h

include/Fuse.Video.Graphics.Android.VideoPlayer.h: include/Fuse.Video.IVideoPlayer.h
include/Fuse.Video.Graphics.Android.VideoPlayer.h: include/Uno.IDisposable.h
include/Fuse.Video.Graphics.Android.VideoPlayer.h: include/Uno.Object.h

include/Fuse.Video.Graphics.Android.VideoSizeChanged.h: include/Android.android.media.MediaPlayerDLROnVideoSizeChangedListener.h
include/Fuse.Video.Graphics.Android.VideoSizeChanged.h: include/Android.Base.Wrappers.IJWrapper.h
include/Fuse.Video.Graphics.Android.VideoSizeChanged.h: include/Android.java.lang.Object.h
include/Fuse.Video.Graphics.Android.VideoSizeChanged.h: include/Uno.IDisposable.h

include/Fuse.Video.Graphics.Android.VideoSizeChangedArgs.h: include/Uno.EventArgs.h
include/Fuse.Video.Graphics.Android.VideoSizeChangedArgs.h: include/Uno.Int2.h

include/Fuse.Video.Graphics.Android.VideoSurface.h: include/Uno.IDisposable.h
include/Fuse.Video.Graphics.Android.VideoSurface.h: include/Uno.Object.h

include/Fuse.Video.IVideoPlayer.h: include/Uno.IDisposable.h
include/Fuse.Video.IVideoPlayer.h: include/Uno.Object.h
include/Fuse.Video.IVideoPlayer.h: include/Uno.Int2.h

include/Fuse.Video.LoadedHandler.h: include/Uno.Delegate.h

include/Fuse.Video.LoadFailed.h: include/Fuse.Video.LoadResult.h

include/Fuse.Video.LoadResult.h: include/Uno.Object.h

include/Fuse.Video.LoadSucceded.h: include/Fuse.Video.LoadResult.h

include/Fuse.Video.Scale9Rectangle.h: include/Uno.Object.h
include/Fuse.Video.Scale9Rectangle.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Video.VideoContainer.h: include/Fuse.Triggers.IMediaPlayback.h
include/Fuse.Video.VideoContainer.h: include/Fuse.Triggers.IPlayback.h
include/Fuse.Video.VideoContainer.h: include/Fuse.Triggers.IProgress.h
include/Fuse.Video.VideoContainer.h: include/Uno.Object.h

include/Fuse.Video.VideoDiskCache.h: include/Uno.h

include/Fuse.Video.VideoDrawElement.h: include/Uno.Float4x4.h
include/Fuse.Video.VideoDrawElement.h: include/Uno.Object.h
include/Fuse.Video.VideoDrawElement.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Fuse.Video.VideoLoader.h: include/Uno.Object.h

include/Fuse.Video.VideoVisual.h: include/Fuse.Controls.Graphics.ControlVisual-1.h
include/Fuse.Video.VideoVisual.h: include/Fuse.Controls.Video.h
include/Fuse.Video.VideoVisual.h: include/Fuse.IDataContext.h
include/Fuse.Video.VideoVisual.h: include/Fuse.Scripting.INameScope.h
include/Fuse.Video.VideoVisual.h: include/Uno.Float2.h
include/Fuse.Video.VideoVisual.h: include/Uno.Float4.h
include/Fuse.Video.VideoVisual.h: include/Uno.Int2.h

include/Java.Object.h: include/Uno.Object.h

include/OpenGL.GL.h: include/Uno.h

include/OpenGL.GLBlendEquation.h: include/Uno.Int.h

include/OpenGL.GLBlendingFactor.h: include/Uno.Int.h

include/OpenGL.GLBufferHandle.h: include/Uno.Object.h

include/OpenGL.GLBufferTarget.h: include/Uno.Int.h

include/OpenGL.GLBufferUsage.h: include/Uno.Int.h

include/OpenGL.GLClearBufferMask.h: include/Uno.Int.h

include/OpenGL.GLCullFaceMode.h: include/Uno.Int.h

include/OpenGL.GLDataType.h: include/Uno.Int.h

include/OpenGL.GLDepthFunction.h: include/Uno.Int.h

include/OpenGL.GLEnableCap.h: include/Uno.Int.h

include/OpenGL.GLError.h: include/Uno.Int.h

include/OpenGL.GLFramebufferAttachment.h: include/Uno.Int.h

include/OpenGL.GLFramebufferHandle.h: include/Uno.Object.h

include/OpenGL.GLFramebufferStatus.h: include/Uno.Int.h

include/OpenGL.GLFramebufferTarget.h: include/Uno.Int.h

include/OpenGL.GLFrontFaceDirection.h: include/Uno.Int.h

include/OpenGL.GLIndexType.h: include/Uno.Int.h

include/OpenGL.GLInteger4Name.h: include/Uno.Int.h

include/OpenGL.GLIntegerName.h: include/Uno.Int.h

include/OpenGL.GLPixelFormat.h: include/Uno.Int.h

include/OpenGL.GLPixelType.h: include/Uno.Int.h

include/OpenGL.GLPrimitiveType.h: include/Uno.Int.h

include/OpenGL.GLProgramHandle.h: include/Uno.Object.h

include/OpenGL.GLProgramParameter.h: include/Uno.Int.h

include/OpenGL.GLRenderbufferHandle.h: include/Uno.Object.h

include/OpenGL.GLRenderbufferStorage.h: include/Uno.Int.h

include/OpenGL.GLRenderbufferTarget.h: include/Uno.Int.h

include/OpenGL.GLShaderHandle.h: include/Uno.Object.h

include/OpenGL.GLShaderParameter.h: include/Uno.Int.h

include/OpenGL.GLShaderType.h: include/Uno.Int.h

include/OpenGL.GLTextureHandle.h: include/Uno.Object.h

include/OpenGL.GLTextureParameterName.h: include/Uno.Int.h

include/OpenGL.GLTextureParameterValue.h: include/Uno.Int.h

include/OpenGL.GLTextureTarget.h: include/Uno.Int.h

include/OpenGL.GLTextureUnit.h: include/Uno.Int.h

include/Outracks.Simulator.AggregateConnectError.h: include/Uno.h

include/Outracks.Simulator.Application.h: include/Fuse.App.h
include/Outracks.Simulator.Application.h: include/Fuse.Input.IPointerEventResponder.h

include/Outracks.Simulator.Apply-1.h: include/Uno.Object.h

include/Outracks.Simulator.ApplyFirst-2.h: include/Uno.Object.h

include/Outracks.Simulator.ApplySecond-2.h: include/Uno.Object.h

include/Outracks.Simulator.ArrayStream.h: include/Uno.IDisposable.h
include/Outracks.Simulator.ArrayStream.h: include/Uno.IO.Stream.h

include/Outracks.Simulator.Bytecode.AddEventHandler.h: include/Outracks.Simulator.Bytecode.Expression.h

include/Outracks.Simulator.Bytecode.BindVariable.h: include/Uno.Object.h

include/Outracks.Simulator.Bytecode.BlobLiteral.h: include/Outracks.Simulator.Bytecode.Literal.h

include/Outracks.Simulator.Bytecode.BooleanLiteral.h: include/Outracks.Simulator.Bytecode.Literal.h

include/Outracks.Simulator.Bytecode.CallDynamicMethod.h: include/Outracks.Simulator.Bytecode.Expression.h

include/Outracks.Simulator.Bytecode.CallLambda.h: include/Outracks.Simulator.Bytecode.Expression.h

include/Outracks.Simulator.Bytecode.CallStaticMethod.h: include/Outracks.Simulator.Bytecode.Expression.h

include/Outracks.Simulator.Bytecode.EnumLiteral.h: include/Outracks.Simulator.Bytecode.Literal.h

include/Outracks.Simulator.Bytecode.Expression.h: include/Outracks.Simulator.Bytecode.Statement.h

include/Outracks.Simulator.Bytecode.Instantiate.h: include/Outracks.Simulator.Bytecode.Expression.h

include/Outracks.Simulator.Bytecode.IsType.h: include/Outracks.Simulator.Bytecode.Expression.h

include/Outracks.Simulator.Bytecode.Lambda.h: include/Outracks.Simulator.Bytecode.Expression.h

include/Outracks.Simulator.Bytecode.Literal.h: include/Outracks.Simulator.Bytecode.Expression.h

include/Outracks.Simulator.Bytecode.LogicalOr.h: include/Outracks.Simulator.Bytecode.Expression.h

include/Outracks.Simulator.Bytecode.MethodGroup.h: include/Outracks.Simulator.Bytecode.Expression.h

include/Outracks.Simulator.Bytecode.NamespaceName.h: include/Outracks.Simulator.IEquatable-1.h
include/Outracks.Simulator.Bytecode.NamespaceName.h: include/Uno.Object.h

include/Outracks.Simulator.Bytecode.NoOperation.h: include/Outracks.Simulator.Bytecode.Optional-1.h
include/Outracks.Simulator.Bytecode.NoOperation.h: include/Outracks.Simulator.Bytecode.Statement.h

include/Outracks.Simulator.Bytecode.NumberLiteral.h: include/Outracks.Simulator.Bytecode.Literal.h

include/Outracks.Simulator.Bytecode.NumberType.h: include/Uno.Int.h

include/Outracks.Simulator.Bytecode.Optional.h: include/Uno.Object.h
include/Outracks.Simulator.Bytecode.Optional.h: include/Outracks.Simulator.Bytecode.Optional-1.h

include/Outracks.Simulator.Bytecode.Optional-1.h: include/Outracks.Simulator.IEquatable-1.h
include/Outracks.Simulator.Bytecode.Optional-1.h: include/Uno.Object.h

include/Outracks.Simulator.Bytecode.OptionalExtensions.h: include/Uno.h
include/Outracks.Simulator.Bytecode.OptionalExtensions.h: include/Outracks.Simulator.Bytecode.Optional-1.h
include/Outracks.Simulator.Bytecode.OptionalExtensions.h: include/Uno.Object.h

include/Outracks.Simulator.Bytecode.Parameter.h: include/Uno.Object.h

include/Outracks.Simulator.Bytecode.ProjectBytecode.h: include/Uno.Object.h

include/Outracks.Simulator.Bytecode.ReadProperty.h: include/Outracks.Simulator.Bytecode.Expression.h

include/Outracks.Simulator.Bytecode.ReadStaticField.h: include/Outracks.Simulator.Bytecode.Expression.h

include/Outracks.Simulator.Bytecode.ReadVariable.h: include/Outracks.Simulator.Bytecode.Expression.h

include/Outracks.Simulator.Bytecode.RemoveEventHandler.h: include/Outracks.Simulator.Bytecode.Expression.h

include/Outracks.Simulator.Bytecode.Return.h: include/Outracks.Simulator.Bytecode.Statement.h

include/Outracks.Simulator.Bytecode.Signature.h: include/Outracks.Simulator.Bytecode.Optional-1.h
include/Outracks.Simulator.Bytecode.Signature.h: include/Uno.Object.h

include/Outracks.Simulator.Bytecode.Statement.h: include/Uno.Object.h

include/Outracks.Simulator.Bytecode.StaticMemberName.h: include/Outracks.Simulator.IEquatable-1.h
include/Outracks.Simulator.Bytecode.StaticMemberName.h: include/Uno.Object.h

include/Outracks.Simulator.Bytecode.StringLiteral.h: include/Outracks.Simulator.Bytecode.Literal.h

include/Outracks.Simulator.Bytecode.TypeMemberName.h: include/Outracks.Simulator.IEquatable-1.h
include/Outracks.Simulator.Bytecode.TypeMemberName.h: include/Uno.Object.h

include/Outracks.Simulator.Bytecode.TypeName.h: include/Outracks.Simulator.Bytecode.Optional-1.h
include/Outracks.Simulator.Bytecode.TypeName.h: include/Outracks.Simulator.IEquatable-1.h
include/Outracks.Simulator.Bytecode.TypeName.h: include/Uno.Object.h

include/Outracks.Simulator.Bytecode.Variable.h: include/Outracks.Simulator.IEquatable-1.h
include/Outracks.Simulator.Bytecode.Variable.h: include/Uno.Object.h

include/Outracks.Simulator.Bytecode.WriteProperty.h: include/Outracks.Simulator.Bytecode.Expression.h

include/Outracks.Simulator.BytecodeCache.h: include/Uno.h

include/Outracks.Simulator.ByteFileSource.h: include/Uno.UX.FileSource.h

include/Outracks.Simulator.ChangeIp.h: include/Outracks.Simulator.ShowingPrompt.h

include/Outracks.Simulator.Closure.h: include/Uno.h

include/Outracks.Simulator.ConcurrentQueue-1.h: include/Uno.Object.h

include/Outracks.Simulator.Connected.h: include/Outracks.Simulator.State.h

include/Outracks.Simulator.Connecting.h: include/Outracks.Simulator.State.h

include/Outracks.Simulator.ConnectingToHost.h: include/Outracks.Simulator.Connecting.h

include/Outracks.Simulator.ConnectingToProxy.h: include/Outracks.Simulator.Connecting.h

include/Outracks.Simulator.ConnectionLost.h: include/Outracks.Simulator.ShowingModalDialog.h

include/Outracks.Simulator.ConnectToSimulator.h: include/Uno.Object.h

include/Outracks.Simulator.Context.h: include/Uno.h

include/Outracks.Simulator.DeviceInfo.h: include/Uno.h

include/Outracks.Simulator.DialogButton.h: include/Uno.Object.h

include/Outracks.Simulator.DummyApplication.h: include/Uno.Application.h

include/Outracks.Simulator.EnumerableHitTestExtension.CollectHitNodesClosure.h: include/Uno.Object.h

include/Outracks.Simulator.EnumerableHitTestExtension.h: include/Uno.h

include/Outracks.Simulator.Exceptions.h: include/Uno.h

include/Outracks.Simulator.FailedToConnect.h: include/Outracks.Simulator.ShowingModalDialog.h

include/Outracks.Simulator.FailedToConnectToEndPoint.h: include/Uno.Exception.h

include/Outracks.Simulator.FailedToConnectToProxy.h: include/Uno.Exception.h

include/Outracks.Simulator.FailedToConnectToSimulator.h: include/Uno.Exception.h

include/Outracks.Simulator.FakeApp.h: include/Fuse.Animations.IResize.h
include/Outracks.Simulator.FakeApp.h: include/Fuse.Controls.Panel.h
include/Outracks.Simulator.FakeApp.h: include/Fuse.IActualPlacement.h
include/Outracks.Simulator.FakeApp.h: include/Fuse.IDataContext.h
include/Outracks.Simulator.FakeApp.h: include/Fuse.IObjectContainer.h
include/Outracks.Simulator.FakeApp.h: include/Fuse.Navigation.INavigationPanel.h
include/Outracks.Simulator.FakeApp.h: include/Fuse.Scripting.INameScope.h
include/Outracks.Simulator.FakeApp.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Outracks.Simulator.FakeApp.h: include/Fuse.Triggers.Actions.IHide.h
include/Outracks.Simulator.FakeApp.h: include/Fuse.Triggers.Actions.IShow.h

include/Outracks.Simulator.Faulted.h: include/Outracks.Simulator.ShowingModalDialog.h

include/Outracks.Simulator.FileCache.h: include/Uno.Object.h

include/Outracks.Simulator.Flasher.h: include/Fuse.Animations.IResize.h
include/Outracks.Simulator.Flasher.h: include/Fuse.Controls.Panel.h
include/Outracks.Simulator.Flasher.h: include/Fuse.IActualPlacement.h
include/Outracks.Simulator.Flasher.h: include/Fuse.IDataContext.h
include/Outracks.Simulator.Flasher.h: include/Fuse.IObjectContainer.h
include/Outracks.Simulator.Flasher.h: include/Fuse.Navigation.INavigationPanel.h
include/Outracks.Simulator.Flasher.h: include/Fuse.Scripting.INameScope.h
include/Outracks.Simulator.Flasher.h: include/Fuse.Triggers.Actions.ICollapse.h
include/Outracks.Simulator.Flasher.h: include/Fuse.Triggers.Actions.IHide.h
include/Outracks.Simulator.Flasher.h: include/Fuse.Triggers.Actions.IShow.h

include/Outracks.Simulator.Forget-2.h: include/Uno.Object.h

include/Outracks.Simulator.Forget-3.h: include/Uno.Object.h

include/Outracks.Simulator.ForgetAction-2.h: include/Uno.Object.h

include/Outracks.Simulator.GeneratedApplication.h: include/Fuse.Input.IPointerEventResponder.h
include/Outracks.Simulator.GeneratedApplication.h: include/Outracks.Simulator.Application.h

include/Outracks.Simulator.GetSimulatorEndpoint.h: include/Uno.Object.h

include/Outracks.Simulator.GoOffline.h: include/Uno.h

include/Outracks.Simulator.Idle.h: include/Outracks.Simulator.Connected.h

include/Outracks.Simulator.IEquatable-1.h: include/Uno.Object.h

include/Outracks.Simulator.ImmutableList-1.h: include/Uno.Collections.IEnumerable-1.h
include/Outracks.Simulator.ImmutableList-1.h: include/Uno.Object.h

include/Outracks.Simulator.IndentString.h: include/Uno.h

include/Outracks.Simulator.InputMode.h: include/Uno.Int.h

include/Outracks.Simulator.InvalidDataException.h: include/Uno.Exception.h

include/Outracks.Simulator.ISimulatorClient.h: include/Uno.IDisposable.h
include/Outracks.Simulator.ISimulatorClient.h: include/Uno.Object.h

include/Outracks.Simulator.List.h: include/Uno.h

include/Outracks.Simulator.LoadingScreen.h: include/Uno.Object.h

include/Outracks.Simulator.ModalDialog.h: include/Uno.Object.h

include/Outracks.Simulator.NonExhaustiveMatch.h: include/Uno.Exception.h

include/Outracks.Simulator.OfflineSimulatorClient.h: include/Outracks.Simulator.ISimulatorClient.h
include/Outracks.Simulator.OfflineSimulatorClient.h: include/Uno.IDisposable.h
include/Outracks.Simulator.OfflineSimulatorClient.h: include/Uno.Object.h

include/Outracks.Simulator.Protocol.DebugLog.h: include/Outracks.Simulator.Protocol.MessageFromClient.h

include/Outracks.Simulator.Protocol.Error.h: include/Outracks.Simulator.Protocol.MessageToClient.h

include/Outracks.Simulator.Protocol.ExceptionInfo.h: include/Uno.Object.h

include/Outracks.Simulator.Protocol.Execute.h: include/Outracks.Simulator.Protocol.MessageToClient.h

include/Outracks.Simulator.Protocol.MessageFromClient.h: include/Uno.Object.h

include/Outracks.Simulator.Protocol.MessageToClient.h: include/Uno.Object.h

include/Outracks.Simulator.Protocol.RegisterName.h: include/Outracks.Simulator.Protocol.MessageFromClient.h

include/Outracks.Simulator.Protocol.Reify.h: include/Outracks.Simulator.Protocol.MessageToClient.h

include/Outracks.Simulator.Protocol.SetSelection.h: include/Outracks.Simulator.Protocol.MessageFromClient.h

include/Outracks.Simulator.Protocol.UnhandledException.h: include/Outracks.Simulator.Protocol.MessageFromClient.h

include/Outracks.Simulator.ProxyClient.h: include/Uno.Object.h

include/Outracks.Simulator.Reflection.DelegateReflection.h: include/Outracks.Simulator.Runtime.IReflection.h
include/Outracks.Simulator.Reflection.DelegateReflection.h: include/Uno.Object.h

include/Outracks.Simulator.Reflection.Native.CppEvent.h: include/Outracks.Simulator.Reflection.Native.IEvent.h
include/Outracks.Simulator.Reflection.Native.CppEvent.h: include/Uno.Object.h

include/Outracks.Simulator.Reflection.Native.CppProperty.h: include/Outracks.Simulator.Reflection.Native.IProperty.h
include/Outracks.Simulator.Reflection.Native.CppProperty.h: include/Uno.Object.h

include/Outracks.Simulator.Reflection.Native.IEvent.h: include/Uno.Object.h

include/Outracks.Simulator.Reflection.Native.IProperty.h: include/Uno.Object.h

include/Outracks.Simulator.Reflection.Native.ITypeMap.h: include/Uno.Object.h

include/Outracks.Simulator.Reflection.Native.NativeReflection.h: include/Outracks.Simulator.Runtime.IReflection.h
include/Outracks.Simulator.Reflection.Native.NativeReflection.h: include/Uno.Object.h

include/Outracks.Simulator.Reflection.Native.Property-1.h: include/Uno.Object.h
include/Outracks.Simulator.Reflection.Native.Property-1.h: include/Uno.UX.Property-1.h

include/Outracks.Simulator.Reflection.Native.ReflectionCache.h: include/Uno.h

include/Outracks.Simulator.Reflection.Native.ReflectionExtensions.h: include/Uno.h

include/Outracks.Simulator.Reflection.Native.ReflectionHelpers.h: include/Uno.h

include/Outracks.Simulator.Reflection.Native.SimpleTypeMap.h: include/Outracks.Simulator.Reflection.Native.ITypeMap.h
include/Outracks.Simulator.Reflection.Native.SimpleTypeMap.h: include/Uno.Object.h

include/Outracks.Simulator.Reflection.Native.TryInvokeExtension.h: include/Uno.h

include/Outracks.Simulator.Reifying.h: include/Outracks.Simulator.Connected.h

include/Outracks.Simulator.Running.h: include/Outracks.Simulator.Connected.h

include/Outracks.Simulator.Runtime.Environment.h: include/Outracks.Simulator.Bytecode.Optional-1.h
include/Outracks.Simulator.Runtime.Environment.h: include/Uno.Object.h

include/Outracks.Simulator.Runtime.IReflection.h: include/Uno.Object.h

include/Outracks.Simulator.Runtime.LambdaClosure.h: include/Uno.Object.h

include/Outracks.Simulator.Runtime.LazyProperty-1.h: include/Uno.Object.h
include/Outracks.Simulator.Runtime.LazyProperty-1.h: include/Uno.UX.Property-1.h

include/Outracks.Simulator.Runtime.LazyPropertyStorage-1.h: include/Uno.Object.h

include/Outracks.Simulator.Runtime.MemberNotFound.h: include/Uno.Exception.h

include/Outracks.Simulator.Runtime.ObjectPropertyRegistry.h: include/Uno.h

include/Outracks.Simulator.Runtime.ObjectTagRegistry.h: include/Uno.h

include/Outracks.Simulator.Runtime.ScopeClosure.h: include/Uno.Object.h

include/Outracks.Simulator.Runtime.Selection.h: include/Fuse.Preview.ISelection.h
include/Outracks.Simulator.Runtime.Selection.h: include/Uno.Object.h

include/Outracks.Simulator.Runtime.SimulatedObjectTypeRegistry.h: include/Uno.Object.h

include/Outracks.Simulator.Runtime.TypeNotFound.h: include/Uno.Exception.h

include/Outracks.Simulator.Runtime.UnambiguousMethodNotFound.h: include/Uno.Exception.h

include/Outracks.Simulator.Runtime.UxFactory.h: include/Uno.UX.Factory.h

include/Outracks.Simulator.Runtime.UxProperty-1.h: include/Uno.Object.h
include/Outracks.Simulator.Runtime.UxProperty-1.h: include/Uno.UX.Property-1.h

include/Outracks.Simulator.Runtime.UxTemplate.h: include/Uno.Object.h
include/Outracks.Simulator.Runtime.UxTemplate.h: include/Uno.UX.ITemplate.h

include/Outracks.Simulator.Runtime.VariableNotBound.h: include/Uno.Exception.h

include/Outracks.Simulator.Runtime.VirtualMachine.h: include/Uno.h

include/Outracks.Simulator.Serialization.h: include/Uno.h

include/Outracks.Simulator.ShowingModalDialog.h: include/Outracks.Simulator.Bytecode.Optional-1.h
include/Outracks.Simulator.ShowingModalDialog.h: include/Outracks.Simulator.State.h

include/Outracks.Simulator.ShowingPrompt.h: include/Outracks.Simulator.State.h

include/Outracks.Simulator.SimulatorClient.h: include/Outracks.Simulator.ISimulatorClient.h
include/Outracks.Simulator.SimulatorClient.h: include/Uno.IDisposable.h
include/Outracks.Simulator.SimulatorClient.h: include/Uno.Object.h

include/Outracks.Simulator.State.h: include/Uno.Object.h

include/Outracks.Simulator.StringSplitting.h: include/Uno.h

include/Outracks.Simulator.Task-1.h: include/Uno.Object.h

include/Outracks.Simulator.Tasks.h: include/Uno.h

include/Outracks.Simulator.TaskThread-1.h: include/Uno.Object.h

include/Outracks.Simulator.Uninitialized.h: include/Outracks.Simulator.State.h

include/Outracks.Simulator.UserAppState.h: include/Uno.Float4.h
include/Outracks.Simulator.UserAppState.h: include/Uno.Object.h

include/Outracks.Simulator.WaitForFirstResult-1.h: include/Uno.Object.h

include/Outracks.UnoCore.Utilities.VerySimpleEventQueue.h: include/Uno.Object.h

include/posix_mutex.h: include/Uno/Uno.h

include/posix_thread.h: include/Uno/Uno.h



include/Uno.Action.h: include/Uno.Delegate.h

include/Uno.Action-1.h: include/Uno.Delegate.h

include/Uno.Action-2.h: include/Uno.Delegate.h

include/Uno.Action-3.h: include/Uno.Delegate.h

include/Uno.Action-4.h: include/Uno.Delegate.h

include/Uno.AggregateException.h: include/Uno.Exception.h

include/Uno.Application.h: include/Uno.Float4.h
include/Uno.Application.h: include/Uno.Object.h

include/Uno.ArgumentException.h: include/Uno.Exception.h

include/Uno.ArgumentNullException.h: include/Uno.ArgumentException.h

include/Uno.ArgumentOutOfRangeException.h: include/Uno.ArgumentException.h

include/Uno.Array.h: include/Uno.h

include/Uno.Attribute.h: include/Uno.Object.h

include/Uno.Bool.h: include/Uno.Object.h

include/Uno.Buffer.h: include/Uno.Object.h

include/Uno.BundleFile.h: include/Uno.Object.h

include/Uno.Byte.h: include/Uno.Object.h

include/Uno.Byte2.h: include/Uno.Object.h

include/Uno.Byte4.h: include/Uno.Object.h

include/Uno.Char.h: include/Uno.Object.h

include/Uno.Collections.ConcurrentCollection-1.DeferLockImpl.h: include/Uno.IDisposable.h
include/Uno.Collections.ConcurrentCollection-1.DeferLockImpl.h: include/Uno.Object.h

include/Uno.Collections.ConcurrentCollection-1.h: include/Uno.Collections.ConcurrentCollection-1.ModItem.h
include/Uno.Collections.ConcurrentCollection-1.h: include/Uno.Collections.ICollection-1.h
include/Uno.Collections.ConcurrentCollection-1.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.ConcurrentCollection-1.h: include/Uno.Object.h

include/Uno.Collections.ConcurrentCollection-1.ModItem.h: include/Uno.Object.h

include/Uno.Collections.Dictionary-2.Bucket.h: include/Uno.Object.h

include/Uno.Collections.Dictionary-2.BucketState.h: include/Uno.Int.h

include/Uno.Collections.Dictionary-2.Enumerator.h: include/Uno.Collections.IEnumerator.h
include/Uno.Collections.Dictionary-2.Enumerator.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Collections.Dictionary-2.Enumerator.h: include/Uno.Collections.KeyValuePair-2.h
include/Uno.Collections.Dictionary-2.Enumerator.h: include/Uno.IDisposable.h
include/Uno.Collections.Dictionary-2.Enumerator.h: include/Uno.Object.h

include/Uno.Collections.Dictionary-2.h: include/Uno.Collections.Dictionary-2.Bucket.h
include/Uno.Collections.Dictionary-2.h: include/Uno.Collections.ICollection-1.h
include/Uno.Collections.Dictionary-2.h: include/Uno.Collections.IDictionary-2.h
include/Uno.Collections.Dictionary-2.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.Dictionary-2.h: include/Uno.Collections.KeyValuePair-2.h
include/Uno.Collections.Dictionary-2.h: include/Uno.Object.h
include/Uno.Collections.Dictionary-2.h: include/Uno.Collections.Dictionary-2.Enumerator.h

include/Uno.Collections.Dictionary-2.KeyCollection.Enumerator.h: include/Uno.Collections.IEnumerator.h
include/Uno.Collections.Dictionary-2.KeyCollection.Enumerator.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Collections.Dictionary-2.KeyCollection.Enumerator.h: include/Uno.IDisposable.h
include/Uno.Collections.Dictionary-2.KeyCollection.Enumerator.h: include/Uno.Object.h

include/Uno.Collections.Dictionary-2.KeyCollection.h: include/Uno.Collections.ICollection-1.h
include/Uno.Collections.Dictionary-2.KeyCollection.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.Dictionary-2.KeyCollection.h: include/Uno.Object.h
include/Uno.Collections.Dictionary-2.KeyCollection.h: include/Uno.Collections.Dictionary-2.KeyCollection.Enumerator.h

include/Uno.Collections.Dictionary-2.ValueCollection.Enumerator.h: include/Uno.Collections.IEnumerator.h
include/Uno.Collections.Dictionary-2.ValueCollection.Enumerator.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Collections.Dictionary-2.ValueCollection.Enumerator.h: include/Uno.IDisposable.h
include/Uno.Collections.Dictionary-2.ValueCollection.Enumerator.h: include/Uno.Object.h

include/Uno.Collections.Dictionary-2.ValueCollection.h: include/Uno.Collections.ICollection-1.h
include/Uno.Collections.Dictionary-2.ValueCollection.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.Dictionary-2.ValueCollection.h: include/Uno.Object.h
include/Uno.Collections.Dictionary-2.ValueCollection.h: include/Uno.Collections.Dictionary-2.ValueCollection.Enumerator.h

include/Uno.Collections.EmptyEnumerable-1.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.EmptyEnumerable-1.h: include/Uno.Object.h

include/Uno.Collections.EmptyEnumerator-1.h: include/Uno.Collections.IEnumerator.h
include/Uno.Collections.EmptyEnumerator-1.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Collections.EmptyEnumerator-1.h: include/Uno.IDisposable.h
include/Uno.Collections.EmptyEnumerator-1.h: include/Uno.Object.h

include/Uno.Collections.EnumerableExtensions.h: include/Uno.h

include/Uno.Collections.EnumerableExtensions.LinkedList-1.h: include/Uno.Object.h

include/Uno.Collections.HashSet-1.Enumerator.h: include/Uno.Collections.IEnumerator.h
include/Uno.Collections.HashSet-1.Enumerator.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Collections.HashSet-1.Enumerator.h: include/Uno.IDisposable.h
include/Uno.Collections.HashSet-1.Enumerator.h: include/Uno.Object.h

include/Uno.Collections.HashSet-1.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.HashSet-1.h: include/Uno.Object.h
include/Uno.Collections.HashSet-1.h: include/Uno.Collections.HashSet-1.Enumerator.h

include/Uno.Collections.ICollection-1.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.ICollection-1.h: include/Uno.Object.h

include/Uno.Collections.IDictionary-2.h: include/Uno.Collections.ICollection-1.h
include/Uno.Collections.IDictionary-2.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.IDictionary-2.h: include/Uno.Collections.KeyValuePair-2.h
include/Uno.Collections.IDictionary-2.h: include/Uno.Object.h

include/Uno.Collections.IEnumerable-1.h: include/Uno.Object.h

include/Uno.Collections.IEnumerator.h: include/Uno.Object.h

include/Uno.Collections.IEnumerator-1.h: include/Uno.Collections.IEnumerator.h
include/Uno.Collections.IEnumerator-1.h: include/Uno.IDisposable.h
include/Uno.Collections.IEnumerator-1.h: include/Uno.Object.h

include/Uno.Collections.IList-1.h: include/Uno.Collections.ICollection-1.h
include/Uno.Collections.IList-1.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.IList-1.h: include/Uno.Object.h

include/Uno.Collections.IListExtensions.h: include/Uno.h

include/Uno.Collections.KeyValuePair-2.h: include/Uno.Object.h

include/Uno.Collections.LinkedList-1.Enumerator.h: include/Uno.Collections.IEnumerator.h
include/Uno.Collections.LinkedList-1.Enumerator.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Collections.LinkedList-1.Enumerator.h: include/Uno.IDisposable.h
include/Uno.Collections.LinkedList-1.Enumerator.h: include/Uno.Object.h

include/Uno.Collections.LinkedList-1.h: include/Uno.Collections.ICollection-1.h
include/Uno.Collections.LinkedList-1.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.LinkedList-1.h: include/Uno.Object.h

include/Uno.Collections.LinkedListNode-1.h: include/Uno.Object.h

include/Uno.Collections.List-1.Enumerator.h: include/Uno.Collections.IEnumerator.h
include/Uno.Collections.List-1.Enumerator.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Collections.List-1.Enumerator.h: include/Uno.IDisposable.h
include/Uno.Collections.List-1.Enumerator.h: include/Uno.Object.h

include/Uno.Collections.List-1.h: include/Uno.Collections.ICollection-1.h
include/Uno.Collections.List-1.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.List-1.h: include/Uno.Collections.IList-1.h
include/Uno.Collections.List-1.h: include/Uno.Object.h
include/Uno.Collections.List-1.h: include/Uno.Collections.List-1.Enumerator.h

include/Uno.Collections.ObservableList-1.h: include/Uno.Collections.ICollection-1.h
include/Uno.Collections.ObservableList-1.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.ObservableList-1.h: include/Uno.Collections.IList-1.h
include/Uno.Collections.ObservableList-1.h: include/Uno.Object.h

include/Uno.Collections.OrderByCompare-1.h: include/Uno.Object.h

include/Uno.Collections.Queue-1.Enumerator.h: include/Uno.Collections.IEnumerator.h
include/Uno.Collections.Queue-1.Enumerator.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Collections.Queue-1.Enumerator.h: include/Uno.IDisposable.h
include/Uno.Collections.Queue-1.Enumerator.h: include/Uno.Object.h

include/Uno.Collections.Queue-1.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.Queue-1.h: include/Uno.Object.h
include/Uno.Collections.Queue-1.h: include/Uno.Collections.Queue-1.Enumerator.h

include/Uno.Collections.ReadOnlyCollection-1.h: include/Uno.Object.h

include/Uno.Collections.SelectEnumerable-2.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.SelectEnumerable-2.h: include/Uno.Object.h

include/Uno.Collections.SelectEnumerator-2.h: include/Uno.Collections.IEnumerator.h
include/Uno.Collections.SelectEnumerator-2.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Collections.SelectEnumerator-2.h: include/Uno.IDisposable.h
include/Uno.Collections.SelectEnumerator-2.h: include/Uno.Object.h

include/Uno.Collections.Stack-1.Enumerator.h: include/Uno.Collections.IEnumerator.h
include/Uno.Collections.Stack-1.Enumerator.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Collections.Stack-1.Enumerator.h: include/Uno.IDisposable.h
include/Uno.Collections.Stack-1.Enumerator.h: include/Uno.Object.h

include/Uno.Collections.Stack-1.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.Stack-1.h: include/Uno.Object.h

include/Uno.Collections.UnionEnumerable-1.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.UnionEnumerable-1.h: include/Uno.Object.h

include/Uno.Collections.UnionEnumerator-1.h: include/Uno.Collections.IEnumerator.h
include/Uno.Collections.UnionEnumerator-1.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Collections.UnionEnumerator-1.h: include/Uno.IDisposable.h
include/Uno.Collections.UnionEnumerator-1.h: include/Uno.Object.h

include/Uno.Collections.WhereEnumerable-1.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Collections.WhereEnumerable-1.h: include/Uno.Object.h

include/Uno.Collections.WhereEnumerator-1.h: include/Uno.Collections.IEnumerator.h
include/Uno.Collections.WhereEnumerator-1.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Collections.WhereEnumerator-1.h: include/Uno.IDisposable.h
include/Uno.Collections.WhereEnumerator-1.h: include/Uno.Object.h

include/Uno.Color.h: include/Uno.h

include/Uno.ColorHelper.h: include/Uno.h

include/Uno.Comparison-1.h: include/Uno.Delegate.h

include/Uno.Compiler.CallerFilePathAttribute.h: include/Uno.Attribute.h

include/Uno.Compiler.CallerLineNumberAttribute.h: include/Uno.Attribute.h

include/Uno.Compiler.CallerMemberNameAttribute.h: include/Uno.Attribute.h

include/Uno.Compiler.ExportTargetInterop.DontCopyStructAttribute.h: include/Uno.Attribute.h

include/Uno.Compiler.ExportTargetInterop.DontExportAttribute.h: include/Uno.Attribute.h

include/Uno.Compiler.ExportTargetInterop.Foreign.Android.ExternBlockHost.h: include/Uno.h

include/Uno.Compiler.ExportTargetInterop.Foreign.Android.JavaUnoObject.h: include/Uno.h

include/Uno.Compiler.ExportTargetInterop.OptionalAttribute.h: include/Uno.Attribute.h

include/Uno.Compiler.ExportTargetInterop.StaticAttribute.h: include/Uno.Attribute.h

include/Uno.Compiler.ExportTargetInterop.TargetSpecificImplementationAttribute.h: include/Uno.Attribute.h

include/Uno.Compiler.ExportTargetInterop.TargetSpecificTypeAttribute.h: include/Uno.Attribute.h

include/Uno.Compiler.HideFromCodeCompleterAttribute.h: include/Uno.Attribute.h

include/Uno.Compiler.IgnoreMainClassAttribute.h: include/Uno.Attribute.h

include/Uno.Compiler.ImportServices.FilenameAttribute.h: include/Uno.Attribute.h

include/Uno.Compiler.MainClassAttribute.h: include/Uno.Attribute.h

include/Uno.Compiler.ShaderGenerator.ShaderStageInlineAttribute.h: include/Uno.Attribute.h

include/Uno.Compiler.UxGeneratedAttribute.h: include/Uno.Attribute.h

include/Uno.Content.Fonts.BitmapFont.CharPair.h: include/Uno.Object.h

include/Uno.Content.Fonts.BitmapFont.GlyphInfo.h: include/Uno.Float2.h
include/Uno.Content.Fonts.BitmapFont.GlyphInfo.h: include/Uno.Object.h
include/Uno.Content.Fonts.BitmapFont.GlyphInfo.h: include/Uno.UShort2.h

include/Uno.Content.Fonts.BitmapFont.h: include/Uno.Content.Fonts.BitmapFont.CharPair.h
include/Uno.Content.Fonts.BitmapFont.h: include/Uno.Content.Fonts.BitmapFont.GlyphInfo.h
include/Uno.Content.Fonts.BitmapFont.h: include/Uno.Object.h

include/Uno.Content.Fonts.CppFontFace.h: include/Uno.Content.Fonts.FontFace.h
include/Uno.Content.Fonts.CppFontFace.h: include/Uno.IDisposable.h

include/Uno.Content.Fonts.CppFontFaceHandle.h: include/Uno.Object.h

include/Uno.Content.Fonts.DefaultTextTransform.h: include/Uno.Content.Fonts.TextTransform.h
include/Uno.Content.Fonts.DefaultTextTransform.h: include/Uno.Float4x4.h

include/Uno.Content.Fonts.FontFace.h: include/Uno.IDisposable.h
include/Uno.Content.Fonts.FontFace.h: include/Uno.Object.h
include/Uno.Content.Fonts.FontFace.h: include/Uno.Content.Fonts.RenderedGlyph.h

include/Uno.Content.Fonts.FontFaceHelpers.h: include/Uno.h

include/Uno.Content.Fonts.RenderedGlyph.h: include/Uno.Float2.h
include/Uno.Content.Fonts.RenderedGlyph.h: include/Uno.Object.h

include/Uno.Content.Fonts.SdfFontShader.h: include/Uno.Content.Fonts.TextShader.h
include/Uno.Content.Fonts.SdfFontShader.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Uno.Content.Fonts.SpriteFontShader.h: include/Uno.Content.Fonts.TextShader.h
include/Uno.Content.Fonts.SpriteFontShader.h: include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h

include/Uno.Content.Fonts.TextRenderer.h: include/Uno.Byte4.h
include/Uno.Content.Fonts.TextRenderer.h: include/Uno.Object.h

include/Uno.Content.Fonts.TextShader.h: include/Uno.Object.h

include/Uno.Content.Fonts.TextShaderData.h: include/Uno.Float4x4.h
include/Uno.Content.Fonts.TextShaderData.h: include/Uno.Graphics.VertexAttributeInfo.h
include/Uno.Content.Fonts.TextShaderData.h: include/Uno.Object.h

include/Uno.Content.Fonts.TextTransform.h: include/Uno.Object.h
include/Uno.Content.Fonts.TextTransform.h: include/Uno.Float4x4.h

include/Uno.Content.Images.Bitmap.h: include/Uno.Int2.h
include/Uno.Content.Images.Bitmap.h: include/Uno.Object.h

include/Uno.Content.Models.IndexArray.h: include/Uno.Object.h

include/Uno.Content.Models.Model.h: include/Uno.Object.h

include/Uno.Content.Models.ModelDrawable.h: include/Uno.Object.h

include/Uno.Content.Models.ModelMaterial.h: include/Uno.Object.h

include/Uno.Content.Models.ModelMesh.h: include/Uno.Object.h

include/Uno.Content.Models.ModelNode.h: include/Uno.Float4x4.h
include/Uno.Content.Models.ModelNode.h: include/Uno.Object.h

include/Uno.Content.Models.ModelParameter-1.h: include/Uno.Object.h

include/Uno.Content.Models.VertexAttributeArray.h: include/Uno.Object.h

include/Uno.Content.Splines.KeyframedSpline-2.h: include/Uno.Content.Splines.KeyframedSpline-2.Key.h
include/Uno.Content.Splines.KeyframedSpline-2.h: include/Uno.Content.Splines.Spline-1.h
include/Uno.Content.Splines.KeyframedSpline-2.h: include/Uno.Object.h

include/Uno.Content.Splines.KeyframedSpline-2.Key.h: include/Uno.Object.h

include/Uno.Content.Splines.LinearSplineFloat.h: include/Uno.Content.Splines.KeyframedSpline-2.h
include/Uno.Content.Splines.LinearSplineFloat.h: include/Uno.Float.h

include/Uno.Content.Splines.LinearSplineFloat2.h: include/Uno.Content.Splines.KeyframedSpline-2.h
include/Uno.Content.Splines.LinearSplineFloat2.h: include/Uno.Float2.h

include/Uno.Content.Splines.LinearSplineFloat3.h: include/Uno.Content.Splines.KeyframedSpline-2.h
include/Uno.Content.Splines.LinearSplineFloat3.h: include/Uno.Float3.h

include/Uno.Content.Splines.LinearSplineFloat4.h: include/Uno.Content.Splines.KeyframedSpline-2.h
include/Uno.Content.Splines.LinearSplineFloat4.h: include/Uno.Float4.h

include/Uno.Content.Splines.LinearSplineFloat4x4.h: include/Uno.Content.Splines.KeyframedSpline-2.h
include/Uno.Content.Splines.LinearSplineFloat4x4.h: include/Uno.Float4x4.h

include/Uno.Content.Splines.Spline-1.h: include/Uno.Object.h

include/Uno.DateTime.h: include/Uno.Object.h

include/Uno.Delegate.h: include/Uno.Object.h

include/Uno.Diagnostics.AllocateEvent.h: include/Uno.Diagnostics.ProfileEvent.h

include/Uno.Diagnostics.AlwaysProfileAttribute.h: include/Uno.Attribute.h

include/Uno.Diagnostics.AssertionHandler.h: include/Uno.Delegate.h

include/Uno.Diagnostics.Clock.h: include/Uno.h

include/Uno.Diagnostics.Debug.h: include/Uno.h

include/Uno.Diagnostics.DebugMessageType.h: include/Uno.Int.h

include/Uno.Diagnostics.EnterEvent.h: include/Uno.Diagnostics.ProfileEvent.h

include/Uno.Diagnostics.EventType.h: include/Uno.Int.h

include/Uno.Diagnostics.ExitEvent.h: include/Uno.Diagnostics.ProfileEvent.h

include/Uno.Diagnostics.FreeEvent.h: include/Uno.Diagnostics.ProfileEvent.h

include/Uno.Diagnostics.IdMap-1.h: include/Uno.Object.h

include/Uno.Diagnostics.LogHandler.h: include/Uno.Delegate.h

include/Uno.Diagnostics.NeverProfileAttribute.h: include/Uno.Attribute.h

include/Uno.Diagnostics.Profile.h: include/Uno.h

include/Uno.Diagnostics.ProfileData.h: include/Uno.Object.h

include/Uno.Diagnostics.ProfileEvent.h: include/Uno.Object.h

include/Uno.Double.h: include/Uno.Object.h

include/Uno.Enum.h: include/Uno.h

include/Uno.EventArgs.h: include/Uno.Object.h

include/Uno.EventHandler.h: include/Uno.Delegate.h

include/Uno.EventHandler-1.h: include/Uno.Delegate.h

include/Uno.Exception.h: include/Uno.Object.h

include/Uno.FakeTime.h: include/Uno.Object.h

include/Uno.FlagsAttribute.h: include/Uno.Attribute.h

include/Uno.Float.h: include/Uno.Object.h

include/Uno.Float2.h: include/Uno.Object.h

include/Uno.Float2x2.h: include/Uno.Object.h

include/Uno.Float3.h: include/Uno.Object.h

include/Uno.Float3x3.h: include/Uno.Object.h

include/Uno.Float4.h: include/Uno.Object.h

include/Uno.Float4x4.h: include/Uno.Object.h

include/Uno.FormatException.h: include/Uno.Exception.h

include/Uno.Func-1.h: include/Uno.Delegate.h

include/Uno.Func-2.h: include/Uno.Delegate.h

include/Uno.Func-3.h: include/Uno.Delegate.h

include/Uno.Func-4.h: include/Uno.Delegate.h

include/Uno.Func-5.h: include/Uno.Delegate.h

include/Uno.GC.h: include/Uno.h

include/Uno.Generic.h: include/Uno.h

include/Uno.Geometry.Box.h: include/Uno.Float3.h
include/Uno.Geometry.Box.h: include/Uno.Object.h

include/Uno.Geometry.Collision.h: include/Uno.h

include/Uno.Geometry.Collision2D.h: include/Uno.h

include/Uno.Geometry.CubicBezier.h: include/Uno.Object.h

include/Uno.Geometry.Frustum.h: include/Uno.Geometry.Plane.h
include/Uno.Geometry.Frustum.h: include/Uno.Object.h

include/Uno.Geometry.Plane.h: include/Uno.Float3.h
include/Uno.Geometry.Plane.h: include/Uno.Object.h

include/Uno.Geometry.Ray.h: include/Uno.Float3.h
include/Uno.Geometry.Ray.h: include/Uno.Object.h

include/Uno.Geometry.Sphere.h: include/Uno.Float3.h
include/Uno.Geometry.Sphere.h: include/Uno.Object.h

include/Uno.Geometry.Triangle.h: include/Uno.Float3.h
include/Uno.Geometry.Triangle.h: include/Uno.Object.h

include/Uno.Geometry.Triangle2D.h: include/Uno.Float2.h
include/Uno.Geometry.Triangle2D.h: include/Uno.Object.h

include/Uno.Geometry.Vertex.h: include/Uno.Object.h

include/Uno.Geometry.VertexEnumerable.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Geometry.VertexEnumerable.h: include/Uno.Float2.h
include/Uno.Geometry.VertexEnumerable.h: include/Uno.Object.h

include/Uno.Geometry.VertexEnumerator.h: include/Uno.Collections.IEnumerator.h
include/Uno.Geometry.VertexEnumerator.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Geometry.VertexEnumerator.h: include/Uno.Float2.h
include/Uno.Geometry.VertexEnumerator.h: include/Uno.IDisposable.h
include/Uno.Geometry.VertexEnumerator.h: include/Uno.Object.h

include/Uno.Graphics.BlendEquation.h: include/Uno.Int.h

include/Uno.Graphics.BlendOperand.h: include/Uno.Int.h

include/Uno.Graphics.BufferUsage.h: include/Uno.Int.h

include/Uno.Graphics.CompareFunc.h: include/Uno.Int.h

include/Uno.Graphics.CubeFace.h: include/Uno.Int.h

include/Uno.Graphics.DeviceBuffer.h: include/Uno.IDisposable.h
include/Uno.Graphics.DeviceBuffer.h: include/Uno.Object.h

include/Uno.Graphics.Format.h: include/Uno.Int.h

include/Uno.Graphics.FormatHelpers.h: include/Uno.h

include/Uno.Graphics.Framebuffer.h: include/Uno.IDisposable.h
include/Uno.Graphics.Framebuffer.h: include/Uno.Object.h

include/Uno.Graphics.FramebufferFlags.h: include/Uno.Int.h

include/Uno.Graphics.GraphicsContext.h: include/Uno.Object.h
include/Uno.Graphics.GraphicsContext.h: include/Uno.Recti.h
include/Uno.Graphics.GraphicsContext.h: include/Uno/GraphicsContext.h

include/Uno.Graphics.IndexBuffer.h: include/Uno.Graphics.DeviceBuffer.h
include/Uno.Graphics.IndexBuffer.h: include/Uno.IDisposable.h

include/Uno.Graphics.IndexType.h: include/Uno.Int.h

include/Uno.Graphics.IndexTypeHelpers.h: include/Uno.h

include/Uno.Graphics.PolygonFace.h: include/Uno.Int.h

include/Uno.Graphics.PolygonWinding.h: include/Uno.Int.h

include/Uno.Graphics.PrimitiveType.h: include/Uno.Int.h

include/Uno.Graphics.RenderTarget.h: include/Uno.IDisposable.h
include/Uno.Graphics.RenderTarget.h: include/Uno.Int2.h
include/Uno.Graphics.RenderTarget.h: include/Uno.Object.h

include/Uno.Graphics.SamplerState.h: include/Uno.Object.h

include/Uno.Graphics.Texture2D.h: include/Uno.IDisposable.h
include/Uno.Graphics.Texture2D.h: include/Uno.Int2.h
include/Uno.Graphics.Texture2D.h: include/Uno.Object.h

include/Uno.Graphics.TextureAddressMode.h: include/Uno.Int.h

include/Uno.Graphics.TextureCube.h: include/Uno.IDisposable.h
include/Uno.Graphics.TextureCube.h: include/Uno.Object.h

include/Uno.Graphics.TextureFilter.h: include/Uno.Int.h

include/Uno.Graphics.TextureHelpers.h: include/Uno.h

include/Uno.Graphics.VertexAttributeInfo.h: include/Uno.Object.h

include/Uno.Graphics.VertexAttributeType.h: include/Uno.Int.h

include/Uno.Graphics.VertexAttributeTypeHelpers.h: include/Uno.h

include/Uno.Graphics.VertexBuffer.h: include/Uno.Graphics.DeviceBuffer.h
include/Uno.Graphics.VertexBuffer.h: include/Uno.IDisposable.h

include/Uno.Graphics.VideoTexture.h: include/Uno.IDisposable.h
include/Uno.Graphics.VideoTexture.h: include/Uno.Object.h

include/Uno.h: include/Uno/ObjectModel.h
include/Uno.h: include/Uno/Reflection.h

include/Uno.IDisposable.h: include/Uno.Object.h

include/Uno.IndexOutOfRangeException.h: include/Uno.Exception.h

include/Uno.Int.h: include/Uno.Object.h

include/Uno.Int2.h: include/Uno.Object.h

include/Uno.Int3.h: include/Uno.Object.h

include/Uno.Int4.h: include/Uno.Object.h

include/Uno.IntPtr.h: include/Uno.Object.h

include/Uno.InvalidCastException.h: include/Uno.Exception.h

include/Uno.InvalidOperationException.h: include/Uno.Exception.h

include/Uno.IO.BinaryReader.h: include/Uno.IDisposable.h
include/Uno.IO.BinaryReader.h: include/Uno.Object.h

include/Uno.IO.BinaryWriter.h: include/Uno.IDisposable.h
include/Uno.IO.BinaryWriter.h: include/Uno.Object.h

include/Uno.IO.CppXliStream.h: include/Uno.IDisposable.h
include/Uno.IO.CppXliStream.h: include/Uno.IO.Stream.h

include/Uno.IO.CppXliStreamHandle.h: include/Uno.Object.h

include/Uno.IO.Directory.h: include/Uno.h

include/Uno.IO.EndOfStreamException.h: include/Uno.IO.IOException.h

include/Uno.IO.File.h: include/Uno.h

include/Uno.IO.FileMode.h: include/Uno.Int.h

include/Uno.IO.FileSystemImpl.h: include/Uno.h

include/Uno.IO.IOException.h: include/Uno.Exception.h

include/Uno.IO.MemoryStream.h: include/Uno.IDisposable.h
include/Uno.IO.MemoryStream.h: include/Uno.IO.Stream.h

include/Uno.IO.Path.h: include/Uno.h

include/Uno.IO.SeekOrigin.h: include/Uno.Int.h

include/Uno.IO.Stream.h: include/Uno.IDisposable.h
include/Uno.IO.Stream.h: include/Uno.Object.h

include/Uno.IO.StreamReader.h: include/Uno.IDisposable.h
include/Uno.IO.StreamReader.h: include/Uno.IO.TextReader.h

include/Uno.IO.StreamWriter.h: include/Uno.IDisposable.h
include/Uno.IO.StreamWriter.h: include/Uno.IO.TextWriter.h

include/Uno.IO.StringWriter.h: include/Uno.IDisposable.h
include/Uno.IO.StringWriter.h: include/Uno.IO.TextWriter.h

include/Uno.IO.TextReader.h: include/Uno.IDisposable.h
include/Uno.IO.TextReader.h: include/Uno.Object.h

include/Uno.IO.TextWriter.h: include/Uno.IDisposable.h
include/Uno.IO.TextWriter.h: include/Uno.Object.h

include/Uno.IO.UserDirectory.h: include/Uno.Int.h

include/Uno.Long.h: include/Uno.Object.h

include/Uno.Math.h: include/Uno.h

include/Uno.Matrix.h: include/Uno.h

include/Uno.Net.EndPoint.h: include/Uno.Object.h

include/Uno.Net.Http.AbsolutePathParser.h: include/Uno.Object.h

include/Uno.Net.Http.HashParser.h: include/Uno.Object.h

include/Uno.Net.Http.HostInfo.h: include/Uno.Object.h

include/Uno.Net.Http.HostInfoParser.h: include/Uno.Object.h

include/Uno.Net.Http.HttpDefaultDispatcher.h: include/Uno.Object.h
include/Uno.Net.Http.HttpDefaultDispatcher.h: include/Uno.Threading.IDispatcher.h

include/Uno.Net.Http.HttpMessageCache.h: include/Uno.h

include/Uno.Net.Http.HttpMessageHandler.h: include/Uno.IDisposable.h
include/Uno.Net.Http.HttpMessageHandler.h: include/Uno.Object.h

include/Uno.Net.Http.HttpMessageHandler.StaticData.h: include/Uno.h

include/Uno.Net.Http.HttpMessageHandlerRequest.DispatchClosure.h: include/Uno.Object.h

include/Uno.Net.Http.HttpMessageHandlerRequest.DispatchClosure-1.h: include/Uno.Object.h

include/Uno.Net.Http.HttpMessageHandlerRequest.h: include/Uno.IDisposable.h
include/Uno.Net.Http.HttpMessageHandlerRequest.h: include/Uno.Object.h

include/Uno.Net.Http.HttpMessageHandlerRequest.ProgressClosure.h: include/Uno.Object.h

include/Uno.Net.Http.HttpRequestState.h: include/Uno.Int.h

include/Uno.Net.Http.HttpResponseType.h: include/Uno.Int.h

include/Uno.Net.Http.HttpStatusReasonPhrase.h: include/Uno.h

include/Uno.Net.Http.Implementation.AndroidHttpRequest.h: include/Android.Base.Wrappers.IJWrapper.h
include/Uno.Net.Http.Implementation.AndroidHttpRequest.h: include/Android.com.fuse.ExperimentalHttp.HttpRequest.h
include/Uno.Net.Http.Implementation.AndroidHttpRequest.h: include/Uno.IDisposable.h
include/Uno.Net.Http.Implementation.AndroidHttpRequest.h: include/Uno.Net.Http.Implementation.IHttpRequest.h

include/Uno.Net.Http.Implementation.IHttpRequest.h: include/Uno.IDisposable.h
include/Uno.Net.Http.Implementation.IHttpRequest.h: include/Uno.Object.h

include/Uno.Net.Http.InvalidResponseTypeException.h: include/Uno.Exception.h

include/Uno.Net.Http.InvalidStateException.h: include/Uno.Exception.h

include/Uno.Net.Http.QueryParser.h: include/Uno.Object.h

include/Uno.Net.Http.SchemeParser.h: include/Uno.Object.h

include/Uno.Net.Http.SchemeParserResult.h: include/Uno.Object.h

include/Uno.Net.Http.Uri.h: include/Uno.Object.h

include/Uno.Net.Http.UriFormatException.h: include/Uno.Exception.h

include/Uno.Net.Http.UriScheme.h: include/Uno.Object.h

include/Uno.Net.Http.UriSchemeType.h: include/Uno.Int.h

include/Uno.Net.Http.UserInfoParser.h: include/Uno.Object.h

include/Uno.Net.IPAddress.h: include/Uno.Object.h

include/Uno.Net.IPEndPoint.h: include/Uno.Net.EndPoint.h

include/Uno.Net.Sockets.AddressFamily.h: include/Uno.Int.h

include/Uno.Net.Sockets.Berkeley.bsd_socket.h: include/Uno.h

include/Uno.Net.Sockets.Berkeley.Socket.h: include/Uno.Net.Sockets.Socket.h

include/Uno.Net.Sockets.NetworkStream.h: include/Uno.IDisposable.h
include/Uno.Net.Sockets.NetworkStream.h: include/Uno.IO.Stream.h

include/Uno.Net.Sockets.ProtocolType.h: include/Uno.Int.h

include/Uno.Net.Sockets.SelectMode.h: include/Uno.Int.h

include/Uno.Net.Sockets.Socket.h: include/Uno.Object.h

include/Uno.Net.Sockets.SocketException.h: include/Uno.Exception.h

include/Uno.Net.Sockets.SocketShutdown.h: include/Uno.Int.h

include/Uno.Net.Sockets.SocketType.h: include/Uno.Int.h

include/Uno.NotImplementedException.h: include/Uno.Exception.h

include/Uno.NotSupportedException.h: include/Uno.Exception.h

include/Uno.NullReferenceException.h: include/Uno.Exception.h

include/Uno.Object.h: include/Uno.h

include/Uno.ObjectDisposedException.h: include/Uno.Exception.h

include/Uno.OverflowException.h: include/Uno.Exception.h

include/Uno.Platform.ClosingEventArgs.h: include/Uno.EventArgs.h

include/Uno.Platform.EventModifiers.h: include/Uno.Int.h

include/Uno.Platform.FrameChangedEventArgs.h: include/Uno.EventArgs.h
include/Uno.Platform.FrameChangedEventArgs.h: include/Uno.Rect.h

include/Uno.Platform.iOS.StatusBarAnimation.h: include/Uno.Int.h

include/Uno.Platform.iOS.StatusBarStyle.h: include/Uno.Int.h

include/Uno.Platform.Key.h: include/Uno.Int.h

include/Uno.Platform.KeyEventArgs.h: include/Uno.EventArgs.h

include/Uno.Platform.MouseButton.h: include/Uno.Int.h

include/Uno.Platform.PointerCursor.h: include/Uno.Int.h

include/Uno.Platform.PointerEventArgs.h: include/Uno.EventArgs.h
include/Uno.Platform.PointerEventArgs.h: include/Uno.Float2.h

include/Uno.Platform.PointerType.h: include/Uno.Int.h

include/Uno.Platform.SystemUI.h: include/Uno.h
include/Uno.Platform.SystemUI.h: include/Uno/Platform2.h

include/Uno.Platform.SystemUIID.h: include/Uno.Int.h

include/Uno.Platform.SystemUIResizeReason.h: include/Uno.Int.h

include/Uno.Platform.SystemUIWillResizeEventArgs.h: include/Uno.EventArgs.h
include/Uno.Platform.SystemUIWillResizeEventArgs.h: include/Uno.Rect.h

include/Uno.Platform.TextInputEventArgs.h: include/Uno.EventArgs.h

include/Uno.Platform.TextInputHint.h: include/Uno.Int.h

include/Uno.Platform.TimerEventArgs.h: include/Uno.EventArgs.h

include/Uno.Platform.ViewNativeHandle.h: include/Uno.Object.h
include/Uno.Platform.ViewNativeHandle.h: include/Uno/Platform2.h

include/Uno.Platform.WheelDeltaMode.h: include/Uno.Int.h

include/Uno.Platform.Window.h: include/Uno.Object.h

include/Uno.Platform2.Application.h: include/Uno.h
include/Uno.Platform2.Application.h: include/Uno/Platform2.h

include/Uno.Platform2.ApplicationState.h: include/Uno.Int.h

include/Uno.Platform2.ApplicationStateTransitionHandler.h: include/Uno.Delegate.h

include/Uno.Platform2.Display.h: include/Uno.Object.h
include/Uno.Platform2.Display.h: include/Uno.Rect.h
include/Uno.Platform2.Display.h: include/Uno/Platform2.h

include/Uno.Platform2.Display.PrivateState.h: include/Uno.Object.h
include/Uno.Platform2.Display.PrivateState.h: include/Uno/Platform2.h

include/Uno.Platform2.Implementation.InvokedFromNativeCodeAttribute.h: include/Uno.Attribute.h

include/Uno.Predicate-1.h: include/Uno.Delegate.h

include/Uno.Quaternion.h: include/Uno.h

include/Uno.Rect.h: include/Uno.Object.h

include/Uno.Recti.h: include/Uno.Object.h

include/Uno.Reflection.CppField.h: include/Uno.Object.h
include/Uno.Reflection.CppField.h: include/Uno.Reflection.IField.h

include/Uno.Reflection.CppFunction.h: include/Uno.Object.h
include/Uno.Reflection.CppFunction.h: include/Uno.Reflection.IFunction.h

include/Uno.Reflection.CppReflection.h: include/Uno.Object.h

include/Uno.Reflection.IField.h: include/Uno.Object.h

include/Uno.Reflection.IFunction.h: include/Uno.Object.h

include/Uno.Runtime.Implementation.ArrayCopyImpl.h: include/Uno.h

include/Uno.Runtime.Implementation.ArraySortImpl.h: include/Uno.h

include/Uno.Runtime.Implementation.BufferImpl.h: include/Uno.h

include/Uno.Runtime.Implementation.ClockImpl.h: include/Uno.h

include/Uno.Runtime.Implementation.DebugImpl.h: include/Uno.h

include/Uno.Runtime.Implementation.GenericEqualsImpl.h: include/Uno.h

include/Uno.Runtime.Implementation.GraphicsContextHandle.h: include/Uno.Object.h
include/Uno.Runtime.Implementation.GraphicsContextHandle.h: include/Uno/GraphicsContext.h

include/Uno.Runtime.Implementation.GraphicsContextImpl.h: include/Uno.h
include/Uno.Runtime.Implementation.GraphicsContextImpl.h: include/Uno/GraphicsContext.h

include/Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Runtime.Implementation.Internal.ArrayEnumerable-1.h: include/Uno.Object.h

include/Uno.Runtime.Implementation.Internal.ArrayEnumerator-1.h: include/Uno.Collections.IEnumerator.h
include/Uno.Runtime.Implementation.Internal.ArrayEnumerator-1.h: include/Uno.Collections.IEnumerator-1.h
include/Uno.Runtime.Implementation.Internal.ArrayEnumerator-1.h: include/Uno.IDisposable.h
include/Uno.Runtime.Implementation.Internal.ArrayEnumerator-1.h: include/Uno.Object.h

include/Uno.Runtime.Implementation.Internal.ArrayList-1.h: include/Uno.Collections.ICollection-1.h
include/Uno.Runtime.Implementation.Internal.ArrayList-1.h: include/Uno.Collections.IEnumerable-1.h
include/Uno.Runtime.Implementation.Internal.ArrayList-1.h: include/Uno.Collections.IList-1.h
include/Uno.Runtime.Implementation.Internal.ArrayList-1.h: include/Uno.Object.h

include/Uno.Runtime.Implementation.Internal.BootstrapHints.h: include/Uno.h

include/Uno.Runtime.Implementation.Internal.Bootstrapper.h: include/Uno.h

include/Uno.Runtime.Implementation.Internal.BufferConverters.h: include/Uno.h

include/Uno.Runtime.Implementation.Internal.BufferReader.h: include/Uno.Object.h

include/Uno.Runtime.Implementation.Internal.FormatSpecifier.h: include/Uno.Int.h

include/Uno.Runtime.Implementation.Internal.FormatStringItem.h: include/Uno.Runtime.Implementation.Internal.FormatStringToken.h

include/Uno.Runtime.Implementation.Internal.FormatStringLiteral.h: include/Uno.Runtime.Implementation.Internal.FormatStringToken.h

include/Uno.Runtime.Implementation.Internal.FormatStringToken.h: include/Uno.Object.h

include/Uno.Runtime.Implementation.Internal.FormatStringTokenizer.h: include/Uno.Object.h

include/Uno.Runtime.Implementation.Internal.FormatStringTokenizer.State.h: include/Uno.Int.h

include/Uno.Runtime.Implementation.Internal.NumericFormatter.h: include/Uno.h

include/Uno.Runtime.Implementation.Internal.WindowHelpers.h: include/Uno.h

include/Uno.Runtime.Implementation.PlatformWindowHandle.h: include/Uno.Object.h

include/Uno.Runtime.Implementation.PlatformWindowImpl.h: include/Uno.h

include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLCompiledProgram.h: include/Uno.IDisposable.h
include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLCompiledProgram.h: include/Uno.Object.h

include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLDrawCall.h: include/Uno.Object.h

include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLException.h: include/Uno.Exception.h

include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLHelpers.h: include/Uno.h

include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLInterop.h: include/Uno.h

include/Uno.Runtime.Implementation.ShaderBackends.OpenGL.GLProgram.h: include/Uno.Object.h

include/Uno.Runtime.Implementation.TextEncodingImpl.h: include/Uno.h

include/Uno.SByte.h: include/Uno.Object.h

include/Uno.SByte2.h: include/Uno.Object.h

include/Uno.SByte4.h: include/Uno.Object.h

include/Uno.Short.h: include/Uno.Object.h

include/Uno.Short2.h: include/Uno.Object.h

include/Uno.Short4.h: include/Uno.Object.h

include/Uno.String.h: include/Uno.Object.h

include/Uno.Testing.AbstractRunner.h: include/Uno.Object.h
include/Uno.Testing.AbstractRunner.h: include/Uno.Testing.IRunner.h

include/Uno.Testing.Assert.h: include/Uno.h

include/Uno.Testing.AssertionFailedException.h: include/Uno.Exception.h

include/Uno.Testing.AsyncTestAttribute.h: include/Uno.Attribute.h

include/Uno.Testing.IRunner.h: include/Uno.Object.h

include/Uno.Testing.NamedTestMethod.h: include/Uno.Object.h

include/Uno.Testing.Registry.h: include/Uno.Object.h

include/Uno.Testing.RemoteRunner.h: include/Uno.Testing.AbstractRunner.h
include/Uno.Testing.RemoteRunner.h: include/Uno.Testing.IRunner.h

include/Uno.Testing.TestAttribute.h: include/Uno.Attribute.h

include/Uno.Testing.TestSetup.h: include/Uno.Application.h

include/Uno.Text.Ascii.h: include/Uno.h

include/Uno.Text.Base64.h: include/Uno.h

include/Uno.Text.Decoder.h: include/Uno.Object.h

include/Uno.Text.Encoding.h: include/Uno.Object.h

include/Uno.Text.StringBuilder.h: include/Uno.Object.h

include/Uno.Text.StringBuilderElement.h: include/Uno.Object.h

include/Uno.Text.Utf8.h: include/Uno.h

include/Uno.Text.UTF8Decoder.h: include/Uno.Text.Decoder.h

include/Uno.Text.UTF8Encoding.h: include/Uno.Text.Encoding.h

include/Uno.Threading.AutoResetEvent.h: include/Uno.IDisposable.h
include/Uno.Threading.AutoResetEvent.h: include/Uno.Object.h

include/Uno.Threading.CancellationToken.h: include/Uno.Object.h

include/Uno.Threading.CancellationTokenSource.h: include/Uno.Object.h

include/Uno.Threading.ConcurrentQueue-1.h: include/Uno.IDisposable.h
include/Uno.Threading.ConcurrentQueue-1.h: include/Uno.Object.h

include/Uno.Threading.Future.h: include/Uno.IDisposable.h
include/Uno.Threading.Future.h: include/Uno.Object.h

include/Uno.Threading.Future-1.Closure-1.h: include/Uno.Object.h

include/Uno.Threading.Future-1.h: include/Uno.IDisposable.h
include/Uno.Threading.Future-1.h: include/Uno.Threading.Future.h

include/Uno.Threading.FutureState.h: include/Uno.Int.h

include/Uno.Threading.IDispatcher.h: include/Uno.Object.h

include/Uno.Threading.IDispatcherExtensions.Arg1Invoke-1.h: include/Uno.Object.h

include/Uno.Threading.IDispatcherExtensions.Arg1InvokeFunc-2.h: include/Uno.Object.h

include/Uno.Threading.IDispatcherExtensions.Arg2Invoke-2.h: include/Uno.Object.h

include/Uno.Threading.IDispatcherExtensions.h: include/Uno.h

include/Uno.Threading.ITaskScheduler.h: include/Uno.IDisposable.h
include/Uno.Threading.ITaskScheduler.h: include/Uno.Object.h

include/Uno.Threading.LockGuard.h: include/Uno.IDisposable.h
include/Uno.Threading.LockGuard.h: include/Uno.Object.h

include/Uno.Threading.ManualResetEvent.h: include/Uno.IDisposable.h
include/Uno.Threading.ManualResetEvent.h: include/Uno.Object.h

include/Uno.Threading.Mutex.h: include/Uno.IDisposable.h
include/Uno.Threading.Mutex.h: include/Uno.Object.h

include/Uno.Threading.PosixAutoResetEvent.h: include/Uno.IDisposable.h
include/Uno.Threading.PosixAutoResetEvent.h: include/Uno.Threading.AutoResetEvent.h

include/Uno.Threading.PosixManualResetEvent.h: include/Uno.IDisposable.h
include/Uno.Threading.PosixManualResetEvent.h: include/Uno.Threading.ManualResetEvent.h

include/Uno.Threading.POSIXMutex.h: include/Uno.IDisposable.h
include/Uno.Threading.POSIXMutex.h: include/Uno.Threading.Mutex.h

include/Uno.Threading.POSIXThread.h: include/Uno.Threading.Thread.h

include/Uno.Threading.Promise-1.h: include/Uno.IDisposable.h
include/Uno.Threading.Promise-1.h: include/Uno.Object.h
include/Uno.Threading.Promise-1.h: include/Uno.Threading.Future-1.h

include/Uno.Threading.SyncDispatcher.h: include/Uno.Object.h
include/Uno.Threading.SyncDispatcher.h: include/Uno.Threading.IDispatcher.h

include/Uno.Threading.Task.h: include/Uno.IDisposable.h
include/Uno.Threading.Task.h: include/Uno.Object.h

include/Uno.Threading.TaskDelegate.h: include/Uno.Delegate.h

include/Uno.Threading.TaskFuture-1.h: include/Uno.IDisposable.h
include/Uno.Threading.TaskFuture-1.h: include/Uno.Object.h
include/Uno.Threading.TaskFuture-1.h: include/Uno.Threading.Future-1.h

include/Uno.Threading.TaskStatus.h: include/Uno.Int.h

include/Uno.Threading.Thread.h: include/Uno.Object.h

include/Uno.Threading.ThreadPool.DefaultWorkItem.h: include/Uno.Threading.ThreadPool.WorkItem.h

include/Uno.Threading.ThreadPool.h: include/Uno.IDisposable.h
include/Uno.Threading.ThreadPool.h: include/Uno.Object.h

include/Uno.Threading.ThreadPool.ParameterizedWorkItem-1.h: include/Uno.Threading.ThreadPool.WorkItem.h

include/Uno.Threading.ThreadPool.WorkItem.h: include/Uno.Object.h

include/Uno.Threading.ThreadPoolTaskScheduler.h: include/Uno.IDisposable.h
include/Uno.Threading.ThreadPoolTaskScheduler.h: include/Uno.Object.h
include/Uno.Threading.ThreadPoolTaskScheduler.h: include/Uno.Threading.ITaskScheduler.h

include/Uno.Time.Calendars.Era.h: include/Uno.Object.h

include/Uno.Time.Calendars.GregorianYearMonthDayCalculator.h: include/Uno.Time.Calendars.YearMonthDayCalculator.h

include/Uno.Time.Calendars.TimeOfDayCalculator.h: include/Uno.h

include/Uno.Time.Calendars.WeekYearCalculator.h: include/Uno.Object.h

include/Uno.Time.Calendars.YearMonthDayCalculator.h: include/Uno.Object.h
include/Uno.Time.Calendars.YearMonthDayCalculator.h: include/Uno.Time.Instant.h

include/Uno.Time.CalendarSystem.h: include/Uno.Object.h

include/Uno.Time.Converter.h: include/Uno.h

include/Uno.Time.DateTimeZone.h: include/Uno.Object.h
include/Uno.Time.DateTimeZone.h: include/Uno.Time.Offset.h

include/Uno.Time.DeviceTimeZone.h: include/Uno.Time.DateTimeZone.h

include/Uno.Time.Duration.h: include/Uno.Object.h

include/Uno.Time.FixedDateTimeZone.h: include/Uno.Time.DateTimeZone.h
include/Uno.Time.FixedDateTimeZone.h: include/Uno.Time.Offset.h

include/Uno.Time.HashCodeHelper.h: include/Uno.h

include/Uno.Time.Instant.h: include/Uno.Object.h

include/Uno.Time.LocalDate.h: include/Uno.Object.h

include/Uno.Time.LocalDateTime.h: include/Uno.Object.h
include/Uno.Time.LocalDateTime.h: include/Uno.Time.Instant.h

include/Uno.Time.LocalTime.h: include/Uno.Object.h

include/Uno.Time.Offset.h: include/Uno.Object.h

include/Uno.Time.OffsetDateTime.h: include/Uno.Object.h
include/Uno.Time.OffsetDateTime.h: include/Uno.Time.Offset.h

include/Uno.Time.Preconditions.h: include/Uno.h

include/Uno.Time.Text.FixedFormatPattern-1.h: include/Uno.Object.h

include/Uno.Time.Text.IPatternPart-1.h: include/Uno.Object.h

include/Uno.Time.Text.LocalDatePattern.h: include/Uno.Object.h

include/Uno.Time.Text.LocalDatePattern.LocalDateBucket.h: include/Uno.Object.h

include/Uno.Time.Text.LocalDateTimePattern.h: include/Uno.Object.h

include/Uno.Time.Text.LocalDateTimePattern.LocalDateTimeBucket.h: include/Uno.Object.h

include/Uno.Time.Text.LocalTimePattern.h: include/Uno.Object.h

include/Uno.Time.Text.LocalTimePattern.LocalTimeBucket.h: include/Uno.Object.h

include/Uno.Time.Text.NumberPart-1.h: include/Uno.Int.h
include/Uno.Time.Text.NumberPart-1.h: include/Uno.Object.h
include/Uno.Time.Text.NumberPart-1.h: include/Uno.Time.Text.IPatternPart-1.h
include/Uno.Time.Text.NumberPart-1.h: include/Uno.Time.Text.PatternPart-2.h

include/Uno.Time.Text.OffsetDateTimePattern.h: include/Uno.Object.h

include/Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket.h: include/Uno.Object.h
include/Uno.Time.Text.OffsetDateTimePattern.OffsetDateTimeBucket.h: include/Uno.Time.Offset.h

include/Uno.Time.Text.OffsetPattern.h: include/Uno.Object.h

include/Uno.Time.Text.OffsetPattern.OffsetBucket.h: include/Uno.Object.h

include/Uno.Time.Text.OffsetPatternPart-1.h: include/Uno.Object.h
include/Uno.Time.Text.OffsetPatternPart-1.h: include/Uno.Time.Offset.h
include/Uno.Time.Text.OffsetPatternPart-1.h: include/Uno.Time.Text.IPatternPart-1.h
include/Uno.Time.Text.OffsetPatternPart-1.h: include/Uno.Time.Text.PatternPart-2.h

include/Uno.Time.Text.ParseResult-1.h: include/Uno.Object.h

include/Uno.Time.Text.PatternPart-2.h: include/Uno.Object.h
include/Uno.Time.Text.PatternPart-2.h: include/Uno.Time.Text.IPatternPart-1.h

include/Uno.Time.Text.RangeNumberPart-1.h: include/Uno.Int.h
include/Uno.Time.Text.RangeNumberPart-1.h: include/Uno.Object.h
include/Uno.Time.Text.RangeNumberPart-1.h: include/Uno.Time.Text.IPatternPart-1.h
include/Uno.Time.Text.RangeNumberPart-1.h: include/Uno.Time.Text.PatternPart-2.h

include/Uno.Time.Text.SeparatorPart-1.h: include/Uno.Char.h
include/Uno.Time.Text.SeparatorPart-1.h: include/Uno.Object.h
include/Uno.Time.Text.SeparatorPart-1.h: include/Uno.Time.Text.IPatternPart-1.h
include/Uno.Time.Text.SeparatorPart-1.h: include/Uno.Time.Text.PatternPart-2.h

include/Uno.Time.Text.SignPart-1.h: include/Uno.Int.h
include/Uno.Time.Text.SignPart-1.h: include/Uno.Object.h
include/Uno.Time.Text.SignPart-1.h: include/Uno.Time.Text.IPatternPart-1.h
include/Uno.Time.Text.SignPart-1.h: include/Uno.Time.Text.PatternPart-2.h

include/Uno.Time.ZonedDateTime.h: include/Uno.Object.h
include/Uno.Time.ZonedDateTime.h: include/Uno.Time.Offset.h

include/Uno.Type.h: include/Uno.Object.h

include/Uno.UInt.h: include/Uno.Object.h

include/Uno.ULong.h: include/Uno.Object.h

include/Uno.UShort.h: include/Uno.Object.h

include/Uno.UShort2.h: include/Uno.Object.h

include/Uno.UShort4.h: include/Uno.Object.h

include/Uno.UX.BundleFileSource.h: include/Uno.UX.FileSource.h

include/Uno.UX.Expression-1.h: include/Uno.Delegate.h

include/Uno.UX.Factory.h: include/Uno.Object.h

include/Uno.UX.FileSource.h: include/Uno.Object.h

include/Uno.UX.ITemplate.h: include/Uno.Object.h

include/Uno.UX.Property-1.h: include/Uno.Object.h

include/Uno.UX.Resource.h: include/Uno.Object.h

include/Uno.UX.StreamExtensions.h: include/Uno.h

include/Uno.UX.Template-1.h: include/Uno.Object.h
include/Uno.UX.Template-1.h: include/Uno.UX.ITemplate.h

include/Uno.UX.UXAutoNameTableAttribute.h: include/Uno.Attribute.h

include/Uno.UX.UXComponentsAttribute.h: include/Uno.Attribute.h

include/Uno.UX.UXConstructorAttribute.h: include/Uno.Attribute.h

include/Uno.UX.UXContentAttribute.h: include/Uno.Attribute.h

include/Uno.UX.UXFileNameAttribute.h: include/Uno.Attribute.h

include/Uno.UX.UXGlobalResourceAttribute.h: include/Uno.Attribute.h

include/Uno.UX.UXLineNumberAttribute.h: include/Uno.Attribute.h

include/Uno.UX.UXMetadataAttribute.h: include/Uno.Attribute.h

include/Uno.UX.UXNameAttribute.h: include/Uno.Attribute.h

include/Uno.UX.UXPrimaryAttribute.h: include/Uno.Attribute.h

include/Uno.UX.UXSourceFileNameAttribute.h: include/Uno.Attribute.h

include/Uno.UX.UXValueBindingArgumentAttribute.h: include/Uno.Attribute.h

include/Uno.UX.UXValueBindingTargetAttribute.h: include/Uno.Attribute.h

include/Uno.UX.ValueChangedArgs-1.h: include/Uno.EventArgs.h

include/Uno.UX.ValueChangedHandler-1.h: include/Uno.Delegate.h

include/Uno.Vector.h: include/Uno.h

include/Uno.WeakReference-1.h: include/Uno.Object.h

include/Uno.WeakReferenceAttribute.h: include/Uno.Attribute.h



include/Uno/_internal.h: include/Uno/ObjectModel.h
include/Uno/_internal.h: include/Uno/_gc.h

include/Uno/Activity/AApplication.h: include/Uno/Common/AndroidCommon.h
include/Uno/Activity/AApplication.h: include/Uno.Platform2.Display.h

include/Uno/Activity/EntryPoints.h: include/Uno/Graphics/GLHelper.h
include/Uno/Activity/EntryPoints.h: include/Uno/Common/AndroidCommon.h



include/Uno/Graphics/GLHelper.h: include/Uno/Common/AndroidCommon.h

include/Uno/GraphicsContext.h: include/Uno/XliInterop.h

include/Uno/JNIHelper.h: include/Uno/Uno.h
include/Uno/JNIHelper.h: include/Uno/Common/AndroidCommon.h

include/Uno/Memory.h: include/Uno/_config.h

include/Uno/ObjectModel.h: include/Uno/Memory.h
include/Uno/ObjectModel.h: include/Uno/Reflection.h

include/Uno/Platform2.h: include/Uno.Rect.h
include/Uno/Platform2.h: include/Uno/Common/AndroidCommon.h
include/Uno/Platform2.h: include/Uno/Graphics/GLHelper.h
include/Uno/Platform2.h: include/Uno/JNIHelper.h

include/Uno/Reflection.h: include/Uno/Memory.h

include/Uno/Support.h: include/Uno.Int2.h
include/Uno/Support.h: include/Uno.Float2.h

include/Uno/Uno.h: include/Uno.h
include/Uno/Uno.h: include/Uno/Support.h

include/Uno/XliInterop.h: include/Uno/Support.h

include/V8Proxy.h: include/Fuse.Scripting.V8.Simple.MessageHandler.h
include/V8Proxy.h: include/Fuse.Scripting.V8.Simple.ScriptExceptionHandler.h
include/V8Proxy.h: include/Fuse.Scripting.V8.Simple.Callback.h

libs/$(ABI): | libs
	$(UNO) mkdir libs/$(ABI)

libs:
	$(UNO) mkdir libs

.uno:
	$(UNO) mkdir .uno

.uno/Uno: | .uno
	$(UNO) mkdir .uno/Uno

.uno/Uno/Activity: | .uno/Uno
	$(UNO) mkdir .uno/Uno/Activity

.uno/Uno/Graphics: | .uno/Uno
	$(UNO) mkdir .uno/Uno/Graphics
