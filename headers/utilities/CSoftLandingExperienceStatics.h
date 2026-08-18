#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 23 member(s).
class CSoftLandingExperienceStatics {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateCreative@CSoftLandingExperienceStatics@@UEAAJUSOFTLANDING_CREATIVE@SoftLanding@UI@Internal@Windows@@@Z
    virtual long ActivateCreative(::Windows::Internal::UI::SoftLanding::SOFTLANDING_CREATIVE);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSoftLandingExperienceStatics@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSoftLandingExperienceStatics@@QEAA@XZ
    CSoftLandingExperienceStatics();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CSoftLandingExperienceStatics@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CSoftLandingExperienceStatics@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CSoftLandingExperienceStatics@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@CSoftLandingExperienceStatics@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@CSoftLandingExperienceStatics@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSoftLandingExperienceStatics@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSoftLandingExperienceStatics@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WithdrawCreative@CSoftLandingExperienceStatics@@UEAAJPEAUHSTRING__@@0H@Z
    virtual long WithdrawCreative(HSTRING__*, HSTRING__*, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@CSoftLandingExperienceStatics@@EEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
};
