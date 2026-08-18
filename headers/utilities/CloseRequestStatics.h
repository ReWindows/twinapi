#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 21 member(s).
class CloseRequestStatics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CloseRequestStatics@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CloseRequestStatics@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CloseRequestStatics@@QEAA@XZ
    CloseRequestStatics();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForCurrentView@CloseRequestStatics@@UEAAJPEAPEAUICloseRequest@UI@Internal@Windows@@@Z
    virtual long GetForCurrentView(::Windows::Internal::UI::ICloseRequest * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CloseRequestStatics@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CloseRequestStatics@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTaskCompletionFormatString@CloseRequestStatics@@UEAAJ_KPEAPEAUHSTRING__@@@Z
    virtual long GetTaskCompletionFormatString(uint64_t, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CloseRequestStatics@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CloseRequestStatics@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CloseRequestStatics@@UEAAKXZ
    virtual unsigned long Release();
};
