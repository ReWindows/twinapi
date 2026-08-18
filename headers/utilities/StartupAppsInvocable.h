#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 3 member(s).
class StartupAppsInvocable {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartupApps_GetEnabledStates@StartupAppsInvocable@@QEAAJPEAUINamedPropertyStore@@@Z
    long StartupApps_GetEnabledStates(INamedPropertyStore *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartupApps_SetEnabledState@StartupAppsInvocable@@QEAAJPEAUINamedPropertyStore@@@Z
    long StartupApps_SetEnabledState(INamedPropertyStore *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1StartupAppsInvocable@@QEAA@XZ
    ~StartupAppsInvocable();
};
