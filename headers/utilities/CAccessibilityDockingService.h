#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 6 member(s).
class CAccessibilityDockingService {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DockWindow@CAccessibilityDockingService@@UEAAJPEAUHWND__@@PEAUHMONITOR__@@IPEAUIAccessibilityDockingServiceCallback@@@Z
    virtual long DockWindow(HWND__*, HMONITOR__*, unsigned int, IAccessibilityDockingServiceCallback *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAvailableSize@CAccessibilityDockingService@@UEAAJPEAUHMONITOR__@@PEAI1@Z
    virtual long GetAvailableSize(HMONITOR__*, unsigned int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UndockWindow@CAccessibilityDockingService@@UEAAJPEAUHWND__@@@Z
    virtual long UndockWindow(HWND__*);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetAccessibilityDockingService@CAccessibilityDockingService@@AEAAJPEAPEAUIAccessibilityDockingServiceInternal@@@Z
    long _GetAccessibilityDockingService(IAccessibilityDockingServiceInternal * *);
};
