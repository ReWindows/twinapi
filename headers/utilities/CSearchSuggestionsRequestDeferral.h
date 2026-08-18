#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 17 member(s).
class CSearchSuggestionsRequestDeferral {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSearchSuggestionsRequestDeferral@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSearchSuggestionsRequestDeferral@@QEAA@XZ
    CSearchSuggestionsRequestDeferral();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Complete@CSearchSuggestionsRequestDeferral@@UEAAJXZ
    virtual long Complete();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CSearchSuggestionsRequestDeferral@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CSearchSuggestionsRequestDeferral@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CSearchSuggestionsRequestDeferral@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSearchSuggestionsRequestDeferral@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSearchSuggestionsRequestDeferral@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSearchSuggestionsRequestDeferral@@UEAA@XZ
    virtual ~CSearchSuggestionsRequestDeferral();
};
