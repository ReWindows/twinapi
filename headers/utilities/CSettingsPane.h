#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 22 member(s).
class CSettingsPane {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSettingsPane@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSettingsPane@@QEAA@XZ
    CSettingsPane();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DispatchCommand@CSettingsPane@@UEAAJI@Z
    virtual long DispatchCommand(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CSettingsPane@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CSettingsPane@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CSettingsPane@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrivateShow@CSettingsPane@@SAJH@Z
    static long PrivateShow(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryCachedSettingsCommands@CSettingsPane@@UEAAJPEAPEAUtagSETTING_COMMAND@@PEAKPEAH@Z
    virtual long QueryCachedSettingsCommands(tagSETTING_COMMAND * *, unsigned long *, int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSettingsPane@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSettingsPane@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestCommands@CSettingsPane@@UEAAJXZ
    virtual long RequestCommands();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_CommandsRequested@CSettingsPane@@UEAAJPEAU?$ITypedEventHandler@PEAVSettingsPane@ApplicationSettings@UI@Windows@@PEAVSettingsPaneCommandsRequestedEventArgs@234@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_CommandsRequested(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_CommandsRequested@CSettingsPane@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_CommandsRequested(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSettingsPane@@UEAA@XZ
    virtual ~CSettingsPane();
};
