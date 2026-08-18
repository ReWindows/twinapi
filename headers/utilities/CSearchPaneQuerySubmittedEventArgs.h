#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 33 member(s).
class CSearchPaneQuerySubmittedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSearchPaneQuerySubmittedEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSearchPaneQuerySubmittedEventArgs@@QEAA@XZ
    CSearchPaneQuerySubmittedEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CSearchPaneQuerySubmittedEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetModifiers@CSearchPaneQuerySubmittedEventArgs@@UEAAJPEAW4SEARCH_MODIFIER_KEYS@@@Z
    virtual long GetModifiers(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CSearchPaneQuerySubmittedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSubmitType@CSearchPaneQuerySubmittedEventArgs@@UEAAJPEAW4SEARCH_SUBMIT_TYPE@@@Z
    virtual long GetSubmitType(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CSearchPaneQuerySubmittedEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSearchPaneQuerySubmittedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSearchPaneQuerySubmittedEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Language@CSearchPaneQuerySubmittedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Language(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LinguisticDetails@CSearchPaneQuerySubmittedEventArgs@@UEAAJPEAPEAUISearchPaneQueryLinguisticDetails@Search@ApplicationModel@Windows@@@Z
    virtual long get_LinguisticDetails(::Windows::ApplicationModel::Search::ISearchPaneQueryLinguisticDetails * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_QueryText@CSearchPaneQuerySubmittedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_QueryText(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSearchPaneQuerySubmittedEventArgs@@UEAA@XZ
    virtual ~CSearchPaneQuerySubmittedEventArgs();
};
