#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 4 member(s).
namespace CoreApplicationBridgeTelemetry {
class CoreApplicationBridgeWindow_TransferFocusToHostedApp {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@CoreApplicationBridgeWindow_TransferFocusToHostedApp@CoreApplicationBridgeTelemetry@@QEAAX_N@Z
    void StartActivity(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CoreApplicationBridgeWindow_TransferFocusToHostedApp@CoreApplicationBridgeTelemetry@@QEAA@XZ
    ~CoreApplicationBridgeWindow_TransferFocusToHostedApp();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@CoreApplicationBridgeWindow_TransferFocusToHostedApp@CoreApplicationBridgeTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@CoreApplicationBridgeWindow_TransferFocusToHostedApp@CoreApplicationBridgeTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace CoreApplicationBridgeTelemetry
