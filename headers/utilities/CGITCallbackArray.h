#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 5 member(s).
class CGITCallbackArray {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CGITCallbackArray@@QEAA@XZ
    CGITCallbackArray();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@CGITCallbackArray@@EEAAJIAEBU_GUID@@PEAPEAX@Z
    virtual long GetAt(unsigned int, _GUID const &, void * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCount@CGITCallbackArray@@EEAAJPEAI@Z
    virtual long GetCount(unsigned int *);
};
