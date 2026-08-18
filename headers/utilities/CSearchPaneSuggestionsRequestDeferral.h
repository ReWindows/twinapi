#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 17 member(s).
class CSearchPaneSuggestionsRequestDeferral {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSearchPaneSuggestionsRequestDeferral@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSearchPaneSuggestionsRequestDeferral@@QEAA@XZ
    CSearchPaneSuggestionsRequestDeferral();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Complete@CSearchPaneSuggestionsRequestDeferral@@UEAAJXZ
    virtual long Complete();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CSearchPaneSuggestionsRequestDeferral@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CSearchPaneSuggestionsRequestDeferral@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CSearchPaneSuggestionsRequestDeferral@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSearchPaneSuggestionsRequestDeferral@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSearchPaneSuggestionsRequestDeferral@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSearchPaneSuggestionsRequestDeferral@@UEAA@XZ
    virtual ~CSearchPaneSuggestionsRequestDeferral();
};
