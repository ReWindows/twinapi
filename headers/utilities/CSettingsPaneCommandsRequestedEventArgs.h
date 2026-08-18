#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 16 member(s).
class CSettingsPaneCommandsRequestedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSettingsPaneCommandsRequestedEventArgs@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CSettingsPaneCommandsRequestedEventArgs@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CSettingsPaneCommandsRequestedEventArgs@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CSettingsPaneCommandsRequestedEventArgs@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSettingsPaneCommandsRequestedEventArgs@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSettingsPaneCommandsRequestedEventArgs@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Request@CSettingsPaneCommandsRequestedEventArgs@@UEAAJPEAPEAUISettingsPaneCommandsRequest@ApplicationSettings@UI@Windows@@@Z
    virtual long get_Request(::Windows::UI::ApplicationSettings::ISettingsPaneCommandsRequest * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSettingsPaneCommandsRequestedEventArgs@@UEAA@XZ
    virtual ~CSettingsPaneCommandsRequestedEventArgs();
};
