#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 6 member(s).
class CInputPaneEventSourceFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CInputPaneEventSourceFactory@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForCurrentView@CInputPaneEventSourceFactory@@UEAAJPEAPEAUIInputPane@ViewManagement@UI@Windows@@@Z
    virtual long GetForCurrentView(::Windows::UI::ViewManagement::IInputPane * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForUIContext@CInputPaneEventSourceFactory@@UEAAJPEAUIUIContext@UI@Windows@@PEAPEAUIInputPane@ViewManagement@34@@Z
    virtual long GetForUIContext(::Windows::UI::IUIContext *, ::Windows::UI::ViewManagement::IInputPane * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForWindow@CInputPaneEventSourceFactory@@UEAAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z
    virtual long GetForWindow(HWND__*, _GUID const &, void * *);
};
