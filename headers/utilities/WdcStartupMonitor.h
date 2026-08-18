#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 31 member(s).
class WdcStartupMonitor {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateEntry@WdcStartupMonitor@@QEAAJPEAPEAU_WDC_STARTUP_INFO@@W4_tagTM_ITEMTYPE@@@Z
    long CreateEntry(_WDC_STARTUP_INFO * *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DataExpire@WdcStartupMonitor@@SAJPEAU_WDC_DATA_INFO@@K@Z
    static long DataExpire(_WDC_DATA_INFO *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableItem@WdcStartupMonitor@@QEAAJPEAU_WDC_STARTUP_INFO@@@Z
    long DisableItem(_WDC_STARTUP_INFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoEnumeration@WdcStartupMonitor@@QEAAJXZ
    long DoEnumeration();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnableItem@WdcStartupMonitor@@QEAAJPEAU_WDC_STARTUP_INFO@@@Z
    long EnableItem(_WDC_STARTUP_INFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetFromLnkFile@WdcStartupMonitor@@QEAAJPEAG0PEAPEAUHSTRING__@@@Z
    long GetTargetFromLnkFile(unsigned short *, unsigned short *, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@WdcStartupMonitor@@QEAAJXZ
    long Initialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLinkFile@WdcStartupMonitor@@QEAAHPEAG@Z
    int IsLinkFile(unsigned short *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsProcessRunning@WdcStartupMonitor@@QEAAHKT_LARGE_INTEGER@@@Z
    int IsProcessRunning(unsigned long, _LARGE_INTEGER);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadFolderList@WdcStartupMonitor@@QEAAJXZ
    long LoadFolderList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadPackagedList@WdcStartupMonitor@@QEAAJXZ
    long LoadPackagedList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadRegistryList@WdcStartupMonitor@@QEAAJPEBGPEAUHKEY__@@_K1@Z
    long LoadRegistryList(unsigned short const *, HKEY__*, uint64_t, HKEY__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadRegistryList@WdcStartupMonitor@@QEAAJXZ
    long LoadRegistryList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MapStartupProcesses@WdcStartupMonitor@@QEAAJW4_STARTUP_LOCATION@@PEAPEAU_WDC_STARTUP_INFO@@@Z
    long MapStartupProcesses(int, _WDC_STARTUP_INFO * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetData@WdcStartupMonitor@@QEAAJPEBG00PEBU_FILETIME@@W4_tagTM_ITEMSTATUS@@_NHPEAUHKEY__@@W4_STARTUP_LOCATION@@PEAPEAUHSTRING__@@PEAPEAU_WDC_STARTUP_INFO@@@Z
    long SetData(unsigned short const *, unsigned short const *, unsigned short const *, _FILETIME const *, int, bool, int, HKEY__*, int, HSTRING__* *, _WDC_STARTUP_INFO * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFileData@WdcStartupMonitor@@QEAAJPEBG_NPEAU_WDC_STARTUP_INFO@@@Z
    long SetFileData(unsigned short const *, bool, _WDC_STARTUP_INFO *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPackagedData@WdcStartupMonitor@@QEAAJPEBG00000PEBU_FILETIME@@W4_tagTM_ITEMSTATUS@@_NPEAPEAU_WDC_STARTUP_INFO@@@Z
    long SetPackagedData(unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, unsigned short const *, _FILETIME const *, int, bool, _WDC_STARTUP_INFO * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetStartupLocationType@WdcStartupMonitor@@QEAAJW4_STARTUP_LOCATION@@PEAU_WDC_STARTUP_INFO@@@Z
    long SetStartupLocationType(int, _WDC_STARTUP_INFO *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0WdcStartupMonitor@@QEAA@XZ
    WdcStartupMonitor();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WdcStartupMonitor@@QEAA@XZ
    ~WdcStartupMonitor();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConfigureItemToShowMalformedOrNetworkPath@WdcStartupMonitor@@AEAAXPEAU_WDC_STARTUP_INFO@@@Z
    void ConfigureItemToShowMalformedOrNetworkPath(_WDC_STARTUP_INFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CheckAndSetInvalidPathFlag@WdcStartupMonitor@@AEAAXPEBGPEAU_WDC_STARTUP_INFO@@@Z
    void _CheckAndSetInvalidPathFlag(unsigned short const *, _WDC_STARTUP_INFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetApprovalItemStatus@WdcStartupMonitor@@AEAAJPEAVStartupApproval@StartupDB@@PEBGPEAW4_tagTM_ITEMSTATUS@@PEA_NPEAU_FILETIME@@@Z
    long _GetApprovalItemStatus(::StartupDB::StartupApproval *, unsigned short const *, int *, bool *, _FILETIME *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetGamingStartupApprovalObject@WdcStartupMonitor@@AEAAPEAVGamingStartupApproval@StartupDB@@_K@Z
    ::StartupDB::GamingStartupApproval * _GetGamingStartupApprovalObject(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetStartupApprovalObject@WdcStartupMonitor@@AEAAPEAVStartupApproval@StartupDB@@_K@Z
    ::StartupDB::StartupApproval * _GetStartupApprovalObject(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeApproval@WdcStartupMonitor@@AEAAJPEAVStartupApproval@StartupDB@@PEAUHKEY__@@PEBG@Z
    long _InitializeApproval(::StartupDB::StartupApproval *, HKEY__*, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeApprovals@WdcStartupMonitor@@AEAAXXZ
    void _InitializeApprovals();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitializeGamingApproval@WdcStartupMonitor@@AEAAJPEAVGamingStartupApproval@StartupDB@@PEAUHKEY__@@PEBG@Z
    long _InitializeGamingApproval(::StartupDB::GamingStartupApproval *, HKEY__*, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetApprovalItemFlag@WdcStartupMonitor@@AEAAJPEAVStartupApproval@StartupDB@@PEBGW4BLOCKITEMFLAGS@3@@Z
    long _SetApprovalItemFlag(::StartupDB::StartupApproval *, unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SetIcon@WdcStartupMonitor@@AEAAJPEAUHSTRING__@@_NPEAU_WDC_STARTUP_INFO@@@Z
    long _SetIcon(HSTRING__*, bool, _WDC_STARTUP_INFO *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_VerifyAndGetSpecialExeFilePath@WdcStartupMonitor@@AEAAJPEBG0PEAPEAUHSTRING__@@@Z
    long _VerifyAndGetSpecialExeFilePath(unsigned short const *, unsigned short const *, HSTRING__* *);
};
