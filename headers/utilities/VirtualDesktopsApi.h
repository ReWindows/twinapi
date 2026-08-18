#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 11 member(s).
class VirtualDesktopsApi {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowDesktopId@VirtualDesktopsApi@@UEAAJPEAUHWND__@@PEAU_GUID@@@Z
    virtual long GetWindowDesktopId(HWND__*, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowOnCurrentVirtualDesktop@VirtualDesktopsApi@@UEAAJPEAUHWND__@@PEAH@Z
    virtual long IsWindowOnCurrentVirtualDesktop(HWND__*, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveWindowToDesktop@VirtualDesktopsApi@@UEAAJPEAUHWND__@@AEBU_GUID@@@Z
    virtual long MoveWindowToDesktop(HWND__*, _GUID const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0VirtualDesktopsApi@@QEAA@XZ
    VirtualDesktopsApi();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1VirtualDesktopsApi@@UEAA@XZ
    virtual ~VirtualDesktopsApi();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AcquireVirtualDesktopsApiServer@VirtualDesktopsApi@@AEAAJPEAPEAUIVirtualDesktopManager@@@Z
    long AcquireVirtualDesktopsApiServer(IVirtualDesktopManager * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureVirtualDesktopsApiServer@VirtualDesktopsApi@@AEAAJPEAPEAUIVirtualDesktopManager@@@Z
    long EnsureVirtualDesktopsApiServer(IVirtualDesktopManager * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReacquireVirtualDesktopsApiServer@VirtualDesktopsApi@@AEAAJPEAPEAUIVirtualDesktopManager@@@Z
    long ReacquireVirtualDesktopsApiServer(IVirtualDesktopManager * *);
};
