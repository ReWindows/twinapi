#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 21 member(s).
class CSearchPaneResultSuggestionChosenEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSearchPaneResultSuggestionChosenEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSearchPaneResultSuggestionChosenEventArgs@@QEAA@XZ
    CSearchPaneResultSuggestionChosenEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CSearchPaneResultSuggestionChosenEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetModifiers@CSearchPaneResultSuggestionChosenEventArgs@@UEAAJPEAW4SEARCH_MODIFIER_KEYS@@@Z
    virtual long GetModifiers(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CSearchPaneResultSuggestionChosenEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CSearchPaneResultSuggestionChosenEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSearchPaneResultSuggestionChosenEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSearchPaneResultSuggestionChosenEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Tag@CSearchPaneResultSuggestionChosenEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Tag(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSearchPaneResultSuggestionChosenEventArgs@@UEAA@XZ
    virtual ~CSearchPaneResultSuggestionChosenEventArgs();
};
