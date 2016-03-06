// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Triggers/0.24.6/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.IPlayback.h>
#include <Fuse.Triggers.IProgress.h>
#include <Fuse.Triggers.IPulseTrigger.h>
#include <Fuse.Triggers.Trigger.h>
namespace g{namespace Fuse{namespace Triggers{struct Timeline;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{

// public sealed class Timeline :673
// {
struct Timeline_type : ::g::Fuse::Triggers::Trigger_type
{
    ::g::Fuse::Triggers::IPlayback interface0;
    ::g::Fuse::Triggers::IPulseTrigger interface1;
    ::g::Fuse::Triggers::IProgress interface2;
};

Timeline_type* Timeline_typeof();
void Timeline__BypassOff_fn(Timeline* __this);
void Timeline__get_CanPause_fn(Timeline* __this, bool* __retval);
void Timeline__get_CanPlayTo_fn(Timeline* __this, bool* __retval);
void Timeline__get_CanResume_fn(Timeline* __this, bool* __retval);
void Timeline__get_CanStop_fn(Timeline* __this, bool* __retval);
void Timeline__OnProgressChanged_fn(Timeline* __this);
void Timeline__OnRooted_fn(Timeline* __this, ::g::Fuse::Node* parentNode);
void Timeline__Pause_fn(Timeline* __this);
void Timeline__Play_fn(Timeline* __this, double* progress);
void Timeline__get_PlayMode_fn(Timeline* __this, int* __retval);
void Timeline__set_PlayMode_fn(Timeline* __this, int* value);
void Timeline__PlayTo1_fn(Timeline* __this, double* progress);
void Timeline__get_Progress1_fn(Timeline* __this, double* __retval);
void Timeline__set_Progress_fn(Timeline* __this, double* value);
void Timeline__add_ProgressChanged_fn(Timeline* __this, uDelegate* value);
void Timeline__remove_ProgressChanged_fn(Timeline* __this, uDelegate* value);
void Timeline__Pulse1_fn(Timeline* __this);
void Timeline__PulseBackward_fn(Timeline* __this);
void Timeline__PulseForward_fn(Timeline* __this);
void Timeline__Resume_fn(Timeline* __this);
void Timeline__Stop1_fn(Timeline* __this);
void Timeline__get_TargetProgress_fn(Timeline* __this, double* __retval);
void Timeline__set_TargetProgress_fn(Timeline* __this, double* value);

struct Timeline : ::g::Fuse::Triggers::Trigger
{
    bool _hasInitialProgress;
    bool _hasTargetProgress;
    double _initialProgress;
    int _state;
    double _targetProgress;
    uStrong<uDelegate*> ProgressChanged1;

    void BypassOff();
    bool CanPause();
    bool CanPlayTo();
    bool CanResume();
    bool CanStop();
    void Pause();
    void Play(double progress);
    int PlayMode();
    void PlayMode(int value);
    void PlayTo1(double progress);
    double Progress1();
    void Progress1(double value);
    void add_ProgressChanged(uDelegate* value);
    void remove_ProgressChanged(uDelegate* value);
    void Pulse1();
    void PulseBackward();
    void PulseForward();
    void Resume();
    void Stop1();
    double TargetProgress();
    void TargetProgress(double value);
};
// }

}}} // ::g::Fuse::Triggers
