#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 27 member(s).
class CSearchSuggestionCollection {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSearchSuggestionCollection@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendQuerySuggestion@CSearchSuggestionCollection@@UEAAJPEAUHSTRING__@@@Z
    virtual long AppendQuerySuggestion(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendQuerySuggestions@CSearchSuggestionCollection@@UEAAJPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Z
    virtual long AppendQuerySuggestions(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendResultSuggestion@CSearchSuggestionCollection@@UEAAJPEAUHSTRING__@@00PEAUIRandomAccessStreamReference@Streams@Storage@Windows@@0@Z
    virtual long AppendResultSuggestion(HSTRING__*, HSTRING__*, HSTRING__*, WindissectOpaque *, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendSearchSeparator@CSearchSuggestionCollection@@UEAAJPEAUHSTRING__@@@Z
    virtual long AppendSearchSeparator(HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendSearchSuggestion@CSearchSuggestionCollection@@UEAAJPEAUISearchTypeAheadSuggestion@@@Z
    virtual long AppendSearchSuggestion(ISearchTypeAheadSuggestion *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSearchSuggestionCollection@@QEAA@XZ
    CSearchSuggestionCollection();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CSearchSuggestionCollection@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CSearchSuggestionCollection@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSuggestions@CSearchSuggestionCollection@@QEAAJPEAIPEAPEAPEAUISearchTypeAheadSuggestion@@@Z
    long GetSuggestions(unsigned int *, ISearchTypeAheadSuggestion * * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CSearchSuggestionCollection@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeImmutable@CSearchSuggestionCollection@@QEAAXXZ
    void MakeImmutable();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSearchSuggestionCollection@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSearchSuggestionCollection@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@CSearchSuggestionCollection@@UEAAJPEAI@Z
    virtual long get_Size(unsigned int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSearchSuggestionCollection@@UEAA@XZ
    virtual ~CSearchSuggestionCollection();
};
