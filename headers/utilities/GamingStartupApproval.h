#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 4 member(s).
namespace StartupDB {
class GamingStartupApproval {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@GamingStartupApproval@StartupDB@@QEAAJPEAUHKEY__@@PEBGK@Z
    long Initialize(HKEY__*, unsigned short const *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsItemEnabled@GamingStartupApproval@StartupDB@@QEAA_NPEBG@Z
    bool IsItemEnabled(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Uninitialize@GamingStartupApproval@StartupDB@@QEAAXXZ
    void Uninitialize();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_RegOpenOrCreate@GamingStartupApproval@StartupDB@@AEAAJPEAUHKEY__@@PEBGKPEAPEAU3@@Z
    long s_RegOpenOrCreate(HKEY__*, unsigned short const *, unsigned long, HKEY__* *);
};
} // namespace StartupDB
