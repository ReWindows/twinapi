#pragma once
#include "../windissect_forwards.h"

// Reconstructed from twinapi.dll by Windissect. 3 member(s).
namespace ARI::ProcessToken {
class SysAppId {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCurrentProcessStronglyNamed@SysAppId@ProcessToken@ARI@@YAJPEA_N@Z
    long IsCurrentProcessStronglyNamed(bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsStronglyNamed@SysAppId@ProcessToken@ARI@@YAJPEAXPEA_N@Z
    long IsStronglyNamed(void *, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenTokenForProcess@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAX@Z
    long OpenTokenForProcess(void *, void * *);
};
} // namespace ARI::ProcessToken
