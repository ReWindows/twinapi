#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 5 member(s).
namespace SettingsPaneTelemetry::SettingsPaneActivityTelemetry {
class SettingsPaneApi {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@SettingsPaneApi@SettingsPaneActivityTelemetry@SettingsPaneTelemetry@@QEAAXXZ
    void StartActivity();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SettingsPaneApi@SettingsPaneActivityTelemetry@SettingsPaneTelemetry@@QEAA@XZ
    ~SettingsPaneApi();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@SettingsPaneApi@SettingsPaneActivityTelemetry@SettingsPaneTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@SettingsPaneApi@SettingsPaneActivityTelemetry@SettingsPaneTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace SettingsPaneTelemetry::SettingsPaneActivityTelemetry
