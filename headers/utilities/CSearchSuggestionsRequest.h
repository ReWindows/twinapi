#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 24 member(s).
class CSearchSuggestionsRequest {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSearchSuggestionsRequest@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSearchSuggestionsRequest@@QEAA@XZ
    CSearchSuggestionsRequest();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Complete@CSearchSuggestionsRequest@@UEAAJXZ
    virtual long Complete();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDeferral@CSearchSuggestionsRequest@@UEAAJPEAPEAUISearchSuggestionsRequestDeferral@Search@ApplicationModel@Windows@@@Z
    virtual long GetDeferral(::Windows::ApplicationModel::Search::ISearchSuggestionsRequestDeferral * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CSearchSuggestionsRequest@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CSearchSuggestionsRequest@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CSearchSuggestionsRequest@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSearchSuggestionsRequest@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSearchSuggestionsRequest@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CSearchSuggestionsRequest@@QEAAJPEBGPEAUISearchPanePriv@@_N@Z
    long RuntimeClassInitialize(unsigned short const *, ISearchPanePriv *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsCanceled@CSearchSuggestionsRequest@@UEAAJPEAE@Z
    virtual long get_IsCanceled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SearchSuggestionCollection@CSearchSuggestionsRequest@@UEAAJPEAPEAUISearchSuggestionCollection@Search@ApplicationModel@Windows@@@Z
    virtual long get_SearchSuggestionCollection(::Windows::ApplicationModel::Search::ISearchSuggestionCollection * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSearchSuggestionsRequest@@UEAA@XZ
    virtual ~CSearchSuggestionsRequest();
};
