#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 4 member(s).
namespace CoreApplicationBridgeTelemetry {
class CoreApplicationBridgeFactory_ActivateApplicationSync_Activity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@CoreApplicationBridgeFactory_ActivateApplicationSync_Activity@CoreApplicationBridgeTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CoreApplicationBridgeFactory_ActivateApplicationSync_Activity@CoreApplicationBridgeTelemetry@@QEAA@XZ
    ~CoreApplicationBridgeFactory_ActivateApplicationSync_Activity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@CoreApplicationBridgeFactory_ActivateApplicationSync_Activity@CoreApplicationBridgeTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@CoreApplicationBridgeFactory_ActivateApplicationSync_Activity@CoreApplicationBridgeTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace CoreApplicationBridgeTelemetry
