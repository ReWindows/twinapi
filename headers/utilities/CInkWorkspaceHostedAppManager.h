#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 16 member(s).
class CInkWorkspaceHostedAppManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CInkWorkspaceHostedAppManager@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CInkWorkspaceHostedAppManager@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CInkWorkspaceHostedAppManager@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CInkWorkspaceHostedAppManager@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CInkWorkspaceHostedAppManager@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CInkWorkspaceHostedAppManager@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CInkWorkspaceHostedAppManager@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CInkWorkspaceHostedAppManager@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CInkWorkspaceHostedAppManager@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetThumbnailAsync@CInkWorkspaceHostedAppManager@@UEAAJPEAUISoftwareBitmap@Imaging@Graphics@Windows@@PEAPEAUIAsyncAction@Foundation@5@@Z
    virtual long SetThumbnailAsync(::Windows::Graphics::Imaging::ISoftwareBitmap *, WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CInkWorkspaceHostedAppManager@@UEAA@XZ
    virtual ~CInkWorkspaceHostedAppManager();
};
