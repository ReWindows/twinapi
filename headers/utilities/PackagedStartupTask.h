#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 4 member(s).
class PackagedStartupTask {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsDisabled@PackagedStartupTask@@QEAAJ_N@Z
    long SetIsDisabled(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PackagedStartupTask@@QEAA@XZ
    ~PackagedStartupTask();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsurePackageIsRegistered@PackagedStartupTask@@AEAAJXZ
    long EnsurePackageIsRegistered();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillValues@PackagedStartupTask@@CAJAEAV1@V?$ComPtr@UIStartupTaskInternal@Internal@ApplicationModel@Windows@@@WRL@Microsoft@@@Z
    static long FillValues(PackagedStartupTask &, WindissectOpaque);
};
