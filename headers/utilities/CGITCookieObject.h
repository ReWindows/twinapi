#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 6 member(s).
class CGITCookieObject {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CGITCookieObject@@QEAA@XZ
    CGITCookieObject();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCookie@CGITCookieObject@@UEAAKXZ
    virtual unsigned long GetCookie();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInterface@CGITCookieObject@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long GetInterface(_GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CGITCookieObject@@UEAA@XZ
    virtual ~CGITCookieObject();
};
