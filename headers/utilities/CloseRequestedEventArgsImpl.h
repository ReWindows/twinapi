#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 14 member(s).
class CloseRequestedEventArgsImpl {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CloseRequestedEventArgsImpl@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CloseRequestedEventArgsImpl@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CloseRequestedEventArgsImpl@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CloseRequestedEventArgsImpl@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CloseRequestedEventArgsImpl@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CloseRequestedEventArgsImpl@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySwitchToView@CloseRequestedEventArgsImpl@@UEAAJXZ
    virtual long TrySwitchToView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TelemetryCookie@CloseRequestedEventArgsImpl@@UEAAJPEAI@Z
    virtual long get_TelemetryCookie(unsigned int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CloseRequestedEventArgsImpl@@UEAA@XZ
    virtual ~CloseRequestedEventArgsImpl();
};
