#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 16 member(s).
class CSettingsPaneCommandsRequest {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSettingsPaneCommandsRequest@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CSettingsPaneCommandsRequest@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CSettingsPaneCommandsRequest@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CSettingsPaneCommandsRequest@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSettingsPaneCommandsRequest@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSettingsPaneCommandsRequest@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ApplicationCommands@CSettingsPaneCommandsRequest@@UEAAJPEAPEAU?$IVector@PEAVSettingsCommand@ApplicationSettings@UI@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_ApplicationCommands(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSettingsPaneCommandsRequest@@UEAA@XZ
    virtual ~CSettingsPaneCommandsRequest();
};
