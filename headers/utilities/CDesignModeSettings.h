#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 30 member(s).
class CDesignModeSettings {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeApplicationSize@CDesignModeSettings@@UEAAJPEAUtagSIZE@@@Z
    virtual long ComputeApplicationSize(tagSIZE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAdjacentDisplayEdges@CDesignModeSettings@@UEAAJPEAW4ADJACENT_DISPLAY_EDGES@@@Z
    virtual long GetAdjacentDisplayEdges(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationSizeBounds@CDesignModeSettings@@UEAAJPEAUtagSIZE@@0@Z
    virtual long GetApplicationSizeBounds(tagSIZE *, tagSIZE *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationViewOrientation@CDesignModeSettings@@UEAAJPEAW4APPLICATION_VIEW_ORIENTATION@@@Z
    virtual long GetApplicationViewOrientation(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationViewOrientation@CDesignModeSettings@@UEAAJUtagSIZE@@PEAW4APPLICATION_VIEW_ORIENTATION@@@Z
    virtual long GetApplicationViewOrientation(tagSIZE, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetApplicationViewState@CDesignModeSettings@@UEAAJPEAW4APPLICATION_VIEW_STATE@@@Z
    virtual long GetApplicationViewState(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsOnLockScreen@CDesignModeSettings@@UEAAJPEAH@Z
    virtual long GetIsOnLockScreen(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProxyWindow@CDesignModeSettings@@UEAAJPEAPEAUHWND__@@@Z
    virtual long GetProxyWindow(HWND__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CDesignModeSettings@@UEAAJPEAUHWND__@@@Z
    virtual long Initialize(HWND__*);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsApplicationViewStateSupported@CDesignModeSettings@@UEAAJW4APPLICATION_VIEW_STATE@@UtagSIZE@@W4DEVICE_SCALE_FACTOR@@PEAH@Z
    virtual long IsApplicationViewStateSupported(int, tagSIZE, int, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAdjacentDisplayEdges@CDesignModeSettings@@UEAAJW4ADJACENT_DISPLAY_EDGES@@@Z
    virtual long SetAdjacentDisplayEdges(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetApplicationViewMinWidth@CDesignModeSettings@@UEAAJW4APPLICATION_VIEW_MIN_WIDTH@@@Z
    virtual long SetApplicationViewMinWidth(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetApplicationViewOrientation@CDesignModeSettings@@UEAAJW4APPLICATION_VIEW_ORIENTATION@@@Z
    virtual long SetApplicationViewOrientation(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetApplicationViewState@CDesignModeSettings@@UEAAJW4APPLICATION_VIEW_STATE@@@Z
    virtual long SetApplicationViewState(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsOnLockScreen@CDesignModeSettings@@UEAAJH@Z
    virtual long SetIsOnLockScreen(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNativeDisplayOrientation@CDesignModeSettings@@UEAAJW4NATIVE_DISPLAY_ORIENTATION@@@Z
    virtual long SetNativeDisplayOrientation(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNativeDisplaySize@CDesignModeSettings@@UEAAJUtagSIZE@@@Z
    virtual long SetNativeDisplaySize(tagSIZE);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScaleFactor@CDesignModeSettings@@UEAAJW4DEVICE_SCALE_FACTOR@@@Z
    virtual long SetScaleFactor(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TriggerEdgeGesture@CDesignModeSettings@@UEAAJW4EDGE_GESTURE_KIND@@@Z
    virtual long TriggerEdgeGesture(int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_GetApplicationSizeBounds@CDesignModeSettings@@AEAAJPEAUtagSIZE@@0@Z
    long _GetApplicationSizeBounds(tagSIZE *, tagSIZE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_NormalizeSizeToDisplayOrientation@CDesignModeSettings@@CAXPEAUtagSIZE@@W4NATIVE_DISPLAY_ORIENTATION@@@Z
    static void s_NormalizeSizeToDisplayOrientation(tagSIZE *, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?s_VerifyShouldProcessCall@CDesignModeSettings@@CAJPEAPEAUDESIGN_MODE_PERTHREAD_SETTINGS@@@Z
    static long s_VerifyShouldProcessCall(DESIGN_MODE_PERTHREAD_SETTINGS * *);
};
