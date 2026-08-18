#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 6 member(s).
namespace StartupDB {
class StartupApproval {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBlockedItemInfo@StartupApproval@StartupDB@@QEAAJPEBGPEAUBLOCKEDITEMINFO@2@@Z
    long GetBlockedItemInfo(unsigned short const *, ::StartupDB::BLOCKEDITEMINFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@StartupApproval@StartupDB@@QEAAJPEAUHKEY__@@PEBGK@Z
    long Initialize(HKEY__*, unsigned short const *, unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetBlockedItemInfo@StartupApproval@StartupDB@@QEAAJPEBGPEBUBLOCKEDITEMINFO@2@@Z
    long SetBlockedItemInfo(unsigned short const *, ::StartupDB::BLOCKEDITEMINFO const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StartupApproval@StartupDB@@QEAA@XZ
    StartupApproval();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Uninitialize@StartupApproval@StartupDB@@QEAAXXZ
    void Uninitialize();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_RegOpenOrCreate@StartupApproval@StartupDB@@AEAAJPEAUHKEY__@@PEBGKPEAPEAU3@@Z
    long s_RegOpenOrCreate(HKEY__*, unsigned short const *, unsigned long, HKEY__* *);
};
} // namespace StartupDB
