#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 4 member(s).
namespace CoreApplicationBridgeTelemetry {
class CoreApplicationBridge_StopBridgeWindowThread_Activity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@CoreApplicationBridge_StopBridgeWindowThread_Activity@CoreApplicationBridgeTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CoreApplicationBridge_StopBridgeWindowThread_Activity@CoreApplicationBridgeTelemetry@@QEAA@XZ
    ~CoreApplicationBridge_StopBridgeWindowThread_Activity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@CoreApplicationBridge_StopBridgeWindowThread_Activity@CoreApplicationBridgeTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@CoreApplicationBridge_StopBridgeWindowThread_Activity@CoreApplicationBridgeTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace CoreApplicationBridgeTelemetry
