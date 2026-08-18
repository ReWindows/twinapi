#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 46 member(s).
class CSearchQueryLinguisticDetails {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSearchQueryLinguisticDetails@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendAlternative@CSearchQueryLinguisticDetails@@UEAAJPEAUHSTRING__@@@Z
    virtual long AppendAlternative(HSTRING__*);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSearchQueryLinguisticDetails@@QEAA@XZ
    CSearchQueryLinguisticDetails();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertToSearchPaneQueryLinguisticDetails@CSearchQueryLinguisticDetails@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ConvertToSearchPaneQueryLinguisticDetails(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateOrQueryFromAlternatives@CSearchQueryLinguisticDetails@@UEAAJIPEAPEAG@Z
    virtual long GenerateOrQueryFromAlternatives(unsigned int, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAlternative@CSearchQueryLinguisticDetails@@UEAAJIPEAPEAG@Z
    virtual long GetAlternative(unsigned int, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAlternativeCount@CSearchQueryLinguisticDetails@@UEAAJPEAI@Z
    virtual long GetAlternativeCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAlternatives@CSearchQueryLinguisticDetails@@UEAAJPEAPEAPEAGPEAK@Z
    virtual long GetAlternatives(unsigned short * * *, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CSearchQueryLinguisticDetails@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQuery@CSearchQueryLinguisticDetails@@UEAAJPEAPEAG@Z
    virtual long GetQuery(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQueryImeCompositionLength@CSearchQueryLinguisticDetails@@UEAAJPEAI@Z
    virtual long GetQueryImeCompositionLength(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQueryImeCompositionStart@CSearchQueryLinguisticDetails@@UEAAJPEAI@Z
    virtual long GetQueryImeCompositionStart(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CSearchQueryLinguisticDetails@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CSearchQueryLinguisticDetails@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CSearchQueryLinguisticDetails@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CSearchQueryLinguisticDetails@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSearchQueryLinguisticDetails@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSearchQueryLinguisticDetails@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_QueryTextAlternatives@CSearchQueryLinguisticDetails@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Z
    virtual long get_QueryTextAlternatives(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_QueryTextCompositionLength@CSearchQueryLinguisticDetails@@UEAAJPEAI@Z
    virtual long get_QueryTextCompositionLength(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_QueryTextCompositionStart@CSearchQueryLinguisticDetails@@UEAAJPEAI@Z
    virtual long get_QueryTextCompositionStart(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_QueryText@CSearchQueryLinguisticDetails@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_QueryText(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_QueryTextCompositionLength@CSearchQueryLinguisticDetails@@UEAAJI@Z
    virtual long put_QueryTextCompositionLength(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_QueryTextCompositionStart@CSearchQueryLinguisticDetails@@UEAAJI@Z
    virtual long put_QueryTextCompositionStart(unsigned int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_CopyIterableToVector@CSearchQueryLinguisticDetails@@CAJPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@Windows@@PEAV?$AgileVector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@$0A@@Internal@345@@Z
    static long s_CopyIterableToVector(WindissectOpaque *, WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSearchQueryLinguisticDetails@@EEAA@XZ
    virtual ~CSearchQueryLinguisticDetails();
};
