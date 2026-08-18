#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 4 member(s).
class CoreApplicationBridgeTelemetry {
public:
    class CoreApplicationBridgeFactory_ActivateApplicationSync_Activity;
    class CoreApplicationBridgeFactory_ActivateApplication_Activity;
    class CoreApplicationBridgeWindow_EnsureAppIsBridged_Activity;
    class CoreApplicationBridgeWindow_ReconnectBridgeWindowToHostedApplication_Activity;
    class CoreApplicationBridgeWindow_SetHostedApplication_Activity;
    class CoreApplicationBridgeWindow_SetHostedWindow_Activity;
    class CoreApplicationBridgeWindow_Shutdown_Activity;
    class CoreApplicationBridgeWindow_TransferFocusToHostedApp;
    class CoreApplicationBridgeWindow_TranslateAcceleratorIO;
    class CoreApplicationBridgeWindow_put_HostWindow_Activity;
    class CoreApplicationBridge_ActivateApplication_Activity;
    class CoreApplicationBridge_StartBridgeWindowThread_Activity;
    class CoreApplicationBridge_StopBridgeWindowThread_Activity;
    class CoreApplicationBridge_put_HostWindow_Activity;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplicationTerminated_@CoreApplicationBridgeTelemetry@@QEAAXW4ApplicationTerminationReason@ApplicationHosting@Internal@Windows@@@Z
    void ApplicationTerminated_(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SettingFocusOnHostedAppWindow@CoreApplicationBridgeTelemetry@@SAXXZ
    static void SettingFocusOnHostedAppWindow();
};
