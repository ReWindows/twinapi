#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 7 member(s).
class Invocable {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Invocable@@QEAA@XZ
    Invocable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@Invocable@@UEAAJPEBGPEAUINamedPropertyStore@@PEAH@Z
    virtual long Invoke(unsigned short const *, INamedPropertyStore *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSupported@Invocable@@UEAAJPEBGPEAH@Z
    virtual long IsSupported(unsigned short const *, int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Invocable@@UEAA@XZ
    virtual ~Invocable();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindSupportedHandler@Invocable@@AEBAPEBUHandlerTableEntry@@PEBG@Z
    HandlerTableEntry const * FindSupportedHandler(unsigned short const *) const;
};
