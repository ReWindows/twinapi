#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 24 member(s).
class CSearchPaneSuggestionsRequest {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSearchPaneSuggestionsRequest@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSearchPaneSuggestionsRequest@@QEAA@XZ
    CSearchPaneSuggestionsRequest();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Complete@CSearchPaneSuggestionsRequest@@UEAAJXZ
    virtual long Complete();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeferral@CSearchPaneSuggestionsRequest@@UEAAJPEAPEAUISearchPaneSuggestionsRequestDeferral@Search@ApplicationModel@Windows@@@Z
    virtual long GetDeferral(::Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequestDeferral * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CSearchPaneSuggestionsRequest@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CSearchPaneSuggestionsRequest@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CSearchPaneSuggestionsRequest@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSearchPaneSuggestionsRequest@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSearchPaneSuggestionsRequest@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CSearchPaneSuggestionsRequest@@QEAAJPEBGPEAUISearchPanePriv@@@Z
    long RuntimeClassInitialize(unsigned short const *, ISearchPanePriv *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsCanceled@CSearchPaneSuggestionsRequest@@UEAAJPEAE@Z
    virtual long get_IsCanceled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SearchSuggestionCollection@CSearchPaneSuggestionsRequest@@UEAAJPEAPEAUISearchSuggestionCollection@Search@ApplicationModel@Windows@@@Z
    virtual long get_SearchSuggestionCollection(::Windows::ApplicationModel::Search::ISearchSuggestionCollection * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSearchPaneSuggestionsRequest@@UEAA@XZ
    virtual ~CSearchPaneSuggestionsRequest();
};
