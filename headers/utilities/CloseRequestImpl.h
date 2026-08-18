#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 23 member(s).
class CloseRequestImpl {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CloseRequestImpl@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CloseRequestImpl@@QEAA@XZ
    CloseRequestImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseRequested@CloseRequestImpl@@UEAAJPEAUICloseRequestedArgsPrivate@@K@Z
    virtual long CloseRequested(ICloseRequestedArgsPrivate *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseView@CloseRequestImpl@@UEAAJXZ
    virtual long CloseView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseViewWithTelemetryCookie@CloseRequestImpl@@UEAAJI@Z
    virtual long CloseViewWithTelemetryCookie(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CloseRequestImpl@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CloseRequestImpl@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CloseRequestImpl@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CloseRequestImpl@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CloseRequestImpl@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CloseRequestImpl@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CloseRequestImpl@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_CloseRequested@CloseRequestImpl@@UEAAJPEAU?$ITypedEventHandler@PEAVCloseRequest@UI@Internal@Windows@@PEAVCloseRequestedEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_CloseRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_CloseRequested@CloseRequestImpl@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_CloseRequested(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CloseRequestImpl@@UEAA@XZ
    virtual ~CloseRequestImpl();
};
