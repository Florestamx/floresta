// This file was generated based on '/usr/local/share/uno/Packages/Android/0.24.0/Android/android/media/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.Wrappers.IJWrapper.h>
#include <Uno.Object.h>
namespace g{namespace Android{namespace android{namespace media{struct MediaPlayer;}}}}

namespace g{
namespace Android{
namespace android{
namespace media{

// public abstract extern interface MediaPlayerDLROnCompletionListener :18734
// {
uInterfaceType* MediaPlayerDLROnCompletionListener_typeof();

struct MediaPlayerDLROnCompletionListener
{
    void(*fp_onCompletion)(uObject*, ::g::Android::android::media::MediaPlayer*);
    static void onCompletion(const uInterface& __this, ::g::Android::android::media::MediaPlayer* arg0) { __this.VTable<MediaPlayerDLROnCompletionListener>()->fp_onCompletion(__this, arg0); }
};
// }

}}}} // ::g::Android::android::media
