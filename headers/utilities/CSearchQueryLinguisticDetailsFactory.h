#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 19 member(s).
class CSearchQueryLinguisticDetailsFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CSearchQueryLinguisticDetailsFactory@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSearchQueryLinguisticDetailsFactory@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@CSearchQueryLinguisticDetailsFactory@@UEAAJPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@Windows@@IIPEAPEAUISearchQueryLinguisticDetails@Search@ApplicationModel@5@@Z
    virtual long CreateInstance(WindissectOpaque *, unsigned int, unsigned int, ::Windows::ApplicationModel::Search::ISearchQueryLinguisticDetails * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CSearchQueryLinguisticDetailsFactory@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CSearchQueryLinguisticDetailsFactory@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CSearchQueryLinguisticDetailsFactory@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSearchQueryLinguisticDetailsFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSearchQueryLinguisticDetailsFactory@@UEAAKXZ
    virtual unsigned long Release();
};
