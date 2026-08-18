#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 34 member(s).
class CSearchSuggestionsRequestedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSearchSuggestionsRequestedEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSearchSuggestionsRequestedEventArgs@@QEAA@XZ
    CSearchSuggestionsRequestedEventArgs();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Cancel@CSearchSuggestionsRequestedEventArgs@@UEAAJXZ
    virtual long Cancel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteIfNotDeferred@CSearchSuggestionsRequestedEventArgs@@UEAAJXZ
    virtual long CompleteIfNotDeferred();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CSearchSuggestionsRequestedEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CSearchSuggestionsRequestedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CSearchSuggestionsRequestedEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsComplete@CSearchSuggestionsRequestedEventArgs@@UEAAHXZ
    virtual int IsComplete();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSearchSuggestionsRequestedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSearchSuggestionsRequestedEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CSearchSuggestionsRequestedEventArgs@@QEAAJPEAUIQueryWithLinguisticAlternatives@@PEBGPEAUISearchPanePriv@@@Z
    long RuntimeClassInitialize(IQueryWithLinguisticAlternatives *, unsigned short const *, ISearchPanePriv *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Language@CSearchSuggestionsRequestedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Language(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LinguisticDetails@CSearchSuggestionsRequestedEventArgs@@UEAAJPEAPEAUISearchQueryLinguisticDetails@Search@ApplicationModel@Windows@@@Z
    virtual long get_LinguisticDetails(::Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_QueryText@CSearchSuggestionsRequestedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_QueryText(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Request@CSearchSuggestionsRequestedEventArgs@@UEAAJPEAPEAUISearchSuggestionsRequest@Search@ApplicationModel@Windows@@@Z
    virtual long get_Request(::Windows::ApplicationModel::Search::ISearchSuggestionsRequest * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSearchSuggestionsRequestedEventArgs@@UEAA@XZ
    virtual ~CSearchSuggestionsRequestedEventArgs();
};
