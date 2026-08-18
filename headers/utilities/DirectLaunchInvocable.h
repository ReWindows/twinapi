#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 6 member(s).
class DirectLaunchInvocable {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DirectLaunchTile_Register@DirectLaunchInvocable@@QEAAJPEAUINamedPropertyStore@@@Z
    long DirectLaunchTile_Register(INamedPropertyStore *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DirectLaunchTile_Unregister@DirectLaunchInvocable@@QEAAJPEAUINamedPropertyStore@@@Z
    long DirectLaunchTile_Unregister(INamedPropertyStore *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DirectLaunchUri_Register@DirectLaunchInvocable@@QEAAJPEAUINamedPropertyStore@@@Z
    long DirectLaunchUri_Register(INamedPropertyStore *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DirectLaunchUri_Unregister@DirectLaunchInvocable@@QEAAJPEAUINamedPropertyStore@@@Z
    long DirectLaunchUri_Unregister(INamedPropertyStore *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DirectLaunchInvocable@@QEAA@XZ
    ~DirectLaunchInvocable();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureDirectLaunchFeatureRequested@DirectLaunchInvocable@@AEAAJXZ
    long EnsureDirectLaunchFeatureRequested();
};
