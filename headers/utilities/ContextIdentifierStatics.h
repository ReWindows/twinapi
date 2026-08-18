#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 28 member(s).
class ContextIdentifierStatics {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ContextIdentifierStatics@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ContextIdentifierStatics@@QEAA@XZ
    ContextIdentifierStatics();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ContextIdentifierStatics@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ContextIdentifierStatics@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetShellState@ContextIdentifierStatics@@UEAAJPEAW4ShellState@Holographic@Shell@Internal@Windows@@@Z
    virtual long GetShellState(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ContextIdentifierStatics@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserDisplayContext@ContextIdentifierStatics@@UEAAJPEAW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z
    virtual long GetUserDisplayContext(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserInputContext@ContextIdentifierStatics@@UEAAJPEAW4UserInputContext@Holographic@Shell@Internal@Windows@@@Z
    virtual long GetUserInputContext(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowDisplayContext@ContextIdentifierStatics@@UEAAJIW4ContextInspectionOptions@Holographic@Shell@Internal@Windows@@PEAW4UserDisplayContext@3456@@Z
    virtual long GetWindowDisplayContext(unsigned int, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@ContextIdentifierStatics@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@ContextIdentifierStatics@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ContextIdentifierStatics@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ContextIdentifierStatics@@UEAAKXZ
    virtual unsigned long Release();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetCoreUITopLevelHost@ContextIdentifierStatics@@AEAAJQEAUHWND__@@PEAPEAU2@@Z
    long _GetCoreUITopLevelHost(HWND__* const, HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetIsWindowChainHolographic@ContextIdentifierStatics@@AEAA_NQEAUHWND__@@@Z
    bool _GetIsWindowChainHolographic(HWND__* const);
};
