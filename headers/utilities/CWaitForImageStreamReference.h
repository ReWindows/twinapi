#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 28 member(s).
class CWaitForImageStreamReference {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CWaitForImageStreamReference@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CWaitForImageStreamReference@@QEAA@XZ
    CWaitForImageStreamReference();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelIfNeeded@CWaitForImageStreamReference@@UEAAJXZ
    virtual long CancelIfNeeded();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CWaitForImageStreamReference@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CWaitForImageStreamReference@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CWaitForImageStreamReference@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnImageStreamReferenceReady@CWaitForImageStreamReference@@UEAAJPEAUIRandomAccessStreamReference@Streams@Storage@Windows@@@Z
    virtual long OnImageStreamReferenceReady(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenReadAsync@CWaitForImageStreamReference@@UEAAJPEAPEAU?$IAsyncOperation@PEAUIRandomAccessStreamWithContentType@Streams@Storage@Windows@@@Foundation@Windows@@@Z
    virtual long OpenReadAsync(WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CWaitForImageStreamReference@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CWaitForImageStreamReference@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CWaitForImageStreamReference@@UEAA@XZ
    virtual ~CWaitForImageStreamReference();
};
