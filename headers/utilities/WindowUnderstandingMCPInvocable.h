#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 10 member(s).
class WindowUnderstandingMCPInvocable {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Register@WindowUnderstandingMCPInvocable@@QEAAJPEAUINamedPropertyStore@@@Z
    long Register(INamedPropertyStore *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SendAppWindowUIContext@WindowUnderstandingMCPInvocable@@QEAAJPEAUINamedPropertyStore@@@Z
    long SendAppWindowUIContext(INamedPropertyStore *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TestInvocation@WindowUnderstandingMCPInvocable@@QEAAJPEAUINamedPropertyStore@@@Z
    long TestInvocation(INamedPropertyStore *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TestUICommand@WindowUnderstandingMCPInvocable@@QEAAJPEAUINamedPropertyStore@@@Z
    long TestUICommand(INamedPropertyStore *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Unregister@WindowUnderstandingMCPInvocable@@QEAAJPEAUINamedPropertyStore@@@Z
    long Unregister(INamedPropertyStore *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1WindowUnderstandingMCPInvocable@@QEAA@XZ
    ~WindowUnderstandingMCPInvocable();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppWindowUIContextAsync@WindowUnderstandingMCPInvocable@@AEAA?AU?$IAsyncOperation@UValueSet@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@XZ
    WindissectOpaque GetAppWindowUIContextAsync();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAppRegistered@WindowUnderstandingMCPInvocable@@AEBA_NXZ
    bool IsAppRegistered() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConversationRequest@WindowUnderstandingMCPInvocable@@AEAA?AUfire_and_forget@winrt@@AEBUConversationRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z
    WindissectOpaque OnConversationRequest(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupConversationEndpoint@WindowUnderstandingMCPInvocable@@AEAAXXZ
    void SetupConversationEndpoint();
};
