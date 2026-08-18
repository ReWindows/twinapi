#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 8 member(s).
class CLockScreenApplications {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLockScreenApplications@CLockScreenApplications@@UEAAJPEBGPEAPEAPEAG1PEAI@Z
    virtual long GetLockScreenApplications(unsigned short const *, unsigned short * * *, unsigned short * * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsApplicationOnLockScreen@CLockScreenApplications@@UEAAJPEBG00PEAH@Z
    virtual long IsApplicationOnLockScreen(unsigned short const *, unsigned short const *, unsigned short const *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNCBEnabledForApplication@CLockScreenApplications@@UEAAJPEBG00PEAH@Z
    virtual long IsNCBEnabledForApplication(unsigned short const *, unsigned short const *, unsigned short const *, int *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CollectRegisteredApps@CLockScreenApplications@@AEAAJPEBGW4LOCK_SCREEN_APPLICATION_CAPABILITIES@@PEAV?$CSimplePointerArrayCoTaskMem@GV?$CSimpleArrayStandardCompareHelper@PEAG@@@@2@Z
    long _CollectRegisteredApps(unsigned short const *, int, WindissectOpaque *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsAppRegisteredByType@CLockScreenApplications@@AEAAJPEBGW4LOCK_SCREEN_APPLICATION_CAPABILITIES@@00PEAH@Z
    long _IsAppRegisteredByType(unsigned short const *, int, unsigned short const *, unsigned short const *, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PopulateAppUserModelIds@CLockScreenApplications@@AEAAJPEAV?$CSimplePointerArrayCoTaskMem@GV?$CSimpleArrayStandardCompareHelper@PEAG@@@@0PEAPEAPEAG1PEAI@Z
    long _PopulateAppUserModelIds(WindissectOpaque *, WindissectOpaque *, unsigned short * * *, unsigned short * * *, unsigned int *);
};
