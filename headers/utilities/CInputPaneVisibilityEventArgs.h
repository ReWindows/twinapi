#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 14 member(s).
class CInputPaneVisibilityEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CInputPaneVisibilityEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CInputPaneVisibilityEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CInputPaneVisibilityEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CInputPaneVisibilityEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CInputPaneVisibilityEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CInputPaneVisibilityEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_EnsuredFocusedElementInView@CInputPaneVisibilityEventArgs@@UEAAJPEAE@Z
    virtual long get_EnsuredFocusedElementInView(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_OccludedRect@CInputPaneVisibilityEventArgs@@UEAAJPEAURect@Foundation@Windows@@@Z
    virtual long get_OccludedRect(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_EnsuredFocusedElementInView@CInputPaneVisibilityEventArgs@@UEAAJE@Z
    virtual long put_EnsuredFocusedElementInView(unsigned char);
};
