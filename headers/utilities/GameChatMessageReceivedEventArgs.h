#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 22 member(s).
namespace Windows::Gaming::UI {
class GameChatMessageReceivedEventArgs {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@GameChatMessageReceivedEventArgs@UI@Gaming@Windows@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0GameChatMessageReceivedEventArgs@UI@Gaming@Windows@@QEAA@XZ
    GameChatMessageReceivedEventArgs();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@GameChatMessageReceivedEventArgs@UI@Gaming@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@GameChatMessageReceivedEventArgs@UI@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@GameChatMessageReceivedEventArgs@UI@Gaming@Windows@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@GameChatMessageReceivedEventArgs@UI@Gaming@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@GameChatMessageReceivedEventArgs@UI@Gaming@Windows@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@GameChatMessageReceivedEventArgs@UI@Gaming@Windows@@QEAAJPEAUHSTRING__@@000W4GameChatMessageOrigin@234@@Z
    long RuntimeClassInitialize(HSTRING__*, HSTRING__*, HSTRING__*, HSTRING__*, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppDisplayName@GameChatMessageReceivedEventArgs@UI@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_AppDisplayName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppId@GameChatMessageReceivedEventArgs@UI@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_AppId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Message@GameChatMessageReceivedEventArgs@UI@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Message(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Origin@GameChatMessageReceivedEventArgs@UI@Gaming@Windows@@UEAAJPEAW4GameChatMessageOrigin@234@@Z
    virtual long get_Origin(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SenderName@GameChatMessageReceivedEventArgs@UI@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_SenderName(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GameChatMessageReceivedEventArgs@UI@Gaming@Windows@@UEAA@XZ
    virtual ~GameChatMessageReceivedEventArgs();
};
} // namespace Windows::Gaming::UI
