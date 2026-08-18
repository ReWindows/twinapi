#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 10 member(s).
class CStartupImpactHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalcStartupImpact@CStartupImpactHelper@@SA?AW4_TM_STARTUPIMPACT@@NN@Z
    static int CalcStartupImpact(double, double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildProcessIndex@CStartupImpactHelper@@QEAAJU_PROCESS_UID@@PEAK1@Z
    long GetChildProcessIndex(_PROCESS_UID, unsigned long *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStartupProcessesIndex@CStartupImpactHelper@@QEAAJPEAUHSTRING__@@HPEAK1@Z
    long GetStartupProcessesIndex(HSTRING__*, int, unsigned long *, unsigned long *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertStrToTime@CStartupImpactHelper@@AEAAJPEBGPEAU_FILETIME@@@Z
    long ConvertStrToTime(unsigned short const *, _FILETIME *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Free@CStartupImpactHelper@@AEAAXXZ
    void Free();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCurrentUserSidStr@CStartupImpactHelper@@AEAAJPEAPEAG@Z
    long GetCurrentUserSidStr(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSIFileNames@CStartupImpactHelper@@AEAAJXZ
    long GetSIFileNames();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStartupImpact@CStartupImpactHelper@@AEAAJXZ
    long GetStartupImpact();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadProcessAttributes@CStartupImpactHelper@@AEAAJPEAUIXmlReader@@PEAU_STARTUPIMPACT@@@Z
    long ReadProcessAttributes(IXmlReader *, _STARTUPIMPACT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadProcessInfo@CStartupImpactHelper@@AEAAJPEAUIXmlReader@@PEAU_STARTUPIMPACT@@@Z
    long ReadProcessInfo(IXmlReader *, _STARTUPIMPACT *);
};
