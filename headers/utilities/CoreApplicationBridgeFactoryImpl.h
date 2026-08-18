#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 23 member(s).
class CoreApplicationBridgeFactoryImpl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateApplication@CoreApplicationBridgeFactoryImpl@@UEAAJURect@Foundation@Windows@@PEAUHSTRING__@@1PEAUIInspectable@@PEAPEAU?$IAsyncOperation@PEAUICoreApplicationBridge@ApplicationHosting@Internal@Windows@@@34@@Z
    virtual long ActivateApplication(WindissectOpaque, HSTRING__*, HSTRING__*, IInspectable *, WindissectOpaque * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CoreApplicationBridgeFactoryImpl@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CoreApplicationBridgeFactoryImpl@@QEAA@XZ
    CoreApplicationBridgeFactoryImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateLaunchActivationArgs@CoreApplicationBridgeFactoryImpl@@UEAAJPEAUHSTRING__@@0PEAPEAUIInspectable@@@Z
    virtual long CreateLaunchActivationArgs(HSTRING__*, HSTRING__*, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateOOPActivationArgs@CoreApplicationBridgeFactoryImpl@@UEAAJPEAUHSTRING__@@PEAPEAUIInspectable@@@Z
    virtual long CreateOOPActivationArgs(HSTRING__*, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CoreApplicationBridgeFactoryImpl@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CoreApplicationBridgeFactoryImpl@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CoreApplicationBridgeFactoryImpl@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CoreApplicationBridgeFactoryImpl@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CoreApplicationBridgeFactoryImpl@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CoreApplicationBridgeFactoryImpl@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CoreApplicationBridgeFactoryImpl@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@CoreApplicationBridgeFactoryImpl@@UEAAJPEA_K@Z
    virtual long get_Id(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Id@CoreApplicationBridgeFactoryImpl@@UEAAJ_K@Z
    virtual long put_Id(uint64_t);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateApplicationSync@CoreApplicationBridgeFactoryImpl@@AEAAJURect@Foundation@Windows@@PEBG1PEAUIInspectable@@PEAPEAUICoreApplicationBridge@ApplicationHosting@Internal@4@@Z
    long ActivateApplicationSync(WindissectOpaque, unsigned short const *, unsigned short const *, IInspectable *, ::Windows::Internal::ApplicationHosting::ICoreApplicationBridge * *);
};
