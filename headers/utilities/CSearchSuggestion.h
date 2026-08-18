#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 15 member(s).
class CSearchSuggestion {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSearchSuggestion@@QEAA@XZ
    CSearchSuggestion();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDetailText@CSearchSuggestion@@UEAAJPEAPEAG@Z
    virtual long GetDetailText(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImageAlternateText@CSearchSuggestion@@UEAAJPEAPEAG@Z
    virtual long GetImageAlternateText(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImageSource@CSearchSuggestion@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetImageSource(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetQueryString@CSearchSuggestion@@UEAAJPEAPEAG@Z
    virtual long GetQueryString(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShellItem@CSearchSuggestion@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetShellItem(_GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTag@CSearchSuggestion@@UEAAJPEAPEAG@Z
    virtual long GetTag(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetText@CSearchSuggestion@@UEAAJPEAPEAG@Z
    virtual long GetText(unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsResultItem@CSearchSuggestion@@UEAAJPEAH@Z
    virtual long IsResultItem(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSeparator@CSearchSuggestion@@UEAAJPEAH@Z
    virtual long IsSeparator(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrivateInitialize@CSearchSuggestion@@QEAAJPEAUHSTRING__@@H00PEAUIRandomAccessStreamReference@Streams@Storage@Windows@@0@Z
    long PrivateInitialize(HSTRING__*, int, HSTRING__*, HSTRING__*, WindissectOpaque *, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrivateInitialize@CSearchSuggestion@@QEAAJPEAUHSTRING__@@H@Z
    long PrivateInitialize(HSTRING__*, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSearchSuggestion@@UEAA@XZ
    virtual ~CSearchSuggestion();
};
