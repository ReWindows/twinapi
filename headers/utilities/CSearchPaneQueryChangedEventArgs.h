#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 27 member(s).
class CSearchPaneQueryChangedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSearchPaneQueryChangedEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSearchPaneQueryChangedEventArgs@@QEAA@XZ
    CSearchPaneQueryChangedEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CSearchPaneQueryChangedEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CSearchPaneQueryChangedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CSearchPaneQueryChangedEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSearchPaneQueryChangedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSearchPaneQueryChangedEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CSearchPaneQueryChangedEventArgs@@QEAAJPEBG0PEAUIQueryWithLinguisticAlternatives@@PEAUISearchPanePriv@@@Z
    long RuntimeClassInitialize(unsigned short const *, unsigned short const *, IQueryWithLinguisticAlternatives *, ISearchPanePriv *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Language@CSearchPaneQueryChangedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Language(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LinguisticDetails@CSearchPaneQueryChangedEventArgs@@UEAAJPEAPEAUISearchPaneQueryLinguisticDetails@Search@ApplicationModel@Windows@@@Z
    virtual long get_LinguisticDetails(::Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_QueryText@CSearchPaneQueryChangedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_QueryText(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Request@CSearchPaneQueryChangedEventArgs@@UEAAJPEAPEAUISearchPaneSuggestionsRequest@Search@ApplicationModel@Windows@@@Z
    virtual long get_Request(::Windows::ApplicationModel::Search::ISearchPaneSuggestionsRequest * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSearchPaneQueryChangedEventArgs@@UEAA@XZ
    virtual ~CSearchPaneQueryChangedEventArgs();
};
