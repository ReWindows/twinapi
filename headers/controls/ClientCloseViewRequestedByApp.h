#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 4 member(s).
namespace AppCloseTelemetry {
class ClientCloseViewRequestedByApp {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ClientCloseViewRequestedByApp@AppCloseTelemetry@@QEAAXK@Z
    void StartActivity(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ClientCloseViewRequestedByApp@AppCloseTelemetry@@QEAA@XZ
    ~ClientCloseViewRequestedByApp();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ClientCloseViewRequestedByApp@AppCloseTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ClientCloseViewRequestedByApp@AppCloseTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace AppCloseTelemetry
