#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 12 member(s).
class CImmersiveModeSubscriber {
public:
    class CLauncherNotifyTask;
    class CModeNotifyTask;
    class LauncherNotifyData;
    class ModeNotifyData;
    class NotifyDataBase;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CImmersiveModeSubscriber@@QEAA@XZ
    CImmersiveModeSubscriber();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CImmersiveModeSubscriber@@UEAA@XZ
    virtual ~CImmersiveModeSubscriber();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Advise@CImmersiveModeSubscriber@@EEAAJPEAUIAppVisibilityEvents@@PEAK@Z
    virtual long Advise(IAppVisibilityEvents *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppVisibilityOnMonitor@CImmersiveModeSubscriber@@EEAAJPEAUHMONITOR__@@PEAW4MONITOR_APP_VISIBILITY@@@Z
    virtual long GetAppVisibilityOnMonitor(HMONITOR__*, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImmersiveLauncherWNFCallback@CImmersiveModeSubscriber@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z
    static long ImmersiveLauncherWNFCallback(_WNF_STATE_NAME, unsigned long, _WNF_TYPE_ID *, void *, void const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImmersiveModeWNFCallback@CImmersiveModeSubscriber@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z
    static long ImmersiveModeWNFCallback(_WNF_STATE_NAME, unsigned long, _WNF_TYPE_ID *, void *, void const *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLauncherVisible@CImmersiveModeSubscriber@@EEAAJPEAH@Z
    virtual long IsLauncherVisible(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unadvise@CImmersiveModeSubscriber@@EEAAJK@Z
    virtual long Unadvise(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Initialize@CImmersiveModeSubscriber@@AEAAJXZ
    long _Initialize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SubscribeToWNF@CImmersiveModeSubscriber@@AEAAJXZ
    long _SubscribeToWNF();
};
