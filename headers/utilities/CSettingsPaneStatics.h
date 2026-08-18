#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 27 member(s).
class CSettingsPaneStatics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CSettingsPaneStatics@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSettingsPaneStatics@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSettingsPaneStatics@@QEAA@XZ
    CSettingsPaneStatics();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetForCurrentView@CSettingsPaneStatics@@UEAAJPEAPEAUISettingsPane@ApplicationSettings@UI@Windows@@@Z
    virtual long GetForCurrentView(::Windows::UI::ApplicationSettings::ISettingsPane * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CSettingsPaneStatics@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CSettingsPaneStatics@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CSettingsPaneStatics@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CSettingsPaneStatics@@UEAAJPEAUHWND__@@@Z
    virtual long Initialize(HWND__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@CSettingsPaneStatics@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@CSettingsPaneStatics@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSettingsPaneStatics@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSettingsPaneStatics@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@CSettingsPaneStatics@@UEAAJXZ
    virtual long Show();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Edge@CSettingsPaneStatics@@UEAAJPEAW4SettingsEdgeLocation@ApplicationSettings@UI@Windows@@@Z
    virtual long get_Edge(int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSettingsPaneStatics@@UEAA@XZ
    virtual ~CSettingsPaneStatics();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_CreateSettingsStatics@CSettingsPaneStatics@@AEAAJPEAUHWND__@@PEAPEAUISettingsPane@ApplicationSettings@UI@Windows@@@Z
    long _CreateSettingsStatics(HWND__*, ::Windows::UI::ApplicationSettings::ISettingsPane * *);
};
