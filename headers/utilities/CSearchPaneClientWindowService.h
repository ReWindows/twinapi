#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 11 member(s).
class CSearchPaneClientWindowService {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSearchPaneClientWindowService@@QEAA@XZ
    CSearchPaneClientWindowService();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRealClient@CSearchPaneClientWindowService@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetRealClient(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAppActivated@CSearchPaneClientWindowService@@UEAAJPEBG0@Z
    virtual long OnAppActivated(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInvokeSuggestionWithId@CSearchPaneClientWindowService@@UEAAJPEBGW4SEARCH_MODIFIER_KEYS@@@Z
    virtual long OnInvokeSuggestionWithId(unsigned short const *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSearchPaneHidden@CSearchPaneClientWindowService@@UEAAJXZ
    virtual long OnSearchPaneHidden();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSearchPaneShown@CSearchPaneClientWindowService@@UEAAJPEBG0@Z
    virtual long OnSearchPaneShown(unsigned short const *, unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSearchQueryChanged@CSearchPaneClientWindowService@@UEAAJPEBG0PEAUIQueryWithLinguisticAlternatives@@@Z
    virtual long OnSearchQueryChanged(unsigned short const *, unsigned short const *, IQueryWithLinguisticAlternatives *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSubmitSearch@CSearchPaneClientWindowService@@UEAAJPEBG0PEAUIQueryWithLinguisticAlternatives@@W4SEARCH_SUBMIT_TYPE@@W4SEARCH_MODIFIER_KEYS@@@Z
    virtual long OnSubmitSearch(unsigned short const *, unsigned short const *, IQueryWithLinguisticAlternatives *, int, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSearchPaneClientWindowService@@UEAA@XZ
    virtual ~CSearchPaneClientWindowService();
};
