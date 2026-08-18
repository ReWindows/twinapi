#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 4 member(s).
class ImmersiveApplicationLayout {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeAppRect@ImmersiveApplicationLayout@@YAJPEBULAYOUT_ENVIRONMENT_DETAILS@@W4APPLICATION_VIEW_STATE@@PEAUtagRECT@@@Z
    long ComputeAppRect(LAYOUT_ENVIRONMENT_DETAILS const *, int, tagRECT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeAppSizeBounds@ImmersiveApplicationLayout@@YAJUtagSIZE@@W4DEVICE_SCALE_FACTOR@@W4APPLICATION_VIEW_MIN_WIDTH@@PEAU2@3@Z
    long ComputeAppSizeBounds(tagSIZE, int, int, tagSIZE *, tagSIZE *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z
    int ComputeGutterWidth(tagSIZE, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeLayoutEnvMaxApps@ImmersiveApplicationLayout@@YAIUtagSIZE@@W4DEVICE_SCALE_FACTOR@@@Z
    unsigned int ComputeLayoutEnvMaxApps(tagSIZE, int);
};
