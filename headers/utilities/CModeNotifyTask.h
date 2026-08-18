#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 5 member(s).
namespace CImmersiveModeSubscriber {
class CModeNotifyTask {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CreateInstance@CModeNotifyTask@CImmersiveModeSubscriber@@SAJPEBUModeNotifyData@2@AEBU_GUID@@PEAPEAX@Z
    static long s_CreateInstance(WindissectOpaque const *, _GUID const &, void * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalResumeRT@CModeNotifyTask@CImmersiveModeSubscriber@@MEAAJXZ
    virtual long InternalResumeRT();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CModeNotifyTask@CImmersiveModeSubscriber@@MEAA@XZ
    virtual ~CModeNotifyTask();
};
} // namespace CImmersiveModeSubscriber
