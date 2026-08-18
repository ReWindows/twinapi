#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 29 member(s).
namespace Windows::Gaming::UI {
class GameChatOverlayMessageSource {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@GameChatOverlayMessageSource@UI@Gaming@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0GameChatOverlayMessageSource@UI@Gaming@Windows@@QEAA@XZ
    GameChatOverlayMessageSource();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@GameChatOverlayMessageSource@UI@Gaming@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@GameChatOverlayMessageSource@UI@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@GameChatOverlayMessageSource@UI@Gaming@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@GameChatOverlayMessageSource@UI@Gaming@Windows@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@GameChatOverlayMessageSource@UI@Gaming@Windows@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMessageReceived@GameChatOverlayMessageSource@UI@Gaming@Windows@@UEAAJPEAUHSTRING__@@000W4GameChatMessageOrigin@234@@Z
    virtual long OnMessageReceived(HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@GameChatOverlayMessageSource@UI@Gaming@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@GameChatOverlayMessageSource@UI@Gaming@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@GameChatOverlayMessageSource@UI@Gaming@Windows@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDelayBeforeClosingAfterMessageReceived@GameChatOverlayMessageSource@UI@Gaming@Windows@@UEAAJUTimeSpan@Foundation@4@@Z
    virtual long SetDelayBeforeClosingAfterMessageReceived(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_MessageReceived@GameChatOverlayMessageSource@UI@Gaming@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVGameChatOverlayMessageSource@UI@Gaming@Windows@@PEAVGameChatMessageReceivedEventArgs@234@@Foundation@4@PEAUEventRegistrationToken@@@Z
    virtual long add_MessageReceived(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_MessageReceived@GameChatOverlayMessageSource@UI@Gaming@Windows@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_MessageReceived(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GameChatOverlayMessageSource@UI@Gaming@Windows@@UEAA@XZ
    virtual ~GameChatOverlayMessageSource();
};
} // namespace Windows::Gaming::UI
