#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 4 member(s).
namespace CoreApplicationBridgeTelemetry {
class CoreApplicationBridgeWindow_SetHostedApplication_Activity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@CoreApplicationBridgeWindow_SetHostedApplication_Activity@CoreApplicationBridgeTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CoreApplicationBridgeWindow_SetHostedApplication_Activity@CoreApplicationBridgeTelemetry@@QEAA@XZ
    ~CoreApplicationBridgeWindow_SetHostedApplication_Activity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@CoreApplicationBridgeWindow_SetHostedApplication_Activity@CoreApplicationBridgeTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@CoreApplicationBridgeWindow_SetHostedApplication_Activity@CoreApplicationBridgeTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace CoreApplicationBridgeTelemetry
