#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 29 member(s).
class CSearchPaneQueryLinguisticDetails {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSearchPaneQueryLinguisticDetails@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSearchPaneQueryLinguisticDetails@@QEAA@XZ
    CSearchPaneQueryLinguisticDetails();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAlternative@CSearchPaneQueryLinguisticDetails@@UEAAJIPEAPEAG@Z
    virtual long GetAlternative(unsigned int, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAlternativeCount@CSearchPaneQueryLinguisticDetails@@UEAAIXZ
    virtual unsigned int GetAlternativeCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CSearchPaneQueryLinguisticDetails@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CSearchPaneQueryLinguisticDetails@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetText@CSearchPaneQueryLinguisticDetails@@UEAAJPEAPEAG@Z
    virtual long GetText(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextImeCompositionLength@CSearchPaneQueryLinguisticDetails@@UEAAIXZ
    virtual unsigned int GetTextImeCompositionLength();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextImeCompositionStart@CSearchPaneQueryLinguisticDetails@@UEAAIXZ
    virtual unsigned int GetTextImeCompositionStart();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CSearchPaneQueryLinguisticDetails@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSearchPaneQueryLinguisticDetails@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSearchPaneQueryLinguisticDetails@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CSearchPaneQueryLinguisticDetails@@QEAAJPEAUIQueryWithLinguisticAlternatives@@@Z
    long RuntimeClassInitialize(IQueryWithLinguisticAlternatives *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_QueryTextAlternatives@CSearchPaneQueryLinguisticDetails@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Z
    virtual long get_QueryTextAlternatives(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_QueryTextCompositionLength@CSearchPaneQueryLinguisticDetails@@UEAAJPEAI@Z
    virtual long get_QueryTextCompositionLength(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_QueryTextCompositionStart@CSearchPaneQueryLinguisticDetails@@UEAAJPEAI@Z
    virtual long get_QueryTextCompositionStart(unsigned int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSearchPaneQueryLinguisticDetails@@UEAA@XZ
    virtual ~CSearchPaneQueryLinguisticDetails();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_PopulateDataOnce@CSearchPaneQueryLinguisticDetails@@CAHPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z
    static int s_PopulateDataOnce(_RTL_RUN_ONCE *, void *, void * *);
};
