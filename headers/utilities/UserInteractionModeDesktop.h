#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 7 member(s).
class UserInteractionModeDesktop {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreferredInteractionMode@UserInteractionModeDesktop@@UEAAJPEAI@Z
    virtual long GetPreferredInteractionMode(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUserInteractionMode@UserInteractionModeDesktop@@UEAAJPEAI@Z
    virtual long GetUserInteractionMode(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPreferredInteractionModeWatcher@UserInteractionModeDesktop@@UEAAJPEAUIPreferredInteractionModeWatcher@@@Z
    virtual long SetPreferredInteractionModeWatcher(IPreferredInteractionModeWatcher *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0UserInteractionModeDesktop@@QEAA@XZ
    UserInteractionModeDesktop();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1UserInteractionModeDesktop@@UEAA@XZ
    virtual ~UserInteractionModeDesktop();
};
