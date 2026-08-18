#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 3 member(s).
namespace DirectLaunch {
class DirectLaunchDispatcherAsync {
public:
    class SharedState;
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DirectLaunchDispatcherAsync@DirectLaunch@@QEAA@XZ
    ~DirectLaunchDispatcherAsync();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DrainQueue@DirectLaunchDispatcherAsync@DirectLaunch@@CAXAEAUSharedState@12@AEAVDirectLaunchListener@2@@Z
    static void DrainQueue(WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ListenerThreadProc@DirectLaunchDispatcherAsync@DirectLaunch@@CAXAEAUSharedState@12@@Z
    static void ListenerThreadProc(WindissectOpaque &);
};
} // namespace DirectLaunch
