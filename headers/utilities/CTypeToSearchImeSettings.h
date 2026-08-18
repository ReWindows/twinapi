#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 17 member(s).
class CTypeToSearchImeSettings {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTypeToSearchImeSettings@@QEAA@XZ
    CTypeToSearchImeSettings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CaptureFromHWND@CTypeToSearchImeSettings@@UEAAJPEAUHWND__@@@Z
    virtual long CaptureFromHWND(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectObject@CTypeToSearchImeSettings@@UEAAJK@Z
    virtual long DisconnectObject(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMarshalSizeMax@CTypeToSearchImeSettings@@UEAAJAEBU_GUID@@PEAXK1KPEAK@Z
    virtual long GetMarshalSizeMax(_GUID const &, void *, unsigned long, void *, unsigned long, unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnmarshalClass@CTypeToSearchImeSettings@@UEAAJAEBU_GUID@@PEAXK1KPEAU2@@Z
    virtual long GetUnmarshalClass(_GUID const &, void *, unsigned long, void *, unsigned long, _GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarshalInterface@CTypeToSearchImeSettings@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z
    virtual long MarshalInterface(IStream *, _GUID const &, void *, unsigned long, void *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseMarshalData@CTypeToSearchImeSettings@@UEAAJPEAUIStream@@@Z
    virtual long ReleaseMarshalData(IStream *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetToHWND@CTypeToSearchImeSettings@@UEAAJPEAUHWND__@@@Z
    virtual long SetToHWND(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnmarshalInterface@CTypeToSearchImeSettings@@UEAAJPEAUIStream@@AEBU_GUID@@PEAPEAX@Z
    virtual long UnmarshalInterface(IStream *, _GUID const &, void * *);
};
