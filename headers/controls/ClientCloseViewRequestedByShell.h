#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 4 member(s).
namespace AppCloseTelemetry {
class ClientCloseViewRequestedByShell {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ClientCloseViewRequestedByShell@AppCloseTelemetry@@QEAAXK@Z
    void StartActivity(unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ClientCloseViewRequestedByShell@AppCloseTelemetry@@QEAA@XZ
    ~ClientCloseViewRequestedByShell();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ClientCloseViewRequestedByShell@AppCloseTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ClientCloseViewRequestedByShell@AppCloseTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace AppCloseTelemetry
